<?php

class ua_org_shaddy_tools_url_proxy_Proxy {
	public function __construct($proxyString = null) {
		if(!php_Boot::$skip_constructor) {
		if($proxyString === null) {
			$this->type = ua_org_shaddy_tools_url_proxy_ProxyType::$http;
		} else {
			$this->parse($proxyString);
		}
	}}
	public function toString() {
		$str = new StringBuf();
		$str->add($this->type);
		$str->add("://");
		if(strlen($this->user) > 0 || strlen($this->password) > 0) {
			$str->add($this->user);
			$str->add(":");
			$str->add($this->password);
			$str->add(":");
		}
		$str->add($this->address);
		$str->add(":");
		$str->add($this->port);
		if($this->failed !== 0 || $this->lastSuccess !== 0) {
			$str->add(":");
			$str->add($this->failed);
			$str->add(":");
			$str->add($this->lastSuccess);
		}
		return $str->b;
	}
	public function getKey() {
		return _hx_string_or_null($this->address) . ":" . _hx_string_rec($this->port, "");
	}
	public function fail() {
		$this->failed++;
		$this->proxyManager->refreshProxy($this);
	}
	public function isBad() {
		return $this->failed >= 3;
	}
	public function parse($proxyString) {
		$proxyString = ua_org_shaddy_tools_url_proxy_Proxy_0($this, $proxyString);
		if(_hx_index_of($proxyString, "://", null) !== -1) {
			$r = new EReg("(.*?):\\/\\/", "");
			$found = $r->match($proxyString);
			if($found) {
				$strType = $r->matched(1);
				$this->type = Type::createEnum(_hx_qtype("ua.org.shaddy.tools.url.proxy.ProxyType"), $strType, null);
				$proxyString = ua_org_shaddy_tools_url_proxy_Proxy_1($this, $found, $proxyString, $r, $strType);
			}
		} else {
			$this->type = ua_org_shaddy_tools_url_proxy_ProxyType::$http;
		}
		$chunks = _hx_explode(":", $proxyString);
		switch($chunks->length) {
		case 2:{
			$this->address = $chunks[0];
			$this->port = Std::parseInt($chunks[1]);
		}break;
		case 4:{
			$this->user = $chunks[0];
			$this->password = $chunks[1];
			$this->address = $chunks[2];
			$this->port = Std::parseInt($chunks[3]);
		}break;
		case 6:{
			$this->user = $chunks[0];
			$this->password = $chunks[1];
			$this->address = $chunks[2];
			$this->port = Std::parseInt($chunks[3]);
			$this->failed = Std::parseInt($chunks[4]);
			$this->lastSuccess = Std::parseInt($chunks[5]);
		}break;
		default:{
			throw new HException("Proxy chunks count is wrong [" . _hx_string_rec($chunks->length, "") . "] in " . _hx_string_or_null($proxyString));
		}break;
		}
	}
	public $proxyManager;
	public $lastSuccess = 0;
	public $failed = 0;
	public $password = "";
	public $user = "";
	public $port = 0;
	public $address = "";
	public $type;
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->__dynamics[$m]) && is_callable($this->__dynamics[$m]))
			return call_user_func_array($this->__dynamics[$m], $a);
		else if('toString' == $m)
			return $this->__toString();
		else
			throw new HException('Unable to call <'.$m.'>');
	}
	function __toString() { return $this->toString(); }
}
function ua_org_shaddy_tools_url_proxy_Proxy_0(&$__hx__this, &$proxyString) {
	{
		$s = trim($proxyString);
		return str_replace("@", ":", $s);
	}
}
function ua_org_shaddy_tools_url_proxy_Proxy_1(&$__hx__this, &$found, &$proxyString, &$r, &$strType) {
	{
		$sub = Std::string($__hx__this->type) . "://";
		if($sub === "") {
			return implode(str_split ($proxyString), "");
		} else {
			return str_replace($sub, "", $proxyString);
		}
		unset($sub);
	}
}
