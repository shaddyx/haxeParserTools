package ua.org.shaddy.tools.url;
import ua.org.shaddy.tools.url.CurlInterface;
import haxe.ds.IntMap;

#if php
import php.Lib;

class SimpleUrlCurl {
	private var handle:Dynamic;
	private var options:IntMap<Dynamic>;
	public function new(){
		 options = new IntMap<Dynamic>();
		 options.set(1,"test");
		 options.set(2,1);
	}
	
	private function preRequest(){
		handle = CurlInterface.init();
		CurlInterface.setoptArray(handle, options);
	}
	
	public function get(url:String):String{
		preRequest();
		return "";
	}
}
#end