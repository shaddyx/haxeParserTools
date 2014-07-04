<?php

class ua_org_shaddy_tools_url_CurlInterface {
	public function __construct(){}
	static function init() {
		return curl_init();
	}
	static function setOpt($ch, $option, $value) {
		haxe_Log::trace("Setting option [" . _hx_string_rec($option, "") . "]:" . Std::string($value), _hx_anonymous(array("fileName" => "CurlInterface.hx", "lineNumber" => 14, "className" => "ua.org.shaddy.tools.url.CurlInterface", "methodName" => "setOpt")));
		return curl_setopt($ch, $option, $value);
	}
	static function setOptArray($ch, $arr) {
		if(null == $arr) throw new HException('null iterable');
		$__hx__it = $arr->keys();
		while($__hx__it->hasNext()) {
			$i = $__hx__it->next();
			ua_org_shaddy_tools_url_CurlInterface::setOpt($ch, $i, $arr->get($i));
		}
	}
	static function getInfo($ch, $option) {
		return curl_getinfo($ch, $option);
	}
	static function exec($ch) {
		return curl_exec($ch);
	}
	static function close($ch) {
		return curl_close($ch);
	}
	function __toString() { return 'ua.org.shaddy.tools.url.CurlInterface'; }
}
