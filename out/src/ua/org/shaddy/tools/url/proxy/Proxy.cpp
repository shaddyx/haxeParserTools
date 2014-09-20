#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_proxy_Proxy
#include <ua/org/shaddy/tools/url/proxy/Proxy.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_proxy_ProxyManager
#include <ua/org/shaddy/tools/url/proxy/ProxyManager.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_proxy_ProxyType
#include <ua/org/shaddy/tools/url/proxy/ProxyType.h>
#endif
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{
namespace proxy{

Void Proxy_obj::__construct(::String proxyString)
{
HX_STACK_PUSH("Proxy::new","ua/org/shaddy/tools/url/proxy/Proxy.hx",8);
{
	HX_STACK_LINE(15)
	this->lastSuccess = (int)0;
	HX_STACK_LINE(14)
	this->failed = (int)0;
	HX_STACK_LINE(13)
	this->password = HX_CSTRING("");
	HX_STACK_LINE(12)
	this->user = HX_CSTRING("");
	HX_STACK_LINE(11)
	this->port = (int)0;
	HX_STACK_LINE(10)
	this->address = HX_CSTRING("");
	HX_STACK_LINE(19)
	if (((proxyString == null()))){
		HX_STACK_LINE(20)
		this->type = ::ua::org::shaddy::tools::url::proxy::ProxyType_obj::http;
	}
	else{
		HX_STACK_LINE(22)
		this->parse(proxyString);
	}
}
;
	return null();
}

Proxy_obj::~Proxy_obj() { }

Dynamic Proxy_obj::__CreateEmpty() { return  new Proxy_obj; }
hx::ObjectPtr< Proxy_obj > Proxy_obj::__new(::String proxyString)
{  hx::ObjectPtr< Proxy_obj > result = new Proxy_obj();
	result->__construct(proxyString);
	return result;}

Dynamic Proxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Proxy_obj > result = new Proxy_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Proxy_obj::toString( ){
	HX_STACK_PUSH("Proxy::toString","ua/org/shaddy/tools/url/proxy/Proxy.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_LINE(77)
	::StringBuf str = ::StringBuf_obj::__new();		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(78)
	str->add(this->type);
	HX_STACK_LINE(79)
	str->add(HX_CSTRING("://"));
	HX_STACK_LINE(81)
	if (((bool((this->user.length > (int)0)) || bool((this->password.length > (int)0))))){
		HX_STACK_LINE(82)
		str->add(this->user);
		HX_STACK_LINE(83)
		str->add(HX_CSTRING(":"));
		HX_STACK_LINE(84)
		str->add(this->password);
		HX_STACK_LINE(85)
		str->add(HX_CSTRING(":"));
	}
	HX_STACK_LINE(88)
	str->add(this->address);
	HX_STACK_LINE(89)
	str->add(HX_CSTRING(":"));
	HX_STACK_LINE(90)
	str->add(this->port);
	HX_STACK_LINE(91)
	if (((bool((this->failed != (int)0)) || bool((this->lastSuccess != (int)0))))){
		HX_STACK_LINE(92)
		str->add(HX_CSTRING(":"));
		HX_STACK_LINE(93)
		str->add(this->failed);
		HX_STACK_LINE(94)
		str->add(HX_CSTRING(":"));
		HX_STACK_LINE(95)
		str->add(this->lastSuccess);
	}
	HX_STACK_LINE(98)
	return str->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC0(Proxy_obj,toString,return )

::String Proxy_obj::getKey( ){
	HX_STACK_PUSH("Proxy::getKey","ua/org/shaddy/tools/url/proxy/Proxy.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_LINE(72)
	return ((this->address + HX_CSTRING(":")) + this->port);
}


HX_DEFINE_DYNAMIC_FUNC0(Proxy_obj,getKey,return )

Void Proxy_obj::fail( ){
{
		HX_STACK_PUSH("Proxy::fail","ua/org/shaddy/tools/url/proxy/Proxy.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_LINE(67)
		(this->failed)++;
		HX_STACK_LINE(68)
		this->proxyManager->refreshProxy(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Proxy_obj,fail,(void))

bool Proxy_obj::isBad( ){
	HX_STACK_PUSH("Proxy::isBad","ua/org/shaddy/tools/url/proxy/Proxy.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	return (this->failed >= (int)3);
}


HX_DEFINE_DYNAMIC_FUNC0(Proxy_obj,isBad,return )

Void Proxy_obj::parse( ::String proxyString){
{
		HX_STACK_PUSH("Proxy::parse","ua/org/shaddy/tools/url/proxy/Proxy.hx",27);
		HX_STACK_THIS(this);
		HX_STACK_ARG(proxyString,"proxyString");
		HX_STACK_LINE(28)
		proxyString = ::StringTools_obj::replace(::StringTools_obj::trim(proxyString),HX_CSTRING("@"),HX_CSTRING(":"));
		HX_STACK_LINE(29)
		if (((proxyString.indexOf(HX_CSTRING("://"),null()) != (int)-1))){
			HX_STACK_LINE(30)
			::EReg r = ::EReg_obj::__new(HX_CSTRING("(.*?):\\/\\/"),HX_CSTRING(""));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(31)
			bool found = r->match(proxyString);		HX_STACK_VAR(found,"found");
			HX_STACK_LINE(32)
			if ((found)){
				HX_STACK_LINE(33)
				::String strType = r->matched((int)1);		HX_STACK_VAR(strType,"strType");
				HX_STACK_LINE(34)
				this->type = ::Type_obj::createEnum(hx::ClassOf< ::ua::org::shaddy::tools::url::proxy::ProxyType >(),strType,null());
				HX_STACK_LINE(35)
				proxyString = ::StringTools_obj::replace(proxyString,(::Std_obj::string(this->type) + HX_CSTRING("://")),HX_CSTRING(""));
			}
		}
		else{
			HX_STACK_LINE(37)
			this->type = ::ua::org::shaddy::tools::url::proxy::ProxyType_obj::http;
		}
		HX_STACK_LINE(40)
		Array< ::String > chunks = proxyString.split(HX_CSTRING(":"));		HX_STACK_VAR(chunks,"chunks");
		HX_STACK_LINE(41)
		switch( (int)(chunks->length)){
			case (int)2: {
				HX_STACK_LINE(43)
				this->address = chunks->__get((int)0);
				HX_STACK_LINE(44)
				this->port = ::Std_obj::parseInt(chunks->__get((int)1));
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(46)
				this->user = chunks->__get((int)0);
				HX_STACK_LINE(47)
				this->password = chunks->__get((int)1);
				HX_STACK_LINE(48)
				this->address = chunks->__get((int)2);
				HX_STACK_LINE(49)
				this->port = ::Std_obj::parseInt(chunks->__get((int)3));
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(51)
				this->user = chunks->__get((int)0);
				HX_STACK_LINE(52)
				this->password = chunks->__get((int)1);
				HX_STACK_LINE(53)
				this->address = chunks->__get((int)2);
				HX_STACK_LINE(54)
				this->port = ::Std_obj::parseInt(chunks->__get((int)3));
				HX_STACK_LINE(55)
				this->failed = ::Std_obj::parseInt(chunks->__get((int)4));
				HX_STACK_LINE(56)
				this->lastSuccess = ::Std_obj::parseInt(chunks->__get((int)5));
			}
			;break;
			default: {
				HX_STACK_LINE(57)
				hx::Throw ((((HX_CSTRING("Proxy chunks count is wrong [") + chunks->length) + HX_CSTRING("] in ")) + proxyString));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Proxy_obj,parse,(void))


Proxy_obj::Proxy_obj()
{
}

void Proxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Proxy);
	HX_MARK_MEMBER_NAME(proxyManager,"proxyManager");
	HX_MARK_MEMBER_NAME(lastSuccess,"lastSuccess");
	HX_MARK_MEMBER_NAME(failed,"failed");
	HX_MARK_MEMBER_NAME(password,"password");
	HX_MARK_MEMBER_NAME(user,"user");
	HX_MARK_MEMBER_NAME(port,"port");
	HX_MARK_MEMBER_NAME(address,"address");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void Proxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(proxyManager,"proxyManager");
	HX_VISIT_MEMBER_NAME(lastSuccess,"lastSuccess");
	HX_VISIT_MEMBER_NAME(failed,"failed");
	HX_VISIT_MEMBER_NAME(password,"password");
	HX_VISIT_MEMBER_NAME(user,"user");
	HX_VISIT_MEMBER_NAME(port,"port");
	HX_VISIT_MEMBER_NAME(address,"address");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic Proxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fail") ) { return fail_dyn(); }
		if (HX_FIELD_EQ(inName,"user") ) { return user; }
		if (HX_FIELD_EQ(inName,"port") ) { return port; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isBad") ) { return isBad_dyn(); }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getKey") ) { return getKey_dyn(); }
		if (HX_FIELD_EQ(inName,"failed") ) { return failed; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"address") ) { return address; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"password") ) { return password; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastSuccess") ) { return lastSuccess; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"proxyManager") ) { return proxyManager; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Proxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"user") ) { user=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"port") ) { port=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::ua::org::shaddy::tools::url::proxy::ProxyType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { failed=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"address") ) { address=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"password") ) { password=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastSuccess") ) { lastSuccess=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"proxyManager") ) { proxyManager=inValue.Cast< ::ua::org::shaddy::tools::url::proxy::ProxyManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Proxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("proxyManager"));
	outFields->push(HX_CSTRING("lastSuccess"));
	outFields->push(HX_CSTRING("failed"));
	outFields->push(HX_CSTRING("password"));
	outFields->push(HX_CSTRING("user"));
	outFields->push(HX_CSTRING("port"));
	outFields->push(HX_CSTRING("address"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("getKey"),
	HX_CSTRING("fail"),
	HX_CSTRING("isBad"),
	HX_CSTRING("parse"),
	HX_CSTRING("proxyManager"),
	HX_CSTRING("lastSuccess"),
	HX_CSTRING("failed"),
	HX_CSTRING("password"),
	HX_CSTRING("user"),
	HX_CSTRING("port"),
	HX_CSTRING("address"),
	HX_CSTRING("type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Proxy_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Proxy_obj::__mClass,"__mClass");
};

Class Proxy_obj::__mClass;

void Proxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.tools.url.proxy.Proxy"), hx::TCanCast< Proxy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Proxy_obj::__boot()
{
}

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
} // end namespace proxy
