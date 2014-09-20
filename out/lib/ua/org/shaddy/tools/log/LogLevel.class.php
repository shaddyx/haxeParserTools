<?php

class ua_org_shaddy_tools_log_LogLevel {
	public function __construct(){}
	static $DEBUG = 0;
	static $INFO = 1;
	static $WARN = 2;
	static $ERROR = 3;
	function __toString() { return 'ua.org.shaddy.tools.log.LogLevel'; }
}
