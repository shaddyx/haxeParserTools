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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_log_Logger
#include <ua/org/shaddy/tools/log/Logger.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_proxy_Proxy
#include <ua/org/shaddy/tools/url/proxy/Proxy.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_proxy_ProxyManager
#include <ua/org/shaddy/tools/url/proxy/ProxyManager.h>
#endif
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{
namespace proxy{

Void ProxyManager_obj::__construct()
{
HX_STACK_PUSH("ProxyManager::new","ua/org/shaddy/tools/url/proxy/ProxyManager.hx",9);
{
	HX_STACK_LINE(15)
	this->index = (int)0;
	HX_STACK_LINE(19)
	this->map = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(20)
	this->badMap = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(21)
	this->list = Array_obj< ::String >::__new();
}
;
	return null();
}

ProxyManager_obj::~ProxyManager_obj() { }

Dynamic ProxyManager_obj::__CreateEmpty() { return  new ProxyManager_obj; }
hx::ObjectPtr< ProxyManager_obj > ProxyManager_obj::__new()
{  hx::ObjectPtr< ProxyManager_obj > result = new ProxyManager_obj();
	result->__construct();
	return result;}

Dynamic ProxyManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProxyManager_obj > result = new ProxyManager_obj();
	result->__construct();
	return result;}

::String ProxyManager_obj::toString( ){
	HX_STACK_PUSH("ProxyManager::toString","ua/org/shaddy/tools/url/proxy/ProxyManager.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_LINE(119)
	::StringBuf str = ::StringBuf_obj::__new();		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(120)
	str->add((HX_CSTRING("ProxyManager:") + ::Std_obj::string(this->list)));
	HX_STACK_LINE(121)
	return str->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC0(ProxyManager_obj,toString,return )

::ua::org::shaddy::tools::url::proxy::Proxy ProxyManager_obj::get( ){
	HX_STACK_PUSH("ProxyManager::get","ua/org/shaddy/tools/url/proxy/ProxyManager.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_LINE(108)
	if (((this->index >= this->list->length))){
		HX_STACK_LINE(108)
		this->index = (int)0;
	}
	HX_STACK_LINE(111)
	if (((bool((this->index == (int)0)) && bool((this->list->length == (int)0))))){
		HX_STACK_LINE(111)
		return null();
	}
	HX_STACK_LINE(114)
	::String key = this->list->__get(this->index);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(115)
	return this->map->get(key);
}


HX_DEFINE_DYNAMIC_FUNC0(ProxyManager_obj,get,return )

Void ProxyManager_obj::refreshProxy( ::ua::org::shaddy::tools::url::proxy::Proxy proxy){
{
		HX_STACK_PUSH("ProxyManager::refreshProxy","ua/org/shaddy/tools/url/proxy/ProxyManager.hx",94);
		HX_STACK_THIS(this);
		HX_STACK_ARG(proxy,"proxy");
		HX_STACK_LINE(95)
		::String key = proxy->getKey();		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(96)
		if (((bool(this->badMap->exists(key)) && bool(!(proxy->isBad()))))){
			HX_STACK_LINE(97)
			this->badMap->remove(key);
			HX_STACK_LINE(98)
			this->list->remove(key);
			HX_STACK_LINE(99)
			this->addProxy(proxy);
		}
		else{
			HX_STACK_LINE(100)
			if (((bool(this->map->exists(key)) && bool(proxy->isBad())))){
				HX_STACK_LINE(101)
				this->map->remove(key);
				HX_STACK_LINE(102)
				this->list->remove(key);
				HX_STACK_LINE(103)
				this->addProxy(proxy);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProxyManager_obj,refreshProxy,(void))

Void ProxyManager_obj::save( ::String fileName){
{
		HX_STACK_PUSH("ProxyManager::save","ua/org/shaddy/tools/url/proxy/ProxyManager.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fileName,"fileName");
		HX_STACK_LINE(83)
		::sys::io::FileOutput fout = ::sys::io::File_obj::write(fileName,false);		HX_STACK_VAR(fout,"fout");
		HX_STACK_LINE(84)
		for(::cpp::FastIterator_obj< ::ua::org::shaddy::tools::url::proxy::Proxy > *__it = ::cpp::CreateFastIterator< ::ua::org::shaddy::tools::url::proxy::Proxy >(this->map->iterator());  __it->hasNext(); ){
			::ua::org::shaddy::tools::url::proxy::Proxy proxy = __it->next();
			fout->writeString((proxy->toString() + HX_CSTRING("\n")));
		}
		HX_STACK_LINE(88)
		for(::cpp::FastIterator_obj< ::ua::org::shaddy::tools::url::proxy::Proxy > *__it = ::cpp::CreateFastIterator< ::ua::org::shaddy::tools::url::proxy::Proxy >(this->badMap->iterator());  __it->hasNext(); ){
			::ua::org::shaddy::tools::url::proxy::Proxy proxy = __it->next();
			fout->writeString((proxy->toString() + HX_CSTRING("\n")));
		}
		HX_STACK_LINE(91)
		fout->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProxyManager_obj,save,(void))

int ProxyManager_obj::load( ::String fileName){
	HX_STACK_PUSH("ProxyManager::load","ua/org/shaddy/tools/url/proxy/ProxyManager.hx",68);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fileName,"fileName");
	HX_STACK_LINE(69)
	::sys::io::FileInput fin = ::sys::io::File_obj::read(fileName,false);		HX_STACK_VAR(fin,"fin");
	HX_STACK_LINE(70)
	int counter = (int)0;		HX_STACK_VAR(counter,"counter");
	HX_STACK_LINE(71)
	while((!(fin->eof()))){
		HX_STACK_LINE(72)
		::String line = fin->readLine();		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(73)
		::ua::org::shaddy::tools::url::proxy::Proxy outProxy = this->addProxy(line);		HX_STACK_VAR(outProxy,"outProxy");
		HX_STACK_LINE(74)
		if ((!(outProxy->isBad()))){
			HX_STACK_LINE(74)
			(counter)++;
		}
	}
	HX_STACK_LINE(78)
	fin->close();
	HX_STACK_LINE(79)
	return counter;
}


HX_DEFINE_DYNAMIC_FUNC1(ProxyManager_obj,load,return )

Void ProxyManager_obj::reset( ){
{
		HX_STACK_PUSH("ProxyManager::reset","ua/org/shaddy/tools/url/proxy/ProxyManager.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_LINE(58)
		Array< ::String > list = this->list;		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(59)
		Array< ::String > outList = Array_obj< ::String >::__new();		HX_STACK_VAR(outList,"outList");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(60)
			while(((_g < list->length))){
				HX_STACK_LINE(60)
				::String proxyKey = list->__get(_g);		HX_STACK_VAR(proxyKey,"proxyKey");
				HX_STACK_LINE(60)
				++(_g);
				HX_STACK_LINE(61)
				int pos = hx::TCast< Int >::cast((::Math_obj::random() * outList->length));		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(62)
				outList->insert(pos,proxyKey);
			}
		}
		HX_STACK_LINE(64)
		this->list = outList;
		HX_STACK_LINE(65)
		this->index = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProxyManager_obj,reset,(void))

::ua::org::shaddy::tools::url::proxy::Proxy ProxyManager_obj::addProxy( Dynamic proxyS){
	HX_STACK_PUSH("ProxyManager::addProxy","ua/org/shaddy/tools/url/proxy/ProxyManager.hx",25);
	HX_STACK_THIS(this);
	HX_STACK_ARG(proxyS,"proxyS");
	HX_STACK_LINE(26)
	::ua::org::shaddy::tools::url::proxy::ProxyManager_obj::logger->debug(HX_CSTRING("adding proxy:"),proxyS,null(),null());
	HX_STACK_LINE(27)
	::ua::org::shaddy::tools::url::proxy::Proxy proxy = null();		HX_STACK_VAR(proxy,"proxy");
	HX_STACK_LINE(29)
	if ((::Std_obj::is(proxyS,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(30)
		::ua::org::shaddy::tools::url::proxy::ProxyManager_obj::logger->debug(HX_CSTRING("proxy is String"),proxyS,null(),null());
		HX_STACK_LINE(31)
		proxy = ::ua::org::shaddy::tools::url::proxy::Proxy_obj::__new(proxyS);
	}
	else{
		HX_STACK_LINE(32)
		if ((::Std_obj::is(proxy,hx::ClassOf< ::ua::org::shaddy::tools::url::proxy::Proxy >()))){
			HX_STACK_LINE(32)
			proxy = proxyS;
		}
		else{
			HX_STACK_LINE(34)
			hx::Throw (HX_CSTRING("Error, proxy must be of type String of Proxy"));
		}
	}
	HX_STACK_LINE(37)
	::String proxyKey = proxy->getKey();		HX_STACK_VAR(proxyKey,"proxyKey");
	HX_STACK_LINE(38)
	if ((this->badMap->exists(proxyKey))){
		HX_STACK_LINE(38)
		return this->badMap->get(proxyKey);
	}
	HX_STACK_LINE(42)
	if ((this->map->exists(proxyKey))){
		HX_STACK_LINE(42)
		return this->map->get(proxyKey);
	}
	HX_STACK_LINE(45)
	if ((proxy->isBad())){
		HX_STACK_LINE(45)
		this->badMap->set(proxy->getKey(),proxy);
	}
	else{
		HX_STACK_LINE(48)
		this->map->set(proxyKey,proxy);
		HX_STACK_LINE(49)
		int pos = ::Std_obj::_int((::Math_obj::random() * this->list->length));		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(50)
		this->list->insert(pos,proxyKey);
	}
	HX_STACK_LINE(53)
	proxy->proxyManager = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(54)
	return proxy;
}


HX_DEFINE_DYNAMIC_FUNC1(ProxyManager_obj,addProxy,return )

::ua::org::shaddy::tools::log::Logger ProxyManager_obj::logger;


ProxyManager_obj::ProxyManager_obj()
{
}

void ProxyManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProxyManager);
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(badMap,"badMap");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_END_CLASS();
}

void ProxyManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(badMap,"badMap");
	HX_VISIT_MEMBER_NAME(map,"map");
}

Dynamic ProxyManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logger") ) { return logger; }
		if (HX_FIELD_EQ(inName,"badMap") ) { return badMap; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"addProxy") ) { return addProxy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"refreshProxy") ) { return refreshProxy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProxyManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logger") ) { logger=inValue.Cast< ::ua::org::shaddy::tools::log::Logger >(); return inValue; }
		if (HX_FIELD_EQ(inName,"badMap") ) { badMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProxyManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("badMap"));
	outFields->push(HX_CSTRING("map"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("logger"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("get"),
	HX_CSTRING("refreshProxy"),
	HX_CSTRING("save"),
	HX_CSTRING("load"),
	HX_CSTRING("reset"),
	HX_CSTRING("addProxy"),
	HX_CSTRING("index"),
	HX_CSTRING("list"),
	HX_CSTRING("badMap"),
	HX_CSTRING("map"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProxyManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ProxyManager_obj::logger,"logger");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProxyManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProxyManager_obj::logger,"logger");
};

Class ProxyManager_obj::__mClass;

void ProxyManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.tools.url.proxy.ProxyManager"), hx::TCanCast< ProxyManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ProxyManager_obj::__boot()
{
	logger= ::ua::org::shaddy::tools::log::Logger_obj::__new(hx::ClassOf< ::ua::org::shaddy::tools::url::proxy::ProxyManager >());
}

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
} // end namespace proxy
