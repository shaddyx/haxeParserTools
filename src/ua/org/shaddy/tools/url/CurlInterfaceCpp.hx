package ua.org.shaddy.tools.url;
import haxe.ds.IntMap;
import haxe.Int64;
import haxe.Int32;
import ua.org.shaddy.tools.url.CurlOptionsCpp;
import haxe.io.Bytes;

@:headerCode("
	#include <curl/curl.h>
	#include <limits.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string>
")
@:buildXml("
<target id='haxe'>
  <!-- <lib name='${HXCPP}/lib/${BINDIR}/libsqlite${LIBEXTRA}${LIBEXT}'/> -->
  <lib name='-lcurl' />
</target>
")

@:cppFileCode("
	struct MemoryStruct {
	  char *memory;
	  size_t size;
	  int error;
	};
	static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
		  size_t realsize = size * nmemb;
		  struct MemoryStruct *mem = (struct MemoryStruct *)userp;
		  size_t memSize = mem->size + realsize + 1;
		  mem->memory = (char*) realloc(mem->memory, memSize);
		  if(mem->memory == NULL) {
		    /* out of memory! */
		    mem->error = 1; 
		    return 0;
		  }
		  memcpy(&(mem->memory[mem->size]), contents, realsize);
		  mem->size += realsize;
		  mem->memory[mem->size] = 0;
		  return realsize;
	}
")

class CurlInterface {
	/*static function __init__(){
		//		TODO: add initial code for other languages
	}*/
	
	
	public static function init():Int64{
		untyped __cpp__("long handler = (long) curl_easy_init();");
		//untyped __cpp__("printf(\"Handler is: %d \\n \",handler)");
		
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
		//untyped __cpp__("printf(\"Handler is: %d \\n \",handler)");
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
	
	public static function exec(ch:Int64):String{
		setOpt(ch, CurlOptions.NOPROGRESS, true);
		
	
		var hi:Int = Int64.getHigh(ch);
		var lo:Int = Int64.getLow(ch);
		untyped __cpp__("
			struct MemoryStruct chunk;
			chunk.memory = (char *) malloc(1);  /* will be grown as needed by the realloc above */ 
  			chunk.size = 0;    /* no data at this point */ 
			long handler = ((long) hi << 32) | lo;
			curl_easy_setopt((CURL*) handler, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
			curl_easy_setopt((CURL*) handler, CURLOPT_WRITEDATA, (void *)&chunk);
			curl_easy_perform((CURL*) handler);
		");
		var success:Bool = untyped __cpp__("chunk.memory");
		if (success){
			var len:Int = untyped __cpp__("chunk.size");
			var buf = new StringBuf();
			for (i in 0...len){
				var byte:Int = untyped __cpp__("chunk.memory[i]");
				//trace("byte:" + byte);
				buf.addChar(byte);
			}
			return buf.toString();
		}
		
		untyped __cpp__("
			if (chunk.memory){
				//printf (\"%s\", chunk.memory);
				//printf (\"Size is: %i \\n\", chunk.size);
				//return String(chunk.memory, chunk.size);
    	    	free(chunk.memory);
    	    	
    	    }
		");
				
		return "";
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