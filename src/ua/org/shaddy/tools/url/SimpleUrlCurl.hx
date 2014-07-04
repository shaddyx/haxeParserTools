package ua.org.shaddy.tools.url;
import haxe.ds.IntMap;

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


class SimpleUrlCurl {
	private var handle:Dynamic;
	private var options:IntMap<Dynamic>;
	public var header:String;
	
	public function new(){
		 options = new IntMap<Dynamic>();
		 #if php 
		 	options.set(CurlOptions.RETURNTRANSFER, 1);
		 #end
		 options.set(CurlOptions.FOLLOWLOCATION, 1);
		 options.set(CurlOptions.HEADER, 1);
		 
	}
	
	private function preRequest(){
		handle = CurlInterface.init();
		trace ("Handle is:" + handle);
		CurlInterface.setOptArray(handle, options);
	}
	
	private function makeRequest():String{
		var data:String = CurlInterface.exec(handle);
		var headerSize:Int = CurlInterface.getInfo(handle, CurlInfo.HEADER_SIZE);
		header = data.substring(0, headerSize -1);
		data = data.substring(headerSize);
		//trace("Header size is:" + headerSize);
		CurlInterface.close(handle);
		return data;
	}
	
	public function get(url:String):String{
		preRequest();
		CurlInterface.setOpt(handle, CurlOptions.URL, url);
		return makeRequest();
	}
}
#end