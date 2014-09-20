#ifndef INCLUDED_ua_org_shaddy_tools_log_LogLevel
#define INCLUDED_ua_org_shaddy_tools_log_LogLevel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(ua,org,shaddy,tools,log,LogLevel)
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace log{


class HXCPP_CLASS_ATTRIBUTES  LogLevel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LogLevel_obj OBJ_;
		LogLevel_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LogLevel_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LogLevel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LogLevel"); }

		static int DEBUG;
		static int INFO;
		static int WARN;
		static int ERROR;
};

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace log

#endif /* INCLUDED_ua_org_shaddy_tools_log_LogLevel */ 
