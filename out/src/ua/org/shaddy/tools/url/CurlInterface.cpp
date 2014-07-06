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
#ifndef INCLUDED_haxe_Int64
#include <haxe/Int64.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_CurlInterface
#include <ua/org/shaddy/tools/url/CurlInterface.h>
#endif
#ifndef INCLUDED_ua_org_shaddy_tools_url_CurlOptions
#include <ua/org/shaddy/tools/url/CurlOptions.h>
#endif

	struct MemoryStruct {
	  char *memory;
	  size_t size;
	  int error;
	};
	static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
		  size_t realsize = size * nmemb;
		  struct MemoryStruct *mem = (struct MemoryStruct *)userp;
		  size_t memSize = mem->size + realsize + 1;
		  mem->memory = (char*) realloc(mem->memory, memSize);
		  if(mem->memory == NULL) {
		    /* out of memory! */
		    mem->error = 1; 
		    return 0;
		  }
		  memcpy(&(mem->memory[mem->size]), contents, realsize);
		  mem->size += realsize;
		  mem->memory[mem->size] = 0;
		  return realsize;
	}

namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{

Void CurlInterface_obj::__construct()
{
	return null();
}

CurlInterface_obj::~CurlInterface_obj() { }

Dynamic CurlInterface_obj::__CreateEmpty() { return  new CurlInterface_obj; }
hx::ObjectPtr< CurlInterface_obj > CurlInterface_obj::__new()
{  hx::ObjectPtr< CurlInterface_obj > result = new CurlInterface_obj();
	result->__construct();
	return result;}

Dynamic CurlInterface_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CurlInterface_obj > result = new CurlInterface_obj();
	result->__construct();
	return result;}

::haxe::Int64 CurlInterface_obj::init( ){
	HX_STACK_PUSH("CurlInterface::init","ua/org/shaddy/tools/url/CurlInterfaceCpp.hx",51);
	HX_STACK_LINE(52)
	long handler = (long) curl_easy_init();;
	HX_STACK_LINE(55)
	int hi = handler >> 32;		HX_STACK_VAR(hi,"hi");
	HX_STACK_LINE(56)
	int lo = handler & 0x00000000ffffffff;		HX_STACK_VAR(lo,"lo");
	HX_STACK_LINE(57)
	::haxe::Int64 res = ::haxe::Int64_obj::__new(hi,lo);		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(58)
	return res;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CurlInterface_obj,init,return )

bool CurlInterface_obj::setOpt( ::haxe::Int64 ch,int option,Dynamic value){
	HX_STACK_PUSH("CurlInterface::setOpt","ua/org/shaddy/tools/url/CurlInterfaceCpp.hx",62);
	HX_STACK_ARG(ch,"ch");
	HX_STACK_ARG(option,"option");
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(63)
	int hi = ::haxe::Int64_obj::getHigh(ch);		HX_STACK_VAR(hi,"hi");
	HX_STACK_LINE(64)
	int lo = ::haxe::Int64_obj::getLow(ch);		HX_STACK_VAR(lo,"lo");
	HX_STACK_LINE(65)
	long handler = ((long) hi << 32) | lo;
	HX_STACK_LINE(67)
	if ((::Std_obj::is(value,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(68)
		String strr = (String) value;
		HX_STACK_LINE(69)
		return curl_easy_setopt((CURL*) handler, (CURLoption) option, strr.c_str());
	}
	else{
		HX_STACK_LINE(70)
		if ((::Std_obj::is(value,hx::ClassOf< ::Int >()))){
			HX_STACK_LINE(70)
			return curl_easy_setopt((CURL*) handler, (CURLoption) option, (int) value);
		}
		else{
			HX_STACK_LINE(72)
			if ((::Std_obj::is(value,hx::ClassOf< ::Bool >()))){
				HX_STACK_LINE(72)
				return curl_easy_setopt((CURL*) handler, (CURLoption) option, (bool) value);
			}
		}
	}
	HX_STACK_LINE(76)
	::haxe::Log_obj::trace((((HX_CSTRING("Unknown option type [") + option) + HX_CSTRING("]: ")) + ::Std_obj::string(value)),hx::SourceInfo(HX_CSTRING("CurlInterfaceCpp.hx"),76,HX_CSTRING("ua.org.shaddy.tools.url.CurlInterface"),HX_CSTRING("setOpt")));
	HX_STACK_LINE(77)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CurlInterface_obj,setOpt,return )

Void CurlInterface_obj::setOptArray( ::haxe::Int64 ch,::haxe::ds::IntMap arr){
{
		HX_STACK_PUSH("CurlInterface::setOptArray","ua/org/shaddy/tools/url/CurlInterfaceCpp.hx",79);
		HX_STACK_ARG(ch,"ch");
		HX_STACK_ARG(arr,"arr");
		HX_STACK_LINE(79)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(arr->keys());  __it->hasNext(); ){
			int i = __it->next();
			::ua::org::shaddy::tools::url::CurlInterface_obj::setOpt(ch,i,arr->get(i));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CurlInterface_obj,setOptArray,(void))

Dynamic CurlInterface_obj::getInfo( ::haxe::Int64 ch,int option){
	HX_STACK_PUSH("CurlInterface::getInfo","ua/org/shaddy/tools/url/CurlInterfaceCpp.hx",85);
	HX_STACK_ARG(ch,"ch");
	HX_STACK_ARG(option,"option");
	HX_STACK_LINE(85)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CurlInterface_obj,getInfo,return )

::String CurlInterface_obj::exec( ::haxe::Int64 ch){
	HX_STACK_PUSH("CurlInterface::exec","ua/org/shaddy/tools/url/CurlInterfaceCpp.hx",89);
	HX_STACK_ARG(ch,"ch");
	HX_STACK_LINE(90)
	::ua::org::shaddy::tools::url::CurlInterface_obj::setOpt(ch,::ua::org::shaddy::tools::url::CurlOptions_obj::NOPROGRESS,true);
	HX_STACK_LINE(93)
	int hi = ::haxe::Int64_obj::getHigh(ch);		HX_STACK_VAR(hi,"hi");
	HX_STACK_LINE(94)
	int lo = ::haxe::Int64_obj::getLow(ch);		HX_STACK_VAR(lo,"lo");
	HX_STACK_LINE(95)
	
			struct MemoryStruct chunk;
			chunk.memory = (char *) malloc(1);  /* will be grown as needed by the realloc above */ 
  			chunk.size = 0;    /* no data at this point */ 
			long handler = ((long) hi << 32) | lo;
			curl_easy_setopt((CURL*) handler, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
			curl_easy_setopt((CURL*) handler, CURLOPT_WRITEDATA, (void *)&chunk);
			curl_easy_perform((CURL*) handler);
		;
	HX_STACK_LINE(104)
	bool success = chunk.memory;		HX_STACK_VAR(success,"success");
	HX_STACK_LINE(105)
	if ((success)){
		HX_STACK_LINE(106)
		int len = chunk.size;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(107)
		::StringBuf buf = ::StringBuf_obj::__new();		HX_STACK_VAR(buf,"buf");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			while(((_g < len))){
				HX_STACK_LINE(108)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(109)
				int byte = chunk.memory[i];		HX_STACK_VAR(byte,"byte");
				HX_STACK_LINE(111)
				buf->b->push(::String::fromCharCode(byte));
			}
		}
		HX_STACK_LINE(113)
		return buf->b->join(HX_CSTRING(""));
	}
	HX_STACK_LINE(116)
	
			if (chunk.memory){
				//printf ("%s", chunk.memory);
				//printf ("Size is: %i \n", chunk.size);
				//return String(chunk.memory, chunk.size);
    	    	free(chunk.memory);
    	    	
    	    }
		;
	HX_STACK_LINE(126)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CurlInterface_obj,exec,return )

bool CurlInterface_obj::close( ::haxe::Int64 ch){
	HX_STACK_PUSH("CurlInterface::close","ua/org/shaddy/tools/url/CurlInterfaceCpp.hx",129);
	HX_STACK_ARG(ch,"ch");
	HX_STACK_LINE(130)
	int hi = ::haxe::Int64_obj::getHigh(ch);		HX_STACK_VAR(hi,"hi");
	HX_STACK_LINE(131)
	int lo = ::haxe::Int64_obj::getLow(ch);		HX_STACK_VAR(lo,"lo");
	HX_STACK_LINE(132)
	long handler = ((long) hi << 32) | lo;
	HX_STACK_LINE(133)
	curl_easy_cleanup((CURL*) handler);
	HX_STACK_LINE(134)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CurlInterface_obj,close,return )


CurlInterface_obj::CurlInterface_obj()
{
}

void CurlInterface_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CurlInterface);
	HX_MARK_END_CLASS();
}

void CurlInterface_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic CurlInterface_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setOpt") ) { return setOpt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getInfo") ) { return getInfo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setOptArray") ) { return setOptArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CurlInterface_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CurlInterface_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("setOpt"),
	HX_CSTRING("setOptArray"),
	HX_CSTRING("getInfo"),
	HX_CSTRING("exec"),
	HX_CSTRING("close"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CurlInterface_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CurlInterface_obj::__mClass,"__mClass");
};

Class CurlInterface_obj::__mClass;

void CurlInterface_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.tools.url.CurlInterface"), hx::TCanCast< CurlInterface_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CurlInterface_obj::__boot()
{
}

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
