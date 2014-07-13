package ua.org.shaddy.tools.url.cache;
import sys.io.File;
import sys.FileSystem;
class Cache {
	public var path:String = "cache/";
	
	public function new(?path:String){
		if (path == null){
			path = "./cache";
		}
		this.path = path;
	}
	
	public function get(url):String{
		var fileName = path + '/' + StringTools.urlEncode(url);
		if (FileSystem.exists(fileName)){
			return File.getContent(fileName);
		} else {
			return null;
		}
	}
	
	public function put(url, data){
	}
}