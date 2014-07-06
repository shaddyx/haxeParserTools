package ua.org.shaddy;
import ua.org.shaddy.tools.url.SimpleUrl;
import haxe.ds.IntMap;
import sys.io.File;

class Tests {
	public static function main(){
		var a = new SimpleUrl();
		var data = a.get("http://cs617819.vk.me/v617819601/13712/E2rV3iPJMCk.jpg");
		//var data = a.get("https://google.com");
		//trace("Request data:" + data);
		//trace("Request complete:" + data.length);
		File.saveContent("1.jpg",data);
		

	}
}