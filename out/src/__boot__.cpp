#include <hxcpp.h>

#include <ua/org/shaddy/tools/url/proxy/ProxyManager.h>
#include <ua/org/shaddy/tools/url/proxy/Proxy.h>
#include <ua/org/shaddy/tools/url/proxy/ProxyType.h>
#include <ua/org/shaddy/tools/url/cache/Cache.h>
#include <ua/org/shaddy/tools/url/SimpleUrl.h>
#include <ua/org/shaddy/tools/url/SimpleUrlCurl.h>
#include <ua/org/shaddy/tools/url/CurlOptions.h>
#include <ua/org/shaddy/tools/url/CurlInterface.h>
#include <ua/org/shaddy/tools/url/CurlInfo.h>
#include <ua/org/shaddy/tools/log/Logger.h>
#include <ua/org/shaddy/tools/log/LogLevel.h>
#include <ua/org/shaddy/Tests.h>
#include <sys/io/FileOutput.h>
#include <sys/io/FileInput.h>
#include <sys/io/File.h>
#include <sys/FileSystem.h>
#include <haxe/io/Output.h>
#include <haxe/io/Input.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/Bytes.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Log.h>
#include <haxe/Int64.h>
#include <Xml.h>
#include <XmlType.h>
#include <Type.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Std.h>
#include <IMap.h>
#include <EReg.h>
#include <cpp/Lib.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::ua::org::shaddy::tools::url::proxy::ProxyManager_obj::__register();
::ua::org::shaddy::tools::url::proxy::Proxy_obj::__register();
::ua::org::shaddy::tools::url::proxy::ProxyType_obj::__register();
::ua::org::shaddy::tools::url::cache::Cache_obj::__register();
::ua::org::shaddy::tools::url::SimpleUrl_obj::__register();
::ua::org::shaddy::tools::url::SimpleUrlCurl_obj::__register();
::ua::org::shaddy::tools::url::CurlOptions_obj::__register();
::ua::org::shaddy::tools::url::CurlInterface_obj::__register();
::ua::org::shaddy::tools::url::CurlInfo_obj::__register();
::ua::org::shaddy::tools::log::Logger_obj::__register();
::ua::org::shaddy::tools::log::LogLevel_obj::__register();
::ua::org::shaddy::Tests_obj::__register();
::sys::io::FileOutput_obj::__register();
::sys::io::FileInput_obj::__register();
::sys::io::File_obj::__register();
::sys::FileSystem_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Log_obj::__register();
::haxe::Int64_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::Type_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::IMap_obj::__register();
::EReg_obj::__register();
::cpp::Lib_obj::__register();
::Xml_obj::__init__();
::ua::org::shaddy::tools::url::CurlInfo_obj::__init__();
::ua::org::shaddy::tools::url::CurlOptions_obj::__init__();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::Xml_obj::__boot();
::haxe::Log_obj::__boot();
::IMap_obj::__boot();
::Std_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Type_obj::__boot();
::XmlType_obj::__boot();
::haxe::Int64_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Input_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::File_obj::__boot();
::sys::io::FileInput_obj::__boot();
::sys::io::FileOutput_obj::__boot();
::ua::org::shaddy::Tests_obj::__boot();
::ua::org::shaddy::tools::log::LogLevel_obj::__boot();
::ua::org::shaddy::tools::log::Logger_obj::__boot();
::ua::org::shaddy::tools::url::CurlInfo_obj::__boot();
::ua::org::shaddy::tools::url::CurlInterface_obj::__boot();
::ua::org::shaddy::tools::url::CurlOptions_obj::__boot();
::ua::org::shaddy::tools::url::SimpleUrlCurl_obj::__boot();
::ua::org::shaddy::tools::url::SimpleUrl_obj::__boot();
::ua::org::shaddy::tools::url::cache::Cache_obj::__boot();
::ua::org::shaddy::tools::url::proxy::ProxyType_obj::__boot();
::ua::org::shaddy::tools::url::proxy::Proxy_obj::__boot();
::ua::org::shaddy::tools::url::proxy::ProxyManager_obj::__boot();
}

