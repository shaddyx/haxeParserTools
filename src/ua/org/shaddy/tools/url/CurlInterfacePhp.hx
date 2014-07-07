package ua.org.shaddy.tools.url;
import ua.org.shaddy.tools.url.CurlOptionsPhp;
import haxe.ds.IntMap;
import haxe.ds.StringMap;
import ua.org.shaddy.tools.url.SimpleUrlCurl;

class CurlInterface{

	public static function init():Dynamic{
		return untyped __call__("curl_init");
	}
	
	public static function setOpt(ch:Dynamic, option:Int, value:Dynamic):Bool{
		return untyped __call__("curl_setopt", ch, option, value); 
	}
	
	public static function setOptArray(ch:Dynamic, arr:IntMap<Dynamic>){
		for (i in arr.keys()) {
			setOpt(ch, i, arr.get(i));
		}
	}
	
	public static function setPostFields(ch:Dynamic, arr:StringMap<String>){
		
		var fields = php.Lib.associativeArrayOfHash(arr);
		untyped __php__("
			foreach($fields as $k => $v){
				if (substr($v,0,3) === '@@@'){
					$fields[$k] = curl_file_create(substr($v,3), '', $k);
				}
			}
		");
		return setOpt(ch, CurlOptions.POSTFIELDS, fields);
		//return untyped __call__("curl_setopt", ch, CurlOptions.POSTFIELDS, fields); 
	}
	
	public static function getInfo(ch:Dynamic, option:Int):Dynamic{
		return untyped __call__("curl_getinfo", ch, option);
	}
	
	public static function exec(ch:Dynamic):Dynamic{
		var curlResult:CurlResult = {data:"",errorText:"",errorCode:0};
		curlResult.data = untyped __call__("curl_exec", ch);
		curlResult.errorCode = 1;
		curlResult.errorText = untyped __call__("curl_error", ch);
		return curlResult;
	}
	
	public static function close(ch:Dynamic):Bool{
		return untyped __call__("curl_close", ch);
	}
}