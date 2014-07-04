#ifndef INCLUDED_ua_org_shaddy_tools_url_CurlOptions
#define INCLUDED_ua_org_shaddy_tools_url_CurlOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(ua,org,shaddy,tools,url,CurlOptions)
#include <curl/curl.h>
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{


class HXCPP_CLASS_ATTRIBUTES  CurlOptions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CurlOptions_obj OBJ_;
		CurlOptions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CurlOptions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CurlOptions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		static void __init__();

		::String __ToString() const { return HX_CSTRING("CurlOptions"); }

		static int AUTOREFERER;
		static int BUFFERSIZE;
		static int CAINFO;
		static int CAPATH;
		static int CLOSEPOLICY;
		static int CONNECTTIMEOUT;
		static int COOKIE;
		static int COOKIEFILE;
		static int COOKIEJAR;
		static int COOKIESESSION;
		static int CRLF;
		static int CUSTOMREQUEST;
		static int DNS_CACHE_TIMEOUT;
		static int DNS_USE_GLOBAL_CACHE;
		static int EGDSOCKET;
		static int ENCODING;
		static int FAILONERROR;
		static int FILE;
		static int FILETIME;
		static int FOLLOWLOCATION;
		static int FORBID_REUSE;
		static int FRESH_CONNECT;
		static int FTPAPPEND;
		static int FTPLISTONLY;
		static int FTPPORT;
		static int FTP_USE_EPRT;
		static int FTP_USE_EPSV;
		static int HEADER;
		static int HEADERFUNCTION;
		static int HTTP200ALIASES;
		static int HTTPGET;
		static int HTTPHEADER;
		static int HTTPPROXYTUNNEL;
		static int HTTP_VERSION;
		static int INFILE;
		static int INFILESIZE;
		static int INTERFACE;
		static int KRB4LEVEL;
		static int LOW_SPEED_LIMIT;
		static int LOW_SPEED_TIME;
		static int MAXCONNECTS;
		static int MAXREDIRS;
		static int NETRC;
		static int NOBODY;
		static int NOPROGRESS;
		static int NOSIGNAL;
		static int PORT;
		static int POST;
		static int POSTFIELDS;
		static int POSTQUOTE;
		static int PREQUOTE;
		static int PRIVATE;
		static int PROGRESSFUNCTION;
		static int PROXY;
		static int PROXYPORT;
		static int PROXYTYPE;
		static int PROXYUSERPWD;
		static int PUT;
		static int QUOTE;
		static int RANDOM_FILE;
		static int RANGE;
		static int READDATA;
		static int READFUNCTION;
		static int REFERER;
		static int RESUME_FROM;
		static int SHARE;
		static int SSLCERT;
		static int SSLCERTPASSWD;
		static int SSLCERTTYPE;
		static int SSLENGINE;
		static int SSLENGINE_DEFAULT;
		static int SSLKEY;
		static int SSLKEYPASSWD;
		static int SSLKEYTYPE;
		static int SSLVERSION;
		static int SSL_CIPHER_LIST;
		static int SSL_VERIFYHOST;
		static int SSL_VERIFYPEER;
		static int STDERR;
		static int TELNETOPTIONS;
		static int TIMECONDITION;
		static int TIMEOUT;
		static int TIMEVALUE;
		static int TRANSFERTEXT;
		static int UNRESTRICTED_AUTH;
		static int UPLOAD;
		static int URL;
		static int USERAGENT;
		static int USERPWD;
		static int VERBOSE;
		static int WRITEFUNCTION;
		static int WRITEHEADER;
		static int HTTPAUTH;
		static int FTP_CREATE_MISSING_DIRS;
		static int PROXYAUTH;
		static int FTP_RESPONSE_TIMEOUT;
		static int IPRESOLVE;
		static int MAXFILESIZE;
		static int FTP_SSL;
		static int NETRC_FILE;
		static int FTPSSLAUTH;
		static int FTP_ACCOUNT;
		static int TCP_NODELAY;
		static int COOKIELIST;
		static int IGNORE_CONTENT_LENGTH;
		static int FTP_SKIP_PASV_IP;
		static int FTP_FILEMETHOD;
		static int CONNECT_ONLY;
		static int LOCALPORT;
		static int LOCALPORTRANGE;
		static int FTP_ALTERNATIVE_TO_USER;
		static int MAX_RECV_SPEED_LARGE;
		static int MAX_SEND_SPEED_LARGE;
		static int SSL_SESSIONID_CACHE;
		static int FTP_SSL_CCC;
		static int SSH_AUTH_TYPES;
		static int SSH_PRIVATE_KEYFILE;
		static int SSH_PUBLIC_KEYFILE;
		static int CONNECTTIMEOUT_MS;
		static int HTTP_CONTENT_DECODING;
		static int HTTP_TRANSFER_DECODING;
		static int TIMEOUT_MS;
		static int KRBLEVEL;
		static int NEW_DIRECTORY_PERMS;
		static int NEW_FILE_PERMS;
		static int APPEND;
		static int DIRLISTONLY;
		static int USE_SSL;
		static int SSH_HOST_PUBLIC_KEY_MD5;
		static int PROXY_TRANSFER_MODE;
		static int ADDRESS_SCOPE;
		static int CRLFILE;
		static int ISSUERCERT;
		static int KEYPASSWD;
		static int CERTINFO;
		static int PASSWORD;
		static int POSTREDIR;
		static int PROXYPASSWORD;
		static int PROXYUSERNAME;
		static int USERNAME;
		static int NOPROXY;
		static int PROTOCOLS;
		static int REDIR_PROTOCOLS;
		static int SOCKS5_GSSAPI_NEC;
		static int SOCKS5_GSSAPI_SERVICE;
		static int TFTP_BLKSIZE;
		static int SSH_KNOWNHOSTS;
		static int FTP_USE_PRET;
		static int MAIL_FROM;
		static int MAIL_RCPT;
		static int RTSP_CLIENT_CSEQ;
		static int RTSP_REQUEST;
		static int RTSP_SERVER_CSEQ;
		static int RTSP_SESSION_ID;
		static int RTSP_STREAM_URI;
		static int RTSP_TRANSPORT;
		static int FNMATCH_FUNCTION;
		static int WILDCARDMATCH;
		static int RESOLVE;
		static int TLSAUTH_PASSWORD;
		static int TLSAUTH_TYPE;
		static int TLSAUTH_USERNAME;
		static int ACCEPT_ENCODING;
		static int TRANSFER_ENCODING;
		static int GSSAPI_DELEGATION;
		static int ACCEPTTIMEOUT_MS;
		static int DNS_SERVERS;
		static int MAIL_AUTH;
		static int SSL_OPTIONS;
		static int TCP_KEEPALIVE;
		static int TCP_KEEPIDLE;
		static int TCP_KEEPINTVL;
};

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url

#endif /* INCLUDED_ua_org_shaddy_tools_url_CurlOptions */ 
