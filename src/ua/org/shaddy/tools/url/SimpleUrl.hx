package ua.org.shaddy.tools.url;
import ua.org.shaddy.tools.url.SimpleUrlCurl;

#if php
	class SimpleUrl extends SimpleUrlCurl{
#else
	class SimpleUrl{
#end

	override public function get(url:String):String{
		return "";
	}


}