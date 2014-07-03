<?php

class ua_org_shaddy_tools_url_SimpleUrl extends ua_org_shaddy_tools_url_SimpleUrlCurl {
	public function __construct() { if(!php_Boot::$skip_constructor) {
		parent::__construct();
	}}
	public function get($url) {
		return "";
	}
	function __toString() { return 'ua.org.shaddy.tools.url.SimpleUrl'; }
}
