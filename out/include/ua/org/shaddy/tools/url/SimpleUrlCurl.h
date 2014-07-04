#ifndef INCLUDED_ua_org_shaddy_tools_url_SimpleUrlCurl
#define INCLUDED_ua_org_shaddy_tools_url_SimpleUrlCurl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS5(ua,org,shaddy,tools,url,SimpleUrlCurl)
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{


class HXCPP_CLASS_ATTRIBUTES  SimpleUrlCurl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SimpleUrlCurl_obj OBJ_;
		SimpleUrlCurl_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SimpleUrlCurl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SimpleUrlCurl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SimpleUrlCurl"); }

		virtual ::String get( ::String url);
		Dynamic get_dyn();

		virtual ::String makeRequest( );
		Dynamic makeRequest_dyn();

		virtual Void preRequest( );
		Dynamic preRequest_dyn();

		::String header;
		::haxe::ds::IntMap options;
		Dynamic handle;
};

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url

#endif /* INCLUDED_ua_org_shaddy_tools_url_SimpleUrlCurl */ 
