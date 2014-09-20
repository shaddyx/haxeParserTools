#include <hxcpp.h>

#ifndef INCLUDED_ua_org_shaddy_tools_log_LogLevel
#include <ua/org/shaddy/tools/log/LogLevel.h>
#endif
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace log{

Void LogLevel_obj::__construct()
{
	return null();
}

LogLevel_obj::~LogLevel_obj() { }

Dynamic LogLevel_obj::__CreateEmpty() { return  new LogLevel_obj; }
hx::ObjectPtr< LogLevel_obj > LogLevel_obj::__new()
{  hx::ObjectPtr< LogLevel_obj > result = new LogLevel_obj();
	result->__construct();
	return result;}

Dynamic LogLevel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogLevel_obj > result = new LogLevel_obj();
	result->__construct();
	return result;}

int LogLevel_obj::DEBUG;

int LogLevel_obj::INFO;

int LogLevel_obj::WARN;

int LogLevel_obj::ERROR;


LogLevel_obj::LogLevel_obj()
{
}

void LogLevel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogLevel);
	HX_MARK_END_CLASS();
}

void LogLevel_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic LogLevel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"INFO") ) { return INFO; }
		if (HX_FIELD_EQ(inName,"WARN") ) { return WARN; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"DEBUG") ) { return DEBUG; }
		if (HX_FIELD_EQ(inName,"ERROR") ) { return ERROR; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LogLevel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"INFO") ) { INFO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WARN") ) { WARN=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"DEBUG") ) { DEBUG=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ERROR") ) { ERROR=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogLevel_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEBUG"),
	HX_CSTRING("INFO"),
	HX_CSTRING("WARN"),
	HX_CSTRING("ERROR"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogLevel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LogLevel_obj::DEBUG,"DEBUG");
	HX_MARK_MEMBER_NAME(LogLevel_obj::INFO,"INFO");
	HX_MARK_MEMBER_NAME(LogLevel_obj::WARN,"WARN");
	HX_MARK_MEMBER_NAME(LogLevel_obj::ERROR,"ERROR");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogLevel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LogLevel_obj::DEBUG,"DEBUG");
	HX_VISIT_MEMBER_NAME(LogLevel_obj::INFO,"INFO");
	HX_VISIT_MEMBER_NAME(LogLevel_obj::WARN,"WARN");
	HX_VISIT_MEMBER_NAME(LogLevel_obj::ERROR,"ERROR");
};

Class LogLevel_obj::__mClass;

void LogLevel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.tools.log.LogLevel"), hx::TCanCast< LogLevel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LogLevel_obj::__boot()
{
	DEBUG= (int)0;
	INFO= (int)1;
	WARN= (int)2;
	ERROR= (int)3;
}

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace log
