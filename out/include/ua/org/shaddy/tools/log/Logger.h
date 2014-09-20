#ifndef INCLUDED_ua_org_shaddy_tools_log_Logger
#define INCLUDED_ua_org_shaddy_tools_log_Logger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS5(ua,org,shaddy,tools,log,Logger)
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace log{


class HXCPP_CLASS_ATTRIBUTES  Logger_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Logger_obj OBJ_;
		Logger_obj();
		Void __construct(Dynamic logItem);

	public:
		static hx::ObjectPtr< Logger_obj > __new(Dynamic logItem);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Logger_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Logger"); }

		virtual ::String mkMessage( int lvl,Dynamic a,Dynamic b,Dynamic c,Dynamic d);
		Dynamic mkMessage_dyn();

		virtual Void log( int lvl,Dynamic a,Dynamic b,Dynamic c,Dynamic d);
		Dynamic log_dyn();

		virtual Void debug( Dynamic a,Dynamic b,Dynamic c,Dynamic d);
		Dynamic debug_dyn();

		virtual Void info( Dynamic a,Dynamic b,Dynamic c,Dynamic d);
		Dynamic info_dyn();

		virtual Void warn( Dynamic a,Dynamic b,Dynamic c,Dynamic d);
		Dynamic warn_dyn();

		virtual Void error( Dynamic a,Dynamic b,Dynamic c,Dynamic d);
		Dynamic error_dyn();

		::String name;
		static int currentLvl;
		static ::haxe::ds::IntMap backMap;
};

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace log

#endif /* INCLUDED_ua_org_shaddy_tools_log_Logger */ 
