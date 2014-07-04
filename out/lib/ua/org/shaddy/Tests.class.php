<?php

class ua_org_shaddy_Tests {
	public function __construct(){}
	static function main() {
		$a = new ua_org_shaddy_tools_url_SimpleUrl();
		$data = $a->get("http://yandex.ru");
		haxe_Log::trace("Request complete:" . _hx_string_or_null($a->header), _hx_anonymous(array("fileName" => "Tests.hx", "lineNumber" => 10, "className" => "ua.org.shaddy.Tests", "methodName" => "main")));
	}
	function __toString() { return 'ua.org.shaddy.Tests'; }
}
