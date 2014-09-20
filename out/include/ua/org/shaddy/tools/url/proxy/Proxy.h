#ifndef INCLUDED_ua_org_shaddy_tools_url_proxy_Proxy
#define INCLUDED_ua_org_shaddy_tools_url_proxy_Proxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(ua,org,shaddy,tools,url,proxy,Proxy)
HX_DECLARE_CLASS6(ua,org,shaddy,tools,url,proxy,ProxyManager)
HX_DECLARE_CLASS6(ua,org,shaddy,tools,url,proxy,ProxyType)
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{
namespace proxy{


class HXCPP_CLASS_ATTRIBUTES  Proxy_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Proxy_obj OBJ_;
		Proxy_obj();
		Void __construct(::String proxyString);

	public:
		static hx::ObjectPtr< Proxy_obj > __new(::String proxyString);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Proxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Proxy"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::String getKey( );
		Dynamic getKey_dyn();

		virtual Void fail( );
		Dynamic fail_dyn();

		virtual bool isBad( );
		Dynamic isBad_dyn();

		virtual Void parse( ::String proxyString);
		Dynamic parse_dyn();

		::ua::org::shaddy::tools::url::proxy::ProxyManager proxyManager;
		int lastSuccess;
		int failed;
		::String password;
		::String user;
		int port;
		::String address;
		::ua::org::shaddy::tools::url::proxy::ProxyType type;
};

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
} // end namespace proxy

#endif /* INCLUDED_ua_org_shaddy_tools_url_proxy_Proxy */ 
