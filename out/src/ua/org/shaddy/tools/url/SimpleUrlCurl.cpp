#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_ua_org_shaddy_tools_url_proxy_Proxy
#include <ua/org/shaddy/tools/url/proxy/Proxy.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_proxy_ProxyType
#include <ua/org/shaddy/tools/url/proxy/ProxyType.h>
#endif
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{

Void SimpleUrlCurl_obj::__construct()
{
HX_STACK_PUSH("SimpleUrlCurl::new","ua/org/shaddy/tools/url/SimpleUrlCurl.hx",33);
{
	HX_STACK_LINE(34)
	this->options = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(38)
	this->options->set(::ua::org::shaddy::tools::url::CurlOptions_obj::FOLLOWLOCATION,(int)1);
	HX_STACK_LINE(39)
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

::String SimpleUrlCurl_obj::post( ::String url,::haxe::ds::StringMap postData){
	HX_STACK_PUSH("SimpleUrlCurl::post","ua/org/shaddy/tools/url/SimpleUrlCurl.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_ARG(url,"url");
	HX_STACK_ARG(postData,"postData");
	HX_STACK_LINE(83)
	this->preRequest(url);
	HX_STACK_LINE(84)
	::ua::org::shaddy::tools::url::CurlInterface_obj::setOpt(this->handle,::ua::org::shaddy::tools::url::CurlOptions_obj::POST,true);
	HX_STACK_LINE(85)
	::ua::org::shaddy::tools::url::CurlInterface_obj::setPostFields(this->handle,postData);
	HX_STACK_LINE(86)
	return this->makeRequest();
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleUrlCurl_obj,post,return )

::String SimpleUrlCurl_obj::get( ::String url){
	HX_STACK_PUSH("SimpleUrlCurl::get","ua/org/shaddy/tools/url/SimpleUrlCurl.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_ARG(url,"url");
	HX_STACK_LINE(78)
	this->preRequest(url);
	HX_STACK_LINE(79)
	return this->makeRequest();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleUrlCurl_obj,get,return )

::String SimpleUrlCurl_obj::makeRequest( ){
	HX_STACK_PUSH("SimpleUrlCurl::makeRequest","ua/org/shaddy/tools/url/SimpleUrlCurl.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_LINE(68)
	this->lastResult = ::ua::org::shaddy::tools::url::CurlInterface_obj::exec(this->handle);
	HX_STACK_LINE(69)
	int headerSize = ::ua::org::shaddy::tools::url::CurlInterface_obj::getInfo(this->handle,::ua::org::shaddy::tools::url::CurlInfo_obj::HEADER_SIZE);		HX_STACK_VAR(headerSize,"headerSize");
	HX_STACK_LINE(70)
	::String header = this->lastResult->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("substring"),true)((int)0,(headerSize - (int)1));		HX_STACK_VAR(header,"header");
	HX_STACK_LINE(71)
	::String data = this->lastResult->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("substring"),true)(headerSize,null());		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(73)
	::ua::org::shaddy::tools::url::CurlInterface_obj::close(this->handle);
	HX_STACK_LINE(74)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleUrlCurl_obj,makeRequest,return )

Void SimpleUrlCurl_obj::preRequest( ::String url){
{
		HX_STACK_PUSH("SimpleUrlCurl::preRequest","ua/org/shaddy/tools/url/SimpleUrlCurl.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_ARG(url,"url");
		HX_STACK_LINE(44)
		this->handle = ::ua::org::shaddy::tools::url::CurlInterface_obj::init();
		HX_STACK_LINE(45)
		::ua::org::shaddy::tools::url::CurlInterface_obj::setOpt(this->handle,::ua::org::shaddy::tools::url::CurlOptions_obj::URL,url);
		HX_STACK_LINE(46)
		if (((this->proxy != null()))){
			HX_STACK_LINE(47)
			::haxe::Log_obj::trace(HX_CSTRING("Setting proxy"),hx::SourceInfo(HX_CSTRING("SimpleUrlCurl.hx"),47,HX_CSTRING("ua.org.shaddy.tools.url.SimpleUrlCurl"),HX_CSTRING("preRequest")));
			HX_STACK_LINE(48)
			::ua::org::shaddy::tools::url::CurlInterface_obj::setOpt(this->handle,::ua::org::shaddy::tools::url::CurlOptions_obj::PROXY,this->proxy->address);
			HX_STACK_LINE(49)
			::ua::org::shaddy::tools::url::CurlInterface_obj::setOpt(this->handle,::ua::org::shaddy::tools::url::CurlOptions_obj::PROXYPORT,this->proxy->port);
			HX_STACK_LINE(50)
			int type = (int)0;		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				::ua::org::shaddy::tools::url::SimpleUrlCurl _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(51)
				{
					::ua::org::shaddy::tools::url::proxy::ProxyType _switch_1 = (_g->proxy->type);
					switch((_switch_1)->GetIndex()){
						case 2: {
							HX_STACK_LINE(52)
							type = (int)0;
						}
						;break;
						case 1: {
							HX_STACK_LINE(54)
							type = (int)4;
						}
						;break;
						case 0: {
							HX_STACK_LINE(56)
							type = (int)5;
						}
						;break;
					}
				}
			}
			HX_STACK_LINE(59)
			::ua::org::shaddy::tools::url::CurlInterface_obj::setOpt(this->handle,::ua::org::shaddy::tools::url::CurlOptions_obj::PROXYTYPE,type);
			HX_STACK_LINE(60)
			::ua::org::shaddy::tools::url::CurlInterface_obj::setOpt(this->handle,::ua::org::shaddy::tools::url::CurlOptions_obj::USERPWD,((this->proxy->user + HX_CSTRING(":")) + this->proxy->password));
		}
		else{
			HX_STACK_LINE(61)
			::haxe::Log_obj::trace(HX_CSTRING("Proxy is false"),hx::SourceInfo(HX_CSTRING("SimpleUrlCurl.hx"),62,HX_CSTRING("ua.org.shaddy.tools.url.SimpleUrlCurl"),HX_CSTRING("preRequest")));
		}
		HX_STACK_LINE(64)
		::ua::org::shaddy::tools::url::CurlInterface_obj::setOptArray(this->handle,this->options);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleUrlCurl_obj,preRequest,(void))


SimpleUrlCurl_obj::SimpleUrlCurl_obj()
{
}

void SimpleUrlCurl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleUrlCurl);
	HX_MARK_MEMBER_NAME(proxy,"proxy");
	HX_MARK_MEMBER_NAME(lastResult,"lastResult");
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void SimpleUrlCurl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(proxy,"proxy");
	HX_VISIT_MEMBER_NAME(lastResult,"lastResult");
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
	case 4:
		if (HX_FIELD_EQ(inName,"post") ) { return post_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"proxy") ) { return proxy; }
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
		if (HX_FIELD_EQ(inName,"lastResult") ) { return lastResult; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"makeRequest") ) { return makeRequest_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimpleUrlCurl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"proxy") ) { proxy=inValue.Cast< ::ua::org::shaddy::tools::url::proxy::Proxy >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastResult") ) { lastResult=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleUrlCurl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("proxy"));
	outFields->push(HX_CSTRING("lastResult"));
	outFields->push(HX_CSTRING("header"));
	outFields->push(HX_CSTRING("options"));
	outFields->push(HX_CSTRING("handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("post"),
	HX_CSTRING("get"),
	HX_CSTRING("makeRequest"),
	HX_CSTRING("preRequest"),
	HX_CSTRING("proxy"),
	HX_CSTRING("lastResult"),
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
