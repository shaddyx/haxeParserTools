package ua.org.shaddy;
import ua.org.shaddy.tools.url.SimpleUrl;
import ua.org.shaddy.tools.url.proxy.Proxy;
import ua.org.shaddy.tools.url.proxy.ProxyManager;
import ua.org.shaddy.tools.url.cache.Cache;
import ua.org.shaddy.tools.log.Logger;
import ua.org.shaddy.tools.htmlparser.HtmlElement;
import ua.org.shaddy.tools.htmlparser.HtmlSaxParser;
import ua.org.shaddy.tools.htmlparser.HtmlParser;
import haxe.ds.IntMap;
import haxe.ds.StringMap;
import sys.io.File;

class Tests {
	public static function main(){
		/*var url = new SimpleUrl();
		url.proxy = new Proxy("114.80.100.216:88");
		var res = url.get("http://ya.ru");
		trace(url.lastResult.errorText);
		trace(res);*/
		//trace(Std.is(Tests,String));
		
		
				
		/*var url = new SimpleUrl();
		var c = new Cache();
		url.cache = c;
		var res = url.get("http://ya.ru");
		trace(res);*/
		
		/*var h = new HtmlElement("div");
		h.appendChild(new HtmlElement("span"));
		h.appendChild(new HtmlElement("div"));
		h.setAttribute("test", "test1");
		trace(h.toString());*/
		var url = new SimpleUrl();
		//var html = url.get("http://old.haxe.org/manual/2_types");
		//File.saveContent('test.html',html);
		var html = File.getContent('test.html');
		/*var htmlParser = new HtmlSaxParser();
		htmlParser.textFound = function (text:String){
			trace("Text:" + text);
		}
		htmlParser.tagFound = function(tag:String, attrs:StringMap<String>){
			trace("Tag found:" + tag + " : " + attrs);
		}
		htmlParser.tagEndFound = function(tag:String){
			trace("Tag end found:" + tag);
		}
		htmlParser.parse(html);*/
		var htmlParser = new HtmlParser();
		var res = htmlParser.parse(html);
		trace(res);
		File.saveContent("outTest.html", res.toString());
		
	}
}