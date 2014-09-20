#include <hxcpp.h>

#ifndef INCLUDED_haxe_Int64
#include <haxe/Int64.h>
#endif
namespace haxe{

Void Int64_obj::__construct(int high,int low)
{
HX_STACK_PUSH("Int64::new","haxe/Int64.hx",29);
{
	HX_STACK_LINE(30)
	this->high = high;
	HX_STACK_LINE(31)
	this->low = low;
}
;
	return null();
}

Int64_obj::~Int64_obj() { }

Dynamic Int64_obj::__CreateEmpty() { return  new Int64_obj; }
hx::ObjectPtr< Int64_obj > Int64_obj::__new(int high,int low)
{  hx::ObjectPtr< Int64_obj > result = new Int64_obj();
	result->__construct(high,low);
	return result;}

Dynamic Int64_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int64_obj > result = new Int64_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Int64_obj::getLow( ::haxe::Int64 x){
	HX_STACK_PUSH("Int64::getLow","haxe/Int64.hx",90);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(90)
	return x->low;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_obj,getLow,return )

int Int64_obj::getHigh( ::haxe::Int64 x){
	HX_STACK_PUSH("Int64::getHigh","haxe/Int64.hx",94);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(94)
	return x->high;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_obj,getHigh,return )


Int64_obj::Int64_obj()
{
}

void Int64_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Int64);
	HX_MARK_MEMBER_NAME(low,"low");
	HX_MARK_MEMBER_NAME(high,"high");
	HX_MARK_END_CLASS();
}

void Int64_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(low,"low");
	HX_VISIT_MEMBER_NAME(high,"high");
}

Dynamic Int64_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"low") ) { return low; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"high") ) { return high; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getLow") ) { return getLow_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getHigh") ) { return getHigh_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Int64_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"low") ) { low=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"high") ) { high=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Int64_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("low"));
	outFields->push(HX_CSTRING("high"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getLow"),
	HX_CSTRING("getHigh"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("low"),
	HX_CSTRING("high"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int64_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int64_obj::__mClass,"__mClass");
};

Class Int64_obj::__mClass;

void Int64_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Int64"), hx::TCanCast< Int64_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Int64_obj::__boot()
{
}

} // end namespace haxe
