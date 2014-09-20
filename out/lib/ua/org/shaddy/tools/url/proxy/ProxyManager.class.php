<?php

class ua_org_shaddy_tools_url_proxy_ProxyManager {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$this->map = new haxe_ds_StringMap();
		$this->badMap = new haxe_ds_StringMap();
		$this->{"list"} = new _hx_array(array());
	}}
	public function toString() {
		$str = new StringBuf();
		$str->add("ProxyManager:" . Std::string($this->{"list"}));
		return $str->b;
	}
	public function get() {
		if($this->index >= $this->{"list"}->length) {
			$this->index = 0;
		}
		if($this->index === 0 && $this->{"list"}->length === 0) {
			return null;
		}
		$key = $this->{"list"}[$this->index];
		return $this->map->get($key);
	}
	public function refreshProxy($proxy) {
		$key = $proxy->getKey();
		if($this->badMap->exists($key) && !$proxy->isBad()) {
			$this->badMap->remove($key);
			$this->{"list"}->remove($key);
			$this->addProxy($proxy);
		} else {
			if($this->map->exists($key) && $proxy->isBad()) {
				$this->map->remove($key);
				$this->{"list"}->remove($key);
				$this->addProxy($proxy);
			}
		}
	}
	public function save($fileName) {
		$fout = sys_io_File::write($fileName, false);
		if(null == $this->map) throw new HException('null iterable');
		$__hx__it = $this->map->iterator();
		while($__hx__it->hasNext()) {
			$proxy = $__hx__it->next();
			$fout->writeString(_hx_string_or_null($proxy->toString()) . "\x0A");
		}
		if(null == $this->badMap) throw new HException('null iterable');
		$__hx__it = $this->badMap->iterator();
		while($__hx__it->hasNext()) {
			$proxy = $__hx__it->next();
			$fout->writeString(_hx_string_or_null($proxy->toString()) . "\x0A");
		}
		$fout->close();
	}
	public function load($fileName) {
		$fin = sys_io_File::read($fileName, false);
		$counter = 0;
		while(!$fin->eof()) {
			$line = $fin->readLine();
			$outProxy = $this->addProxy($line);
			if(!$outProxy->isBad()) {
				$counter++;
			}
			unset($outProxy,$line);
		}
		$fin->close();
		return $counter;
	}
	public function reset() {
		$list = $this->{"list"};
		$outList = new _hx_array(array());
		{
			$_g = 0;
			while($_g < $list->length) {
				$proxyKey = $list[$_g];
				++$_g;
				$pos = Math::random() * $outList->length;
				$outList->insert($pos, $proxyKey);
				unset($proxyKey,$pos);
			}
		}
		$this->{"list"} = $outList;
		$this->index = 0;
	}
	public function addProxy($proxyS) {
		ua_org_shaddy_tools_url_proxy_ProxyManager::$logger->debug("adding proxy:", $proxyS, null, null);
		$proxy = null;
		if(Std::is($proxyS, _hx_qtype("String"))) {
			ua_org_shaddy_tools_url_proxy_ProxyManager::$logger->debug("proxy is String", $proxyS, null, null);
			$proxy = new ua_org_shaddy_tools_url_proxy_Proxy($proxyS);
		} else {
			if(Std::is($proxy, _hx_qtype("ua.org.shaddy.tools.url.proxy.Proxy"))) {
				$proxy = $proxyS;
			} else {
				throw new HException("Error, proxy must be of type String of Proxy");
			}
		}
		$proxyKey = $proxy->getKey();
		if($this->badMap->exists($proxyKey)) {
			return $this->badMap->get($proxyKey);
		}
		if($this->map->exists($proxyKey)) {
			return $this->map->get($proxyKey);
		}
		if($proxy->isBad()) {
			$this->badMap->set($proxy->getKey(), $proxy);
		} else {
			$this->map->set($proxyKey, $proxy);
			$pos = Std::int(Math::random() * $this->{"list"}->length);
			$this->{"list"}->insert($pos, $proxyKey);
		}
		$proxy->proxyManager = $this;
		return $proxy;
	}
	public $index = 0;
	public $list;
	public $badMap;
	public $map;
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
	static $logger;
	function __toString() { return $this->toString(); }
}
ua_org_shaddy_tools_url_proxy_ProxyManager::$logger = new ua_org_shaddy_tools_log_Logger(_hx_qtype("ua.org.shaddy.tools.url.proxy.ProxyManager"));
