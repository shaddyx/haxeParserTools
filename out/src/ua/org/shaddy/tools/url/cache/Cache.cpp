#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_cache_Cache
#include <ua/org/shaddy/tools/url/cache/Cache.h>
#endif
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{
namespace cache{

Void Cache_obj::__construct(::String path)
{
HX_STACK_PUSH("Cache::new","ua/org/shaddy/tools/url/cache/Cache.hx",4);
{
	HX_STACK_LINE(5)
	this->path = HX_CSTRING("cache/");
	HX_STACK_LINE(8)
	if (((path == null()))){
		HX_STACK_LINE(8)
		path = HX_CSTRING("./cache");
	}
	HX_STACK_LINE(11)
	this->path = path;
}
;
	return null();
}

Cache_obj::~Cache_obj() { }

Dynamic Cache_obj::__CreateEmpty() { return  new Cache_obj; }
hx::ObjectPtr< Cache_obj > Cache_obj::__new(::String path)
{  hx::ObjectPtr< Cache_obj > result = new Cache_obj();
	result->__construct(path);
	return result;}

Dynamic Cache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cache_obj > result = new Cache_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Cache_obj::put( Dynamic url,Dynamic data){
{
		HX_STACK_PUSH("Cache::put","ua/org/shaddy/tools/url/cache/Cache.hx",23);
		HX_STACK_THIS(this);
		HX_STACK_ARG(url,"url");
		HX_STACK_ARG(data,"data");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cache_obj,put,(void))

::String Cache_obj::get( ::String url){
	HX_STACK_PUSH("Cache::get","ua/org/shaddy/tools/url/cache/Cache.hx",14);
	HX_STACK_THIS(this);
	HX_STACK_ARG(url,"url");
	HX_STACK_LINE(15)
	::String fileName = ((this->path + HX_CSTRING("/")) + ::StringTools_obj::urlEncode(url));		HX_STACK_VAR(fileName,"fileName");
	HX_STACK_LINE(16)
	if ((::sys::FileSystem_obj::sys_exists(fileName))){
		HX_STACK_LINE(16)
		return ::sys::io::File_obj::getContent(fileName);
	}
	else{
		HX_STACK_LINE(18)
		return null();
	}
	HX_STACK_LINE(16)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cache_obj,get,return )


Cache_obj::Cache_obj()
{
}

void Cache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cache);
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_END_CLASS();
}

void Cache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
}

Dynamic Cache_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Cache_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Cache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("path"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("put"),
	HX_CSTRING("get"),
	HX_CSTRING("path"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cache_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cache_obj::__mClass,"__mClass");
};

Class Cache_obj::__mClass;

void Cache_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.tools.url.cache.Cache"), hx::TCanCast< Cache_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Cache_obj::__boot()
{
}

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
} // end namespace cache
