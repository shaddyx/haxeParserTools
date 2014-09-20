#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_log_LogLevel
#include <ua/org/shaddy/tools/log/LogLevel.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_log_Logger
#include <ua/org/shaddy/tools/log/Logger.h>
#endif
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace log{

Void Logger_obj::__construct(Dynamic logItem)
{
HX_STACK_PUSH("Logger::new","ua/org/shaddy/tools/log/Logger.hx",16);
{
	HX_STACK_LINE(16)
	if ((::Std_obj::is(logItem,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(18)
		this->name = logItem;
	}
	else{
		HX_STACK_LINE(20)
		this->name = ::Type_obj::getClassName(logItem);
	}
}
;
	return null();
}

Logger_obj::~Logger_obj() { }

Dynamic Logger_obj::__CreateEmpty() { return  new Logger_obj; }
hx::ObjectPtr< Logger_obj > Logger_obj::__new(Dynamic logItem)
{  hx::ObjectPtr< Logger_obj > result = new Logger_obj();
	result->__construct(logItem);
	return result;}

Dynamic Logger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Logger_obj > result = new Logger_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Logger_obj::mkMessage( int lvl,Dynamic a,Dynamic b,Dynamic c,Dynamic d){
	HX_STACK_PUSH("Logger::mkMessage","ua/org/shaddy/tools/log/Logger.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(lvl,"lvl");
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(55)
	if (((::ua::org::shaddy::tools::log::Logger_obj::backMap == null()))){
		HX_STACK_LINE(56)
		::ua::org::shaddy::tools::log::Logger_obj::backMap = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(57)
		Array< ::String > fields = ::Type_obj::getClassFields(hx::ClassOf< ::ua::org::shaddy::tools::log::LogLevel >());		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			while(((_g < fields->length))){
				HX_STACK_LINE(58)
				::String field = fields->__get(_g);		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(58)
				++(_g);
				struct _Function_4_1{
					inline static Dynamic Block( ::String &field){
						HX_STACK_PUSH("*::closure","ua/org/shaddy/tools/log/Logger.hx",59);
						{
							HX_STACK_LINE(59)
							Dynamic o = hx::ClassOf< ::ua::org::shaddy::tools::log::LogLevel >();		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(59)
							return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(field,true)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(59)
				int fieldValue = _Function_4_1::Block(field);		HX_STACK_VAR(fieldValue,"fieldValue");
				HX_STACK_LINE(60)
				if ((::Std_obj::is(fieldValue,hx::ClassOf< ::Int >()))){
					HX_STACK_LINE(60)
					::ua::org::shaddy::tools::log::Logger_obj::backMap->set(fieldValue,field);
				}
			}
		}
	}
	HX_STACK_LINE(65)
	::StringBuf msg = ::StringBuf_obj::__new();		HX_STACK_VAR(msg,"msg");
	HX_STACK_LINE(66)
	msg->add(::ua::org::shaddy::tools::log::Logger_obj::backMap->get(lvl));
	HX_STACK_LINE(67)
	msg->add(HX_CSTRING(":"));
	HX_STACK_LINE(68)
	msg->add(this->name);
	HX_STACK_LINE(69)
	msg->add(HX_CSTRING(":"));
	HX_STACK_LINE(70)
	if (((a != null()))){
		HX_STACK_LINE(70)
		msg->add(a);
	}
	HX_STACK_LINE(73)
	if (((b != null()))){
		HX_STACK_LINE(74)
		msg->add(HX_CSTRING(" "));
		HX_STACK_LINE(75)
		msg->add(b);
	}
	HX_STACK_LINE(77)
	if (((c != null()))){
		HX_STACK_LINE(78)
		msg->add(HX_CSTRING(" "));
		HX_STACK_LINE(79)
		msg->add(c);
	}
	HX_STACK_LINE(81)
	if (((d != null()))){
		HX_STACK_LINE(82)
		msg->add(HX_CSTRING(" "));
		HX_STACK_LINE(83)
		msg->add(d);
	}
	HX_STACK_LINE(85)
	return msg->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC5(Logger_obj,mkMessage,return )

Void Logger_obj::log( int lvl,Dynamic a,Dynamic b,Dynamic c,Dynamic d){
{
		HX_STACK_PUSH("Logger::log","ua/org/shaddy/tools/log/Logger.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lvl,"lvl");
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_ARG(c,"c");
		HX_STACK_ARG(d,"d");
		HX_STACK_LINE(41)
		if (((lvl >= ::ua::org::shaddy::tools::log::Logger_obj::currentLvl))){
			HX_STACK_LINE(43)
			::String msg = this->mkMessage(lvl,a,b,c,d);		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(47)
			::cpp::Lib_obj::println(msg);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Logger_obj,log,(void))

Void Logger_obj::debug( Dynamic a,Dynamic b,Dynamic c,Dynamic d){
{
		HX_STACK_PUSH("Logger::debug","ua/org/shaddy/tools/log/Logger.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_ARG(c,"c");
		HX_STACK_ARG(d,"d");
		HX_STACK_LINE(37)
		this->log(::ua::org::shaddy::tools::log::LogLevel_obj::DEBUG,a,b,c,d);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Logger_obj,debug,(void))

Void Logger_obj::info( Dynamic a,Dynamic b,Dynamic c,Dynamic d){
{
		HX_STACK_PUSH("Logger::info","ua/org/shaddy/tools/log/Logger.hx",33);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_ARG(c,"c");
		HX_STACK_ARG(d,"d");
		HX_STACK_LINE(33)
		this->log(::ua::org::shaddy::tools::log::LogLevel_obj::INFO,a,b,c,d);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Logger_obj,info,(void))

Void Logger_obj::warn( Dynamic a,Dynamic b,Dynamic c,Dynamic d){
{
		HX_STACK_PUSH("Logger::warn","ua/org/shaddy/tools/log/Logger.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_ARG(c,"c");
		HX_STACK_ARG(d,"d");
		HX_STACK_LINE(29)
		this->log(::ua::org::shaddy::tools::log::LogLevel_obj::WARN,a,b,c,d);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Logger_obj,warn,(void))

Void Logger_obj::error( Dynamic a,Dynamic b,Dynamic c,Dynamic d){
{
		HX_STACK_PUSH("Logger::error","ua/org/shaddy/tools/log/Logger.hx",25);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_ARG(c,"c");
		HX_STACK_ARG(d,"d");
		HX_STACK_LINE(25)
		this->log(::ua::org::shaddy::tools::log::LogLevel_obj::ERROR,a,b,c,d);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Logger_obj,error,(void))

int Logger_obj::currentLvl;

::haxe::ds::IntMap Logger_obj::backMap;


Logger_obj::Logger_obj()
{
}

void Logger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Logger);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Logger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Logger_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return info_dyn(); }
		if (HX_FIELD_EQ(inName,"warn") ) { return warn_dyn(); }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return debug_dyn(); }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backMap") ) { return backMap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mkMessage") ) { return mkMessage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentLvl") ) { return currentLvl; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Logger_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backMap") ) { backMap=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentLvl") ) { currentLvl=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Logger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("currentLvl"),
	HX_CSTRING("backMap"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("mkMessage"),
	HX_CSTRING("log"),
	HX_CSTRING("debug"),
	HX_CSTRING("info"),
	HX_CSTRING("warn"),
	HX_CSTRING("error"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Logger_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Logger_obj::currentLvl,"currentLvl");
	HX_MARK_MEMBER_NAME(Logger_obj::backMap,"backMap");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Logger_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Logger_obj::currentLvl,"currentLvl");
	HX_VISIT_MEMBER_NAME(Logger_obj::backMap,"backMap");
};

Class Logger_obj::__mClass;

void Logger_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.tools.log.Logger"), hx::TCanCast< Logger_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Logger_obj::__boot()
{
	currentLvl= (int)0;
}

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace log
