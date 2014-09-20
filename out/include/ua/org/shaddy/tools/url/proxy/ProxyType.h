#ifndef INCLUDED_ua_org_shaddy_tools_url_proxy_ProxyType
#define INCLUDED_ua_org_shaddy_tools_url_proxy_ProxyType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(ua,org,shaddy,tools,url,proxy,ProxyType)
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{
namespace proxy{


class ProxyType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ProxyType_obj OBJ_;

	public:
		ProxyType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("ua.org.shaddy.tools.url.proxy.ProxyType"); }
		::String __ToString() const { return HX_CSTRING("ProxyType.") + tag; }

		static ::ua::org::shaddy::tools::url::proxy::ProxyType http;
		static inline ::ua::org::shaddy::tools::url::proxy::ProxyType http_dyn() { return http; }
		static ::ua::org::shaddy::tools::url::proxy::ProxyType socks4;
		static inline ::ua::org::shaddy::tools::url::proxy::ProxyType socks4_dyn() { return socks4; }
		static ::ua::org::shaddy::tools::url::proxy::ProxyType socks5;
		static inline ::ua::org::shaddy::tools::url::proxy::ProxyType socks5_dyn() { return socks5; }
};

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
} // end namespace proxy

#endif /* INCLUDED_ua_org_shaddy_tools_url_proxy_ProxyType */ 
