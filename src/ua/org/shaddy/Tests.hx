package ua.org.shaddy;
import ua.org.shaddy.tools.url.SimpleUrl;
import ua.org.shaddy.tools.url.proxy.Proxy;
import ua.org.shaddy.tools.url.proxy.ProxyManager;
import ua.org.shaddy.tools.log.Logger;
import haxe.ds.IntMap;
import haxe.ds.StringMap;
import sys.io.File;
import ua.org.shaddy.tools.url.cache.Cache;

class Tests{
	public function new(){
	}
	
	public static function main(){
		/*var url = new SimpleUrl();
		url.proxy = new Proxy("114.80.100.216:88");
		var res = url.get("http://ya.ru");
		trace(url.lastResult.errorText);
		trace(res);*/
		//trace(Std.is(Tests,String));
		
		/*var logger = new Logger(Logger);
		logger.info("test", Std.int(112342134));
		var a = new Tests();
		a.test = 123123;*/
		var c = new Cache();
		var res = c.get("http://ya.ru");
		trace(res);
		
	}
}