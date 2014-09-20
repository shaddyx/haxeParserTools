package ua.org.shaddy.tools.log;
import haxe.ds.IntMap;


class LogLevel{
	public static var DEBUG:Int = 0;
	public static var INFO:Int = 1;
	public static var WARN:Int = 2;
	public static var ERROR:Int = 3;
}

class Logger {
	private static var currentLvl:Int = 0;
	private var name:String;
	private static var backMap:IntMap<String>; 
	public function new(logItem:Dynamic){
		//if (Std.is(logItem
		if (Std.is(logItem, String)){
			name = logItem;
		} else {
			name = Type.getClassName(logItem);
		}
	}
	
	public function error(a:Dynamic, ?b:Dynamic, ?c:Dynamic, ?d:Dynamic){
		log(LogLevel.ERROR, a, b, c, d);
	}
	
	public function warn(a:Dynamic, ?b:Dynamic, ?c:Dynamic, ?d:Dynamic){
		log(LogLevel.WARN, a, b, c, d);
	}
	
	public function info(a:Dynamic, ?b:Dynamic, ?c:Dynamic, ?d:Dynamic){
		log(LogLevel.INFO, a, b, c, d);
	}
	
	public function debug(a:Dynamic, ?b:Dynamic, ?c:Dynamic, ?d:Dynamic){
		log(LogLevel.DEBUG, a, b, c, d);
	}
	
	public function log(lvl:Int, a:Dynamic, b:Dynamic, c:Dynamic, d:Dynamic){
		if (lvl >= currentLvl){
			var msg = mkMessage(lvl, a, b, c, d);
			#if php
				php.Lib.println(msg);
			#elseif cpp
				cpp.Lib.println(msg);
			#else
				trace(msg);
			#end
		}
	}
	
	private function mkMessage(lvl:Int, a:Dynamic, b:Dynamic, c:Dynamic, d:Dynamic):String{
		if (backMap == null) {
			backMap = new IntMap<String>();
			var fields = Type.getClassFields(LogLevel);
			for(field in fields){
				var fieldValue = Reflect.getProperty(LogLevel, field);
				if (Std.is(fieldValue,Int)){
					backMap.set(fieldValue, field);
				}
			}
		}
		
		var msg = new StringBuf();
		msg.add(backMap.get(lvl));
		msg.add(':');
		msg.add(name);
		msg.add(':');
		if (a != null){
			msg.add(a);
		}
		if (b != null){
			msg.add(' ');
			msg.add(b);
		}
		if (c != null){
			msg.add(' ');
			msg.add(c);
		}
		if (d != null){
			msg.add(' ');
			msg.add(d);
		}
		return msg.toString();
	} 
}