<?php

class ua_org_shaddy_tools_url_proxy_ProxyType extends Enum {
	public static $http;
	public static $socks4;
	public static $socks5;
	public static $__constructors = array(2 => 'http', 1 => 'socks4', 0 => 'socks5');
	}
ua_org_shaddy_tools_url_proxy_ProxyType::$http = new ua_org_shaddy_tools_url_proxy_ProxyType("http", 2);
ua_org_shaddy_tools_url_proxy_ProxyType::$socks4 = new ua_org_shaddy_tools_url_proxy_ProxyType("socks4", 1);
ua_org_shaddy_tools_url_proxy_ProxyType::$socks5 = new ua_org_shaddy_tools_url_proxy_ProxyType("socks5", 0);
