#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_XmlType
#include <XmlType.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif

Void Xml_obj::__construct()
{
HX_STACK_PUSH("Xml::new","Xml.hx",41);
{
}
;
	return null();
}

Xml_obj::~Xml_obj() { }

Dynamic Xml_obj::__CreateEmpty() { return  new Xml_obj; }
hx::ObjectPtr< Xml_obj > Xml_obj::__new()
{  hx::ObjectPtr< Xml_obj > result = new Xml_obj();
	result->__construct();
	return result;}

Dynamic Xml_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Xml_obj > result = new Xml_obj();
	result->__construct();
	return result;}

void Xml_obj::__init__() {
HX_STACK_PUSH("Xml::__init__","Xml.hx",403);
{
	HX_STACK_LINE(404)
	::Xml_obj::PCData = ::Type_obj::createEnum(hx::ClassOf< ::XmlType >(),HX_CSTRING("__"),null());
	HX_STACK_LINE(405)
	::Xml_obj::Element = ::Type_obj::createEnum(hx::ClassOf< ::XmlType >(),HX_CSTRING("__"),null());
	HX_STACK_LINE(406)
	::Xml_obj::CData = ::Type_obj::createEnum(hx::ClassOf< ::XmlType >(),HX_CSTRING("__"),null());
	HX_STACK_LINE(407)
	::Xml_obj::Comment = ::Type_obj::createEnum(hx::ClassOf< ::XmlType >(),HX_CSTRING("__"),null());
	HX_STACK_LINE(408)
	::Xml_obj::DocType = ::Type_obj::createEnum(hx::ClassOf< ::XmlType >(),HX_CSTRING("__"),null());
	HX_STACK_LINE(409)
	::Xml_obj::ProcessingInstruction = ::Type_obj::createEnum(hx::ClassOf< ::XmlType >(),HX_CSTRING("__"),null());
	HX_STACK_LINE(410)
	::Xml_obj::Document = ::Type_obj::createEnum(hx::ClassOf< ::XmlType >(),HX_CSTRING("__"),null());
	HX_STACK_LINE(411)
	::__hxcpp_enum_force(::Xml_obj::PCData,HX_CSTRING("pcdata"),(int)0);
	HX_STACK_LINE(412)
	::__hxcpp_enum_force(::Xml_obj::Element,HX_CSTRING("element"),(int)1);
	HX_STACK_LINE(413)
	::__hxcpp_enum_force(::Xml_obj::CData,HX_CSTRING("cdata"),(int)2);
	HX_STACK_LINE(414)
	::__hxcpp_enum_force(::Xml_obj::Comment,HX_CSTRING("comment"),(int)3);
	HX_STACK_LINE(415)
	::__hxcpp_enum_force(::Xml_obj::DocType,HX_CSTRING("doctype"),(int)4);
	HX_STACK_LINE(416)
	::__hxcpp_enum_force(::Xml_obj::ProcessingInstruction,HX_CSTRING("processingInstruction"),(int)5);
	HX_STACK_LINE(417)
	::__hxcpp_enum_force(::Xml_obj::Document,HX_CSTRING("document"),(int)6);
}
}

Void Xml_obj::addChild( ::Xml x){
{
		HX_STACK_PUSH("Xml::addChild","Xml.hx",322);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(323)
		if (((this->_children == null()))){
			HX_STACK_LINE(324)
			hx::Throw (HX_CSTRING("bad nodetype"));
		}
		HX_STACK_LINE(325)
		if (((x->_parent != null()))){
			HX_STACK_LINE(325)
			x->_parent->_children->remove(x);
		}
		HX_STACK_LINE(326)
		x->_parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(327)
		this->_children->push(x);
		HX_STACK_LINE(328)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,addChild,(void))

::XmlType Xml_obj::Element;

::XmlType Xml_obj::PCData;

::XmlType Xml_obj::CData;

::XmlType Xml_obj::Comment;

::XmlType Xml_obj::DocType;

::XmlType Xml_obj::ProcessingInstruction;

::XmlType Xml_obj::Document;

Dynamic Xml_obj::_parse;

::Xml Xml_obj::parse( ::String str){
	HX_STACK_PUSH("Xml::parse","Xml.hx",46);
	HX_STACK_ARG(str,"str");
	HX_STACK_LINE(47)
	::Xml x = ::Xml_obj::__new();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(48)
	x->_children = Array_obj< ::Dynamic >::__new();
	struct _Function_1_1{
		inline static Dynamic Block( ::Xml &x){
			HX_STACK_PUSH("*::closure","Xml.hx",49);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("cur") , x,false);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalThisFunc,_Function_2_1)
				Void run(::String name,Dynamic att){
					HX_STACK_PUSH("*::_Function_2_1","Xml.hx",51);
					HX_STACK_THIS(__this.mPtr);
					HX_STACK_ARG(name,"name");
					HX_STACK_ARG(att,"att");
					{
						HX_STACK_LINE(52)
						::Xml x1 = ::Xml_obj::__new();		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(53)
						x1->_parent = __this->__Field(HX_CSTRING("cur"),true);
						HX_STACK_LINE(54)
						x1->nodeType = ::Xml_obj::Element;
						HX_STACK_LINE(55)
						x1->_nodeName = ::String(name);
						HX_STACK_LINE(56)
						x1->_attributes = att;
						HX_STACK_LINE(57)
						x1->_children = Array_obj< ::Dynamic >::__new();
						HX_STACK_LINE(58)
						{
							HX_STACK_LINE(59)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(60)
							__this->__Field(HX_CSTRING("cur"),true)->__Field(HX_CSTRING("addChild"),true)(x1);
							HX_STACK_LINE(61)
							__this->__FieldRef(HX_CSTRING("cur")) = x1;
						}
					}
					return null();
				}
				HX_END_LOCAL_FUNC2((void))

				__result->Add(HX_CSTRING("xml") ,  Dynamic(new _Function_2_1()),true);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalThisFunc,_Function_2_2)
				Void run(::String text){
					HX_STACK_PUSH("*::_Function_2_2","Xml.hx",64);
					HX_STACK_THIS(__this.mPtr);
					HX_STACK_ARG(text,"text");
					{
						HX_STACK_LINE(65)
						::Xml x1 = ::Xml_obj::__new();		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(66)
						x1->_parent = __this->__Field(HX_CSTRING("cur"),true);
						HX_STACK_LINE(67)
						x1->nodeType = ::Xml_obj::CData;
						HX_STACK_LINE(68)
						x1->_nodeValue = ::String(text);
						HX_STACK_LINE(69)
						__this->__Field(HX_CSTRING("cur"),true)->__Field(HX_CSTRING("addChild"),true)(x1);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_CSTRING("cdata") ,  Dynamic(new _Function_2_2()),true);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalThisFunc,_Function_2_3)
				Void run(::String text){
					HX_STACK_PUSH("*::_Function_2_3","Xml.hx",71);
					HX_STACK_THIS(__this.mPtr);
					HX_STACK_ARG(text,"text");
					{
						HX_STACK_LINE(72)
						::Xml x1 = ::Xml_obj::__new();		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(73)
						x1->_parent = __this->__Field(HX_CSTRING("cur"),true);
						HX_STACK_LINE(74)
						x1->nodeType = ::Xml_obj::PCData;
						HX_STACK_LINE(75)
						x1->_nodeValue = ::String(text);
						HX_STACK_LINE(76)
						__this->__Field(HX_CSTRING("cur"),true)->__Field(HX_CSTRING("addChild"),true)(x1);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_CSTRING("pcdata") ,  Dynamic(new _Function_2_3()),true);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalThisFunc,_Function_2_4)
				Void run(::String text){
					HX_STACK_PUSH("*::_Function_2_4","Xml.hx",78);
					HX_STACK_THIS(__this.mPtr);
					HX_STACK_ARG(text,"text");
					{
						HX_STACK_LINE(79)
						::Xml x1 = ::Xml_obj::__new();		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(80)
						x1->_parent = __this->__Field(HX_CSTRING("cur"),true);
						HX_STACK_LINE(81)
						if (((text.cca((int)0) == (int)63))){
							HX_STACK_LINE(82)
							x1->nodeType = ::Xml_obj::ProcessingInstruction;
							HX_STACK_LINE(83)
							text = ::String(text);
							HX_STACK_LINE(84)
							text = text.substr((int)1,(text.length - (int)2));
						}
						else{
							HX_STACK_LINE(86)
							x1->nodeType = ::Xml_obj::Comment;
							HX_STACK_LINE(87)
							text = ::String(text);
						}
						HX_STACK_LINE(89)
						x1->_nodeValue = text;
						HX_STACK_LINE(90)
						__this->__Field(HX_CSTRING("cur"),true)->__Field(HX_CSTRING("addChild"),true)(x1);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_CSTRING("comment") ,  Dynamic(new _Function_2_4()),true);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalThisFunc,_Function_2_5)
				Void run(::String text){
					HX_STACK_PUSH("*::_Function_2_5","Xml.hx",92);
					HX_STACK_THIS(__this.mPtr);
					HX_STACK_ARG(text,"text");
					{
						HX_STACK_LINE(93)
						::Xml x1 = ::Xml_obj::__new();		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(94)
						x1->_parent = __this->__Field(HX_CSTRING("cur"),true);
						HX_STACK_LINE(95)
						x1->nodeType = ::Xml_obj::DocType;
						HX_STACK_LINE(96)
						x1->_nodeValue = ::String(text).substr((int)1,null());
						HX_STACK_LINE(97)
						::Xml p = __this->__Field(HX_CSTRING("cur"),true);		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(98)
						p->addChild(x1);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_CSTRING("doctype") ,  Dynamic(new _Function_2_5()),true);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalThisFunc,_Function_2_6)
				Void run(){
					HX_STACK_PUSH("*::_Function_2_6","Xml.hx",100);
					HX_STACK_THIS(__this.mPtr);
					{
						HX_STACK_LINE(100)
						__this->__FieldRef(HX_CSTRING("cur")) = __this->__Field(HX_CSTRING("cur"),true)->__Field(HX_CSTRING("_parent"),true);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				__result->Add(HX_CSTRING("done") ,  Dynamic(new _Function_2_6()),true);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(49)
	Dynamic parser = _Function_1_1::Block(x);		HX_STACK_VAR(parser,"parser");
	HX_STACK_LINE(104)
	::Xml_obj::_parse(str,parser);
	HX_STACK_LINE(105)
	x->nodeType = ::Xml_obj::Document;
	HX_STACK_LINE(106)
	return x;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Xml_obj,parse,return )


Xml_obj::Xml_obj()
{
}

void Xml_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Xml);
	HX_MARK_MEMBER_NAME(nodeType,"nodeType");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_children,"_children");
	HX_MARK_MEMBER_NAME(_attributes,"_attributes");
	HX_MARK_MEMBER_NAME(_nodeValue,"_nodeValue");
	HX_MARK_MEMBER_NAME(_nodeName,"_nodeName");
	HX_MARK_END_CLASS();
}

void Xml_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nodeType,"nodeType");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_children,"_children");
	HX_VISIT_MEMBER_NAME(_attributes,"_attributes");
	HX_VISIT_MEMBER_NAME(_nodeValue,"_nodeValue");
	HX_VISIT_MEMBER_NAME(_nodeName,"_nodeName");
}

Dynamic Xml_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CData") ) { return CData; }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PCData") ) { return PCData; }
		if (HX_FIELD_EQ(inName,"_parse") ) { return _parse; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Element") ) { return Element; }
		if (HX_FIELD_EQ(inName,"Comment") ) { return Comment; }
		if (HX_FIELD_EQ(inName,"DocType") ) { return DocType; }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Document") ) { return Document; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"nodeType") ) { return nodeType; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { return _children; }
		if (HX_FIELD_EQ(inName,"_nodeName") ) { return _nodeName; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_nodeValue") ) { return _nodeValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_attributes") ) { return _attributes; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ProcessingInstruction") ) { return ProcessingInstruction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Xml_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CData") ) { CData=inValue.Cast< ::XmlType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PCData") ) { PCData=inValue.Cast< ::XmlType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parse") ) { _parse=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Element") ) { Element=inValue.Cast< ::XmlType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Comment") ) { Comment=inValue.Cast< ::XmlType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DocType") ) { DocType=inValue.Cast< ::XmlType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Document") ) { Document=inValue.Cast< ::XmlType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeType") ) { nodeType=inValue.Cast< ::XmlType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { _children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nodeName") ) { _nodeName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_nodeValue") ) { _nodeValue=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_attributes") ) { _attributes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ProcessingInstruction") ) { ProcessingInstruction=inValue.Cast< ::XmlType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Xml_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nodeType"));
	outFields->push(HX_CSTRING("_parent"));
	outFields->push(HX_CSTRING("_children"));
	outFields->push(HX_CSTRING("_attributes"));
	outFields->push(HX_CSTRING("_nodeValue"));
	outFields->push(HX_CSTRING("_nodeName"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("Element"),
	HX_CSTRING("PCData"),
	HX_CSTRING("CData"),
	HX_CSTRING("Comment"),
	HX_CSTRING("DocType"),
	HX_CSTRING("ProcessingInstruction"),
	HX_CSTRING("Document"),
	HX_CSTRING("_parse"),
	HX_CSTRING("parse"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("addChild"),
	HX_CSTRING("nodeType"),
	HX_CSTRING("_parent"),
	HX_CSTRING("_children"),
	HX_CSTRING("_attributes"),
	HX_CSTRING("_nodeValue"),
	HX_CSTRING("_nodeName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Xml_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Xml_obj::Element,"Element");
	HX_MARK_MEMBER_NAME(Xml_obj::PCData,"PCData");
	HX_MARK_MEMBER_NAME(Xml_obj::CData,"CData");
	HX_MARK_MEMBER_NAME(Xml_obj::Comment,"Comment");
	HX_MARK_MEMBER_NAME(Xml_obj::DocType,"DocType");
	HX_MARK_MEMBER_NAME(Xml_obj::ProcessingInstruction,"ProcessingInstruction");
	HX_MARK_MEMBER_NAME(Xml_obj::Document,"Document");
	HX_MARK_MEMBER_NAME(Xml_obj::_parse,"_parse");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Xml_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Xml_obj::Element,"Element");
	HX_VISIT_MEMBER_NAME(Xml_obj::PCData,"PCData");
	HX_VISIT_MEMBER_NAME(Xml_obj::CData,"CData");
	HX_VISIT_MEMBER_NAME(Xml_obj::Comment,"Comment");
	HX_VISIT_MEMBER_NAME(Xml_obj::DocType,"DocType");
	HX_VISIT_MEMBER_NAME(Xml_obj::ProcessingInstruction,"ProcessingInstruction");
	HX_VISIT_MEMBER_NAME(Xml_obj::Document,"Document");
	HX_VISIT_MEMBER_NAME(Xml_obj::_parse,"_parse");
};

Class Xml_obj::__mClass;

void Xml_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Xml"), hx::TCanCast< Xml_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Xml_obj::__boot()
{
	_parse= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("parse_xml"),(int)2);
}

