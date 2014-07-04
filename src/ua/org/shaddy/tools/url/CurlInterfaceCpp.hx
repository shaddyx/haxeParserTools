package ua.org.shaddy.tools.url;
import haxe.ds.IntMap;
import haxe.Int64;
import haxe.Int32;

@:headerCode("
	#include <curl/curl.h>
	#include <limits.h>
	#include <stdio.h>
	#include <string>
")
@:buildXml("
<target id='haxe'>
  <!-- <lib name='${HXCPP}/lib/${BINDIR}/libsqlite${LIBEXTRA}${LIBEXT}'/> -->
  <lib name='-lcurl' />
</target>
")

class CurlInterface {
	/*static function __init__(){
		//		TODO: add initial code for other languages
	}*/
	
	public static function init():Int64{
		untyped __cpp__("long handler = (long) curl_easy_init();");
		untyped __cpp__("printf(\"Handler is: %d \\n \",handler)");
		
		var hi:Int = untyped __cpp__("handler >> 32");
		var lo:Int = untyped __cpp__("handler & 0x00000000ffffffff");
		var res = Int64.make(hi, lo);
		return res;
		//return untyped __cpp__("Int64.make(Int32.ofInt((int)(handler >> 32)), Int32.ofInt((int)(handler))");
	}
	
	public static function setOpt(ch:Int64, option:Int, value:Dynamic):Bool{
		var hi:Int = Int64.getHigh(ch);
		var lo:Int = Int64.getLow(ch);
		untyped __cpp__("long handler = ((long) hi << 32) | lo");
		untyped __cpp__("printf(\"Handler is: %d \\n \",handler)");
		if (Std.is(value, String)){
			untyped __cpp__("String strr = (String) value");
			return untyped __cpp__("curl_easy_setopt((CURL*) handler, (CURLoption) option, strr.c_str())" );
		} else if (Std.is(value, Int)){
			return untyped __cpp__("curl_easy_setopt((CURL*) handler, (CURLoption) option, (int) value)" );
		} else if (Std.is(value, Bool)){
			return untyped __cpp__("curl_easy_setopt((CURL*) handler, (CURLoption) option, (bool) value)" );
		}
		
		trace("Unknown option type [" + option + "]: " + value);
		return false;
	}
	public static function setOptArray(ch:Int64, arr:IntMap<Dynamic>){
		for (i in arr.keys()) {
			setOpt(ch, i, arr.get(i));
		}
	}
	
	public static function getInfo(ch:Int64, option:Int):Dynamic{
		return "";//untyped __call__("curl_getinfo", ch, option);
	}
	
	public static function exec(ch:Int64):Dynamic{
		var hi:Int = Int64.getHigh(ch);
		var lo:Int = Int64.getLow(ch);
		untyped __cpp__("long handler = ((long) hi << 32) | lo");
		untyped __cpp__("curl_easy_perform((CURL*) handler)" );
		return "";//untyped __call__("curl_exec", ch);
	}
	
	public static function close(ch:Int64):Bool{
		var hi:Int = Int64.getHigh(ch);
		var lo:Int = Int64.getLow(ch);
		untyped __cpp__("long handler = ((long) hi << 32) | lo");
		untyped __cpp__("curl_easy_cleanup((CURL*) handler)" );
		return true;
	}
	
	//
}