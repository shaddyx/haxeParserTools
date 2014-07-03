<?php

class ua_org_shaddy_tools_url_SimpleUrlCurl {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$this->options = new haxe_ds_IntMap();
		$this->options->set(1, "test");
		$this->options->set(2, 1);
	}}
	public function get($url) {
		$this->preRequest();
		return "";
	}
	public function preRequest() {
		$this->handle = ua_org_shaddy_tools_url_CurlInterface::init();
		ua_org_shaddy_tools_url_CurlInterface::setoptArray($this->handle, $this->options);
	}
	public $options;
	public $handle;
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
	function __toString() { return 'ua.org.shaddy.tools.url.SimpleUrlCurl'; }
}
