#include <hxcpp.h>

#ifndef INCLUDED_ua_org_shaddy_tools_url_proxy_ProxyType
#include <ua/org/shaddy/tools/url/proxy/ProxyType.h>
#endif
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{
namespace proxy{

::ua::org::shaddy::tools::url::proxy::ProxyType ProxyType_obj::http;

::ua::org::shaddy::tools::url::proxy::ProxyType ProxyType_obj::socks4;

::ua::org::shaddy::tools::url::proxy::ProxyType ProxyType_obj::socks5;

HX_DEFINE_CREATE_ENUM(ProxyType_obj)

int ProxyType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("http")) return 2;
	if (inName==HX_CSTRING("socks4")) return 1;
	if (inName==HX_CSTRING("socks5")) return 0;
	return super::__FindIndex(inName);
}

int ProxyType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("http")) return 0;
	if (inName==HX_CSTRING("socks4")) return 0;
	if (inName==HX_CSTRING("socks5")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ProxyType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("http")) return http;
	if (inName==HX_CSTRING("socks4")) return socks4;
	if (inName==HX_CSTRING("socks5")) return socks5;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("socks5"),
	HX_CSTRING("socks4"),
	HX_CSTRING("http"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProxyType_obj::http,"http");
	HX_MARK_MEMBER_NAME(ProxyType_obj::socks4,"socks4");
	HX_MARK_MEMBER_NAME(ProxyType_obj::socks5,"socks5");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProxyType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProxyType_obj::http,"http");
	HX_VISIT_MEMBER_NAME(ProxyType_obj::socks4,"socks4");
	HX_VISIT_MEMBER_NAME(ProxyType_obj::socks5,"socks5");
};

static ::String sMemberFields[] = { ::String(null()) };
Class ProxyType_obj::__mClass;

Dynamic __Create_ProxyType_obj() { return new ProxyType_obj; }

void ProxyType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.tools.url.proxy.ProxyType"), hx::TCanCast< ProxyType_obj >,sStaticFields,sMemberFields,
	&__Create_ProxyType_obj, &__Create,
	&super::__SGetClass(), &CreateProxyType_obj, sMarkStatics, sVisitStatic);
}

void ProxyType_obj::__boot()
{
hx::Static(http) = hx::CreateEnum< ProxyType_obj >(HX_CSTRING("http"),2);
hx::Static(socks4) = hx::CreateEnum< ProxyType_obj >(HX_CSTRING("socks4"),1);
hx::Static(socks5) = hx::CreateEnum< ProxyType_obj >(HX_CSTRING("socks5"),0);
}


} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
} // end namespace proxy
