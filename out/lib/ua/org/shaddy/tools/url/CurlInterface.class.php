<?php

class ua_org_shaddy_tools_url_CurlInterface {
	public function __construct(){}
	static function init() {
		return curl_init();
	}
	static function setopt($ch, $option, $value) {
		return curl_setopt($ch, $option, $value);
	}
	static function setoptArray($ch, $arr) {
		$__hx__it = call_user_func((ua_org_shaddy_tools_url_CurlInterface_0($arr, $ch, $i)));
		while($__hx__it->hasNext()) {
			$i = $__hx__it->next();
			haxe_Log::trace($i, _hx_anonymous(array("fileName" => "CurlInterface.hx", "lineNumber" => 18, "className" => "ua.org.shaddy.tools.url.CurlInterface", "methodName" => "setoptArray")));
		}
		return curl_setopt_array($ch, $arr);
	}
	static function exec($ch) {
		return curl_exec($ch);
	}
	static function close($ch) {
		return curl_close($ch);
	}
	function __toString() { return 'ua.org.shaddy.tools.url.CurlInterface'; }
}
function ua_org_shaddy_tools_url_CurlInterface_0(&$arr, &$ch, &$i) {
	{
		$_e = $arr;
		return array(new _hx_lambda(array(&$_e, &$arr, &$ch, &$i), "ua_org_shaddy_tools_url_CurlInterface_1"), 'execute');
	}
}
function ua_org_shaddy_tools_url_CurlInterface_1(&$_e, &$arr, &$ch, &$i) {
	{
		return $_e->iterator();
	}
}
