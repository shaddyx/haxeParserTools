<?php

class ua_org_shaddy_tools_htmlparser_HtmlElement {
	public function __construct($tagName, $attributes = null) {
		if(!php_Boot::$skip_constructor) {
		$this->tagName = $tagName;
		$this->childNodes = new _hx_array(array());
		if($attributes === null) {
			$attributes = new haxe_ds_StringMap();
		}
		$this->attributes = $attributes;
		$this->innerText = "";
	}}
	public function toString() {
		$b = new StringBuf();
		$b->add("<");
		$b->add($this->tagName);
		if(null == $this->attributes) throw new HException('null iterable');
		$__hx__it = $this->attributes->keys();
		while($__hx__it->hasNext()) {
			$attributeName = $__hx__it->next();
			$b->add(" ");
			$b->add($attributeName);
			$b->add("=\"");
			$b->add($this->attributes->get($attributeName));
			$b->add("\"");
		}
		$b->add(">");
		if(strlen($this->innerText) > 0) {
			$b->add($this->innerText);
		} else {
			$_g = 0; $_g1 = $this->childNodes;
			while($_g < $_g1->length) {
				$element = $_g1[$_g];
				++$_g;
				$b->add($element->toString());
				unset($element);
			}
		}
		$b->add("</");
		$b->add($this->tagName);
		$b->add(">");
		return $b->b;
	}
	public function setAttribute($name, $value) {
		$this->attributes->set($name, $value);
	}
	public function rebuildSiblings() {
		$old = null;
		{
			$_g = 0; $_g1 = $this->childNodes;
			while($_g < $_g1->length) {
				$element = $_g1[$_g];
				++$_g;
				if($old !== null) {
					$old->nextSibling = $element;
				}
				$element->prevSibling = $old;
				$element->parentNode = $this;
				$old = $element;
				unset($element);
			}
		}
	}
	public function appendChild($child) {
		$rebuildNeed = false;
		if(Lambda::has($this->childNodes, $child)) {
			$this->childNodes->remove($child);
			$rebuildNeed = true;
		}
		$index = $this->childNodes->length;
		$this->childNodes->push($child);
		$child->parentNode = $this;
		if($rebuildNeed) {
			$this->rebuildSiblings();
		}
		return $child;
	}
	public $innerText;
	public $parentNode;
	public $prevSibling;
	public $nextSibling;
	public $attributes;
	public $childNodes;
	public $tagName = "HtmlElement";
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
