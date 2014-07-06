#include <hxcpp.h>

#include <ua/org/shaddy/tools/url/SimpleUrl.h>
#include <ua/org/shaddy/tools/url/SimpleUrlCurl.h>
#include <ua/org/shaddy/tools/url/CurlOptions.h>
#include <ua/org/shaddy/tools/url/CurlInterface.h>
#include <ua/org/shaddy/tools/url/CurlInfo.h>
#include <ua/org/shaddy/Tests.h>
#include <haxe/io/Eof.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Log.h>
#include <haxe/Int64.h>
#include <StringBuf.h>
#include <Std.h>
#include <IMap.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::ua::org::shaddy::tools::url::SimpleUrl_obj::__register();
::ua::org::shaddy::tools::url::SimpleUrlCurl_obj::__register();
::ua::org::shaddy::tools::url::CurlOptions_obj::__register();
::ua::org::shaddy::tools::url::CurlInterface_obj::__register();
::ua::org::shaddy::tools::url::CurlInfo_obj::__register();
::ua::org::shaddy::Tests_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Log_obj::__register();
::haxe::Int64_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::IMap_obj::__register();
::ua::org::shaddy::tools::url::CurlInfo_obj::__init__();
::ua::org::shaddy::tools::url::CurlOptions_obj::__init__();
::haxe::Log_obj::__boot();
::IMap_obj::__boot();
::Std_obj::__boot();
::StringBuf_obj::__boot();
::haxe::Int64_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::io::Eof_obj::__boot();
::ua::org::shaddy::Tests_obj::__boot();
::ua::org::shaddy::tools::url::CurlInfo_obj::__boot();
::ua::org::shaddy::tools::url::CurlInterface_obj::__boot();
::ua::org::shaddy::tools::url::CurlOptions_obj::__boot();
::ua::org::shaddy::tools::url::SimpleUrlCurl_obj::__boot();
::ua::org::shaddy::tools::url::SimpleUrl_obj::__boot();
}

