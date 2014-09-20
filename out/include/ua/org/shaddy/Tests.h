#ifndef INCLUDED_ua_org_shaddy_Tests
#define INCLUDED_ua_org_shaddy_Tests

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(ua,org,shaddy,Tests)
namespace ua{
namespace org{
namespace shaddy{


class HXCPP_CLASS_ATTRIBUTES  Tests_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tests_obj OBJ_;
		Tests_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Tests_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tests_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tests"); }

		static Void main( );
		static Dynamic main_dyn();

};

} // end namespace ua
} // end namespace org
} // end namespace shaddy

#endif /* INCLUDED_ua_org_shaddy_Tests */ 
