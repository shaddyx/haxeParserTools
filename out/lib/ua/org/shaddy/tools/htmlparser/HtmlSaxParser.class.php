<?php

class ua_org_shaddy_tools_htmlparser_HtmlSaxParser {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$this->tagRe = new ua_org_shaddy_tools_Regex("\\<(.*?)\\>", "g");
		$this->attrRe = new ua_org_shaddy_tools_Regex("([a-zA-Z0-9]*?)=([\"\\'])(.*?)\\2", "g");
		$this->tagNameRe = new ua_org_shaddy_tools_Regex("\$[\\/]{0,1}[a-zA-Z0-9]*?", "");
		$this->tagFound = array(new _hx_lambda(array(), "ua_org_shaddy_tools_htmlparser_HtmlSaxParser_0"), 'execute');
		$this->tagEndFound = array(new _hx_lambda(array(), "ua_org_shaddy_tools_htmlparser_HtmlSaxParser_1"), 'execute');
		$this->textFound = array(new _hx_lambda(array(), "ua_org_shaddy_tools_htmlparser_HtmlSaxParser_2"), 'execute');
		$this->commentFound = array(new _hx_lambda(array(), "ua_org_shaddy_tools_htmlparser_HtmlSaxParser_3"), 'execute');
		$this->commentEndFound = array(new _hx_lambda(array(), "ua_org_shaddy_tools_htmlparser_HtmlSaxParser_4"), 'execute');
	}}
	public function parse($data) {
		$tags = $this->tagRe->matchAll($data);
		$oldTagPos = 0;
		if(null == $tags) throw new HException('null iterable');
		$__hx__it = $tags->iterator();
		while($__hx__it->hasNext()) {
			$tagContainer = $__hx__it->next();
			$startTag = true;
			$tagStr = $tagContainer->get(1);
			$fullTag = $tagContainer->get(0);
			$tagLen = strlen($fullTag);
			$firstSpacePos = _hx_index_of($tagStr, " ", null);
			$tagName = null;
			$alreadyClosed = false;
			if(_hx_char_at($tagStr, 0) === "/") {
				$startTag = false;
				if($firstSpacePos !== -1) {
					$tagName = _hx_substr($tagStr, 1, $firstSpacePos);
				} else {
					$tagName = _hx_substr($tagStr, 1, null);
				}
			} else {
				if(_hx_char_at($tagStr, strlen($tagStr) - 1) === "/") {
					$alreadyClosed = true;
					if($firstSpacePos !== -1) {
						$tagName = _hx_substr($tagStr, 0, $firstSpacePos);
					} else {
						$tagName = _hx_substr($tagStr, 0, strlen($tagStr) - 1);
					}
				} else {
					if($firstSpacePos !== -1) {
						$tagName = _hx_substr($tagStr, 0, $firstSpacePos + 1);
					} else {
						$tagName = $tagStr;
					}
				}
			}
			$tagName = trim($tagName);
			$attrs = null;
			if($startTag) {
				$this->tagFound($tagName, $this->parseAttrs($tagStr));
			}
			if($oldTagPos < $tagContainer->pos) {
				$text = trim(_hx_substring($data, $oldTagPos, $tagContainer->pos));
				if(strlen($text) > 0) {
					if($this->textFound !== null) {
						$this->textFound($text);
					}
				}
				unset($text);
			}
			if(!$startTag || $alreadyClosed) {
				$this->tagEndFound($tagName);
			}
			$oldTagPos = $tagContainer->pos + $tagContainer->len;
			unset($tagStr,$tagName,$tagLen,$startTag,$fullTag,$firstSpacePos,$attrs,$alreadyClosed);
		}
	}
	public function parseAttrs($tag) {
		$attrs = new haxe_ds_StringMap();
		$result = $this->attrRe->matchAll($tag);
		if(null == $result) throw new HException('null iterable');
		$__hx__it = $result->iterator();
		while($__hx__it->hasNext()) {
			$attr = $__hx__it->next();
			$attrs->set($attr->get(1), $attr->get(3));
		}
		return $attrs;
	}
	public $mode;
	public $tagNameRe;
	public $tagRe;
	public $attrRe;
	public $commentEndFound;
	public $commentFound;
	public $textFound;
	public $tagEndFound;
	public $tagFound;
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
	function __toString() { return 'ua.org.shaddy.tools.htmlparser.HtmlSaxParser'; }
}
function ua_org_shaddy_tools_htmlparser_HtmlSaxParser_0($tagName, $attributes) {
	{
	}
}
function ua_org_shaddy_tools_htmlparser_HtmlSaxParser_1($tagName) {
	{
	}
}
function ua_org_shaddy_tools_htmlparser_HtmlSaxParser_2($text) {
	{
	}
}
function ua_org_shaddy_tools_htmlparser_HtmlSaxParser_3() {
	{
	}
}
function ua_org_shaddy_tools_htmlparser_HtmlSaxParser_4() {
	{
	}
}
