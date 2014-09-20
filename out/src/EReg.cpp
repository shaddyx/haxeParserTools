#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif

Void EReg_obj::__construct(::String r,::String opt)
{
HX_STACK_PUSH("EReg::new","EReg.hx",28);
{
	HX_STACK_LINE(29)
	Array< ::String > a = opt.split(HX_CSTRING("g"));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(30)
	this->global = (a->length > (int)1);
	HX_STACK_LINE(31)
	if ((this->global)){
		HX_STACK_LINE(32)
		opt = a->join(HX_CSTRING(""));
	}
	HX_STACK_LINE(33)
	this->r = ::EReg_obj::regexp_new_options(r,opt);
}
;
	return null();
}

EReg_obj::~EReg_obj() { }

Dynamic EReg_obj::__CreateEmpty() { return  new EReg_obj; }
hx::ObjectPtr< EReg_obj > EReg_obj::__new(::String r,::String opt)
{  hx::ObjectPtr< EReg_obj > result = new EReg_obj();
	result->__construct(r,opt);
	return result;}

Dynamic EReg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EReg_obj > result = new EReg_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String EReg_obj::matched( int n){
	HX_STACK_PUSH("EReg::matched","EReg.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(46)
	::String m = ::EReg_obj::regexp_matched(this->r,n);		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(47)
	return m;
}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,matched,return )

bool EReg_obj::match( ::String s){
	HX_STACK_PUSH("EReg::match","EReg.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(37)
	bool p = ::EReg_obj::regexp_match(this->r,s,(int)0,s.length);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(38)
	if ((p)){
		HX_STACK_LINE(39)
		this->last = s;
	}
	else{
		HX_STACK_LINE(41)
		this->last = null();
	}
	HX_STACK_LINE(42)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,match,return )

Dynamic EReg_obj::regexp_new_options;

Dynamic EReg_obj::regexp_match;

Dynamic EReg_obj::regexp_matched;


EReg_obj::EReg_obj()
{
}

void EReg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EReg);
	HX_MARK_MEMBER_NAME(global,"global");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_END_CLASS();
}

void EReg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(global,"global");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(r,"r");
}

Dynamic EReg_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return match_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { return global; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"matched") ) { return matched_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"regexp_match") ) { return regexp_match; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regexp_matched") ) { return regexp_matched; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"regexp_new_options") ) { return regexp_new_options; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EReg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { global=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"regexp_match") ) { regexp_match=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regexp_matched") ) { regexp_matched=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"regexp_new_options") ) { regexp_new_options=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EReg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("global"));
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("r"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("regexp_new_options"),
	HX_CSTRING("regexp_match"),
	HX_CSTRING("regexp_matched"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("matched"),
	HX_CSTRING("match"),
	HX_CSTRING("global"),
	HX_CSTRING("last"),
	HX_CSTRING("r"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_new_options,"regexp_new_options");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_match,"regexp_match");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_matched,"regexp_matched");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_new_options,"regexp_new_options");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_match,"regexp_match");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_matched,"regexp_matched");
};

Class EReg_obj::__mClass;

void EReg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("EReg"), hx::TCanCast< EReg_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EReg_obj::__boot()
{
	regexp_new_options= ::cpp::Lib_obj::load(HX_CSTRING("regexp"),HX_CSTRING("regexp_new_options"),(int)2);
	regexp_match= ::cpp::Lib_obj::load(HX_CSTRING("regexp"),HX_CSTRING("regexp_match"),(int)4);
	regexp_matched= ::cpp::Lib_obj::load(HX_CSTRING("regexp"),HX_CSTRING("regexp_matched"),(int)2);
}

