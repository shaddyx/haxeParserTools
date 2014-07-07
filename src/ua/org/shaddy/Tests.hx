package ua.org.shaddy;
import ua.org.shaddy.tools.url.SimpleUrl;
import haxe.ds.IntMap;
import haxe.ds.StringMap;
import sys.io.File;

class Tests {
	public static function main(){
		var a = new SimpleUrl();
		var fields = ["test" => "123412341234", 'map' => "t", "file" => "@@@build.hxml"];
		var data = a.post("http://shaddy.org.ua/test.php", fields);
		
		//var data = a.get("http://cs617819.vk.me/v617819601/13712/E2rV3iPJMCk.jpg");
		//var data = a.get("https://google.com");
		//trace("Request data:" + data);
		trace("Request complete:" + data);
		trace("error:" + a.lastResult.errorText);
		//File.saveContent("1.jpg",data);
		

	}
}