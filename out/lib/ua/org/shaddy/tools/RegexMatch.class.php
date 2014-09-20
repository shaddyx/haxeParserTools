<?php

class ua_org_shaddy_tools_RegexMatch {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$this->arr = new _hx_array(array());
	}}
	public function toString() {
		return "[" . _hx_string_rec($this->pos, "") . ":" . _hx_string_rec($this->len, "") . "]" . _hx_string_or_null($this->arr->toString());
	}
	public function get($index) {
		if($this->arr->length === 0 || $this->arr->length < $index) {
			throw new HException("RegexMatch has no key " . _hx_string_rec($index, ""));
		}
		return $this->arr[$index];
	}
	public function put($match) {
		$this->arr->insert($this->arr->length, $match);
	}
	public $len;
	public $pos;
	public $arr;
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
	function __toString() { return $this->toString(); }
}
