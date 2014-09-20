<?php

class ua_org_shaddy_tools_log_Logger {
	public function __construct($logItem) {
		if(!php_Boot::$skip_constructor) {
		if(Std::is($logItem, _hx_qtype("String"))) {
			$this->name = $logItem;
		} else {
			$this->name = Type::getClassName($logItem);
		}
	}}
	public function mkMessage($lvl, $a, $b, $c, $d) {
		if(ua_org_shaddy_tools_log_Logger::$backMap === null) {
			ua_org_shaddy_tools_log_Logger::$backMap = new haxe_ds_IntMap();
			$fields = Type::getClassFields(_hx_qtype("ua.org.shaddy.tools.log.LogLevel"));
			{
				$_g = 0;
				while($_g < $fields->length) {
					$field = $fields[$_g];
					++$_g;
					$fieldValue = Reflect::getProperty(_hx_qtype("ua.org.shaddy.tools.log.LogLevel"), $field);
					if(Std::is($fieldValue, _hx_qtype("Int"))) {
						ua_org_shaddy_tools_log_Logger::$backMap->set($fieldValue, $field);
					}
					unset($fieldValue,$field);
				}
			}
		}
		$msg = new StringBuf();
		$msg->add(ua_org_shaddy_tools_log_Logger::$backMap->get($lvl));
		$msg->add(":");
		$msg->add($this->name);
		$msg->add(":");
		if($a !== null) {
			$msg->add($a);
		}
		if($b !== null) {
			$msg->add(" ");
			$msg->add($b);
		}
		if($c !== null) {
			$msg->add(" ");
			$msg->add($c);
		}
		if($d !== null) {
			$msg->add(" ");
			$msg->add($d);
		}
		return $msg->b;
	}
	public function log($lvl, $a, $b, $c, $d) {
		if($lvl >= ua_org_shaddy_tools_log_Logger::$currentLvl) {
			$msg = $this->mkMessage($lvl, $a, $b, $c, $d);
			php_Lib::println($msg);
		}
	}
	public function debug($a, $b = null, $c = null, $d = null) {
		$this->log(ua_org_shaddy_tools_log_LogLevel::$DEBUG, $a, $b, $c, $d);
	}
	public function info($a, $b = null, $c = null, $d = null) {
		$this->log(ua_org_shaddy_tools_log_LogLevel::$INFO, $a, $b, $c, $d);
	}
	public function warn($a, $b = null, $c = null, $d = null) {
		$this->log(ua_org_shaddy_tools_log_LogLevel::$WARN, $a, $b, $c, $d);
	}
	public function error($a, $b = null, $c = null, $d = null) {
		$this->log(ua_org_shaddy_tools_log_LogLevel::$ERROR, $a, $b, $c, $d);
	}
	public $name;
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
	static $currentLvl = 0;
	static $backMap;
	function __toString() { return 'ua.org.shaddy.tools.log.Logger'; }
}
