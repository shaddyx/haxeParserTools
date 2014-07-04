#include <hxcpp.h>

#ifndef INCLUDED_ua_org_shaddy_tools_url_CurlHandler
#include <ua/org/shaddy/tools/url/CurlHandler.h>
#endif
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{

Void CurlHandler_obj::__construct()
{
	return null();
}

CurlHandler_obj::~CurlHandler_obj() { }

Dynamic CurlHandler_obj::__CreateEmpty() { return  new CurlHandler_obj; }
hx::ObjectPtr< CurlHandler_obj > CurlHandler_obj::__new()
{  hx::ObjectPtr< CurlHandler_obj > result = new CurlHandler_obj();
	result->__construct();
	return result;}

Dynamic CurlHandler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CurlHandler_obj > result = new CurlHandler_obj();
	result->__construct();
	return result;}


CurlHandler_obj::CurlHandler_obj()
{
}

void CurlHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CurlHandler);
	HX_MARK_MEMBER_NAME(lo,"lo");
	HX_MARK_MEMBER_NAME(hi,"hi");
	HX_MARK_END_CLASS();
}

void CurlHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lo,"lo");
	HX_VISIT_MEMBER_NAME(hi,"hi");
}

Dynamic CurlHandler_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lo") ) { return lo; }
		if (HX_FIELD_EQ(inName,"hi") ) { return hi; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CurlHandler_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lo") ) { lo=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hi") ) { hi=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CurlHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lo"));
	outFields->push(HX_CSTRING("hi"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("lo"),
	HX_CSTRING("hi"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CurlHandler_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CurlHandler_obj::__mClass,"__mClass");
};

Class CurlHandler_obj::__mClass;

void CurlHandler_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.tools.url.CurlHandler"), hx::TCanCast< CurlHandler_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CurlHandler_obj::__boot()
{
}

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
