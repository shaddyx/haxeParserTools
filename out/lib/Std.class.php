<?php

class Std {
	public function __construct(){}
	static function is($v, $t) {
		return _hx_instanceof($v, $t);
	}
	static function string($s) {
		return _hx_string_rec($s, "");
	}
	static function int($x) {
		$i = fmod($x, -2147483648) & -1;
		if($i & -2147483648) {
			$i = -((~$i & -1) + 1);
		}
		return $i;
	}
	static function parseInt($x) {
		if(!is_numeric($x)) {
			$matches = null;
			preg_match("/^-?\\d+/", $x, $matches);
			return ((count($matches) === 0) ? null : intval($matches[0]));
		} else {
			return ((strtolower(_hx_substr($x, 0, 2)) === "0x") ? (int) hexdec(substr($x, 2)) : intval($x));
		}
	}
	function __toString() { return 'Std'; }
}
