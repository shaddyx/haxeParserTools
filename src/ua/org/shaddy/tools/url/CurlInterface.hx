package ua.org.shaddy.tools.url;

class CurlInterface {
	static function __init__(){
		//		TODO: add initial code for other languages
	}
	
	public static function init():Dynamic{
		return untyped __call__("curl_init");
	}
	
	public static function setopt(ch:Dynamic, option:Int, value:Dynamic):Bool{
		return untyped __call__("curl_setopt", ch, option, value);
	}
	
	public static function setoptArray(ch:Dynamic, arr:Map<Int, Dynamic>):Bool{
		for (i in arr) {
			trace(i);
		}
		return untyped __call__("curl_setopt_array", ch, arr);
	}
	
	public static function exec(ch:Dynamic):Bool{
		return untyped __call__("curl_exec", ch);
	}
	
	public static function close(ch:Dynamic):Bool{
		return untyped __call__("curl_close", ch);
	}
	
	//
}