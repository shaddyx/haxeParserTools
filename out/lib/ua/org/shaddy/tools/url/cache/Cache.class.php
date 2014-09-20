<?php

class ua_org_shaddy_tools_url_cache_Cache {
	public function __construct($path = null) {
		if(!php_Boot::$skip_constructor) {
		if($path === null) {
			$path = "./cache";
		}
		$this->path = $path;
	}}
	public function put($url, $data) {
	}
	public function get($url) {
		$fileName = _hx_string_or_null($this->path) . "/" . _hx_string_or_null(rawurlencode($url));
		if(file_exists($fileName)) {
			return sys_io_File::getContent($fileName);
		} else {
			return null;
		}
	}
	public $path = "cache/";
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
	function __toString() { return 'ua.org.shaddy.tools.url.cache.Cache'; }
}
