package ua.org.shaddy.tools.url;
import haxe.ds.IntMap;
import haxe.ds.StringMap;
import ua.org.shaddy.tools.url.proxy.Proxy;


#if php
	import ua.org.shaddy.tools.url.CurlOptionsPhp;
	import ua.org.shaddy.tools.url.CurlInfoPhp;
	import ua.org.shaddy.tools.url.CurlInterfacePhp;
	//import php.Lib;
#end

#if cpp
	import ua.org.shaddy.tools.url.CurlOptionsCpp;
	import ua.org.shaddy.tools.url.CurlInfoCpp;
	import ua.org.shaddy.tools.url.CurlInterfaceCpp;
	//import cpp.Lib;
#end


#if (php || cpp)


typedef CurlResult = { data:String, errorText:String, errorCode:Int };

class SimpleUrlCurl {
	private var handle:Dynamic;
	private var options:IntMap<Dynamic>;
	public var header:String;
	public var lastResult:CurlResult;
	public var proxy:Proxy;
	public function new(){
		 options = new IntMap<Dynamic>();
		 #if php 
		 	options.set(CurlOptions.RETURNTRANSFER, 1);
		 #end
		 options.set(CurlOptions.FOLLOWLOCATION, 1);
		 options.set(CurlOptions.HEADER, 1);
		 
	}
	
	private function preRequest(url:String){
		handle = CurlInterface.init();
			CurlInterface.setOpt(handle, CurlOptions.URL, url);
		if (proxy != null) {
			CurlInterface.setOpt(handle, CurlOptions.PROXY, proxy.address);
			CurlInterface.setOpt(handle, CurlOptions.PROXYPORT, proxy.port);
			var type = 0;
			switch(proxy.type){
				case ProxyType.http:
					type = 0;
				case ProxyType.socks4:
					type = 4;
				case ProxyType.socks5:
					type = 5;
			}
			CurlInterface.setOpt(handle, CurlOptions.PROXYTYPE, type);
			CurlInterface.setOpt(handle, CurlOptions.USERPWD, proxy.user + ":" + proxy.password);
		}
		CurlInterface.setOptArray(handle, options);
	}
	
	private function makeRequest():String{
		lastResult = CurlInterface.exec(handle);
		var headerSize:Int = CurlInterface.getInfo(handle, CurlInfo.HEADER_SIZE);
		var header = lastResult.data.substring(0, headerSize -1);
		var data = lastResult.data.substring(headerSize);
		//trace("Header size is:" + headerSize);
		CurlInterface.close(handle);
		return data;
	}
	
	public function get(url:String):String{
		preRequest(url);
		return makeRequest();
	}
	
	public function post(url:String, postData: StringMap<String> ):String{
		preRequest(url);
		CurlInterface.setOpt(handle, CurlOptions.POST, true);
		CurlInterface.setPostFields(handle, postData);
		return makeRequest();
	}
}
#end