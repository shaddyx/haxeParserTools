#ifndef INCLUDED_ua_org_shaddy_tools_url_SimpleUrl
#define INCLUDED_ua_org_shaddy_tools_url_SimpleUrl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <ua/org/shaddy/tools/url/SimpleUrlCurl.h>
HX_DECLARE_CLASS5(ua,org,shaddy,tools,url,SimpleUrl)
HX_DECLARE_CLASS5(ua,org,shaddy,tools,url,SimpleUrlCurl)
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{


class HXCPP_CLASS_ATTRIBUTES  SimpleUrl_obj : public ::ua::org::shaddy::tools::url::SimpleUrlCurl_obj{
	public:
		typedef ::ua::org::shaddy::tools::url::SimpleUrlCurl_obj super;
		typedef SimpleUrl_obj OBJ_;
		SimpleUrl_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SimpleUrl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SimpleUrl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SimpleUrl"); }

};

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url

#endif /* INCLUDED_ua_org_shaddy_tools_url_SimpleUrl */ 
