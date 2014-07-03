<?php

class ua_org_shaddy_Tests {
	public function __construct(){}
	static function main() {
		haxe_Log::trace("oook", _hx_anonymous(array("fileName" => "Tests.hx", "lineNumber" => 6, "className" => "ua.org.shaddy.Tests", "methodName" => "main")));
		$a = new ua_org_shaddy_tools_url_SimpleUrl();
		$a->get("http://yandex.ru");
	}
	function __toString() { return 'ua.org.shaddy.Tests'; }
}
