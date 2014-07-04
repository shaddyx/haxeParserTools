#ifndef INCLUDED_ua_org_shaddy_tools_url_CurlHandler
#define INCLUDED_ua_org_shaddy_tools_url_CurlHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(ua,org,shaddy,tools,url,CurlHandler)
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{


class HXCPP_CLASS_ATTRIBUTES  CurlHandler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CurlHandler_obj OBJ_;
		CurlHandler_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CurlHandler_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CurlHandler_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CurlHandler"); }

		int lo;
		int hi;
};

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url

#endif /* INCLUDED_ua_org_shaddy_tools_url_CurlHandler */ 
