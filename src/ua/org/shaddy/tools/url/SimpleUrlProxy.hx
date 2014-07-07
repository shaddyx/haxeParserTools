package ua.org.shaddy.tools.url;

enum SimpleUrlProxyType { 
	SOCKS5;
	SOCKS4; 
	HTTP;
}
class SimpleUrlProxy {
	public static var toExport = ['type', 'address','user','password','port','alive','failed', 'lastFailed'];
	public var type:SimpleUrlProxyType;
	public var address:String;
	public var port:String;
	public var user:String;
	public var password:String;
	public var alive:Bool = true;
	public var lastSuccess:Int = 0;
	
	public function new(proxyString:String){
		proxyString = StringTools.replace(StringTools.trim(proxyString),'@',':');
	    if (proxyString.indexOf("://") != -1){
	    	var r:EReg = new EReg('(.*?):\\/\\/','');
	    	var found = r.match(proxyString);
	    	if (found) {
	    		var strType = r.matched(1);
	    		switch(strType){
	    			case 'socks5':
	    				type = SimpleUrlProxyType.SOCKS5;
	    			case 'socks4':
	    				type = SimpleUrlProxyType.SOCKS4;
	    			case 'http':
	    				type = SimpleUrlProxyType.HTTP;
    				default: 
    					throw "Strange proxy format:" + proxyString; 
	    		}
	    		proxyString = StringTools.replace(proxyString, (type + '').toLowerCase() + '://', '' );
	    	}
	    	var chunks = proxyString.split(':');
	    	switch (chunks.length) {
	    		case 2:
	    			address = chunks[0];
	    			port = chunks[1];
	    		case 4:
	    			user = chunks[0];
	    			password = chunks[1];
	    			address = chunks[2];
	    			port = chunks[3];
	    		case 6:
	    			user = chunks[0];
	    			password = chunks[1];
	    			address = chunks[2];
	    			port = chunks[3];
	    			alive = chunks[4] == "true";
	    			lastSuccess = Std.parseInt(chunks[5]);
	    		default:
	    			throw "Proxy chunks count is wrong [" + chunks.length + "] in " + proxyString;
	    	} 
	    	
	    }
	}
	
	public function toString(){
		return "proxy";
	}
}