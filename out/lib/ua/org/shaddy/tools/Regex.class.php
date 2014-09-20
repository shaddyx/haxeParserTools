<?php

class ua_org_shaddy_tools_Regex {
	public function __construct($regex, $opts) {
		if(!php_Boot::$skip_constructor) {
		$this->re = new EReg($regex, $opts);
	}}
	public function match($data) {
		if($this->re->match($data)) {
			$match = new ua_org_shaddy_tools_RegexMatch();
			$counter = 0;
			$res = null;
			do {
				try {
					$res = $this->re->matched($counter);
				}catch(Exception $__hx__e) {
					$_ex_ = ($__hx__e instanceof HException) ? $__hx__e->e : $__hx__e;
					$e = $_ex_;
					{
						break;
					}
				}
				if($res !== null) {
					$match->put($res);
				}
				$counter++;
				unset($e);
			} while($res !== null);
			return $match;
		}
		return null;
	}
	public function matchAll($data) {
		$matches = new HList();
		$pos = 0;
		while($this->re->match($data)) {
			$data = $this->re->matchedRight();
			$match = new ua_org_shaddy_tools_RegexMatch();
			$p = $this->re->matchedPos();
			$pos += $p->pos;
			$match->pos = $pos;
			$match->len = $p->len;
			$pos += $p->len;
			$counter = 0;
			$res = null;
			do {
				try {
					$res = $this->re->matched($counter);
				}catch(Exception $__hx__e) {
					$_ex_ = ($__hx__e instanceof HException) ? $__hx__e->e : $__hx__e;
					$e = $_ex_;
					{
						break;
					}
				}
				if($res !== null) {
					$match->put($res);
				}
				$counter++;
				unset($e);
			} while($res !== null);
			$matches->add($match);
			unset($res,$p,$match,$counter);
		}
		return $matches;
	}
	public $re;
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
	function __toString() { return 'ua.org.shaddy.tools.Regex'; }
}
