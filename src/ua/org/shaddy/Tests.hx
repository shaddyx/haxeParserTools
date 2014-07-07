package ua.org.shaddy;
import ua.org.shaddy.tools.url.SimpleUrl;
import ua.org.shaddy.tools.url.SimpleUrlProxy;
import haxe.ds.IntMap;
import haxe.ds.StringMap;
import sys.io.File;

class Tests {
	public static function main(){
		/*var a = new SimpleUrl();
		var fields = ["test" => "123412341234", 'map' => "t"];
		var data = a.post("http://shaddy.org.ua/test.php", fields);
		trace("Request complete:" + data);
		trace("error:" + a.lastResult.errorText);*/
		
		//var data = a.get("http://cs617819.vk.me/v617819601/13712/E2rV3iPJMCk.jpg");
		//var data = a.get("https://google.com");
		//trace("Request data:" + data);
		//trace("Request complete:" + data);
		//trace("error:" + a.lastResult.errorText);
		//File.saveContent("1.jpg",data);
		var a = new SimpleUrlProxy("socks5d://176.36.41.6:23");
		
		

	}
}