package ua.org.shaddy.tools.url.cache;
import sys.io.File;
class CacheItem {
	public var data:String;
	public var url:String;
	public var path:String;
	public function new(path:String, url:String, ?data:String){
		if (data == null){
			this.data = File.getContent(path + '/' + StringTools.urlEncode(url));
		} else {
			File.saveContent(path + '/' + StringTools.urlEncode(url), data);
			this.data = data;
		}
		this.url = url;
		this.path = path;
	}
	
}