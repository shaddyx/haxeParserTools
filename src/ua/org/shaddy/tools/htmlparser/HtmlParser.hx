package ua.org.shaddy.tools.htmlparser;
import haxe.ds.StringMap;
class HtmlParser {
	
	private var document:HtmlElement;
	private var currentElement:HtmlElement;
	private var selfClosedTags:StringMap<Bool>;
	public function new(){
		selfClosedTags = new StringMap<Bool>();
		selfClosedTags.set("br", true);
	}
	
	private function tagFound (tagName:String, attributes:StringMap<String>){
		if (selfClosedTags.exists(tagName)){
			return;
		}
		var element = new HtmlElement(tagName, attributes);
		currentElement.appendChild(element);
		currentElement = element;
	}
	
	private function tagEndFound (tagName:String){
		if (tagName == currentElement.tagName){
			currentElement = currentElement.parentNode; 
		} else {
			var oldElem = currentElement;
			do {
				currentElement = currentElement.parentNode;
				if (currentElement != null && tagName == currentElement.tagName){
					break;
				} 
			} while (currentElement != null);
			if (currentElement == null){
				currentElement = oldElem;
			}
		}
	}
	
	private function textFound(text:String){
		var element = new HtmlElement("textNode");
		element.innerText = text;
		currentElement.appendChild(element);
	}
	
	public function parse(html:String):HtmlElement{
		document = new HtmlElement("document");
		currentElement = document;
		var parser = new HtmlSaxParser();
		parser.tagFound = tagFound;
		parser.tagEndFound = tagEndFound;
		parser.textFound = textFound;
		parser.parse(html);
		return document;
	}
}