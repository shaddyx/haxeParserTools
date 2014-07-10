package ua.org.shaddy.tools.url.proxy;

enum ProxyType { 
	socks5;
	socks4; 
	http;
}
class Proxy {
	public var type:ProxyType;
	public var address:String = "";
	public var port:Int = 0;
	public var user:String = "";
	public var password:String = "";
	public var failed:Int = 0;
	public var lastSuccess:Int = 0;
	public var proxyManager:ProxyManager;
	
	
	public function new(?proxyString:String){
		if (proxyString == null){
			type = ProxyType.http;
		} else {
			parse(proxyString);
		}
	}
	
	public function parse(proxyString:String){
		proxyString = StringTools.replace(StringTools.trim(proxyString),'@',':');
	    if (proxyString.indexOf("://") != -1){
	    	var r:EReg = new EReg('(.*?):\\/\\/','');
	    	var found = r.match(proxyString);
	    	if (found) {
	    		var strType = r.matched(1);
	    		type = Type.createEnum(ProxyType, strType);
	    		proxyString = StringTools.replace(proxyString, type + '://', '' );
	    	}
	    } else {
	    	type = ProxyType.http;
	    }
    	var chunks = proxyString.split(':');
    	switch (chunks.length) {
    		case 2:
    			address = chunks[0];
    			port = Std.parseInt(chunks[1]);
    		case 4:
    			user = chunks[0];
    			password = chunks[1];
    			address = chunks[2];
    			port = Std.parseInt(chunks[3]);
    		case 6:
    			user = chunks[0];
    			password = chunks[1];
    			address = chunks[2];
    			port = Std.parseInt(chunks[3]);
    			failed = Std.parseInt(chunks[4]);
    			lastSuccess = Std.parseInt(chunks[5]);
    		default:
    			throw "Proxy chunks count is wrong [" + chunks.length + "] in " + proxyString;
    	}
	}
	
	public function isBad():Bool{
		return failed >= 3;
	}
	
	public function fail(){
		failed++;
		proxyManager.refreshProxy(this);
	}
	
	
	public function getKey(){
		return address + ':' + port;
	}
	
	public function toString():String{
		var str = new StringBuf();
		str.add(type);
		str.add('://');
		
		if (user.length > 0 || password.length > 0){
			str.add(user);
			str.add(':');
			str.add(password);
			str.add(':');
		}
		
		str.add(address);
		str.add(':');
		str.add(port);
		if (failed != 0 || lastSuccess !=0) {
			str.add(':');
			str.add(failed);
			str.add(':');
			str.add(lastSuccess);
		}
		//str.add();
		return str.toString();
	}
}