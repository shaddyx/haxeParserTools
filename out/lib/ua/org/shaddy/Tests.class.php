<?php

class ua_org_shaddy_Tests {
	public function __construct(){}
	static function main() {
		$url = new ua_org_shaddy_tools_url_SimpleUrl();
		$html = sys_io_File::getContent("test.html");
		$htmlParser = new ua_org_shaddy_tools_htmlparser_HtmlParser();
		$res = $htmlParser->parse($html);
		haxe_Log::trace($res, _hx_anonymous(array("fileName" => "Tests.hx", "lineNumber" => 53, "className" => "ua.org.shaddy.Tests", "methodName" => "main")));
		sys_io_File::saveContent("outTest.html", $res->toString());
	}
	function __toString() { return 'ua.org.shaddy.Tests'; }
}
