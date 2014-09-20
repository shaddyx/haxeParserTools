<?php

class Reflect {
	public function __construct(){}
	static function field($o, $field) {
		return _hx_field($o, $field);
	}
	static function getProperty($o, $field) {
		if(null === $o) {
			return null;
		}
		$cls = ((Std::is($o, _hx_qtype("Class"))) ? $o->__tname__ : get_class($o));
		$cls_vars = get_class_vars($cls);
		if(isset($cls_vars['__properties__']) && isset($cls_vars['__properties__']['get_'.$field]) && ($field = $cls_vars['__properties__']['get_'.$field])) {
			return $o->$field();
		} else {
			return $o->$field;
		}
	}
	static function callMethod($o, $func, $args) {
		if(is_string($o) && !is_array($func)) {
			return call_user_func_array(Reflect::field($o, $func), $args->a);
		}
		return call_user_func_array(((is_callable($func)) ? $func : array($o, $func)), ((null === $args) ? array() : $args->a));
	}
	static function isFunction($f) {
		return (is_array($f) && is_callable($f)) || _hx_is_lambda($f) || is_array($f) && _hx_has_field($f[0], $f[1]) && $f[1] !== "length";
	}
	function __toString() { return 'Reflect'; }
}
