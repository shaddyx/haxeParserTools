#ifndef INCLUDED_Type
#define INCLUDED_Type

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Type)


class HXCPP_CLASS_ATTRIBUTES  Type_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Type_obj OBJ_;
		Type_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Type_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Type_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Type"); }

		static ::String getClassName( ::Class c);
		static Dynamic getClassName_dyn();

		static Dynamic createEnum( ::Enum e,::String constr,Dynamic params);
		static Dynamic createEnum_dyn();

		static Array< ::String > getClassFields( ::Class c);
		static Dynamic getClassFields_dyn();

};


#endif /* INCLUDED_Type */ 
