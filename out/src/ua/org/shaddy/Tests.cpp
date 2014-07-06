#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_Tests
#include <ua/org/shaddy/Tests.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_SimpleUrl
#include <ua/org/shaddy/tools/url/SimpleUrl.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_SimpleUrlCurl
#include <ua/org/shaddy/tools/url/SimpleUrlCurl.h>
#endif
namespace ua{
namespace org{
namespace shaddy{

Void Tests_obj::__construct()
{
	return null();
}

Tests_obj::~Tests_obj() { }

Dynamic Tests_obj::__CreateEmpty() { return  new Tests_obj; }
hx::ObjectPtr< Tests_obj > Tests_obj::__new()
{  hx::ObjectPtr< Tests_obj > result = new Tests_obj();
	result->__construct();
	return result;}

Dynamic Tests_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tests_obj > result = new Tests_obj();
	result->__construct();
	return result;}

Void Tests_obj::main( ){
{
		HX_STACK_PUSH("Tests::main","ua/org/shaddy/Tests.hx",7);
		HX_STACK_LINE(8)
		::ua::org::shaddy::tools::url::SimpleUrl a = ::ua::org::shaddy::tools::url::SimpleUrl_obj::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(9)
		::String data = a->get(HX_CSTRING("http://cs617819.vk.me/v617819601/13712/E2rV3iPJMCk.jpg"));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(12)
		::haxe::Log_obj::trace((HX_CSTRING("Request complete:") + data.length),hx::SourceInfo(HX_CSTRING("Tests.hx"),12,HX_CSTRING("ua.org.shaddy.Tests"),HX_CSTRING("main")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tests_obj,main,(void))


Tests_obj::Tests_obj()
{
}

void Tests_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tests);
	HX_MARK_END_CLASS();
}

void Tests_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Tests_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tests_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Tests_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tests_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tests_obj::__mClass,"__mClass");
};

Class Tests_obj::__mClass;

void Tests_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.Tests"), hx::TCanCast< Tests_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Tests_obj::__boot()
{
}

} // end namespace ua
} // end namespace org
} // end namespace shaddy
