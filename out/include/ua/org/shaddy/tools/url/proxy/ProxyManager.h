#ifndef INCLUDED_ua_org_shaddy_tools_url_proxy_ProxyManager
#define INCLUDED_ua_org_shaddy_tools_url_proxy_ProxyManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(ua,org,shaddy,tools,log,Logger)
HX_DECLARE_CLASS6(ua,org,shaddy,tools,url,proxy,Proxy)
HX_DECLARE_CLASS6(ua,org,shaddy,tools,url,proxy,ProxyManager)
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{
namespace proxy{


class HXCPP_CLASS_ATTRIBUTES  ProxyManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ProxyManager_obj OBJ_;
		ProxyManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ProxyManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ProxyManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ProxyManager"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::ua::org::shaddy::tools::url::proxy::Proxy get( );
		Dynamic get_dyn();

		virtual Void refreshProxy( ::ua::org::shaddy::tools::url::proxy::Proxy proxy);
		Dynamic refreshProxy_dyn();

		virtual Void save( ::String fileName);
		Dynamic save_dyn();

		virtual int load( ::String fileName);
		Dynamic load_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::ua::org::shaddy::tools::url::proxy::Proxy addProxy( Dynamic proxyS);
		Dynamic addProxy_dyn();

		int index;
		Array< ::String > list;
		::haxe::ds::StringMap badMap;
		::haxe::ds::StringMap map;
		static ::ua::org::shaddy::tools::log::Logger logger;
};

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
} // end namespace proxy

#endif /* INCLUDED_ua_org_shaddy_tools_url_proxy_ProxyManager */ 
