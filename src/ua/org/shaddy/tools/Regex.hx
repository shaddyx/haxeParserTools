package ua.org.shaddy.tools;
class RegexMatch{
	private var arr:Array<String>;
	public var pos:Int;
	public var len:Int;
	
	public function new(){
		arr = new Array<String>();
	}
	public function put(match:String){
		arr.insert(arr.length, match);
	}
	
	public function get(index:Int):String{
		if (arr.length == 0 || arr.length < index){
			throw "RegexMatch has no key " + index;
		}
		return arr[index];
	}
	
	public function toString():String{
		return "[" + pos + ":" + len + "]" + arr.toString();
	}
	 
} 
class Regex {
	private var re:EReg;
	public function new(regex:String, opts:String){
		re = new EReg(regex, opts);
	}
	
	public function matchAll(data:String):List<RegexMatch>{
		var matches = new List<RegexMatch>();
		var pos = 0;
		while(re.match(data)){
			data = re.matchedRight();
			var match = new RegexMatch();
			var p = re.matchedPos();
			pos += p.pos;
			match.pos = pos;
			match.len = p.len;
			pos += p.len;
			var counter = 0;
			var res:String = null;
			do {
				try {
					res = re.matched(counter);
				} catch (e:Dynamic){
					break;
				}
				if (res != null){
					match.put(res);
				}
				counter ++;
			} while (res != null);
			matches.add(match);
		}
		return matches;
	}
	
	public function match(data:String):RegexMatch{
		if (re.match(data)) {
			var match = new RegexMatch();
			var counter = 0;
			var res;
			do {
				try {
					res = re.matched(counter);
				} catch (e:Dynamic){
					break;
				}
				if (res != null){
					match.put(res);
				}
				counter ++;
			} while (res != null);
			return match;
		}
		return null;
	}
}