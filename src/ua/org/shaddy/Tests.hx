package ua.org.shaddy;
import ua.org.shaddy.tools.url.SimpleUrl;
import haxe.ds.IntMap;

class Tests {
	public static function main(){
		var a = new SimpleUrl();
		var data = a.get("http://yandex.ru");
		trace("Request complete:" + data);
		

	}
}