<?php

class ua_org_shaddy_tools_url_CurlInterface {
	public function __construct(){}
	static function init() {
		return curl_init();
	}
	static function setopt($ch, $option, $value) {
		return curl_setopt_array($ch, $option, $value);
	}
	static function setoptArray($ch, $arr) {
		if(null == $arr) throw new HException('null iterable');
		$__hx__it = $arr->iterator();
		while($__hx__it->hasNext()) {
			$i = $__hx__it->next();
			ua_org_shaddy_tools_url_CurlInterface::setopt($ch, $i, $arr->get($i));
		}
	}
	static function exec($ch) {
		return curl_exec($ch);
	}
	static function close($ch) {
		return curl_close($ch);
	}
	function __toString() { return 'ua.org.shaddy.tools.url.CurlInterface'; }
}
