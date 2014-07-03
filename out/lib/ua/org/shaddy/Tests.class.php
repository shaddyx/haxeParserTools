<?php

class ua_org_shaddy_Tests {
	public function __construct(){}
	static function main() {
		$a = new ua_org_shaddy_tools_url_SimpleUrl();
		$a->get("http://yandex.ru");
	}
	function __toString() { return 'ua.org.shaddy.Tests'; }
}
