package ua.org.shaddy.tools.htmlparser;
import haxe.ds.StringMap;

class HtmlElement {
	public var tagName:String = "HtmlElement";
	public var childNodes:Array<HtmlElement>;
	public var attributes:StringMap<String>;
	public var nextSibling:HtmlElement;
	public var prevSibling:HtmlElement;
	public var parentNode:HtmlElement;
	public var innerText:String;
	
	public function new(tagName:String, ?attributes:StringMap<String>){
		this.tagName = tagName;
		childNodes = new Array<HtmlElement>();
		if (attributes == null){
			attributes = new StringMap<String>();
		}
		this.attributes = attributes;
		innerText = '';
	}
	
	public function appendChild(child:HtmlElement):HtmlElement{
		var rebuildNeed = false;
		if (Lambda.has(childNodes,child)){
			childNodes.remove(child);
			rebuildNeed = true;
			
		}
		var index = childNodes.length; 
		childNodes.push(child);
		child.parentNode = this;
		if (rebuildNeed){
			rebuildSiblings();
		}
		return child;
	}
	
	private function rebuildSiblings(){
		var old:HtmlElement = null;
		for (element in childNodes){
			if (old != null){
				old.nextSibling = element;
			}
			element.prevSibling = old;
			element.parentNode = this;
			old = element;
		}
	}
	
	public function setAttribute(name:String, value:String){
		attributes.set(name, value);
	}
	
	public function toString():String{
		/*if (tagName == "textNode") {
			return innerText;
		}*/
		var b = new StringBuf();
		b.add('<');
		b.add(tagName);
		for (attributeName in attributes.keys()){
			b.add(' ');
			b.add(attributeName);
			b.add('="');
			b.add(attributes.get(attributeName));
			b.add('"');
		}
		b.add('>');
		if (innerText.length > 0) {
			b.add(innerText);
		} else {
			for (element in childNodes){
				b.add(element.toString());
			}
		}
		b.add('</');
		b.add(tagName);
		b.add('>');
		
		return b.toString();
	}

}