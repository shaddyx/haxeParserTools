<?php

class ua_org_shaddy_tools_url_SimpleUrlCurl {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$this->options = new haxe_ds_IntMap();
		$this->options->set(ua_org_shaddy_tools_url_CurlOptions::$RETURNTRANSFER, 1);
		$this->options->set(ua_org_shaddy_tools_url_CurlOptions::$FOLLOWLOCATION, 1);
		$this->options->set(ua_org_shaddy_tools_url_CurlOptions::$HEADER, 1);
	}}
	public function post($url, $postData) {
		$this->preRequest($url);
		ua_org_shaddy_tools_url_CurlInterface::setOpt($this->handle, ua_org_shaddy_tools_url_CurlOptions::$POST, true);
		ua_org_shaddy_tools_url_CurlInterface::setPostFields($this->handle, $postData);
		return $this->makeRequest();
	}
	public function get($url) {
		$this->preRequest($url);
		return $this->makeRequest();
	}
	public function makeRequest() {
		$this->lastResult = ua_org_shaddy_tools_url_CurlInterface::exec($this->handle);
		$headerSize = ua_org_shaddy_tools_url_CurlInterface::getInfo($this->handle, ua_org_shaddy_tools_url_CurlInfo::$HEADER_SIZE);
		$header = _hx_substring($this->lastResult->data, 0, $headerSize - 1);
		$data = _hx_substring($this->lastResult->data, $headerSize, null);
		ua_org_shaddy_tools_url_CurlInterface::close($this->handle);
		return $data;
	}
	public function preRequest($url) {
		$this->handle = ua_org_shaddy_tools_url_CurlInterface::init();
		ua_org_shaddy_tools_url_CurlInterface::setOpt($this->handle, ua_org_shaddy_tools_url_CurlOptions::$URL, $url);
		if($this->proxy !== null) {
			haxe_Log::trace("Setting proxy", _hx_anonymous(array("fileName" => "SimpleUrlCurl.hx", "lineNumber" => 49, "className" => "ua.org.shaddy.tools.url.SimpleUrlCurl", "methodName" => "preRequest")));
			ua_org_shaddy_tools_url_CurlInterface::setOpt($this->handle, ua_org_shaddy_tools_url_CurlOptions::$PROXY, $this->proxy->address);
			ua_org_shaddy_tools_url_CurlInterface::setOpt($this->handle, ua_org_shaddy_tools_url_CurlOptions::$PROXYPORT, $this->proxy->port);
			$type = 0;
			{
				$_g = $this;
				$__hx__t = ($_g->proxy->type);
				switch($__hx__t->index) {
				case 2:
				{
					$type = 0;
				}break;
				case 1:
				{
					$type = 4;
				}break;
				case 0:
				{
					$type = 5;
				}break;
				}
			}
			ua_org_shaddy_tools_url_CurlInterface::setOpt($this->handle, ua_org_shaddy_tools_url_CurlOptions::$PROXYTYPE, $type);
			ua_org_shaddy_tools_url_CurlInterface::setOpt($this->handle, ua_org_shaddy_tools_url_CurlOptions::$USERPWD, _hx_string_or_null($this->proxy->user) . ":" . _hx_string_or_null($this->proxy->password));
		} else {
			haxe_Log::trace("Proxy is false", _hx_anonymous(array("fileName" => "SimpleUrlCurl.hx", "lineNumber" => 64, "className" => "ua.org.shaddy.tools.url.SimpleUrlCurl", "methodName" => "preRequest")));
		}
		ua_org_shaddy_tools_url_CurlInterface::setOptArray($this->handle, $this->options);
	}
	public $cache = null;
	public $proxy;
	public $lastResult;
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
