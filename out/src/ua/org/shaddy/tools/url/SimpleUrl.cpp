#include <hxcpp.h>

#ifndef INCLUDED_ua_org_shaddy_tools_url_SimpleUrl
#include <ua/org/shaddy/tools/url/SimpleUrl.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_SimpleUrlCurl
#include <ua/org/shaddy/tools/url/SimpleUrlCurl.h>
#endif
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{

Void SimpleUrl_obj::__construct()
{
HX_STACK_PUSH("SimpleUrl::new","ua/org/shaddy/tools/url/SimpleUrl.hx",5);
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

SimpleUrl_obj::~SimpleUrl_obj() { }

Dynamic SimpleUrl_obj::__CreateEmpty() { return  new SimpleUrl_obj; }
hx::ObjectPtr< SimpleUrl_obj > SimpleUrl_obj::__new()
{  hx::ObjectPtr< SimpleUrl_obj > result = new SimpleUrl_obj();
	result->__construct();
	return result;}

Dynamic SimpleUrl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleUrl_obj > result = new SimpleUrl_obj();
	result->__construct();
	return result;}


SimpleUrl_obj::SimpleUrl_obj()
{
}

void SimpleUrl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleUrl);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleUrl_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SimpleUrl_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SimpleUrl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleUrl_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleUrl_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleUrl_obj::__mClass,"__mClass");
};

Class SimpleUrl_obj::__mClass;

void SimpleUrl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.tools.url.SimpleUrl"), hx::TCanCast< SimpleUrl_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SimpleUrl_obj::__boot()
{
}

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
