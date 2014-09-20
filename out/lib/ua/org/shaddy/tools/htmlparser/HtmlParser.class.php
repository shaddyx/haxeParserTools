<?php

class ua_org_shaddy_tools_htmlparser_HtmlParser {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$this->selfClosedTags = new haxe_ds_StringMap();
		$this->selfClosedTags->set("br", true);
	}}
	public function parse($html) {
		$this->document = new ua_org_shaddy_tools_htmlparser_HtmlElement("document", null);
		$this->currentElement = $this->document;
		$parser = new ua_org_shaddy_tools_htmlparser_HtmlSaxParser();
		$parser->tagFound = (isset($this->tagFound) ? $this->tagFound: array($this, "tagFound"));
		$parser->tagEndFound = (isset($this->tagEndFound) ? $this->tagEndFound: array($this, "tagEndFound"));
		$parser->textFound = (isset($this->textFound) ? $this->textFound: array($this, "textFound"));
		$parser->parse($html);
		return $this->document;
	}
	public function textFound($text) {
		$element = new ua_org_shaddy_tools_htmlparser_HtmlElement("textNode", null);
		$element->innerText = $text;
		$this->currentElement->appendChild($element);
	}
	public function tagEndFound($tagName) {
		if($tagName === $this->currentElement->tagName) {
			$this->currentElement = $this->currentElement->parentNode;
		} else {
			$oldElem = $this->currentElement;
			do {
				$this->currentElement = $this->currentElement->parentNode;
				if($this->currentElement !== null && $tagName === $this->currentElement->tagName) {
					break;
				}
			} while($this->currentElement !== null);
			if($this->currentElement === null) {
				$this->currentElement = $oldElem;
			}
		}
	}
	public function tagFound($tagName, $attributes) {
		if($this->selfClosedTags->exists($tagName)) {
			return;
		}
		$element = new ua_org_shaddy_tools_htmlparser_HtmlElement($tagName, $attributes);
		$this->currentElement->appendChild($element);
		$this->currentElement = $element;
	}
	public $selfClosedTags;
	public $currentElement;
	public $document;
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
	function __toString() { return 'ua.org.shaddy.tools.htmlparser.HtmlParser'; }
}
