package ua.org.shaddy.tools.url;
import ua.org.shaddy.tools.url.CurlInterface;
#if php
import php.Lib;

class SimpleUrlCurl {
	private var handle:Dynamic;
	private var options:Map<Int, Dynamic>;
	public function new(){
		 options = new Map<Int, Dynamic>();
		 options.set(1,"test");
		 options.set(2,1);
	}
	
	private function preRequest(){
		handle = CurlInterface.init();
		CurlInterface.setoptArray(handle, options);
	}
	
	public function get(url:String):String{
		return "";
	}
	
	
}
#end