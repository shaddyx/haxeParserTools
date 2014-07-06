package ua.org.shaddy.tools.url;
import haxe.ds.IntMap;

class CurlInterface{

	public static function init():Dynamic{
		return untyped __call__("curl_init");
	}
	
	public static function setOpt(ch:Dynamic, option:Int, value:Dynamic):Bool{
		//trace ("Setting option [" + option + "]:" + value);
		return untyped __call__("curl_setopt", ch, option, value); 
	}
	
	public static function setOptArray(ch:Dynamic, arr:IntMap<Dynamic>){
		for (i in arr.keys()) {
			setOpt(ch, i, arr.get(i));
		}
	}
	
	public static function getInfo(ch:Dynamic, option:Int):Dynamic{
		return untyped __call__("curl_getinfo", ch, option);
	}
	
	public static function exec(ch:Dynamic):Dynamic{
		return untyped __call__("curl_exec", ch);
	}
	
	public static function close(ch:Dynamic):Bool{
		return untyped __call__("curl_close", ch);
	}
	
	//
}