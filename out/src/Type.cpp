#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif

Void Type_obj::__construct()
{
	return null();
}

Type_obj::~Type_obj() { }

Dynamic Type_obj::__CreateEmpty() { return  new Type_obj; }
hx::ObjectPtr< Type_obj > Type_obj::__new()
{  hx::ObjectPtr< Type_obj > result = new Type_obj();
	result->__construct();
	return result;}

Dynamic Type_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Type_obj > result = new Type_obj();
	result->__construct();
	return result;}

::String Type_obj::getClassName( ::Class c){
	HX_STACK_PUSH("Type::getClassName","Type.hx",56);
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(57)
	if (((c == null()))){
		HX_STACK_LINE(58)
		return null();
	}
	HX_STACK_LINE(59)
	return c->mName;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassName,return )

Dynamic Type_obj::createEnum( ::Enum e,::String constr,Dynamic params){
	HX_STACK_PUSH("Type::createEnum","Type.hx",90);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(constr,"constr");
	HX_STACK_ARG(params,"params");
	HX_STACK_LINE(90)
	return e->ConstructEnum(constr,params);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Type_obj,createEnum,return )

Array< ::String > Type_obj::getClassFields( ::Class c){
	HX_STACK_PUSH("Type::getClassFields","Type.hx",104);
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(104)
	return c->GetClassFields();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassFields,return )


Type_obj::Type_obj()
{
}

void Type_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Type);
	HX_MARK_END_CLASS();
}

void Type_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Type_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"createEnum") ) { return createEnum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { return getClassName_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getClassFields") ) { return getClassFields_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Type_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Type_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getClassName"),
	HX_CSTRING("createEnum"),
	HX_CSTRING("getClassFields"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

Class Type_obj::__mClass;

void Type_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Type"), hx::TCanCast< Type_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Type_obj::__boot()
{
}

