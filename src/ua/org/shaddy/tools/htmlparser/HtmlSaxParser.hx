package ua.org.shaddy.tools.htmlparser;
import ua.org.shaddy.tools.Regex;
import haxe.ds.StringMap;
enum Mode {
	Normal;
	Script;
	Comment;
	Text;
}
class HtmlSaxParser {
	
	public var tagFound:String->StringMap<String>->Void;
	public var tagEndFound:String->Void;
	public var textFound:String->Void;
	public var commentFound:Void->Void;
	public var commentEndFound:Void->Void;
	private var attrRe:Regex;
	private var tagRe:Regex;
	private var tagNameRe:Regex;
	
	private var mode:Mode;
	
	public function new(){
		tagRe = new Regex("\\<(.*?)\\>","g");
	 	attrRe = new Regex("([a-zA-Z0-9]*?)=([\"\\'])(.*?)\\2","g");
	 	tagNameRe = new Regex("$[\\/]{0,1}[a-zA-Z0-9]*?","");
	 	tagFound = function(tagName:String, attributes:StringMap<String>){
	 	}
	 	tagEndFound = function(tagName:String){
	 	}
	 	textFound = function(text:String){
	 	}
	 	commentFound = function(){
	 	}
	 	commentEndFound = function(){
	 	}
	}
	
	private function parseAttrs(tag:String):StringMap<String>{
		var attrs = new StringMap<String>();
		//trace(attrs);
		var result = attrRe.matchAll(tag);
		for (attr in result){
			attrs.set(attr.get(1),attr.get(3));
		}
		return attrs;
	}
	
	public function parse(data:String) {
		
		var tags = tagRe.matchAll(data);
		//trace (tags);
		
		var oldTagPos:Int = 0;
		for (tagContainer in tags){
			
			var startTag = true;
			var tagStr = tagContainer.get(1);
			var fullTag = tagContainer.get(0);
			var tagLen = fullTag.length;
			var firstSpacePos = tagStr.indexOf(' ');
			var tagName;
			var alreadyClosed = false;
			if (tagStr.charAt(0) == "/") {
				startTag = false;
				if (firstSpacePos != -1) {
					tagName = tagStr.substr(1, firstSpacePos);
				} else {
					tagName = tagStr.substr(1);
				}
			} else {
				if (tagStr.charAt(tagStr.length - 1) == "/") {
					alreadyClosed = true;
					if (firstSpacePos != -1) {
						tagName = tagStr.substr(0, firstSpacePos);
					} else {
						tagName = tagStr.substr(0, tagStr.length - 1);
					}
				} else {
					if (firstSpacePos != -1) {
						tagName = tagStr.substr(0, firstSpacePos + 1);
					} else {
						tagName = tagStr;
					}
				}
			}
			tagName = StringTools.trim(tagName);
			
			//trace("TagStr:" + tagStr);
			//trace("TagName:" + tagName);
			var attrs;
			if (startTag){
				tagFound(tagName, parseAttrs(tagStr));
			} 
			
			if (oldTagPos < tagContainer.pos) {
				var text = StringTools.trim(data.substring(oldTagPos, tagContainer.pos));
				if (text.length > 0){
					if (textFound != null){
						textFound(text);
					}
				}
			}
			if (!startTag || alreadyClosed) {
				tagEndFound(tagName);
			}
			
			oldTagPos = tagContainer.pos + tagContainer.len;
		}
	}
}