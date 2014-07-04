<?php

class ua_org_shaddy_tools_url_SimpleUrlCurl {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$this->options = new haxe_ds_IntMap();
		$this->options->set(ua_org_shaddy_tools_url_CurlOptions::$RETURNTRANSFER, 1);
		$this->options->set(ua_org_shaddy_tools_url_CurlOptions::$FOLLOWLOCATION, 1);
		$this->options->set(ua_org_shaddy_tools_url_CurlOptions::$HEADER, 1);
	}}
	public function get($url) {
		$this->preRequest();
		ua_org_shaddy_tools_url_CurlInterface::setOpt($this->handle, ua_org_shaddy_tools_url_CurlOptions::$URL, $url);
		return $this->makeRequest();
	}
	public function makeRequest() {
		$data = ua_org_shaddy_tools_url_CurlInterface::exec($this->handle);
		$headerSize = ua_org_shaddy_tools_url_CurlInterface::getInfo($this->handle, ua_org_shaddy_tools_url_CurlInfo::$HEADER_SIZE);
		$this->header = _hx_substring($data, 0, $headerSize - 1);
		$data = _hx_substring($data, $headerSize, null);
		haxe_Log::trace("Header size is:" . _hx_string_rec($headerSize, ""), _hx_anonymous(array("fileName" => "SimpleUrlCurl.hx", "lineNumber" => 33, "className" => "ua.org.shaddy.tools.url.SimpleUrlCurl", "methodName" => "makeRequest")));
		ua_org_shaddy_tools_url_CurlInterface::close($this->handle);
		return $data;
	}
	public function preRequest() {
		$this->handle = ua_org_shaddy_tools_url_CurlInterface::init();
		ua_org_shaddy_tools_url_CurlInterface::setOptArray($this->handle, $this->options);
	}
	public $header;
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
