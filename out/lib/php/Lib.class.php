<?php

class php_Lib {
	public function __construct(){}
	static function hprint($v) {
		echo(Std::string($v));
	}
	static function println($v) {
		php_Lib::hprint($v);
		php_Lib::hprint("\x0A");
	}
	static function associativeArrayOfHash($hash) {
		return $hash->h;
	}
	function __toString() { return 'php.Lib'; }
}
