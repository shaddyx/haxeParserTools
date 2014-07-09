package ua.org.shaddy.tools.url.proxy;
import ua.org.shaddy.tools.url.proxy.Proxy;
import haxe.ds.StringMap;
import sys.io.File;
import sys.io.FileInput;

class ProxyManager {
	
	private var map:StringMap<Proxy>;
	private var badMap:StringMap<Proxy>;
	private var list:Array<String>;
	private var index:Int = 0;
	//private var Array
	public function new (){
		map = new StringMap<Proxy>();
		badMap = new StringMap<Proxy>();
		list = new Array<String>();
	}
	
	
	public function addProxy(proxyS:Dynamic):Proxy{
		var proxy:Proxy = null;
		
		if (Std.is(proxyS, String)){
			proxy = new Proxy(proxyS);
		} else if (Std.is(proxy, Proxy)){
			proxy = proxyS;
		} else {
			throw "Error, proxy must be of type String of Proxy";
		}
		
		var proxyKey = proxy.getKey();
		if (badMap.exists(proxyKey)){
			return badMap.get(proxyKey);
		}
		if (map.exists(proxyKey)){
			return map.get(proxyKey);
		}
		if (proxy.isBad()){
			badMap.set(proxy.getKey(), proxy);
		} else {
			map.set(proxyKey, proxy);
			var pos:Int = cast(Math.random() * list.length, Int);
			list.insert(pos, proxyKey);
		}
		
		return proxy;
	}
	
	public function reset(){
		var list = this.list;
		var outList = new Array<String>();
		for (proxyKey in list){
			var pos:Int = cast(Math.random() * outList.length, Int);
			outList.insert(pos, proxyKey);
		}
		this.list = outList;
		index = 0;
	}
	
	public function load(fileName:String) {
		var fin:FileInput = File.read(fileName, false);
		try {
	        while (!fin.eof()){
	        	var line = fin.readLine();
	        	var outProxy = addProxy(line);
	        }
	        fin.close();
    	} catch (e:haxe.io.Eof) { 
    		return; 
    	}
	}
	
	public function get():Proxy{
		
	}
	
	public function toString():String{
		var str = new StringBuf();
		str.add("ProxyManager:" + list);
		return str.toString();
	}
	
}