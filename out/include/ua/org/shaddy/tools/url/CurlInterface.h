#ifndef INCLUDED_ua_org_shaddy_tools_url_CurlInterface
#define INCLUDED_ua_org_shaddy_tools_url_CurlInterface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS1(haxe,Int64)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(ua,org,shaddy,tools,url,CurlInterface)

	#include <curl/curl.h>
	#include <limits.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string>

namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{


class HXCPP_CLASS_ATTRIBUTES  CurlInterface_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CurlInterface_obj OBJ_;
		CurlInterface_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CurlInterface_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CurlInterface_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CurlInterface"); }

		static ::haxe::Int64 init( );
		static Dynamic init_dyn();

		static bool setOpt( ::haxe::Int64 ch,int option,Dynamic value);
		static Dynamic setOpt_dyn();

		static Void setOptArray( ::haxe::Int64 ch,::haxe::ds::IntMap arr);
		static Dynamic setOptArray_dyn();

		static Dynamic getInfo( ::haxe::Int64 ch,int option);
		static Dynamic getInfo_dyn();

		static Dynamic exec( ::haxe::Int64 ch);
		static Dynamic exec_dyn();

		static bool close( ::haxe::Int64 ch);
		static Dynamic close_dyn();

		static Void setPostFields( Dynamic ch,::haxe::ds::StringMap arr);
		static Dynamic setPostFields_dyn();

};

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url

#endif /* INCLUDED_ua_org_shaddy_tools_url_CurlInterface */ 
