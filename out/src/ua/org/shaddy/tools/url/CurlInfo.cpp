#include <hxcpp.h>

#ifndef INCLUDED_ua_org_shaddy_tools_url_CurlInfo
#include <ua/org/shaddy/tools/url/CurlInfo.h>
#endif
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{

Void CurlInfo_obj::__construct()
{
	return null();
}

CurlInfo_obj::~CurlInfo_obj() { }

Dynamic CurlInfo_obj::__CreateEmpty() { return  new CurlInfo_obj; }
hx::ObjectPtr< CurlInfo_obj > CurlInfo_obj::__new()
{  hx::ObjectPtr< CurlInfo_obj > result = new CurlInfo_obj();
	result->__construct();
	return result;}

Dynamic CurlInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CurlInfo_obj > result = new CurlInfo_obj();
	result->__construct();
	return result;}

void CurlInfo_obj::__init__() {
HX_STACK_PUSH("CurlInfo::__init__","ua/org/shaddy/tools/url/CurlInfoCpp.hx",50);
{
	HX_STACK_LINE(51)
	::ua::org::shaddy::tools::url::CurlInfo_obj::CONNECT_TIME = CURLINFO_CONNECT_TIME;
	HX_STACK_LINE(52)
	::ua::org::shaddy::tools::url::CurlInfo_obj::CONTENT_LENGTH_DOWNLOAD = CURLINFO_CONTENT_LENGTH_DOWNLOAD;
	HX_STACK_LINE(53)
	::ua::org::shaddy::tools::url::CurlInfo_obj::CONTENT_LENGTH_UPLOAD = CURLINFO_CONTENT_LENGTH_UPLOAD;
	HX_STACK_LINE(54)
	::ua::org::shaddy::tools::url::CurlInfo_obj::CONTENT_TYPE = CURLINFO_CONTENT_TYPE;
	HX_STACK_LINE(55)
	::ua::org::shaddy::tools::url::CurlInfo_obj::EFFECTIVE_URL = CURLINFO_EFFECTIVE_URL;
	HX_STACK_LINE(56)
	::ua::org::shaddy::tools::url::CurlInfo_obj::FILETIME = CURLINFO_FILETIME;
	HX_STACK_LINE(57)
	::ua::org::shaddy::tools::url::CurlInfo_obj::HEADER_OUT = CURLINFO_HEADER_OUT;
	HX_STACK_LINE(58)
	::ua::org::shaddy::tools::url::CurlInfo_obj::HEADER_SIZE = CURLINFO_HEADER_SIZE;
	HX_STACK_LINE(59)
	::ua::org::shaddy::tools::url::CurlInfo_obj::HTTP_CODE = CURLINFO_HTTP_CODE;
	HX_STACK_LINE(60)
	::ua::org::shaddy::tools::url::CurlInfo_obj::LASTONE = CURLINFO_LASTONE;
	HX_STACK_LINE(61)
	::ua::org::shaddy::tools::url::CurlInfo_obj::NAMELOOKUP_TIME = CURLINFO_NAMELOOKUP_TIME;
	HX_STACK_LINE(62)
	::ua::org::shaddy::tools::url::CurlInfo_obj::PRETRANSFER_TIME = CURLINFO_PRETRANSFER_TIME;
	HX_STACK_LINE(63)
	::ua::org::shaddy::tools::url::CurlInfo_obj::PRIVATE = CURLINFO_PRIVATE;
	HX_STACK_LINE(64)
	::ua::org::shaddy::tools::url::CurlInfo_obj::REDIRECT_COUNT = CURLINFO_REDIRECT_COUNT;
	HX_STACK_LINE(65)
	::ua::org::shaddy::tools::url::CurlInfo_obj::REDIRECT_TIME = CURLINFO_REDIRECT_TIME;
	HX_STACK_LINE(66)
	::ua::org::shaddy::tools::url::CurlInfo_obj::REQUEST_SIZE = CURLINFO_REQUEST_SIZE;
	HX_STACK_LINE(67)
	::ua::org::shaddy::tools::url::CurlInfo_obj::SIZE_DOWNLOAD = CURLINFO_SIZE_DOWNLOAD;
	HX_STACK_LINE(68)
	::ua::org::shaddy::tools::url::CurlInfo_obj::SIZE_UPLOAD = CURLINFO_SIZE_UPLOAD;
	HX_STACK_LINE(69)
	::ua::org::shaddy::tools::url::CurlInfo_obj::SPEED_DOWNLOAD = CURLINFO_SPEED_DOWNLOAD;
	HX_STACK_LINE(70)
	::ua::org::shaddy::tools::url::CurlInfo_obj::SPEED_UPLOAD = CURLINFO_SPEED_UPLOAD;
	HX_STACK_LINE(71)
	::ua::org::shaddy::tools::url::CurlInfo_obj::SSL_VERIFYRESULT = CURLINFO_SSL_VERIFYRESULT;
	HX_STACK_LINE(72)
	::ua::org::shaddy::tools::url::CurlInfo_obj::STARTTRANSFER_TIME = CURLINFO_STARTTRANSFER_TIME;
	HX_STACK_LINE(73)
	::ua::org::shaddy::tools::url::CurlInfo_obj::TOTAL_TIME = CURLINFO_TOTAL_TIME;
	HX_STACK_LINE(74)
	::ua::org::shaddy::tools::url::CurlInfo_obj::HTTP_CONNECTCODE = CURLINFO_HTTP_CONNECTCODE;
	HX_STACK_LINE(75)
	::ua::org::shaddy::tools::url::CurlInfo_obj::HTTPAUTH_AVAIL = CURLINFO_HTTPAUTH_AVAIL;
	HX_STACK_LINE(76)
	::ua::org::shaddy::tools::url::CurlInfo_obj::RESPONSE_CODE = CURLINFO_RESPONSE_CODE;
	HX_STACK_LINE(77)
	::ua::org::shaddy::tools::url::CurlInfo_obj::PROXYAUTH_AVAIL = CURLINFO_PROXYAUTH_AVAIL;
	HX_STACK_LINE(78)
	::ua::org::shaddy::tools::url::CurlInfo_obj::OS_ERRNO = CURLINFO_OS_ERRNO;
	HX_STACK_LINE(79)
	::ua::org::shaddy::tools::url::CurlInfo_obj::NUM_CONNECTS = CURLINFO_NUM_CONNECTS;
	HX_STACK_LINE(80)
	::ua::org::shaddy::tools::url::CurlInfo_obj::SSL_ENGINES = CURLINFO_SSL_ENGINES;
	HX_STACK_LINE(81)
	::ua::org::shaddy::tools::url::CurlInfo_obj::COOKIELIST = CURLINFO_COOKIELIST;
	HX_STACK_LINE(82)
	::ua::org::shaddy::tools::url::CurlInfo_obj::FTP_ENTRY_PATH = CURLINFO_FTP_ENTRY_PATH;
	HX_STACK_LINE(83)
	::ua::org::shaddy::tools::url::CurlInfo_obj::REDIRECT_URL = CURLINFO_REDIRECT_URL;
	HX_STACK_LINE(84)
	::ua::org::shaddy::tools::url::CurlInfo_obj::APPCONNECT_TIME = CURLINFO_APPCONNECT_TIME;
	HX_STACK_LINE(85)
	::ua::org::shaddy::tools::url::CurlInfo_obj::PRIMARY_IP = CURLINFO_PRIMARY_IP;
	HX_STACK_LINE(86)
	::ua::org::shaddy::tools::url::CurlInfo_obj::CERTINFO = CURLINFO_CERTINFO;
	HX_STACK_LINE(87)
	::ua::org::shaddy::tools::url::CurlInfo_obj::CONDITION_UNMET = CURLINFO_CONDITION_UNMET;
	HX_STACK_LINE(88)
	::ua::org::shaddy::tools::url::CurlInfo_obj::RTSP_CLIENT_CSEQ = CURLINFO_RTSP_CLIENT_CSEQ;
	HX_STACK_LINE(89)
	::ua::org::shaddy::tools::url::CurlInfo_obj::RTSP_CSEQ_RECV = CURLINFO_RTSP_CSEQ_RECV;
	HX_STACK_LINE(90)
	::ua::org::shaddy::tools::url::CurlInfo_obj::RTSP_SERVER_CSEQ = CURLINFO_RTSP_SERVER_CSEQ;
	HX_STACK_LINE(91)
	::ua::org::shaddy::tools::url::CurlInfo_obj::RTSP_SESSION_ID = CURLINFO_RTSP_SESSION_ID;
	HX_STACK_LINE(92)
	::ua::org::shaddy::tools::url::CurlInfo_obj::LOCAL_IP = CURLINFO_LOCAL_IP;
	HX_STACK_LINE(93)
	::ua::org::shaddy::tools::url::CurlInfo_obj::LOCAL_PORT = CURLINFO_LOCAL_PORT;
	HX_STACK_LINE(94)
	::ua::org::shaddy::tools::url::CurlInfo_obj::PRIMARY_PORT = CURLINFO_PRIMARY_PORT;
}
}

int CurlInfo_obj::CONNECT_TIME;

int CurlInfo_obj::CONTENT_LENGTH_DOWNLOAD;

int CurlInfo_obj::CONTENT_LENGTH_UPLOAD;

int CurlInfo_obj::CONTENT_TYPE;

int CurlInfo_obj::EFFECTIVE_URL;

int CurlInfo_obj::FILETIME;

int CurlInfo_obj::HEADER_OUT;

int CurlInfo_obj::HEADER_SIZE;

int CurlInfo_obj::HTTP_CODE;

int CurlInfo_obj::LASTONE;

int CurlInfo_obj::NAMELOOKUP_TIME;

int CurlInfo_obj::PRETRANSFER_TIME;

int CurlInfo_obj::PRIVATE;

int CurlInfo_obj::REDIRECT_COUNT;

int CurlInfo_obj::REDIRECT_TIME;

int CurlInfo_obj::REQUEST_SIZE;

int CurlInfo_obj::SIZE_DOWNLOAD;

int CurlInfo_obj::SIZE_UPLOAD;

int CurlInfo_obj::SPEED_DOWNLOAD;

int CurlInfo_obj::SPEED_UPLOAD;

int CurlInfo_obj::SSL_VERIFYRESULT;

int CurlInfo_obj::STARTTRANSFER_TIME;

int CurlInfo_obj::TOTAL_TIME;

int CurlInfo_obj::HTTP_CONNECTCODE;

int CurlInfo_obj::HTTPAUTH_AVAIL;

int CurlInfo_obj::RESPONSE_CODE;

int CurlInfo_obj::PROXYAUTH_AVAIL;

int CurlInfo_obj::OS_ERRNO;

int CurlInfo_obj::NUM_CONNECTS;

int CurlInfo_obj::SSL_ENGINES;

int CurlInfo_obj::COOKIELIST;

int CurlInfo_obj::FTP_ENTRY_PATH;

int CurlInfo_obj::REDIRECT_URL;

int CurlInfo_obj::APPCONNECT_TIME;

int CurlInfo_obj::PRIMARY_IP;

int CurlInfo_obj::CERTINFO;

int CurlInfo_obj::CONDITION_UNMET;

int CurlInfo_obj::RTSP_CLIENT_CSEQ;

int CurlInfo_obj::RTSP_CSEQ_RECV;

int CurlInfo_obj::RTSP_SERVER_CSEQ;

int CurlInfo_obj::RTSP_SESSION_ID;

int CurlInfo_obj::LOCAL_IP;

int CurlInfo_obj::LOCAL_PORT;

int CurlInfo_obj::PRIMARY_PORT;


CurlInfo_obj::CurlInfo_obj()
{
}

void CurlInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CurlInfo);
	HX_MARK_END_CLASS();
}

void CurlInfo_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic CurlInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"LASTONE") ) { return LASTONE; }
		if (HX_FIELD_EQ(inName,"PRIVATE") ) { return PRIVATE; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FILETIME") ) { return FILETIME; }
		if (HX_FIELD_EQ(inName,"OS_ERRNO") ) { return OS_ERRNO; }
		if (HX_FIELD_EQ(inName,"CERTINFO") ) { return CERTINFO; }
		if (HX_FIELD_EQ(inName,"LOCAL_IP") ) { return LOCAL_IP; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HTTP_CODE") ) { return HTTP_CODE; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"HEADER_OUT") ) { return HEADER_OUT; }
		if (HX_FIELD_EQ(inName,"TOTAL_TIME") ) { return TOTAL_TIME; }
		if (HX_FIELD_EQ(inName,"COOKIELIST") ) { return COOKIELIST; }
		if (HX_FIELD_EQ(inName,"PRIMARY_IP") ) { return PRIMARY_IP; }
		if (HX_FIELD_EQ(inName,"LOCAL_PORT") ) { return LOCAL_PORT; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HEADER_SIZE") ) { return HEADER_SIZE; }
		if (HX_FIELD_EQ(inName,"SIZE_UPLOAD") ) { return SIZE_UPLOAD; }
		if (HX_FIELD_EQ(inName,"SSL_ENGINES") ) { return SSL_ENGINES; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CONNECT_TIME") ) { return CONNECT_TIME; }
		if (HX_FIELD_EQ(inName,"CONTENT_TYPE") ) { return CONTENT_TYPE; }
		if (HX_FIELD_EQ(inName,"REQUEST_SIZE") ) { return REQUEST_SIZE; }
		if (HX_FIELD_EQ(inName,"SPEED_UPLOAD") ) { return SPEED_UPLOAD; }
		if (HX_FIELD_EQ(inName,"NUM_CONNECTS") ) { return NUM_CONNECTS; }
		if (HX_FIELD_EQ(inName,"REDIRECT_URL") ) { return REDIRECT_URL; }
		if (HX_FIELD_EQ(inName,"PRIMARY_PORT") ) { return PRIMARY_PORT; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"EFFECTIVE_URL") ) { return EFFECTIVE_URL; }
		if (HX_FIELD_EQ(inName,"REDIRECT_TIME") ) { return REDIRECT_TIME; }
		if (HX_FIELD_EQ(inName,"SIZE_DOWNLOAD") ) { return SIZE_DOWNLOAD; }
		if (HX_FIELD_EQ(inName,"RESPONSE_CODE") ) { return RESPONSE_CODE; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"REDIRECT_COUNT") ) { return REDIRECT_COUNT; }
		if (HX_FIELD_EQ(inName,"SPEED_DOWNLOAD") ) { return SPEED_DOWNLOAD; }
		if (HX_FIELD_EQ(inName,"HTTPAUTH_AVAIL") ) { return HTTPAUTH_AVAIL; }
		if (HX_FIELD_EQ(inName,"FTP_ENTRY_PATH") ) { return FTP_ENTRY_PATH; }
		if (HX_FIELD_EQ(inName,"RTSP_CSEQ_RECV") ) { return RTSP_CSEQ_RECV; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NAMELOOKUP_TIME") ) { return NAMELOOKUP_TIME; }
		if (HX_FIELD_EQ(inName,"PROXYAUTH_AVAIL") ) { return PROXYAUTH_AVAIL; }
		if (HX_FIELD_EQ(inName,"APPCONNECT_TIME") ) { return APPCONNECT_TIME; }
		if (HX_FIELD_EQ(inName,"CONDITION_UNMET") ) { return CONDITION_UNMET; }
		if (HX_FIELD_EQ(inName,"RTSP_SESSION_ID") ) { return RTSP_SESSION_ID; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"PRETRANSFER_TIME") ) { return PRETRANSFER_TIME; }
		if (HX_FIELD_EQ(inName,"SSL_VERIFYRESULT") ) { return SSL_VERIFYRESULT; }
		if (HX_FIELD_EQ(inName,"HTTP_CONNECTCODE") ) { return HTTP_CONNECTCODE; }
		if (HX_FIELD_EQ(inName,"RTSP_CLIENT_CSEQ") ) { return RTSP_CLIENT_CSEQ; }
		if (HX_FIELD_EQ(inName,"RTSP_SERVER_CSEQ") ) { return RTSP_SERVER_CSEQ; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STARTTRANSFER_TIME") ) { return STARTTRANSFER_TIME; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"CONTENT_LENGTH_UPLOAD") ) { return CONTENT_LENGTH_UPLOAD; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"CONTENT_LENGTH_DOWNLOAD") ) { return CONTENT_LENGTH_DOWNLOAD; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CurlInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"LASTONE") ) { LASTONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PRIVATE") ) { PRIVATE=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FILETIME") ) { FILETIME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OS_ERRNO") ) { OS_ERRNO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CERTINFO") ) { CERTINFO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOCAL_IP") ) { LOCAL_IP=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HTTP_CODE") ) { HTTP_CODE=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"HEADER_OUT") ) { HEADER_OUT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TOTAL_TIME") ) { TOTAL_TIME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COOKIELIST") ) { COOKIELIST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PRIMARY_IP") ) { PRIMARY_IP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOCAL_PORT") ) { LOCAL_PORT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HEADER_SIZE") ) { HEADER_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SIZE_UPLOAD") ) { SIZE_UPLOAD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSL_ENGINES") ) { SSL_ENGINES=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CONNECT_TIME") ) { CONNECT_TIME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONTENT_TYPE") ) { CONTENT_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REQUEST_SIZE") ) { REQUEST_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPEED_UPLOAD") ) { SPEED_UPLOAD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUM_CONNECTS") ) { NUM_CONNECTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REDIRECT_URL") ) { REDIRECT_URL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PRIMARY_PORT") ) { PRIMARY_PORT=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"EFFECTIVE_URL") ) { EFFECTIVE_URL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REDIRECT_TIME") ) { REDIRECT_TIME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SIZE_DOWNLOAD") ) { SIZE_DOWNLOAD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RESPONSE_CODE") ) { RESPONSE_CODE=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"REDIRECT_COUNT") ) { REDIRECT_COUNT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPEED_DOWNLOAD") ) { SPEED_DOWNLOAD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HTTPAUTH_AVAIL") ) { HTTPAUTH_AVAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTP_ENTRY_PATH") ) { FTP_ENTRY_PATH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RTSP_CSEQ_RECV") ) { RTSP_CSEQ_RECV=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NAMELOOKUP_TIME") ) { NAMELOOKUP_TIME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROXYAUTH_AVAIL") ) { PROXYAUTH_AVAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"APPCONNECT_TIME") ) { APPCONNECT_TIME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONDITION_UNMET") ) { CONDITION_UNMET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RTSP_SESSION_ID") ) { RTSP_SESSION_ID=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"PRETRANSFER_TIME") ) { PRETRANSFER_TIME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSL_VERIFYRESULT") ) { SSL_VERIFYRESULT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HTTP_CONNECTCODE") ) { HTTP_CONNECTCODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RTSP_CLIENT_CSEQ") ) { RTSP_CLIENT_CSEQ=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RTSP_SERVER_CSEQ") ) { RTSP_SERVER_CSEQ=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STARTTRANSFER_TIME") ) { STARTTRANSFER_TIME=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"CONTENT_LENGTH_UPLOAD") ) { CONTENT_LENGTH_UPLOAD=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"CONTENT_LENGTH_DOWNLOAD") ) { CONTENT_LENGTH_DOWNLOAD=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CurlInfo_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CONNECT_TIME"),
	HX_CSTRING("CONTENT_LENGTH_DOWNLOAD"),
	HX_CSTRING("CONTENT_LENGTH_UPLOAD"),
	HX_CSTRING("CONTENT_TYPE"),
	HX_CSTRING("EFFECTIVE_URL"),
	HX_CSTRING("FILETIME"),
	HX_CSTRING("HEADER_OUT"),
	HX_CSTRING("HEADER_SIZE"),
	HX_CSTRING("HTTP_CODE"),
	HX_CSTRING("LASTONE"),
	HX_CSTRING("NAMELOOKUP_TIME"),
	HX_CSTRING("PRETRANSFER_TIME"),
	HX_CSTRING("PRIVATE"),
	HX_CSTRING("REDIRECT_COUNT"),
	HX_CSTRING("REDIRECT_TIME"),
	HX_CSTRING("REQUEST_SIZE"),
	HX_CSTRING("SIZE_DOWNLOAD"),
	HX_CSTRING("SIZE_UPLOAD"),
	HX_CSTRING("SPEED_DOWNLOAD"),
	HX_CSTRING("SPEED_UPLOAD"),
	HX_CSTRING("SSL_VERIFYRESULT"),
	HX_CSTRING("STARTTRANSFER_TIME"),
	HX_CSTRING("TOTAL_TIME"),
	HX_CSTRING("HTTP_CONNECTCODE"),
	HX_CSTRING("HTTPAUTH_AVAIL"),
	HX_CSTRING("RESPONSE_CODE"),
	HX_CSTRING("PROXYAUTH_AVAIL"),
	HX_CSTRING("OS_ERRNO"),
	HX_CSTRING("NUM_CONNECTS"),
	HX_CSTRING("SSL_ENGINES"),
	HX_CSTRING("COOKIELIST"),
	HX_CSTRING("FTP_ENTRY_PATH"),
	HX_CSTRING("REDIRECT_URL"),
	HX_CSTRING("APPCONNECT_TIME"),
	HX_CSTRING("PRIMARY_IP"),
	HX_CSTRING("CERTINFO"),
	HX_CSTRING("CONDITION_UNMET"),
	HX_CSTRING("RTSP_CLIENT_CSEQ"),
	HX_CSTRING("RTSP_CSEQ_RECV"),
	HX_CSTRING("RTSP_SERVER_CSEQ"),
	HX_CSTRING("RTSP_SESSION_ID"),
	HX_CSTRING("LOCAL_IP"),
	HX_CSTRING("LOCAL_PORT"),
	HX_CSTRING("PRIMARY_PORT"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CurlInfo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::CONNECT_TIME,"CONNECT_TIME");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::CONTENT_LENGTH_DOWNLOAD,"CONTENT_LENGTH_DOWNLOAD");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::CONTENT_LENGTH_UPLOAD,"CONTENT_LENGTH_UPLOAD");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::CONTENT_TYPE,"CONTENT_TYPE");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::EFFECTIVE_URL,"EFFECTIVE_URL");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::FILETIME,"FILETIME");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::HEADER_OUT,"HEADER_OUT");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::HEADER_SIZE,"HEADER_SIZE");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::HTTP_CODE,"HTTP_CODE");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::LASTONE,"LASTONE");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::NAMELOOKUP_TIME,"NAMELOOKUP_TIME");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::PRETRANSFER_TIME,"PRETRANSFER_TIME");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::PRIVATE,"PRIVATE");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::REDIRECT_COUNT,"REDIRECT_COUNT");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::REDIRECT_TIME,"REDIRECT_TIME");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::REQUEST_SIZE,"REQUEST_SIZE");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::SIZE_DOWNLOAD,"SIZE_DOWNLOAD");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::SIZE_UPLOAD,"SIZE_UPLOAD");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::SPEED_DOWNLOAD,"SPEED_DOWNLOAD");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::SPEED_UPLOAD,"SPEED_UPLOAD");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::SSL_VERIFYRESULT,"SSL_VERIFYRESULT");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::STARTTRANSFER_TIME,"STARTTRANSFER_TIME");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::TOTAL_TIME,"TOTAL_TIME");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::HTTP_CONNECTCODE,"HTTP_CONNECTCODE");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::HTTPAUTH_AVAIL,"HTTPAUTH_AVAIL");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::RESPONSE_CODE,"RESPONSE_CODE");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::PROXYAUTH_AVAIL,"PROXYAUTH_AVAIL");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::OS_ERRNO,"OS_ERRNO");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::NUM_CONNECTS,"NUM_CONNECTS");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::SSL_ENGINES,"SSL_ENGINES");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::COOKIELIST,"COOKIELIST");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::FTP_ENTRY_PATH,"FTP_ENTRY_PATH");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::REDIRECT_URL,"REDIRECT_URL");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::APPCONNECT_TIME,"APPCONNECT_TIME");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::PRIMARY_IP,"PRIMARY_IP");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::CERTINFO,"CERTINFO");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::CONDITION_UNMET,"CONDITION_UNMET");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::RTSP_CLIENT_CSEQ,"RTSP_CLIENT_CSEQ");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::RTSP_CSEQ_RECV,"RTSP_CSEQ_RECV");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::RTSP_SERVER_CSEQ,"RTSP_SERVER_CSEQ");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::RTSP_SESSION_ID,"RTSP_SESSION_ID");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::LOCAL_IP,"LOCAL_IP");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::LOCAL_PORT,"LOCAL_PORT");
	HX_MARK_MEMBER_NAME(CurlInfo_obj::PRIMARY_PORT,"PRIMARY_PORT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::CONNECT_TIME,"CONNECT_TIME");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::CONTENT_LENGTH_DOWNLOAD,"CONTENT_LENGTH_DOWNLOAD");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::CONTENT_LENGTH_UPLOAD,"CONTENT_LENGTH_UPLOAD");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::CONTENT_TYPE,"CONTENT_TYPE");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::EFFECTIVE_URL,"EFFECTIVE_URL");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::FILETIME,"FILETIME");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::HEADER_OUT,"HEADER_OUT");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::HEADER_SIZE,"HEADER_SIZE");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::HTTP_CODE,"HTTP_CODE");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::LASTONE,"LASTONE");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::NAMELOOKUP_TIME,"NAMELOOKUP_TIME");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::PRETRANSFER_TIME,"PRETRANSFER_TIME");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::PRIVATE,"PRIVATE");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::REDIRECT_COUNT,"REDIRECT_COUNT");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::REDIRECT_TIME,"REDIRECT_TIME");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::REQUEST_SIZE,"REQUEST_SIZE");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::SIZE_DOWNLOAD,"SIZE_DOWNLOAD");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::SIZE_UPLOAD,"SIZE_UPLOAD");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::SPEED_DOWNLOAD,"SPEED_DOWNLOAD");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::SPEED_UPLOAD,"SPEED_UPLOAD");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::SSL_VERIFYRESULT,"SSL_VERIFYRESULT");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::STARTTRANSFER_TIME,"STARTTRANSFER_TIME");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::TOTAL_TIME,"TOTAL_TIME");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::HTTP_CONNECTCODE,"HTTP_CONNECTCODE");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::HTTPAUTH_AVAIL,"HTTPAUTH_AVAIL");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::RESPONSE_CODE,"RESPONSE_CODE");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::PROXYAUTH_AVAIL,"PROXYAUTH_AVAIL");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::OS_ERRNO,"OS_ERRNO");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::NUM_CONNECTS,"NUM_CONNECTS");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::SSL_ENGINES,"SSL_ENGINES");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::COOKIELIST,"COOKIELIST");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::FTP_ENTRY_PATH,"FTP_ENTRY_PATH");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::REDIRECT_URL,"REDIRECT_URL");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::APPCONNECT_TIME,"APPCONNECT_TIME");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::PRIMARY_IP,"PRIMARY_IP");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::CERTINFO,"CERTINFO");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::CONDITION_UNMET,"CONDITION_UNMET");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::RTSP_CLIENT_CSEQ,"RTSP_CLIENT_CSEQ");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::RTSP_CSEQ_RECV,"RTSP_CSEQ_RECV");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::RTSP_SERVER_CSEQ,"RTSP_SERVER_CSEQ");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::RTSP_SESSION_ID,"RTSP_SESSION_ID");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::LOCAL_IP,"LOCAL_IP");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::LOCAL_PORT,"LOCAL_PORT");
	HX_VISIT_MEMBER_NAME(CurlInfo_obj::PRIMARY_PORT,"PRIMARY_PORT");
};

Class CurlInfo_obj::__mClass;

void CurlInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.tools.url.CurlInfo"), hx::TCanCast< CurlInfo_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CurlInfo_obj::__boot()
{
}

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
