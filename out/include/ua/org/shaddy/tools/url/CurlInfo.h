#ifndef INCLUDED_ua_org_shaddy_tools_url_CurlInfo
#define INCLUDED_ua_org_shaddy_tools_url_CurlInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(ua,org,shaddy,tools,url,CurlInfo)
#include <curl/curl.h>
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{


class HXCPP_CLASS_ATTRIBUTES  CurlInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CurlInfo_obj OBJ_;
		CurlInfo_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CurlInfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CurlInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		static void __init__();

		::String __ToString() const { return HX_CSTRING("CurlInfo"); }

		static int CONNECT_TIME;
		static int CONTENT_LENGTH_DOWNLOAD;
		static int CONTENT_LENGTH_UPLOAD;
		static int CONTENT_TYPE;
		static int EFFECTIVE_URL;
		static int FILETIME;
		static int HEADER_OUT;
		static int HEADER_SIZE;
		static int HTTP_CODE;
		static int LASTONE;
		static int NAMELOOKUP_TIME;
		static int PRETRANSFER_TIME;
		static int PRIVATE;
		static int REDIRECT_COUNT;
		static int REDIRECT_TIME;
		static int REQUEST_SIZE;
		static int SIZE_DOWNLOAD;
		static int SIZE_UPLOAD;
		static int SPEED_DOWNLOAD;
		static int SPEED_UPLOAD;
		static int SSL_VERIFYRESULT;
		static int STARTTRANSFER_TIME;
		static int TOTAL_TIME;
		static int HTTP_CONNECTCODE;
		static int HTTPAUTH_AVAIL;
		static int RESPONSE_CODE;
		static int PROXYAUTH_AVAIL;
		static int OS_ERRNO;
		static int NUM_CONNECTS;
		static int SSL_ENGINES;
		static int COOKIELIST;
		static int FTP_ENTRY_PATH;
		static int REDIRECT_URL;
		static int APPCONNECT_TIME;
		static int PRIMARY_IP;
		static int CERTINFO;
		static int CONDITION_UNMET;
		static int RTSP_CLIENT_CSEQ;
		static int RTSP_CSEQ_RECV;
		static int RTSP_SERVER_CSEQ;
		static int RTSP_SESSION_ID;
		static int LOCAL_IP;
		static int LOCAL_PORT;
		static int PRIMARY_PORT;
};

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url

#endif /* INCLUDED_ua_org_shaddy_tools_url_CurlInfo */ 
