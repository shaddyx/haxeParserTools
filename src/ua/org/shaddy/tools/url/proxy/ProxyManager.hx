package ua.org.shaddy.tools.url.proxy;
import ua.org.shaddy.tools.url.proxy.Proxy;
import haxe.ds.StringMap;

class ProxyManager {
	
	private var list:StringMap<Proxy>;
	private var badList:StringMap<Proxy>;
	
	public function new (){
		list = new StringMap<Proxy>();
		badList = new StringMap<Proxy>();
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
		if (proxy.isBad()){
			badList.set(proxy.getKey(), proxy);
		} else {
			list.set(proxy.getKey(), proxy);
		}
		
		return proxy;
	}
}