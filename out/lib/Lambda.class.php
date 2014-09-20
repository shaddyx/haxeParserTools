<?php

class Lambda {
	public function __construct(){}
	static function has($it, $elt) {
		if(null == $it) throw new HException('null iterable');
		$__hx__it = $it->iterator();
		while($__hx__it->hasNext()) {
			$x = $__hx__it->next();
			if($x == $elt) {
				return true;
			}
		}
		return false;
	}
	function __toString() { return 'Lambda'; }
}
