#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Int64
#include <haxe/Int64.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_CurlInfo
#include <ua/org/shaddy/tools/url/CurlInfo.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_CurlInterface
#include <ua/org/shaddy/tools/url/CurlInterface.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_CurlOptions
#include <ua/org/shaddy/tools/url/CurlOptions.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_SimpleUrlCurl
#include <ua/org/shaddy/tools/url/SimpleUrlCurl.h>
#endif
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{

Void SimpleUrlCurl_obj::__construct()
{
HX_STACK_PUSH("SimpleUrlCurl::new","ua/org/shaddy/tools/url/SimpleUrlCurl.hx",28);
{
	HX_STACK_LINE(29)
	this->options = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(33)
	this->options->set(::ua::org::shaddy::tools::url::CurlOptions_obj::FOLLOWLOCATION,(int)1);
	HX_STACK_LINE(34)
	this->options->set(::ua::org::shaddy::tools::url::CurlOptions_obj::HEADER,(int)1);
}
;
	return null();
}

SimpleUrlCurl_obj::~SimpleUrlCurl_obj() { }

Dynamic SimpleUrlCurl_obj::__CreateEmpty() { return  new SimpleUrlCurl_obj; }
hx::ObjectPtr< SimpleUrlCurl_obj > SimpleUrlCurl_obj::__new()
{  hx::ObjectPtr< SimpleUrlCurl_obj > result = new SimpleUrlCurl_obj();
	result->__construct();
	return result;}

Dynamic SimpleUrlCurl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleUrlCurl_obj > result = new SimpleUrlCurl_obj();
	result->__construct();
	return result;}

::String SimpleUrlCurl_obj::get( ::String url){
	HX_STACK_PUSH("SimpleUrlCurl::get","ua/org/shaddy/tools/url/SimpleUrlCurl.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(url,"url");
	HX_STACK_LINE(55)
	this->preRequest();
	HX_STACK_LINE(56)
	::ua::org::shaddy::tools::url::CurlInterface_obj::setOpt(this->handle,::ua::org::shaddy::tools::url::CurlOptions_obj::URL,url);
	HX_STACK_LINE(57)
	return this->makeRequest();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleUrlCurl_obj,get,return )

::String SimpleUrlCurl_obj::makeRequest( ){
	HX_STACK_PUSH("SimpleUrlCurl::makeRequest","ua/org/shaddy/tools/url/SimpleUrlCurl.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_LINE(45)
	::String data = ::ua::org::shaddy::tools::url::CurlInterface_obj::exec(this->handle);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(46)
	int headerSize = ::ua::org::shaddy::tools::url::CurlInterface_obj::getInfo(this->handle,::ua::org::shaddy::tools::url::CurlInfo_obj::HEADER_SIZE);		HX_STACK_VAR(headerSize,"headerSize");
	HX_STACK_LINE(47)
	this->header = data.substring((int)0,(headerSize - (int)1));
	HX_STACK_LINE(48)
	data = data.substring(headerSize,null());
	HX_STACK_LINE(50)
	::ua::org::shaddy::tools::url::CurlInterface_obj::close(this->handle);
	HX_STACK_LINE(51)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleUrlCurl_obj,makeRequest,return )

Void SimpleUrlCurl_obj::preRequest( ){
{
		HX_STACK_PUSH("SimpleUrlCurl::preRequest","ua/org/shaddy/tools/url/SimpleUrlCurl.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_LINE(39)
		this->handle = ::ua::org::shaddy::tools::url::CurlInterface_obj::init();
		HX_STACK_LINE(40)
		::haxe::Log_obj::trace((HX_CSTRING("Handle is:") + ::Std_obj::string(this->handle)),hx::SourceInfo(HX_CSTRING("SimpleUrlCurl.hx"),40,HX_CSTRING("ua.org.shaddy.tools.url.SimpleUrlCurl"),HX_CSTRING("preRequest")));
		HX_STACK_LINE(41)
		::ua::org::shaddy::tools::url::CurlInterface_obj::setOptArray(this->handle,this->options);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleUrlCurl_obj,preRequest,(void))


SimpleUrlCurl_obj::SimpleUrlCurl_obj()
{
}

void SimpleUrlCurl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleUrlCurl);
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void SimpleUrlCurl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(header,"header");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic SimpleUrlCurl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { return header; }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"preRequest") ) { return preRequest_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"makeRequest") ) { return makeRequest_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimpleUrlCurl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleUrlCurl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("header"));
	outFields->push(HX_CSTRING("options"));
	outFields->push(HX_CSTRING("handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get"),
	HX_CSTRING("makeRequest"),
	HX_CSTRING("preRequest"),
	HX_CSTRING("header"),
	HX_CSTRING("options"),
	HX_CSTRING("handle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleUrlCurl_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleUrlCurl_obj::__mClass,"__mClass");
};

Class SimpleUrlCurl_obj::__mClass;

void SimpleUrlCurl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.tools.url.SimpleUrlCurl"), hx::TCanCast< SimpleUrlCurl_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SimpleUrlCurl_obj::__boot()
{
}

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
