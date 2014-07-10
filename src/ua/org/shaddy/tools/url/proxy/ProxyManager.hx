package ua.org.shaddy.tools.url.proxy;
import ua.org.shaddy.tools.url.proxy.Proxy;
import ua.org.shaddy.tools.log.Logger;
import haxe.ds.StringMap;
import sys.io.File;
import sys.io.FileInput;
import sys.io.FileOutput;

class ProxyManager {
	
	private static var logger:Logger = new Logger(ProxyManager);
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
		logger.debug("adding proxy:", proxyS);
		var proxy:Proxy = null;
		
		if (Std.is(proxyS, String)){
			logger.debug("proxy is String", proxyS);
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
			var pos:Int = Std.int(Math.random() * list.length);
			list.insert(pos, proxyKey);
		}
		
		proxy.proxyManager = this;
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
	
	public function load(fileName:String):Int {
		var fin:FileInput = File.read(fileName, false);
		var counter = 0;
	    while (!fin.eof()){
        	var line = fin.readLine();
        	var outProxy = addProxy(line);
        	if (!outProxy.isBad()) {
        		counter ++;
        	}
        }
        fin.close();
    	return counter;
	}
	
	public function save(fileName:String){
		var fout:FileOutput = File.write(fileName, false);
		for (proxy in map){
			fout.writeString(proxy.toString() + "\n");
		}
		
		for (proxy in badMap){
			fout.writeString(proxy.toString() + "\n");
		}
		fout.close();
	}
	
	public function refreshProxy(proxy:Proxy){
		var key = proxy.getKey();
		if (badMap.exists(key) && !proxy.isBad()){
			badMap.remove(key);
			list.remove(key);
			addProxy(proxy);
		} else if (map.exists(key) && proxy.isBad()){
			map.remove(key);
			list.remove(key);
			addProxy(proxy);
		}
	}
	 
	public function get():Proxy{
		if (index >= list.length) {
			index = 0;
		}
		if (index == 0 && list.length == 0) {
			return null;
		}
		var key = list[index];
		return map.get(key);
	}
	
	public function toString():String{
		var str = new StringBuf();
		str.add("ProxyManager:" + list);
		return str.toString();
	}
	
}