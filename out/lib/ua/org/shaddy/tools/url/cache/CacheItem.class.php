<?php

class ua_org_shaddy_tools_url_cache_CacheItem {
	public function __construct($path, $url, $data = null) {
		if(!php_Boot::$skip_constructor) {
		if($data === null) {
			$this->data = sys_io_File::getContent(_hx_string_or_null($path) . "/" . _hx_string_or_null(rawurlencode($url)));
		} else {
			sys_io_File::saveContent(_hx_string_or_null($path) . "/" . _hx_string_or_null(rawurlencode($url)), $data);
			$this->data = $data;
		}
		$this->url = $url;
		$this->path = $path;
	}}
	public $path;
	public $url;
	public $data;
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
	function __toString() { return 'ua.org.shaddy.tools.url.cache.CacheItem'; }
}
