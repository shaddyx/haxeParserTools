package ua.org.shaddy.tools.url;
import haxe.ds.IntMap;
import haxe.ds.StringMap;
import haxe.Int64;
import haxe.Int32;
import ua.org.shaddy.tools.url.CurlOptionsCpp;
import ua.org.shaddy.tools.url.SimpleUrlCurl;

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
class CurlInterface{
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
		var hi:Int = Int64.getHigh(ch);
		var lo:Int = Int64.getLow(ch);
		var res:Int = 0;
		untyped __cpp__("
			long result = 0;
			long handler = ((long) hi << 32) | lo;
			curl_easy_getinfo((CURL*) handler, (CURLINFO) option, &result);
			res = result;
		");
		return res;
	}
	
	public static function exec(ch:Int64):CurlResult{
		setOpt(ch, CurlOptions.NOPROGRESS, true);
		var hi:Int = Int64.getHigh(ch);
		var lo:Int = Int64.getLow(ch);
		var errCode:Int = 0;
		var curlResult:CurlResult = {data:"",errorText:"",errorCode:0};
		untyped __cpp__("
			struct MemoryStruct chunk;
			chunk.memory = (char *) malloc(1);  /* will be grown as needed by the realloc above */ 
  			chunk.size = 0;    /* no data at this point */ 
			long handler = ((long) hi << 32) | lo;
			curl_easy_setopt((CURL*) handler, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
			curl_easy_setopt((CURL*) handler, CURLOPT_WRITEDATA, (void *)&chunk);
			CURLcode res = curl_easy_perform((CURL*) handler);
			if(res != CURLE_OK) {
				errCode = res;
			}
		");
		curlResult.errorCode = errCode;
		if (errCode == 0){
			var len:Int = untyped __cpp__("chunk.size");
			var buf = new StringBuf();
			for (i in 0...len){
				var byte:Int = untyped __cpp__("chunk.memory[i]");
				buf.addChar(byte);
			}
			untyped __cpp__("free(chunk.memory);");
			curlResult.data = buf.toString();
		} else {
			 
			untyped __cpp__("
				const char* c = curl_easy_strerror(res);
			");
			var len:Int = untyped __cpp__("strlen(c)");
			var errorCode = untyped __cpp__("res");
			var buf = new StringBuf();
			for (i in 0...len){
				var byte:Int = untyped __cpp__("c[i]");
				buf.addChar(byte);
			} 
			curlResult.errorText = buf.toString();
		}
		return curlResult;
	}
	
	public static function close(ch:Int64):Bool{
		var hi:Int = Int64.getHigh(ch);
		var lo:Int = Int64.getLow(ch);
		untyped __cpp__("long handler = ((long) hi << 32) | lo");
		untyped __cpp__("curl_easy_cleanup((CURL*) handler)" );
		return true;
	}
	
	
	public static function setPostFields(ch:Dynamic, arr:StringMap<String>){
		var hi:Int = Int64.getHigh(ch);
		var lo:Int = Int64.getLow(ch);
		untyped __cpp__("
			long handler = ((long) hi << 32) | lo;
			struct curl_httppost* post = NULL;
			struct curl_httppost* last = NULL;
		");

		for (postName in arr.keys()) {
			var value:String = arr.get(postName);
			if (value.substr(0,3) != "@@@"){
				untyped __cpp__("
					curl_formadd(&post, &last, CURLFORM_COPYNAME, postName.c_str(), CURLFORM_COPYCONTENTS, value.c_str(), CURLFORM_END);
				");
			} else {
				value = value.substr(3);
				untyped __cpp__("
					curl_formadd(&post, &last, CURLFORM_COPYNAME, postName.c_str(), CURLFORM_FILE, value.c_str(), CURLFORM_END);
				");			
			}
		}
		untyped __cpp__("
			curl_easy_setopt((CURL*) handler, CURLOPT_HTTPPOST, post);
		");
	}
	
	//
}