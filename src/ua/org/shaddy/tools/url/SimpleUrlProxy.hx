package ua.org.shaddy.tools.url;

enum SimpleUrlProxyType { 
	SOCKS5;
	SOCKS4; 
	HTTP;
}
class SimpleUrlProxy {
	public static var toExport = ['type', 'address','user','password','port','alive','failed', 'lastFailed'];
	public var type:SimpleUrlProxyType;
	public var ip:String;
	public var port:String;
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
    					throw "Cant parse proxy:" + proxyString; 
	    		}
	    	}
	    	
	    }
	        
	        /*if (strstr($str,"://")){
	            if (preg_match('~(.*?)\:\/\/~', $str, $out)){
	                $type = strtolower($out[1]);
	                $this->type = self::$proxyTypeMap[$type];
	            } else {
	                throw new Exception('Strange proxy format'. $str);
	            }
	            $str = str_replace($type.'://', '', $str);
	        }
	        $chunks = explode(":",$str);
	        switch (count($chunks)) {
	            case 2:
	                $this->address = $chunks[0];
	                $this->port = $chunks[1];
	                break;
	            case 4:
	                $this->user = $chunks[0];
	                $this->password = $chunks[1];
	                $this->address = $chunks[2];
	                $this->port = $chunks[3];
	                break;
	            case 6:
	                $this->user = $chunks[0];
	                $this->password = $chunks[1];
	                $this->address = $chunks[2];
	                $this->port = $chunks[3];
	                $this->alive = $chunks[4];
	                $this->lastSuccess = $chunks[5];
	                break;
	            default:
	                throw new Exception('Proxy chunks count is wrong ['.count($chunks).'] in:'. $str);*/
	}
	
	public function toString(){
		return "proxy";
	}
}