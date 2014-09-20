<?php

class ua_org_shaddy_tools_url_CurlInterface {
	public function __construct(){}
	static function init() {
		return curl_init();
	}
	static function setOpt($ch, $option, $value) {
		haxe_Log::trace("setting[" . _hx_string_rec($option, "") . "]:" . Std::string($value), _hx_anonymous(array("fileName" => "CurlInterfacePhp.hx", "lineNumber" => 14, "className" => "ua.org.shaddy.tools.url.CurlInterface", "methodName" => "setOpt")));
		return curl_setopt($ch, $option, $value);
	}
	static function setOptArray($ch, $arr) {
		if(null == $arr) throw new HException('null iterable');
		$__hx__it = $arr->keys();
		while($__hx__it->hasNext()) {
			$i = $__hx__it->next();
			ua_org_shaddy_tools_url_CurlInterface::setOpt($ch, $i, $arr->get($i));
		}
	}
	static function setPostFields($ch, $arr) {
		$fields = php_Lib::associativeArrayOfHash($arr);
		
			foreach($fields as $k => $v){
				if (substr($v,0,3) === '@@@'){
					$fields[$k] = curl_file_create(substr($v,3), '', $k);
				}
			}
		;
		return ua_org_shaddy_tools_url_CurlInterface::setOpt($ch, ua_org_shaddy_tools_url_CurlOptions::$POSTFIELDS, $fields);
	}
	static function getInfo($ch, $option) {
		return curl_getinfo($ch, $option);
	}
	static function exec($ch) {
		$curlResult = _hx_anonymous(array("data" => "", "errorText" => "", "errorCode" => 0));
		$curlResult->data = curl_exec($ch);
		$curlResult->errorCode = 1;
		$curlResult->errorText = curl_error($ch);
		return $curlResult;
	}
	static function close($ch) {
		return curl_close($ch);
	}
	function __toString() { return 'ua.org.shaddy.tools.url.CurlInterface'; }
}
