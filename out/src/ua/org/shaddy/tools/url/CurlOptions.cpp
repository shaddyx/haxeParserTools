#include <hxcpp.h>

#ifndef INCLUDED_ua_org_shaddy_tools_url_CurlOptions
#include <ua/org/shaddy/tools/url/CurlOptions.h>
#endif
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{

Void CurlOptions_obj::__construct()
{
	return null();
}

CurlOptions_obj::~CurlOptions_obj() { }

Dynamic CurlOptions_obj::__CreateEmpty() { return  new CurlOptions_obj; }
hx::ObjectPtr< CurlOptions_obj > CurlOptions_obj::__new()
{  hx::ObjectPtr< CurlOptions_obj > result = new CurlOptions_obj();
	result->__construct();
	return result;}

Dynamic CurlOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CurlOptions_obj > result = new CurlOptions_obj();
	result->__construct();
	return result;}

void CurlOptions_obj::__init__() {
HX_STACK_PUSH("CurlOptions::__init__","ua/org/shaddy/tools/url/CurlOptionsCpp.hx",180);
{
	HX_STACK_LINE(181)
	::ua::org::shaddy::tools::url::CurlOptions_obj::AUTOREFERER = CURLOPT_AUTOREFERER;
	HX_STACK_LINE(183)
	::ua::org::shaddy::tools::url::CurlOptions_obj::BUFFERSIZE = CURLOPT_BUFFERSIZE;
	HX_STACK_LINE(184)
	::ua::org::shaddy::tools::url::CurlOptions_obj::CAINFO = CURLOPT_CAINFO;
	HX_STACK_LINE(185)
	::ua::org::shaddy::tools::url::CurlOptions_obj::CAPATH = CURLOPT_CAPATH;
	HX_STACK_LINE(186)
	::ua::org::shaddy::tools::url::CurlOptions_obj::CLOSEPOLICY = CURLOPT_CLOSEPOLICY;
	HX_STACK_LINE(187)
	::ua::org::shaddy::tools::url::CurlOptions_obj::CONNECTTIMEOUT = CURLOPT_CONNECTTIMEOUT;
	HX_STACK_LINE(188)
	::ua::org::shaddy::tools::url::CurlOptions_obj::COOKIE = CURLOPT_COOKIE;
	HX_STACK_LINE(189)
	::ua::org::shaddy::tools::url::CurlOptions_obj::COOKIEFILE = CURLOPT_COOKIEFILE;
	HX_STACK_LINE(190)
	::ua::org::shaddy::tools::url::CurlOptions_obj::COOKIEJAR = CURLOPT_COOKIEJAR;
	HX_STACK_LINE(191)
	::ua::org::shaddy::tools::url::CurlOptions_obj::COOKIESESSION = CURLOPT_COOKIESESSION;
	HX_STACK_LINE(192)
	::ua::org::shaddy::tools::url::CurlOptions_obj::CRLF = CURLOPT_CRLF;
	HX_STACK_LINE(193)
	::ua::org::shaddy::tools::url::CurlOptions_obj::CUSTOMREQUEST = CURLOPT_CUSTOMREQUEST;
	HX_STACK_LINE(194)
	::ua::org::shaddy::tools::url::CurlOptions_obj::DNS_CACHE_TIMEOUT = CURLOPT_DNS_CACHE_TIMEOUT;
	HX_STACK_LINE(195)
	::ua::org::shaddy::tools::url::CurlOptions_obj::DNS_USE_GLOBAL_CACHE = CURLOPT_DNS_USE_GLOBAL_CACHE;
	HX_STACK_LINE(196)
	::ua::org::shaddy::tools::url::CurlOptions_obj::EGDSOCKET = CURLOPT_EGDSOCKET;
	HX_STACK_LINE(197)
	::ua::org::shaddy::tools::url::CurlOptions_obj::ENCODING = CURLOPT_ENCODING;
	HX_STACK_LINE(198)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FAILONERROR = CURLOPT_FAILONERROR;
	HX_STACK_LINE(199)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FILE = CURLOPT_FILE;
	HX_STACK_LINE(200)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FILETIME = CURLOPT_FILETIME;
	HX_STACK_LINE(201)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FOLLOWLOCATION = CURLOPT_FOLLOWLOCATION;
	HX_STACK_LINE(202)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FORBID_REUSE = CURLOPT_FORBID_REUSE;
	HX_STACK_LINE(203)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FRESH_CONNECT = CURLOPT_FRESH_CONNECT;
	HX_STACK_LINE(204)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTPAPPEND = CURLOPT_FTPAPPEND;
	HX_STACK_LINE(205)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTPLISTONLY = CURLOPT_FTPLISTONLY;
	HX_STACK_LINE(206)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTPPORT = CURLOPT_FTPPORT;
	HX_STACK_LINE(207)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTP_USE_EPRT = CURLOPT_FTP_USE_EPRT;
	HX_STACK_LINE(208)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTP_USE_EPSV = CURLOPT_FTP_USE_EPSV;
	HX_STACK_LINE(209)
	::ua::org::shaddy::tools::url::CurlOptions_obj::HEADER = CURLOPT_HEADER;
	HX_STACK_LINE(210)
	::ua::org::shaddy::tools::url::CurlOptions_obj::HEADERFUNCTION = CURLOPT_HEADERFUNCTION;
	HX_STACK_LINE(211)
	::ua::org::shaddy::tools::url::CurlOptions_obj::HTTP200ALIASES = CURLOPT_HTTP200ALIASES;
	HX_STACK_LINE(212)
	::ua::org::shaddy::tools::url::CurlOptions_obj::HTTPGET = CURLOPT_HTTPGET;
	HX_STACK_LINE(213)
	::ua::org::shaddy::tools::url::CurlOptions_obj::HTTPHEADER = CURLOPT_HTTPHEADER;
	HX_STACK_LINE(214)
	::ua::org::shaddy::tools::url::CurlOptions_obj::HTTPPROXYTUNNEL = CURLOPT_HTTPPROXYTUNNEL;
	HX_STACK_LINE(215)
	::ua::org::shaddy::tools::url::CurlOptions_obj::HTTP_VERSION = CURLOPT_HTTP_VERSION;
	HX_STACK_LINE(216)
	::ua::org::shaddy::tools::url::CurlOptions_obj::INFILE = CURLOPT_INFILE;
	HX_STACK_LINE(217)
	::ua::org::shaddy::tools::url::CurlOptions_obj::INFILESIZE = CURLOPT_INFILESIZE;
	HX_STACK_LINE(218)
	::ua::org::shaddy::tools::url::CurlOptions_obj::INTERFACE = CURLOPT_INTERFACE;
	HX_STACK_LINE(219)
	::ua::org::shaddy::tools::url::CurlOptions_obj::KRB4LEVEL = CURLOPT_KRB4LEVEL;
	HX_STACK_LINE(220)
	::ua::org::shaddy::tools::url::CurlOptions_obj::LOW_SPEED_LIMIT = CURLOPT_LOW_SPEED_LIMIT;
	HX_STACK_LINE(221)
	::ua::org::shaddy::tools::url::CurlOptions_obj::LOW_SPEED_TIME = CURLOPT_LOW_SPEED_TIME;
	HX_STACK_LINE(222)
	::ua::org::shaddy::tools::url::CurlOptions_obj::MAXCONNECTS = CURLOPT_MAXCONNECTS;
	HX_STACK_LINE(223)
	::ua::org::shaddy::tools::url::CurlOptions_obj::MAXREDIRS = CURLOPT_MAXREDIRS;
	HX_STACK_LINE(224)
	::ua::org::shaddy::tools::url::CurlOptions_obj::NETRC = CURLOPT_NETRC;
	HX_STACK_LINE(225)
	::ua::org::shaddy::tools::url::CurlOptions_obj::NOBODY = CURLOPT_NOBODY;
	HX_STACK_LINE(226)
	::ua::org::shaddy::tools::url::CurlOptions_obj::NOPROGRESS = CURLOPT_NOPROGRESS;
	HX_STACK_LINE(227)
	::ua::org::shaddy::tools::url::CurlOptions_obj::NOSIGNAL = CURLOPT_NOSIGNAL;
	HX_STACK_LINE(228)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PORT = CURLOPT_PORT;
	HX_STACK_LINE(229)
	::ua::org::shaddy::tools::url::CurlOptions_obj::POST = CURLOPT_POST;
	HX_STACK_LINE(230)
	::ua::org::shaddy::tools::url::CurlOptions_obj::POSTFIELDS = CURLOPT_POSTFIELDS;
	HX_STACK_LINE(231)
	::ua::org::shaddy::tools::url::CurlOptions_obj::POSTQUOTE = CURLOPT_POSTQUOTE;
	HX_STACK_LINE(232)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PREQUOTE = CURLOPT_PREQUOTE;
	HX_STACK_LINE(233)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PRIVATE = CURLOPT_PRIVATE;
	HX_STACK_LINE(234)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PROGRESSFUNCTION = CURLOPT_PROGRESSFUNCTION;
	HX_STACK_LINE(235)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PROXY = CURLOPT_PROXY;
	HX_STACK_LINE(236)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PROXYPORT = CURLOPT_PROXYPORT;
	HX_STACK_LINE(237)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PROXYTYPE = CURLOPT_PROXYTYPE;
	HX_STACK_LINE(238)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PROXYUSERPWD = CURLOPT_PROXYUSERPWD;
	HX_STACK_LINE(239)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PUT = CURLOPT_PUT;
	HX_STACK_LINE(240)
	::ua::org::shaddy::tools::url::CurlOptions_obj::QUOTE = CURLOPT_QUOTE;
	HX_STACK_LINE(241)
	::ua::org::shaddy::tools::url::CurlOptions_obj::RANDOM_FILE = CURLOPT_RANDOM_FILE;
	HX_STACK_LINE(242)
	::ua::org::shaddy::tools::url::CurlOptions_obj::RANGE = CURLOPT_RANGE;
	HX_STACK_LINE(243)
	::ua::org::shaddy::tools::url::CurlOptions_obj::READDATA = CURLOPT_READDATA;
	HX_STACK_LINE(244)
	::ua::org::shaddy::tools::url::CurlOptions_obj::READFUNCTION = CURLOPT_READFUNCTION;
	HX_STACK_LINE(245)
	::ua::org::shaddy::tools::url::CurlOptions_obj::REFERER = CURLOPT_REFERER;
	HX_STACK_LINE(246)
	::ua::org::shaddy::tools::url::CurlOptions_obj::RESUME_FROM = CURLOPT_RESUME_FROM;
	HX_STACK_LINE(248)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SHARE = CURLOPT_SHARE;
	HX_STACK_LINE(249)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSLCERT = CURLOPT_SSLCERT;
	HX_STACK_LINE(250)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSLCERTPASSWD = CURLOPT_SSLCERTPASSWD;
	HX_STACK_LINE(251)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSLCERTTYPE = CURLOPT_SSLCERTTYPE;
	HX_STACK_LINE(252)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSLENGINE = CURLOPT_SSLENGINE;
	HX_STACK_LINE(253)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSLENGINE_DEFAULT = CURLOPT_SSLENGINE_DEFAULT;
	HX_STACK_LINE(254)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSLKEY = CURLOPT_SSLKEY;
	HX_STACK_LINE(255)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSLKEYPASSWD = CURLOPT_SSLKEYPASSWD;
	HX_STACK_LINE(256)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSLKEYTYPE = CURLOPT_SSLKEYTYPE;
	HX_STACK_LINE(257)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSLVERSION = CURLOPT_SSLVERSION;
	HX_STACK_LINE(258)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSL_CIPHER_LIST = CURLOPT_SSL_CIPHER_LIST;
	HX_STACK_LINE(259)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSL_VERIFYHOST = CURLOPT_SSL_VERIFYHOST;
	HX_STACK_LINE(260)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSL_VERIFYPEER = CURLOPT_SSL_VERIFYPEER;
	HX_STACK_LINE(261)
	::ua::org::shaddy::tools::url::CurlOptions_obj::STDERR = CURLOPT_STDERR;
	HX_STACK_LINE(262)
	::ua::org::shaddy::tools::url::CurlOptions_obj::TELNETOPTIONS = CURLOPT_TELNETOPTIONS;
	HX_STACK_LINE(263)
	::ua::org::shaddy::tools::url::CurlOptions_obj::TIMECONDITION = CURLOPT_TIMECONDITION;
	HX_STACK_LINE(264)
	::ua::org::shaddy::tools::url::CurlOptions_obj::TIMEOUT = CURLOPT_TIMEOUT;
	HX_STACK_LINE(265)
	::ua::org::shaddy::tools::url::CurlOptions_obj::TIMEVALUE = CURLOPT_TIMEVALUE;
	HX_STACK_LINE(266)
	::ua::org::shaddy::tools::url::CurlOptions_obj::TRANSFERTEXT = CURLOPT_TRANSFERTEXT;
	HX_STACK_LINE(267)
	::ua::org::shaddy::tools::url::CurlOptions_obj::UNRESTRICTED_AUTH = CURLOPT_UNRESTRICTED_AUTH;
	HX_STACK_LINE(268)
	::ua::org::shaddy::tools::url::CurlOptions_obj::UPLOAD = CURLOPT_UPLOAD;
	HX_STACK_LINE(269)
	::ua::org::shaddy::tools::url::CurlOptions_obj::URL = CURLOPT_URL;
	HX_STACK_LINE(270)
	::ua::org::shaddy::tools::url::CurlOptions_obj::USERAGENT = CURLOPT_USERAGENT;
	HX_STACK_LINE(271)
	::ua::org::shaddy::tools::url::CurlOptions_obj::USERPWD = CURLOPT_USERPWD;
	HX_STACK_LINE(272)
	::ua::org::shaddy::tools::url::CurlOptions_obj::VERBOSE = CURLOPT_VERBOSE;
	HX_STACK_LINE(273)
	::ua::org::shaddy::tools::url::CurlOptions_obj::WRITEFUNCTION = CURLOPT_WRITEFUNCTION;
	HX_STACK_LINE(274)
	::ua::org::shaddy::tools::url::CurlOptions_obj::WRITEHEADER = CURLOPT_WRITEHEADER;
	HX_STACK_LINE(275)
	::ua::org::shaddy::tools::url::CurlOptions_obj::HTTPAUTH = CURLOPT_HTTPAUTH;
	HX_STACK_LINE(276)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTP_CREATE_MISSING_DIRS = CURLOPT_FTP_CREATE_MISSING_DIRS;
	HX_STACK_LINE(277)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PROXYAUTH = CURLOPT_PROXYAUTH;
	HX_STACK_LINE(278)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTP_RESPONSE_TIMEOUT = CURLOPT_FTP_RESPONSE_TIMEOUT;
	HX_STACK_LINE(279)
	::ua::org::shaddy::tools::url::CurlOptions_obj::IPRESOLVE = CURLOPT_IPRESOLVE;
	HX_STACK_LINE(280)
	::ua::org::shaddy::tools::url::CurlOptions_obj::MAXFILESIZE = CURLOPT_MAXFILESIZE;
	HX_STACK_LINE(281)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTP_SSL = CURLOPT_FTP_SSL;
	HX_STACK_LINE(282)
	::ua::org::shaddy::tools::url::CurlOptions_obj::NETRC_FILE = CURLOPT_NETRC_FILE;
	HX_STACK_LINE(283)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTPSSLAUTH = CURLOPT_FTPSSLAUTH;
	HX_STACK_LINE(284)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTP_ACCOUNT = CURLOPT_FTP_ACCOUNT;
	HX_STACK_LINE(285)
	::ua::org::shaddy::tools::url::CurlOptions_obj::TCP_NODELAY = CURLOPT_TCP_NODELAY;
	HX_STACK_LINE(286)
	::ua::org::shaddy::tools::url::CurlOptions_obj::COOKIELIST = CURLOPT_COOKIELIST;
	HX_STACK_LINE(287)
	::ua::org::shaddy::tools::url::CurlOptions_obj::IGNORE_CONTENT_LENGTH = CURLOPT_IGNORE_CONTENT_LENGTH;
	HX_STACK_LINE(288)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTP_SKIP_PASV_IP = CURLOPT_FTP_SKIP_PASV_IP;
	HX_STACK_LINE(289)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTP_FILEMETHOD = CURLOPT_FTP_FILEMETHOD;
	HX_STACK_LINE(290)
	::ua::org::shaddy::tools::url::CurlOptions_obj::CONNECT_ONLY = CURLOPT_CONNECT_ONLY;
	HX_STACK_LINE(291)
	::ua::org::shaddy::tools::url::CurlOptions_obj::LOCALPORT = CURLOPT_LOCALPORT;
	HX_STACK_LINE(292)
	::ua::org::shaddy::tools::url::CurlOptions_obj::LOCALPORTRANGE = CURLOPT_LOCALPORTRANGE;
	HX_STACK_LINE(293)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTP_ALTERNATIVE_TO_USER = CURLOPT_FTP_ALTERNATIVE_TO_USER;
	HX_STACK_LINE(294)
	::ua::org::shaddy::tools::url::CurlOptions_obj::MAX_RECV_SPEED_LARGE = CURLOPT_MAX_RECV_SPEED_LARGE;
	HX_STACK_LINE(295)
	::ua::org::shaddy::tools::url::CurlOptions_obj::MAX_SEND_SPEED_LARGE = CURLOPT_MAX_SEND_SPEED_LARGE;
	HX_STACK_LINE(296)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSL_SESSIONID_CACHE = CURLOPT_SSL_SESSIONID_CACHE;
	HX_STACK_LINE(297)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTP_SSL_CCC = CURLOPT_FTP_SSL_CCC;
	HX_STACK_LINE(298)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSH_AUTH_TYPES = CURLOPT_SSH_AUTH_TYPES;
	HX_STACK_LINE(299)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSH_PRIVATE_KEYFILE = CURLOPT_SSH_PRIVATE_KEYFILE;
	HX_STACK_LINE(300)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSH_PUBLIC_KEYFILE = CURLOPT_SSH_PUBLIC_KEYFILE;
	HX_STACK_LINE(301)
	::ua::org::shaddy::tools::url::CurlOptions_obj::CONNECTTIMEOUT_MS = CURLOPT_CONNECTTIMEOUT_MS;
	HX_STACK_LINE(302)
	::ua::org::shaddy::tools::url::CurlOptions_obj::HTTP_CONTENT_DECODING = CURLOPT_HTTP_CONTENT_DECODING;
	HX_STACK_LINE(303)
	::ua::org::shaddy::tools::url::CurlOptions_obj::HTTP_TRANSFER_DECODING = CURLOPT_HTTP_TRANSFER_DECODING;
	HX_STACK_LINE(304)
	::ua::org::shaddy::tools::url::CurlOptions_obj::TIMEOUT_MS = CURLOPT_TIMEOUT_MS;
	HX_STACK_LINE(305)
	::ua::org::shaddy::tools::url::CurlOptions_obj::KRBLEVEL = CURLOPT_KRBLEVEL;
	HX_STACK_LINE(306)
	::ua::org::shaddy::tools::url::CurlOptions_obj::NEW_DIRECTORY_PERMS = CURLOPT_NEW_DIRECTORY_PERMS;
	HX_STACK_LINE(307)
	::ua::org::shaddy::tools::url::CurlOptions_obj::NEW_FILE_PERMS = CURLOPT_NEW_FILE_PERMS;
	HX_STACK_LINE(308)
	::ua::org::shaddy::tools::url::CurlOptions_obj::APPEND = CURLOPT_APPEND;
	HX_STACK_LINE(309)
	::ua::org::shaddy::tools::url::CurlOptions_obj::DIRLISTONLY = CURLOPT_DIRLISTONLY;
	HX_STACK_LINE(310)
	::ua::org::shaddy::tools::url::CurlOptions_obj::USE_SSL = CURLOPT_USE_SSL;
	HX_STACK_LINE(311)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSH_HOST_PUBLIC_KEY_MD5 = CURLOPT_SSH_HOST_PUBLIC_KEY_MD5;
	HX_STACK_LINE(312)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PROXY_TRANSFER_MODE = CURLOPT_PROXY_TRANSFER_MODE;
	HX_STACK_LINE(313)
	::ua::org::shaddy::tools::url::CurlOptions_obj::ADDRESS_SCOPE = CURLOPT_ADDRESS_SCOPE;
	HX_STACK_LINE(314)
	::ua::org::shaddy::tools::url::CurlOptions_obj::CRLFILE = CURLOPT_CRLFILE;
	HX_STACK_LINE(315)
	::ua::org::shaddy::tools::url::CurlOptions_obj::ISSUERCERT = CURLOPT_ISSUERCERT;
	HX_STACK_LINE(316)
	::ua::org::shaddy::tools::url::CurlOptions_obj::KEYPASSWD = CURLOPT_KEYPASSWD;
	HX_STACK_LINE(317)
	::ua::org::shaddy::tools::url::CurlOptions_obj::CERTINFO = CURLOPT_CERTINFO;
	HX_STACK_LINE(318)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PASSWORD = CURLOPT_PASSWORD;
	HX_STACK_LINE(319)
	::ua::org::shaddy::tools::url::CurlOptions_obj::POSTREDIR = CURLOPT_POSTREDIR;
	HX_STACK_LINE(320)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PROXYPASSWORD = CURLOPT_PROXYPASSWORD;
	HX_STACK_LINE(321)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PROXYUSERNAME = CURLOPT_PROXYUSERNAME;
	HX_STACK_LINE(322)
	::ua::org::shaddy::tools::url::CurlOptions_obj::USERNAME = CURLOPT_USERNAME;
	HX_STACK_LINE(323)
	::ua::org::shaddy::tools::url::CurlOptions_obj::NOPROXY = CURLOPT_NOPROXY;
	HX_STACK_LINE(324)
	::ua::org::shaddy::tools::url::CurlOptions_obj::PROTOCOLS = CURLOPT_PROTOCOLS;
	HX_STACK_LINE(325)
	::ua::org::shaddy::tools::url::CurlOptions_obj::REDIR_PROTOCOLS = CURLOPT_REDIR_PROTOCOLS;
	HX_STACK_LINE(326)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SOCKS5_GSSAPI_NEC = CURLOPT_SOCKS5_GSSAPI_NEC;
	HX_STACK_LINE(327)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SOCKS5_GSSAPI_SERVICE = CURLOPT_SOCKS5_GSSAPI_SERVICE;
	HX_STACK_LINE(328)
	::ua::org::shaddy::tools::url::CurlOptions_obj::TFTP_BLKSIZE = CURLOPT_TFTP_BLKSIZE;
	HX_STACK_LINE(329)
	::ua::org::shaddy::tools::url::CurlOptions_obj::SSH_KNOWNHOSTS = CURLOPT_SSH_KNOWNHOSTS;
	HX_STACK_LINE(330)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FTP_USE_PRET = CURLOPT_FTP_USE_PRET;
	HX_STACK_LINE(331)
	::ua::org::shaddy::tools::url::CurlOptions_obj::MAIL_FROM = CURLOPT_MAIL_FROM;
	HX_STACK_LINE(332)
	::ua::org::shaddy::tools::url::CurlOptions_obj::MAIL_RCPT = CURLOPT_MAIL_RCPT;
	HX_STACK_LINE(333)
	::ua::org::shaddy::tools::url::CurlOptions_obj::RTSP_CLIENT_CSEQ = CURLOPT_RTSP_CLIENT_CSEQ;
	HX_STACK_LINE(334)
	::ua::org::shaddy::tools::url::CurlOptions_obj::RTSP_REQUEST = CURLOPT_RTSP_REQUEST;
	HX_STACK_LINE(335)
	::ua::org::shaddy::tools::url::CurlOptions_obj::RTSP_SERVER_CSEQ = CURLOPT_RTSP_SERVER_CSEQ;
	HX_STACK_LINE(336)
	::ua::org::shaddy::tools::url::CurlOptions_obj::RTSP_SESSION_ID = CURLOPT_RTSP_SESSION_ID;
	HX_STACK_LINE(337)
	::ua::org::shaddy::tools::url::CurlOptions_obj::RTSP_STREAM_URI = CURLOPT_RTSP_STREAM_URI;
	HX_STACK_LINE(338)
	::ua::org::shaddy::tools::url::CurlOptions_obj::RTSP_TRANSPORT = CURLOPT_RTSP_TRANSPORT;
	HX_STACK_LINE(339)
	::ua::org::shaddy::tools::url::CurlOptions_obj::FNMATCH_FUNCTION = CURLOPT_FNMATCH_FUNCTION;
	HX_STACK_LINE(340)
	::ua::org::shaddy::tools::url::CurlOptions_obj::WILDCARDMATCH = CURLOPT_WILDCARDMATCH;
	HX_STACK_LINE(341)
	::ua::org::shaddy::tools::url::CurlOptions_obj::RESOLVE = CURLOPT_RESOLVE;
	HX_STACK_LINE(342)
	::ua::org::shaddy::tools::url::CurlOptions_obj::TLSAUTH_PASSWORD = CURLOPT_TLSAUTH_PASSWORD;
	HX_STACK_LINE(343)
	::ua::org::shaddy::tools::url::CurlOptions_obj::TLSAUTH_TYPE = CURLOPT_TLSAUTH_TYPE;
	HX_STACK_LINE(344)
	::ua::org::shaddy::tools::url::CurlOptions_obj::TLSAUTH_USERNAME = CURLOPT_TLSAUTH_USERNAME;
	HX_STACK_LINE(345)
	::ua::org::shaddy::tools::url::CurlOptions_obj::ACCEPT_ENCODING = CURLOPT_ACCEPT_ENCODING;
	HX_STACK_LINE(346)
	::ua::org::shaddy::tools::url::CurlOptions_obj::TRANSFER_ENCODING = CURLOPT_TRANSFER_ENCODING;
	HX_STACK_LINE(347)
	::ua::org::shaddy::tools::url::CurlOptions_obj::GSSAPI_DELEGATION = CURLOPT_GSSAPI_DELEGATION;
}
}

int CurlOptions_obj::AUTOREFERER;

int CurlOptions_obj::BUFFERSIZE;

int CurlOptions_obj::CAINFO;

int CurlOptions_obj::CAPATH;

int CurlOptions_obj::CLOSEPOLICY;

int CurlOptions_obj::CONNECTTIMEOUT;

int CurlOptions_obj::COOKIE;

int CurlOptions_obj::COOKIEFILE;

int CurlOptions_obj::COOKIEJAR;

int CurlOptions_obj::COOKIESESSION;

int CurlOptions_obj::CRLF;

int CurlOptions_obj::CUSTOMREQUEST;

int CurlOptions_obj::DNS_CACHE_TIMEOUT;

int CurlOptions_obj::DNS_USE_GLOBAL_CACHE;

int CurlOptions_obj::EGDSOCKET;

int CurlOptions_obj::ENCODING;

int CurlOptions_obj::FAILONERROR;

int CurlOptions_obj::FILE;

int CurlOptions_obj::FILETIME;

int CurlOptions_obj::FOLLOWLOCATION;

int CurlOptions_obj::FORBID_REUSE;

int CurlOptions_obj::FRESH_CONNECT;

int CurlOptions_obj::FTPAPPEND;

int CurlOptions_obj::FTPLISTONLY;

int CurlOptions_obj::FTPPORT;

int CurlOptions_obj::FTP_USE_EPRT;

int CurlOptions_obj::FTP_USE_EPSV;

int CurlOptions_obj::HEADER;

int CurlOptions_obj::HEADERFUNCTION;

int CurlOptions_obj::HTTP200ALIASES;

int CurlOptions_obj::HTTPGET;

int CurlOptions_obj::HTTPHEADER;

int CurlOptions_obj::HTTPPROXYTUNNEL;

int CurlOptions_obj::HTTP_VERSION;

int CurlOptions_obj::INFILE;

int CurlOptions_obj::INFILESIZE;

int CurlOptions_obj::INTERFACE;

int CurlOptions_obj::KRB4LEVEL;

int CurlOptions_obj::LOW_SPEED_LIMIT;

int CurlOptions_obj::LOW_SPEED_TIME;

int CurlOptions_obj::MAXCONNECTS;

int CurlOptions_obj::MAXREDIRS;

int CurlOptions_obj::NETRC;

int CurlOptions_obj::NOBODY;

int CurlOptions_obj::NOPROGRESS;

int CurlOptions_obj::NOSIGNAL;

int CurlOptions_obj::PORT;

int CurlOptions_obj::POST;

int CurlOptions_obj::POSTFIELDS;

int CurlOptions_obj::POSTQUOTE;

int CurlOptions_obj::PREQUOTE;

int CurlOptions_obj::PRIVATE;

int CurlOptions_obj::PROGRESSFUNCTION;

int CurlOptions_obj::PROXY;

int CurlOptions_obj::PROXYPORT;

int CurlOptions_obj::PROXYTYPE;

int CurlOptions_obj::PROXYUSERPWD;

int CurlOptions_obj::PUT;

int CurlOptions_obj::QUOTE;

int CurlOptions_obj::RANDOM_FILE;

int CurlOptions_obj::RANGE;

int CurlOptions_obj::READDATA;

int CurlOptions_obj::READFUNCTION;

int CurlOptions_obj::REFERER;

int CurlOptions_obj::RESUME_FROM;

int CurlOptions_obj::SHARE;

int CurlOptions_obj::SSLCERT;

int CurlOptions_obj::SSLCERTPASSWD;

int CurlOptions_obj::SSLCERTTYPE;

int CurlOptions_obj::SSLENGINE;

int CurlOptions_obj::SSLENGINE_DEFAULT;

int CurlOptions_obj::SSLKEY;

int CurlOptions_obj::SSLKEYPASSWD;

int CurlOptions_obj::SSLKEYTYPE;

int CurlOptions_obj::SSLVERSION;

int CurlOptions_obj::SSL_CIPHER_LIST;

int CurlOptions_obj::SSL_VERIFYHOST;

int CurlOptions_obj::SSL_VERIFYPEER;

int CurlOptions_obj::STDERR;

int CurlOptions_obj::TELNETOPTIONS;

int CurlOptions_obj::TIMECONDITION;

int CurlOptions_obj::TIMEOUT;

int CurlOptions_obj::TIMEVALUE;

int CurlOptions_obj::TRANSFERTEXT;

int CurlOptions_obj::UNRESTRICTED_AUTH;

int CurlOptions_obj::UPLOAD;

int CurlOptions_obj::URL;

int CurlOptions_obj::USERAGENT;

int CurlOptions_obj::USERPWD;

int CurlOptions_obj::VERBOSE;

int CurlOptions_obj::WRITEFUNCTION;

int CurlOptions_obj::WRITEHEADER;

int CurlOptions_obj::HTTPAUTH;

int CurlOptions_obj::FTP_CREATE_MISSING_DIRS;

int CurlOptions_obj::PROXYAUTH;

int CurlOptions_obj::FTP_RESPONSE_TIMEOUT;

int CurlOptions_obj::IPRESOLVE;

int CurlOptions_obj::MAXFILESIZE;

int CurlOptions_obj::FTP_SSL;

int CurlOptions_obj::NETRC_FILE;

int CurlOptions_obj::FTPSSLAUTH;

int CurlOptions_obj::FTP_ACCOUNT;

int CurlOptions_obj::TCP_NODELAY;

int CurlOptions_obj::COOKIELIST;

int CurlOptions_obj::IGNORE_CONTENT_LENGTH;

int CurlOptions_obj::FTP_SKIP_PASV_IP;

int CurlOptions_obj::FTP_FILEMETHOD;

int CurlOptions_obj::CONNECT_ONLY;

int CurlOptions_obj::LOCALPORT;

int CurlOptions_obj::LOCALPORTRANGE;

int CurlOptions_obj::FTP_ALTERNATIVE_TO_USER;

int CurlOptions_obj::MAX_RECV_SPEED_LARGE;

int CurlOptions_obj::MAX_SEND_SPEED_LARGE;

int CurlOptions_obj::SSL_SESSIONID_CACHE;

int CurlOptions_obj::FTP_SSL_CCC;

int CurlOptions_obj::SSH_AUTH_TYPES;

int CurlOptions_obj::SSH_PRIVATE_KEYFILE;

int CurlOptions_obj::SSH_PUBLIC_KEYFILE;

int CurlOptions_obj::CONNECTTIMEOUT_MS;

int CurlOptions_obj::HTTP_CONTENT_DECODING;

int CurlOptions_obj::HTTP_TRANSFER_DECODING;

int CurlOptions_obj::TIMEOUT_MS;

int CurlOptions_obj::KRBLEVEL;

int CurlOptions_obj::NEW_DIRECTORY_PERMS;

int CurlOptions_obj::NEW_FILE_PERMS;

int CurlOptions_obj::APPEND;

int CurlOptions_obj::DIRLISTONLY;

int CurlOptions_obj::USE_SSL;

int CurlOptions_obj::SSH_HOST_PUBLIC_KEY_MD5;

int CurlOptions_obj::PROXY_TRANSFER_MODE;

int CurlOptions_obj::ADDRESS_SCOPE;

int CurlOptions_obj::CRLFILE;

int CurlOptions_obj::ISSUERCERT;

int CurlOptions_obj::KEYPASSWD;

int CurlOptions_obj::CERTINFO;

int CurlOptions_obj::PASSWORD;

int CurlOptions_obj::POSTREDIR;

int CurlOptions_obj::PROXYPASSWORD;

int CurlOptions_obj::PROXYUSERNAME;

int CurlOptions_obj::USERNAME;

int CurlOptions_obj::NOPROXY;

int CurlOptions_obj::PROTOCOLS;

int CurlOptions_obj::REDIR_PROTOCOLS;

int CurlOptions_obj::SOCKS5_GSSAPI_NEC;

int CurlOptions_obj::SOCKS5_GSSAPI_SERVICE;

int CurlOptions_obj::TFTP_BLKSIZE;

int CurlOptions_obj::SSH_KNOWNHOSTS;

int CurlOptions_obj::FTP_USE_PRET;

int CurlOptions_obj::MAIL_FROM;

int CurlOptions_obj::MAIL_RCPT;

int CurlOptions_obj::RTSP_CLIENT_CSEQ;

int CurlOptions_obj::RTSP_REQUEST;

int CurlOptions_obj::RTSP_SERVER_CSEQ;

int CurlOptions_obj::RTSP_SESSION_ID;

int CurlOptions_obj::RTSP_STREAM_URI;

int CurlOptions_obj::RTSP_TRANSPORT;

int CurlOptions_obj::FNMATCH_FUNCTION;

int CurlOptions_obj::WILDCARDMATCH;

int CurlOptions_obj::RESOLVE;

int CurlOptions_obj::TLSAUTH_PASSWORD;

int CurlOptions_obj::TLSAUTH_TYPE;

int CurlOptions_obj::TLSAUTH_USERNAME;

int CurlOptions_obj::ACCEPT_ENCODING;

int CurlOptions_obj::TRANSFER_ENCODING;

int CurlOptions_obj::GSSAPI_DELEGATION;

int CurlOptions_obj::ACCEPTTIMEOUT_MS;


CurlOptions_obj::CurlOptions_obj()
{
}

void CurlOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CurlOptions);
	HX_MARK_END_CLASS();
}

void CurlOptions_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic CurlOptions_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"PUT") ) { return PUT; }
		if (HX_FIELD_EQ(inName,"URL") ) { return URL; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"CRLF") ) { return CRLF; }
		if (HX_FIELD_EQ(inName,"FILE") ) { return FILE; }
		if (HX_FIELD_EQ(inName,"PORT") ) { return PORT; }
		if (HX_FIELD_EQ(inName,"POST") ) { return POST; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"NETRC") ) { return NETRC; }
		if (HX_FIELD_EQ(inName,"PROXY") ) { return PROXY; }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { return QUOTE; }
		if (HX_FIELD_EQ(inName,"RANGE") ) { return RANGE; }
		if (HX_FIELD_EQ(inName,"SHARE") ) { return SHARE; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CAINFO") ) { return CAINFO; }
		if (HX_FIELD_EQ(inName,"CAPATH") ) { return CAPATH; }
		if (HX_FIELD_EQ(inName,"COOKIE") ) { return COOKIE; }
		if (HX_FIELD_EQ(inName,"HEADER") ) { return HEADER; }
		if (HX_FIELD_EQ(inName,"INFILE") ) { return INFILE; }
		if (HX_FIELD_EQ(inName,"NOBODY") ) { return NOBODY; }
		if (HX_FIELD_EQ(inName,"SSLKEY") ) { return SSLKEY; }
		if (HX_FIELD_EQ(inName,"STDERR") ) { return STDERR; }
		if (HX_FIELD_EQ(inName,"UPLOAD") ) { return UPLOAD; }
		if (HX_FIELD_EQ(inName,"APPEND") ) { return APPEND; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"FTPPORT") ) { return FTPPORT; }
		if (HX_FIELD_EQ(inName,"HTTPGET") ) { return HTTPGET; }
		if (HX_FIELD_EQ(inName,"PRIVATE") ) { return PRIVATE; }
		if (HX_FIELD_EQ(inName,"REFERER") ) { return REFERER; }
		if (HX_FIELD_EQ(inName,"SSLCERT") ) { return SSLCERT; }
		if (HX_FIELD_EQ(inName,"TIMEOUT") ) { return TIMEOUT; }
		if (HX_FIELD_EQ(inName,"USERPWD") ) { return USERPWD; }
		if (HX_FIELD_EQ(inName,"VERBOSE") ) { return VERBOSE; }
		if (HX_FIELD_EQ(inName,"FTP_SSL") ) { return FTP_SSL; }
		if (HX_FIELD_EQ(inName,"USE_SSL") ) { return USE_SSL; }
		if (HX_FIELD_EQ(inName,"CRLFILE") ) { return CRLFILE; }
		if (HX_FIELD_EQ(inName,"NOPROXY") ) { return NOPROXY; }
		if (HX_FIELD_EQ(inName,"RESOLVE") ) { return RESOLVE; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ENCODING") ) { return ENCODING; }
		if (HX_FIELD_EQ(inName,"FILETIME") ) { return FILETIME; }
		if (HX_FIELD_EQ(inName,"NOSIGNAL") ) { return NOSIGNAL; }
		if (HX_FIELD_EQ(inName,"PREQUOTE") ) { return PREQUOTE; }
		if (HX_FIELD_EQ(inName,"READDATA") ) { return READDATA; }
		if (HX_FIELD_EQ(inName,"HTTPAUTH") ) { return HTTPAUTH; }
		if (HX_FIELD_EQ(inName,"KRBLEVEL") ) { return KRBLEVEL; }
		if (HX_FIELD_EQ(inName,"CERTINFO") ) { return CERTINFO; }
		if (HX_FIELD_EQ(inName,"PASSWORD") ) { return PASSWORD; }
		if (HX_FIELD_EQ(inName,"USERNAME") ) { return USERNAME; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"COOKIEJAR") ) { return COOKIEJAR; }
		if (HX_FIELD_EQ(inName,"EGDSOCKET") ) { return EGDSOCKET; }
		if (HX_FIELD_EQ(inName,"FTPAPPEND") ) { return FTPAPPEND; }
		if (HX_FIELD_EQ(inName,"INTERFACE") ) { return INTERFACE; }
		if (HX_FIELD_EQ(inName,"KRB4LEVEL") ) { return KRB4LEVEL; }
		if (HX_FIELD_EQ(inName,"MAXREDIRS") ) { return MAXREDIRS; }
		if (HX_FIELD_EQ(inName,"POSTQUOTE") ) { return POSTQUOTE; }
		if (HX_FIELD_EQ(inName,"PROXYPORT") ) { return PROXYPORT; }
		if (HX_FIELD_EQ(inName,"PROXYTYPE") ) { return PROXYTYPE; }
		if (HX_FIELD_EQ(inName,"SSLENGINE") ) { return SSLENGINE; }
		if (HX_FIELD_EQ(inName,"TIMEVALUE") ) { return TIMEVALUE; }
		if (HX_FIELD_EQ(inName,"USERAGENT") ) { return USERAGENT; }
		if (HX_FIELD_EQ(inName,"PROXYAUTH") ) { return PROXYAUTH; }
		if (HX_FIELD_EQ(inName,"IPRESOLVE") ) { return IPRESOLVE; }
		if (HX_FIELD_EQ(inName,"LOCALPORT") ) { return LOCALPORT; }
		if (HX_FIELD_EQ(inName,"KEYPASSWD") ) { return KEYPASSWD; }
		if (HX_FIELD_EQ(inName,"POSTREDIR") ) { return POSTREDIR; }
		if (HX_FIELD_EQ(inName,"PROTOCOLS") ) { return PROTOCOLS; }
		if (HX_FIELD_EQ(inName,"MAIL_FROM") ) { return MAIL_FROM; }
		if (HX_FIELD_EQ(inName,"MAIL_RCPT") ) { return MAIL_RCPT; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BUFFERSIZE") ) { return BUFFERSIZE; }
		if (HX_FIELD_EQ(inName,"COOKIEFILE") ) { return COOKIEFILE; }
		if (HX_FIELD_EQ(inName,"HTTPHEADER") ) { return HTTPHEADER; }
		if (HX_FIELD_EQ(inName,"INFILESIZE") ) { return INFILESIZE; }
		if (HX_FIELD_EQ(inName,"NOPROGRESS") ) { return NOPROGRESS; }
		if (HX_FIELD_EQ(inName,"POSTFIELDS") ) { return POSTFIELDS; }
		if (HX_FIELD_EQ(inName,"SSLKEYTYPE") ) { return SSLKEYTYPE; }
		if (HX_FIELD_EQ(inName,"SSLVERSION") ) { return SSLVERSION; }
		if (HX_FIELD_EQ(inName,"NETRC_FILE") ) { return NETRC_FILE; }
		if (HX_FIELD_EQ(inName,"FTPSSLAUTH") ) { return FTPSSLAUTH; }
		if (HX_FIELD_EQ(inName,"COOKIELIST") ) { return COOKIELIST; }
		if (HX_FIELD_EQ(inName,"TIMEOUT_MS") ) { return TIMEOUT_MS; }
		if (HX_FIELD_EQ(inName,"ISSUERCERT") ) { return ISSUERCERT; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"AUTOREFERER") ) { return AUTOREFERER; }
		if (HX_FIELD_EQ(inName,"CLOSEPOLICY") ) { return CLOSEPOLICY; }
		if (HX_FIELD_EQ(inName,"FAILONERROR") ) { return FAILONERROR; }
		if (HX_FIELD_EQ(inName,"FTPLISTONLY") ) { return FTPLISTONLY; }
		if (HX_FIELD_EQ(inName,"MAXCONNECTS") ) { return MAXCONNECTS; }
		if (HX_FIELD_EQ(inName,"RANDOM_FILE") ) { return RANDOM_FILE; }
		if (HX_FIELD_EQ(inName,"RESUME_FROM") ) { return RESUME_FROM; }
		if (HX_FIELD_EQ(inName,"SSLCERTTYPE") ) { return SSLCERTTYPE; }
		if (HX_FIELD_EQ(inName,"WRITEHEADER") ) { return WRITEHEADER; }
		if (HX_FIELD_EQ(inName,"MAXFILESIZE") ) { return MAXFILESIZE; }
		if (HX_FIELD_EQ(inName,"FTP_ACCOUNT") ) { return FTP_ACCOUNT; }
		if (HX_FIELD_EQ(inName,"TCP_NODELAY") ) { return TCP_NODELAY; }
		if (HX_FIELD_EQ(inName,"FTP_SSL_CCC") ) { return FTP_SSL_CCC; }
		if (HX_FIELD_EQ(inName,"DIRLISTONLY") ) { return DIRLISTONLY; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FORBID_REUSE") ) { return FORBID_REUSE; }
		if (HX_FIELD_EQ(inName,"FTP_USE_EPRT") ) { return FTP_USE_EPRT; }
		if (HX_FIELD_EQ(inName,"FTP_USE_EPSV") ) { return FTP_USE_EPSV; }
		if (HX_FIELD_EQ(inName,"HTTP_VERSION") ) { return HTTP_VERSION; }
		if (HX_FIELD_EQ(inName,"PROXYUSERPWD") ) { return PROXYUSERPWD; }
		if (HX_FIELD_EQ(inName,"READFUNCTION") ) { return READFUNCTION; }
		if (HX_FIELD_EQ(inName,"SSLKEYPASSWD") ) { return SSLKEYPASSWD; }
		if (HX_FIELD_EQ(inName,"TRANSFERTEXT") ) { return TRANSFERTEXT; }
		if (HX_FIELD_EQ(inName,"CONNECT_ONLY") ) { return CONNECT_ONLY; }
		if (HX_FIELD_EQ(inName,"TFTP_BLKSIZE") ) { return TFTP_BLKSIZE; }
		if (HX_FIELD_EQ(inName,"FTP_USE_PRET") ) { return FTP_USE_PRET; }
		if (HX_FIELD_EQ(inName,"RTSP_REQUEST") ) { return RTSP_REQUEST; }
		if (HX_FIELD_EQ(inName,"TLSAUTH_TYPE") ) { return TLSAUTH_TYPE; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"COOKIESESSION") ) { return COOKIESESSION; }
		if (HX_FIELD_EQ(inName,"CUSTOMREQUEST") ) { return CUSTOMREQUEST; }
		if (HX_FIELD_EQ(inName,"FRESH_CONNECT") ) { return FRESH_CONNECT; }
		if (HX_FIELD_EQ(inName,"SSLCERTPASSWD") ) { return SSLCERTPASSWD; }
		if (HX_FIELD_EQ(inName,"TELNETOPTIONS") ) { return TELNETOPTIONS; }
		if (HX_FIELD_EQ(inName,"TIMECONDITION") ) { return TIMECONDITION; }
		if (HX_FIELD_EQ(inName,"WRITEFUNCTION") ) { return WRITEFUNCTION; }
		if (HX_FIELD_EQ(inName,"ADDRESS_SCOPE") ) { return ADDRESS_SCOPE; }
		if (HX_FIELD_EQ(inName,"PROXYPASSWORD") ) { return PROXYPASSWORD; }
		if (HX_FIELD_EQ(inName,"PROXYUSERNAME") ) { return PROXYUSERNAME; }
		if (HX_FIELD_EQ(inName,"WILDCARDMATCH") ) { return WILDCARDMATCH; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"CONNECTTIMEOUT") ) { return CONNECTTIMEOUT; }
		if (HX_FIELD_EQ(inName,"FOLLOWLOCATION") ) { return FOLLOWLOCATION; }
		if (HX_FIELD_EQ(inName,"HEADERFUNCTION") ) { return HEADERFUNCTION; }
		if (HX_FIELD_EQ(inName,"HTTP200ALIASES") ) { return HTTP200ALIASES; }
		if (HX_FIELD_EQ(inName,"LOW_SPEED_TIME") ) { return LOW_SPEED_TIME; }
		if (HX_FIELD_EQ(inName,"SSL_VERIFYHOST") ) { return SSL_VERIFYHOST; }
		if (HX_FIELD_EQ(inName,"SSL_VERIFYPEER") ) { return SSL_VERIFYPEER; }
		if (HX_FIELD_EQ(inName,"FTP_FILEMETHOD") ) { return FTP_FILEMETHOD; }
		if (HX_FIELD_EQ(inName,"LOCALPORTRANGE") ) { return LOCALPORTRANGE; }
		if (HX_FIELD_EQ(inName,"SSH_AUTH_TYPES") ) { return SSH_AUTH_TYPES; }
		if (HX_FIELD_EQ(inName,"NEW_FILE_PERMS") ) { return NEW_FILE_PERMS; }
		if (HX_FIELD_EQ(inName,"SSH_KNOWNHOSTS") ) { return SSH_KNOWNHOSTS; }
		if (HX_FIELD_EQ(inName,"RTSP_TRANSPORT") ) { return RTSP_TRANSPORT; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"HTTPPROXYTUNNEL") ) { return HTTPPROXYTUNNEL; }
		if (HX_FIELD_EQ(inName,"LOW_SPEED_LIMIT") ) { return LOW_SPEED_LIMIT; }
		if (HX_FIELD_EQ(inName,"SSL_CIPHER_LIST") ) { return SSL_CIPHER_LIST; }
		if (HX_FIELD_EQ(inName,"REDIR_PROTOCOLS") ) { return REDIR_PROTOCOLS; }
		if (HX_FIELD_EQ(inName,"RTSP_SESSION_ID") ) { return RTSP_SESSION_ID; }
		if (HX_FIELD_EQ(inName,"RTSP_STREAM_URI") ) { return RTSP_STREAM_URI; }
		if (HX_FIELD_EQ(inName,"ACCEPT_ENCODING") ) { return ACCEPT_ENCODING; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"PROGRESSFUNCTION") ) { return PROGRESSFUNCTION; }
		if (HX_FIELD_EQ(inName,"FTP_SKIP_PASV_IP") ) { return FTP_SKIP_PASV_IP; }
		if (HX_FIELD_EQ(inName,"RTSP_CLIENT_CSEQ") ) { return RTSP_CLIENT_CSEQ; }
		if (HX_FIELD_EQ(inName,"RTSP_SERVER_CSEQ") ) { return RTSP_SERVER_CSEQ; }
		if (HX_FIELD_EQ(inName,"FNMATCH_FUNCTION") ) { return FNMATCH_FUNCTION; }
		if (HX_FIELD_EQ(inName,"TLSAUTH_PASSWORD") ) { return TLSAUTH_PASSWORD; }
		if (HX_FIELD_EQ(inName,"TLSAUTH_USERNAME") ) { return TLSAUTH_USERNAME; }
		if (HX_FIELD_EQ(inName,"ACCEPTTIMEOUT_MS") ) { return ACCEPTTIMEOUT_MS; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DNS_CACHE_TIMEOUT") ) { return DNS_CACHE_TIMEOUT; }
		if (HX_FIELD_EQ(inName,"SSLENGINE_DEFAULT") ) { return SSLENGINE_DEFAULT; }
		if (HX_FIELD_EQ(inName,"UNRESTRICTED_AUTH") ) { return UNRESTRICTED_AUTH; }
		if (HX_FIELD_EQ(inName,"CONNECTTIMEOUT_MS") ) { return CONNECTTIMEOUT_MS; }
		if (HX_FIELD_EQ(inName,"SOCKS5_GSSAPI_NEC") ) { return SOCKS5_GSSAPI_NEC; }
		if (HX_FIELD_EQ(inName,"TRANSFER_ENCODING") ) { return TRANSFER_ENCODING; }
		if (HX_FIELD_EQ(inName,"GSSAPI_DELEGATION") ) { return GSSAPI_DELEGATION; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"SSH_PUBLIC_KEYFILE") ) { return SSH_PUBLIC_KEYFILE; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"SSL_SESSIONID_CACHE") ) { return SSL_SESSIONID_CACHE; }
		if (HX_FIELD_EQ(inName,"SSH_PRIVATE_KEYFILE") ) { return SSH_PRIVATE_KEYFILE; }
		if (HX_FIELD_EQ(inName,"NEW_DIRECTORY_PERMS") ) { return NEW_DIRECTORY_PERMS; }
		if (HX_FIELD_EQ(inName,"PROXY_TRANSFER_MODE") ) { return PROXY_TRANSFER_MODE; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DNS_USE_GLOBAL_CACHE") ) { return DNS_USE_GLOBAL_CACHE; }
		if (HX_FIELD_EQ(inName,"FTP_RESPONSE_TIMEOUT") ) { return FTP_RESPONSE_TIMEOUT; }
		if (HX_FIELD_EQ(inName,"MAX_RECV_SPEED_LARGE") ) { return MAX_RECV_SPEED_LARGE; }
		if (HX_FIELD_EQ(inName,"MAX_SEND_SPEED_LARGE") ) { return MAX_SEND_SPEED_LARGE; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"IGNORE_CONTENT_LENGTH") ) { return IGNORE_CONTENT_LENGTH; }
		if (HX_FIELD_EQ(inName,"HTTP_CONTENT_DECODING") ) { return HTTP_CONTENT_DECODING; }
		if (HX_FIELD_EQ(inName,"SOCKS5_GSSAPI_SERVICE") ) { return SOCKS5_GSSAPI_SERVICE; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"HTTP_TRANSFER_DECODING") ) { return HTTP_TRANSFER_DECODING; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"FTP_CREATE_MISSING_DIRS") ) { return FTP_CREATE_MISSING_DIRS; }
		if (HX_FIELD_EQ(inName,"FTP_ALTERNATIVE_TO_USER") ) { return FTP_ALTERNATIVE_TO_USER; }
		if (HX_FIELD_EQ(inName,"SSH_HOST_PUBLIC_KEY_MD5") ) { return SSH_HOST_PUBLIC_KEY_MD5; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CurlOptions_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"PUT") ) { PUT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"URL") ) { URL=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"CRLF") ) { CRLF=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FILE") ) { FILE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PORT") ) { PORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POST") ) { POST=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"NETRC") ) { NETRC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROXY") ) { PROXY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { QUOTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RANGE") ) { RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHARE") ) { SHARE=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CAINFO") ) { CAINFO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CAPATH") ) { CAPATH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COOKIE") ) { COOKIE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HEADER") ) { HEADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INFILE") ) { INFILE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOBODY") ) { NOBODY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSLKEY") ) { SSLKEY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STDERR") ) { STDERR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UPLOAD") ) { UPLOAD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"APPEND") ) { APPEND=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"FTPPORT") ) { FTPPORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HTTPGET") ) { HTTPGET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PRIVATE") ) { PRIVATE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REFERER") ) { REFERER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSLCERT") ) { SSLCERT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TIMEOUT") ) { TIMEOUT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"USERPWD") ) { USERPWD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERBOSE") ) { VERBOSE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTP_SSL") ) { FTP_SSL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"USE_SSL") ) { USE_SSL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CRLFILE") ) { CRLFILE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOPROXY") ) { NOPROXY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RESOLVE") ) { RESOLVE=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ENCODING") ) { ENCODING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FILETIME") ) { FILETIME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOSIGNAL") ) { NOSIGNAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PREQUOTE") ) { PREQUOTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"READDATA") ) { READDATA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HTTPAUTH") ) { HTTPAUTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KRBLEVEL") ) { KRBLEVEL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CERTINFO") ) { CERTINFO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PASSWORD") ) { PASSWORD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"USERNAME") ) { USERNAME=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"COOKIEJAR") ) { COOKIEJAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EGDSOCKET") ) { EGDSOCKET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTPAPPEND") ) { FTPAPPEND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INTERFACE") ) { INTERFACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KRB4LEVEL") ) { KRB4LEVEL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAXREDIRS") ) { MAXREDIRS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POSTQUOTE") ) { POSTQUOTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROXYPORT") ) { PROXYPORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROXYTYPE") ) { PROXYTYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSLENGINE") ) { SSLENGINE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TIMEVALUE") ) { TIMEVALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"USERAGENT") ) { USERAGENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROXYAUTH") ) { PROXYAUTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"IPRESOLVE") ) { IPRESOLVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOCALPORT") ) { LOCALPORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEYPASSWD") ) { KEYPASSWD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POSTREDIR") ) { POSTREDIR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROTOCOLS") ) { PROTOCOLS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAIL_FROM") ) { MAIL_FROM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAIL_RCPT") ) { MAIL_RCPT=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BUFFERSIZE") ) { BUFFERSIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COOKIEFILE") ) { COOKIEFILE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HTTPHEADER") ) { HTTPHEADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INFILESIZE") ) { INFILESIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOPROGRESS") ) { NOPROGRESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POSTFIELDS") ) { POSTFIELDS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSLKEYTYPE") ) { SSLKEYTYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSLVERSION") ) { SSLVERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NETRC_FILE") ) { NETRC_FILE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTPSSLAUTH") ) { FTPSSLAUTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COOKIELIST") ) { COOKIELIST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TIMEOUT_MS") ) { TIMEOUT_MS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ISSUERCERT") ) { ISSUERCERT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"AUTOREFERER") ) { AUTOREFERER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLOSEPOLICY") ) { CLOSEPOLICY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FAILONERROR") ) { FAILONERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTPLISTONLY") ) { FTPLISTONLY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAXCONNECTS") ) { MAXCONNECTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RANDOM_FILE") ) { RANDOM_FILE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RESUME_FROM") ) { RESUME_FROM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSLCERTTYPE") ) { SSLCERTTYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WRITEHEADER") ) { WRITEHEADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAXFILESIZE") ) { MAXFILESIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTP_ACCOUNT") ) { FTP_ACCOUNT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TCP_NODELAY") ) { TCP_NODELAY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTP_SSL_CCC") ) { FTP_SSL_CCC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DIRLISTONLY") ) { DIRLISTONLY=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FORBID_REUSE") ) { FORBID_REUSE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTP_USE_EPRT") ) { FTP_USE_EPRT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTP_USE_EPSV") ) { FTP_USE_EPSV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HTTP_VERSION") ) { HTTP_VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROXYUSERPWD") ) { PROXYUSERPWD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"READFUNCTION") ) { READFUNCTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSLKEYPASSWD") ) { SSLKEYPASSWD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSFERTEXT") ) { TRANSFERTEXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONNECT_ONLY") ) { CONNECT_ONLY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TFTP_BLKSIZE") ) { TFTP_BLKSIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTP_USE_PRET") ) { FTP_USE_PRET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RTSP_REQUEST") ) { RTSP_REQUEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TLSAUTH_TYPE") ) { TLSAUTH_TYPE=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"COOKIESESSION") ) { COOKIESESSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CUSTOMREQUEST") ) { CUSTOMREQUEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRESH_CONNECT") ) { FRESH_CONNECT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSLCERTPASSWD") ) { SSLCERTPASSWD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TELNETOPTIONS") ) { TELNETOPTIONS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TIMECONDITION") ) { TIMECONDITION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WRITEFUNCTION") ) { WRITEFUNCTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ADDRESS_SCOPE") ) { ADDRESS_SCOPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROXYPASSWORD") ) { PROXYPASSWORD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROXYUSERNAME") ) { PROXYUSERNAME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WILDCARDMATCH") ) { WILDCARDMATCH=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"CONNECTTIMEOUT") ) { CONNECTTIMEOUT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FOLLOWLOCATION") ) { FOLLOWLOCATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HEADERFUNCTION") ) { HEADERFUNCTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HTTP200ALIASES") ) { HTTP200ALIASES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOW_SPEED_TIME") ) { LOW_SPEED_TIME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSL_VERIFYHOST") ) { SSL_VERIFYHOST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSL_VERIFYPEER") ) { SSL_VERIFYPEER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTP_FILEMETHOD") ) { FTP_FILEMETHOD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOCALPORTRANGE") ) { LOCALPORTRANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSH_AUTH_TYPES") ) { SSH_AUTH_TYPES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEW_FILE_PERMS") ) { NEW_FILE_PERMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSH_KNOWNHOSTS") ) { SSH_KNOWNHOSTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RTSP_TRANSPORT") ) { RTSP_TRANSPORT=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"HTTPPROXYTUNNEL") ) { HTTPPROXYTUNNEL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOW_SPEED_LIMIT") ) { LOW_SPEED_LIMIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSL_CIPHER_LIST") ) { SSL_CIPHER_LIST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REDIR_PROTOCOLS") ) { REDIR_PROTOCOLS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RTSP_SESSION_ID") ) { RTSP_SESSION_ID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RTSP_STREAM_URI") ) { RTSP_STREAM_URI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACCEPT_ENCODING") ) { ACCEPT_ENCODING=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"PROGRESSFUNCTION") ) { PROGRESSFUNCTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTP_SKIP_PASV_IP") ) { FTP_SKIP_PASV_IP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RTSP_CLIENT_CSEQ") ) { RTSP_CLIENT_CSEQ=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RTSP_SERVER_CSEQ") ) { RTSP_SERVER_CSEQ=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FNMATCH_FUNCTION") ) { FNMATCH_FUNCTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TLSAUTH_PASSWORD") ) { TLSAUTH_PASSWORD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TLSAUTH_USERNAME") ) { TLSAUTH_USERNAME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACCEPTTIMEOUT_MS") ) { ACCEPTTIMEOUT_MS=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DNS_CACHE_TIMEOUT") ) { DNS_CACHE_TIMEOUT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSLENGINE_DEFAULT") ) { SSLENGINE_DEFAULT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNRESTRICTED_AUTH") ) { UNRESTRICTED_AUTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONNECTTIMEOUT_MS") ) { CONNECTTIMEOUT_MS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SOCKS5_GSSAPI_NEC") ) { SOCKS5_GSSAPI_NEC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRANSFER_ENCODING") ) { TRANSFER_ENCODING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GSSAPI_DELEGATION") ) { GSSAPI_DELEGATION=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"SSH_PUBLIC_KEYFILE") ) { SSH_PUBLIC_KEYFILE=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"SSL_SESSIONID_CACHE") ) { SSL_SESSIONID_CACHE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSH_PRIVATE_KEYFILE") ) { SSH_PRIVATE_KEYFILE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEW_DIRECTORY_PERMS") ) { NEW_DIRECTORY_PERMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROXY_TRANSFER_MODE") ) { PROXY_TRANSFER_MODE=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DNS_USE_GLOBAL_CACHE") ) { DNS_USE_GLOBAL_CACHE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTP_RESPONSE_TIMEOUT") ) { FTP_RESPONSE_TIMEOUT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_RECV_SPEED_LARGE") ) { MAX_RECV_SPEED_LARGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_SEND_SPEED_LARGE") ) { MAX_SEND_SPEED_LARGE=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"IGNORE_CONTENT_LENGTH") ) { IGNORE_CONTENT_LENGTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HTTP_CONTENT_DECODING") ) { HTTP_CONTENT_DECODING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SOCKS5_GSSAPI_SERVICE") ) { SOCKS5_GSSAPI_SERVICE=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"HTTP_TRANSFER_DECODING") ) { HTTP_TRANSFER_DECODING=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"FTP_CREATE_MISSING_DIRS") ) { FTP_CREATE_MISSING_DIRS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FTP_ALTERNATIVE_TO_USER") ) { FTP_ALTERNATIVE_TO_USER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SSH_HOST_PUBLIC_KEY_MD5") ) { SSH_HOST_PUBLIC_KEY_MD5=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CurlOptions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("AUTOREFERER"),
	HX_CSTRING("BUFFERSIZE"),
	HX_CSTRING("CAINFO"),
	HX_CSTRING("CAPATH"),
	HX_CSTRING("CLOSEPOLICY"),
	HX_CSTRING("CONNECTTIMEOUT"),
	HX_CSTRING("COOKIE"),
	HX_CSTRING("COOKIEFILE"),
	HX_CSTRING("COOKIEJAR"),
	HX_CSTRING("COOKIESESSION"),
	HX_CSTRING("CRLF"),
	HX_CSTRING("CUSTOMREQUEST"),
	HX_CSTRING("DNS_CACHE_TIMEOUT"),
	HX_CSTRING("DNS_USE_GLOBAL_CACHE"),
	HX_CSTRING("EGDSOCKET"),
	HX_CSTRING("ENCODING"),
	HX_CSTRING("FAILONERROR"),
	HX_CSTRING("FILE"),
	HX_CSTRING("FILETIME"),
	HX_CSTRING("FOLLOWLOCATION"),
	HX_CSTRING("FORBID_REUSE"),
	HX_CSTRING("FRESH_CONNECT"),
	HX_CSTRING("FTPAPPEND"),
	HX_CSTRING("FTPLISTONLY"),
	HX_CSTRING("FTPPORT"),
	HX_CSTRING("FTP_USE_EPRT"),
	HX_CSTRING("FTP_USE_EPSV"),
	HX_CSTRING("HEADER"),
	HX_CSTRING("HEADERFUNCTION"),
	HX_CSTRING("HTTP200ALIASES"),
	HX_CSTRING("HTTPGET"),
	HX_CSTRING("HTTPHEADER"),
	HX_CSTRING("HTTPPROXYTUNNEL"),
	HX_CSTRING("HTTP_VERSION"),
	HX_CSTRING("INFILE"),
	HX_CSTRING("INFILESIZE"),
	HX_CSTRING("INTERFACE"),
	HX_CSTRING("KRB4LEVEL"),
	HX_CSTRING("LOW_SPEED_LIMIT"),
	HX_CSTRING("LOW_SPEED_TIME"),
	HX_CSTRING("MAXCONNECTS"),
	HX_CSTRING("MAXREDIRS"),
	HX_CSTRING("NETRC"),
	HX_CSTRING("NOBODY"),
	HX_CSTRING("NOPROGRESS"),
	HX_CSTRING("NOSIGNAL"),
	HX_CSTRING("PORT"),
	HX_CSTRING("POST"),
	HX_CSTRING("POSTFIELDS"),
	HX_CSTRING("POSTQUOTE"),
	HX_CSTRING("PREQUOTE"),
	HX_CSTRING("PRIVATE"),
	HX_CSTRING("PROGRESSFUNCTION"),
	HX_CSTRING("PROXY"),
	HX_CSTRING("PROXYPORT"),
	HX_CSTRING("PROXYTYPE"),
	HX_CSTRING("PROXYUSERPWD"),
	HX_CSTRING("PUT"),
	HX_CSTRING("QUOTE"),
	HX_CSTRING("RANDOM_FILE"),
	HX_CSTRING("RANGE"),
	HX_CSTRING("READDATA"),
	HX_CSTRING("READFUNCTION"),
	HX_CSTRING("REFERER"),
	HX_CSTRING("RESUME_FROM"),
	HX_CSTRING("SHARE"),
	HX_CSTRING("SSLCERT"),
	HX_CSTRING("SSLCERTPASSWD"),
	HX_CSTRING("SSLCERTTYPE"),
	HX_CSTRING("SSLENGINE"),
	HX_CSTRING("SSLENGINE_DEFAULT"),
	HX_CSTRING("SSLKEY"),
	HX_CSTRING("SSLKEYPASSWD"),
	HX_CSTRING("SSLKEYTYPE"),
	HX_CSTRING("SSLVERSION"),
	HX_CSTRING("SSL_CIPHER_LIST"),
	HX_CSTRING("SSL_VERIFYHOST"),
	HX_CSTRING("SSL_VERIFYPEER"),
	HX_CSTRING("STDERR"),
	HX_CSTRING("TELNETOPTIONS"),
	HX_CSTRING("TIMECONDITION"),
	HX_CSTRING("TIMEOUT"),
	HX_CSTRING("TIMEVALUE"),
	HX_CSTRING("TRANSFERTEXT"),
	HX_CSTRING("UNRESTRICTED_AUTH"),
	HX_CSTRING("UPLOAD"),
	HX_CSTRING("URL"),
	HX_CSTRING("USERAGENT"),
	HX_CSTRING("USERPWD"),
	HX_CSTRING("VERBOSE"),
	HX_CSTRING("WRITEFUNCTION"),
	HX_CSTRING("WRITEHEADER"),
	HX_CSTRING("HTTPAUTH"),
	HX_CSTRING("FTP_CREATE_MISSING_DIRS"),
	HX_CSTRING("PROXYAUTH"),
	HX_CSTRING("FTP_RESPONSE_TIMEOUT"),
	HX_CSTRING("IPRESOLVE"),
	HX_CSTRING("MAXFILESIZE"),
	HX_CSTRING("FTP_SSL"),
	HX_CSTRING("NETRC_FILE"),
	HX_CSTRING("FTPSSLAUTH"),
	HX_CSTRING("FTP_ACCOUNT"),
	HX_CSTRING("TCP_NODELAY"),
	HX_CSTRING("COOKIELIST"),
	HX_CSTRING("IGNORE_CONTENT_LENGTH"),
	HX_CSTRING("FTP_SKIP_PASV_IP"),
	HX_CSTRING("FTP_FILEMETHOD"),
	HX_CSTRING("CONNECT_ONLY"),
	HX_CSTRING("LOCALPORT"),
	HX_CSTRING("LOCALPORTRANGE"),
	HX_CSTRING("FTP_ALTERNATIVE_TO_USER"),
	HX_CSTRING("MAX_RECV_SPEED_LARGE"),
	HX_CSTRING("MAX_SEND_SPEED_LARGE"),
	HX_CSTRING("SSL_SESSIONID_CACHE"),
	HX_CSTRING("FTP_SSL_CCC"),
	HX_CSTRING("SSH_AUTH_TYPES"),
	HX_CSTRING("SSH_PRIVATE_KEYFILE"),
	HX_CSTRING("SSH_PUBLIC_KEYFILE"),
	HX_CSTRING("CONNECTTIMEOUT_MS"),
	HX_CSTRING("HTTP_CONTENT_DECODING"),
	HX_CSTRING("HTTP_TRANSFER_DECODING"),
	HX_CSTRING("TIMEOUT_MS"),
	HX_CSTRING("KRBLEVEL"),
	HX_CSTRING("NEW_DIRECTORY_PERMS"),
	HX_CSTRING("NEW_FILE_PERMS"),
	HX_CSTRING("APPEND"),
	HX_CSTRING("DIRLISTONLY"),
	HX_CSTRING("USE_SSL"),
	HX_CSTRING("SSH_HOST_PUBLIC_KEY_MD5"),
	HX_CSTRING("PROXY_TRANSFER_MODE"),
	HX_CSTRING("ADDRESS_SCOPE"),
	HX_CSTRING("CRLFILE"),
	HX_CSTRING("ISSUERCERT"),
	HX_CSTRING("KEYPASSWD"),
	HX_CSTRING("CERTINFO"),
	HX_CSTRING("PASSWORD"),
	HX_CSTRING("POSTREDIR"),
	HX_CSTRING("PROXYPASSWORD"),
	HX_CSTRING("PROXYUSERNAME"),
	HX_CSTRING("USERNAME"),
	HX_CSTRING("NOPROXY"),
	HX_CSTRING("PROTOCOLS"),
	HX_CSTRING("REDIR_PROTOCOLS"),
	HX_CSTRING("SOCKS5_GSSAPI_NEC"),
	HX_CSTRING("SOCKS5_GSSAPI_SERVICE"),
	HX_CSTRING("TFTP_BLKSIZE"),
	HX_CSTRING("SSH_KNOWNHOSTS"),
	HX_CSTRING("FTP_USE_PRET"),
	HX_CSTRING("MAIL_FROM"),
	HX_CSTRING("MAIL_RCPT"),
	HX_CSTRING("RTSP_CLIENT_CSEQ"),
	HX_CSTRING("RTSP_REQUEST"),
	HX_CSTRING("RTSP_SERVER_CSEQ"),
	HX_CSTRING("RTSP_SESSION_ID"),
	HX_CSTRING("RTSP_STREAM_URI"),
	HX_CSTRING("RTSP_TRANSPORT"),
	HX_CSTRING("FNMATCH_FUNCTION"),
	HX_CSTRING("WILDCARDMATCH"),
	HX_CSTRING("RESOLVE"),
	HX_CSTRING("TLSAUTH_PASSWORD"),
	HX_CSTRING("TLSAUTH_TYPE"),
	HX_CSTRING("TLSAUTH_USERNAME"),
	HX_CSTRING("ACCEPT_ENCODING"),
	HX_CSTRING("TRANSFER_ENCODING"),
	HX_CSTRING("GSSAPI_DELEGATION"),
	HX_CSTRING("ACCEPTTIMEOUT_MS"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CurlOptions_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::AUTOREFERER,"AUTOREFERER");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::BUFFERSIZE,"BUFFERSIZE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::CAINFO,"CAINFO");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::CAPATH,"CAPATH");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::CLOSEPOLICY,"CLOSEPOLICY");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::CONNECTTIMEOUT,"CONNECTTIMEOUT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::COOKIE,"COOKIE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::COOKIEFILE,"COOKIEFILE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::COOKIEJAR,"COOKIEJAR");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::COOKIESESSION,"COOKIESESSION");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::CRLF,"CRLF");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::CUSTOMREQUEST,"CUSTOMREQUEST");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::DNS_CACHE_TIMEOUT,"DNS_CACHE_TIMEOUT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::DNS_USE_GLOBAL_CACHE,"DNS_USE_GLOBAL_CACHE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::EGDSOCKET,"EGDSOCKET");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::ENCODING,"ENCODING");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FAILONERROR,"FAILONERROR");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FILE,"FILE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FILETIME,"FILETIME");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FOLLOWLOCATION,"FOLLOWLOCATION");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FORBID_REUSE,"FORBID_REUSE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FRESH_CONNECT,"FRESH_CONNECT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTPAPPEND,"FTPAPPEND");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTPLISTONLY,"FTPLISTONLY");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTPPORT,"FTPPORT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTP_USE_EPRT,"FTP_USE_EPRT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTP_USE_EPSV,"FTP_USE_EPSV");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::HEADER,"HEADER");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::HEADERFUNCTION,"HEADERFUNCTION");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::HTTP200ALIASES,"HTTP200ALIASES");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::HTTPGET,"HTTPGET");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::HTTPHEADER,"HTTPHEADER");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::HTTPPROXYTUNNEL,"HTTPPROXYTUNNEL");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::HTTP_VERSION,"HTTP_VERSION");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::INFILE,"INFILE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::INFILESIZE,"INFILESIZE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::INTERFACE,"INTERFACE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::KRB4LEVEL,"KRB4LEVEL");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::LOW_SPEED_LIMIT,"LOW_SPEED_LIMIT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::LOW_SPEED_TIME,"LOW_SPEED_TIME");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::MAXCONNECTS,"MAXCONNECTS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::MAXREDIRS,"MAXREDIRS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::NETRC,"NETRC");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::NOBODY,"NOBODY");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::NOPROGRESS,"NOPROGRESS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::NOSIGNAL,"NOSIGNAL");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PORT,"PORT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::POST,"POST");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::POSTFIELDS,"POSTFIELDS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::POSTQUOTE,"POSTQUOTE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PREQUOTE,"PREQUOTE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PRIVATE,"PRIVATE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PROGRESSFUNCTION,"PROGRESSFUNCTION");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PROXY,"PROXY");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PROXYPORT,"PROXYPORT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PROXYTYPE,"PROXYTYPE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PROXYUSERPWD,"PROXYUSERPWD");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PUT,"PUT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::QUOTE,"QUOTE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::RANDOM_FILE,"RANDOM_FILE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::RANGE,"RANGE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::READDATA,"READDATA");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::READFUNCTION,"READFUNCTION");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::REFERER,"REFERER");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::RESUME_FROM,"RESUME_FROM");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SHARE,"SHARE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSLCERT,"SSLCERT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSLCERTPASSWD,"SSLCERTPASSWD");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSLCERTTYPE,"SSLCERTTYPE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSLENGINE,"SSLENGINE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSLENGINE_DEFAULT,"SSLENGINE_DEFAULT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSLKEY,"SSLKEY");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSLKEYPASSWD,"SSLKEYPASSWD");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSLKEYTYPE,"SSLKEYTYPE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSLVERSION,"SSLVERSION");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSL_CIPHER_LIST,"SSL_CIPHER_LIST");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSL_VERIFYHOST,"SSL_VERIFYHOST");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSL_VERIFYPEER,"SSL_VERIFYPEER");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::STDERR,"STDERR");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::TELNETOPTIONS,"TELNETOPTIONS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::TIMECONDITION,"TIMECONDITION");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::TIMEOUT,"TIMEOUT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::TIMEVALUE,"TIMEVALUE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::TRANSFERTEXT,"TRANSFERTEXT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::UNRESTRICTED_AUTH,"UNRESTRICTED_AUTH");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::UPLOAD,"UPLOAD");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::URL,"URL");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::USERAGENT,"USERAGENT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::USERPWD,"USERPWD");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::VERBOSE,"VERBOSE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::WRITEFUNCTION,"WRITEFUNCTION");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::WRITEHEADER,"WRITEHEADER");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::HTTPAUTH,"HTTPAUTH");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTP_CREATE_MISSING_DIRS,"FTP_CREATE_MISSING_DIRS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PROXYAUTH,"PROXYAUTH");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTP_RESPONSE_TIMEOUT,"FTP_RESPONSE_TIMEOUT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::IPRESOLVE,"IPRESOLVE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::MAXFILESIZE,"MAXFILESIZE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTP_SSL,"FTP_SSL");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::NETRC_FILE,"NETRC_FILE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTPSSLAUTH,"FTPSSLAUTH");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTP_ACCOUNT,"FTP_ACCOUNT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::TCP_NODELAY,"TCP_NODELAY");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::COOKIELIST,"COOKIELIST");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::IGNORE_CONTENT_LENGTH,"IGNORE_CONTENT_LENGTH");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTP_SKIP_PASV_IP,"FTP_SKIP_PASV_IP");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTP_FILEMETHOD,"FTP_FILEMETHOD");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::CONNECT_ONLY,"CONNECT_ONLY");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::LOCALPORT,"LOCALPORT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::LOCALPORTRANGE,"LOCALPORTRANGE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTP_ALTERNATIVE_TO_USER,"FTP_ALTERNATIVE_TO_USER");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::MAX_RECV_SPEED_LARGE,"MAX_RECV_SPEED_LARGE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::MAX_SEND_SPEED_LARGE,"MAX_SEND_SPEED_LARGE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSL_SESSIONID_CACHE,"SSL_SESSIONID_CACHE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTP_SSL_CCC,"FTP_SSL_CCC");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSH_AUTH_TYPES,"SSH_AUTH_TYPES");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSH_PRIVATE_KEYFILE,"SSH_PRIVATE_KEYFILE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSH_PUBLIC_KEYFILE,"SSH_PUBLIC_KEYFILE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::CONNECTTIMEOUT_MS,"CONNECTTIMEOUT_MS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::HTTP_CONTENT_DECODING,"HTTP_CONTENT_DECODING");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::HTTP_TRANSFER_DECODING,"HTTP_TRANSFER_DECODING");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::TIMEOUT_MS,"TIMEOUT_MS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::KRBLEVEL,"KRBLEVEL");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::NEW_DIRECTORY_PERMS,"NEW_DIRECTORY_PERMS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::NEW_FILE_PERMS,"NEW_FILE_PERMS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::APPEND,"APPEND");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::DIRLISTONLY,"DIRLISTONLY");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::USE_SSL,"USE_SSL");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSH_HOST_PUBLIC_KEY_MD5,"SSH_HOST_PUBLIC_KEY_MD5");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PROXY_TRANSFER_MODE,"PROXY_TRANSFER_MODE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::ADDRESS_SCOPE,"ADDRESS_SCOPE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::CRLFILE,"CRLFILE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::ISSUERCERT,"ISSUERCERT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::KEYPASSWD,"KEYPASSWD");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::CERTINFO,"CERTINFO");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PASSWORD,"PASSWORD");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::POSTREDIR,"POSTREDIR");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PROXYPASSWORD,"PROXYPASSWORD");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PROXYUSERNAME,"PROXYUSERNAME");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::USERNAME,"USERNAME");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::NOPROXY,"NOPROXY");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::PROTOCOLS,"PROTOCOLS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::REDIR_PROTOCOLS,"REDIR_PROTOCOLS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SOCKS5_GSSAPI_NEC,"SOCKS5_GSSAPI_NEC");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SOCKS5_GSSAPI_SERVICE,"SOCKS5_GSSAPI_SERVICE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::TFTP_BLKSIZE,"TFTP_BLKSIZE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::SSH_KNOWNHOSTS,"SSH_KNOWNHOSTS");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FTP_USE_PRET,"FTP_USE_PRET");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::MAIL_FROM,"MAIL_FROM");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::MAIL_RCPT,"MAIL_RCPT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::RTSP_CLIENT_CSEQ,"RTSP_CLIENT_CSEQ");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::RTSP_REQUEST,"RTSP_REQUEST");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::RTSP_SERVER_CSEQ,"RTSP_SERVER_CSEQ");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::RTSP_SESSION_ID,"RTSP_SESSION_ID");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::RTSP_STREAM_URI,"RTSP_STREAM_URI");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::RTSP_TRANSPORT,"RTSP_TRANSPORT");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::FNMATCH_FUNCTION,"FNMATCH_FUNCTION");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::WILDCARDMATCH,"WILDCARDMATCH");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::RESOLVE,"RESOLVE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::TLSAUTH_PASSWORD,"TLSAUTH_PASSWORD");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::TLSAUTH_TYPE,"TLSAUTH_TYPE");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::TLSAUTH_USERNAME,"TLSAUTH_USERNAME");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::ACCEPT_ENCODING,"ACCEPT_ENCODING");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::TRANSFER_ENCODING,"TRANSFER_ENCODING");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::GSSAPI_DELEGATION,"GSSAPI_DELEGATION");
	HX_MARK_MEMBER_NAME(CurlOptions_obj::ACCEPTTIMEOUT_MS,"ACCEPTTIMEOUT_MS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::AUTOREFERER,"AUTOREFERER");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::BUFFERSIZE,"BUFFERSIZE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::CAINFO,"CAINFO");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::CAPATH,"CAPATH");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::CLOSEPOLICY,"CLOSEPOLICY");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::CONNECTTIMEOUT,"CONNECTTIMEOUT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::COOKIE,"COOKIE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::COOKIEFILE,"COOKIEFILE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::COOKIEJAR,"COOKIEJAR");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::COOKIESESSION,"COOKIESESSION");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::CRLF,"CRLF");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::CUSTOMREQUEST,"CUSTOMREQUEST");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::DNS_CACHE_TIMEOUT,"DNS_CACHE_TIMEOUT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::DNS_USE_GLOBAL_CACHE,"DNS_USE_GLOBAL_CACHE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::EGDSOCKET,"EGDSOCKET");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::ENCODING,"ENCODING");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FAILONERROR,"FAILONERROR");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FILE,"FILE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FILETIME,"FILETIME");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FOLLOWLOCATION,"FOLLOWLOCATION");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FORBID_REUSE,"FORBID_REUSE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FRESH_CONNECT,"FRESH_CONNECT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTPAPPEND,"FTPAPPEND");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTPLISTONLY,"FTPLISTONLY");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTPPORT,"FTPPORT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTP_USE_EPRT,"FTP_USE_EPRT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTP_USE_EPSV,"FTP_USE_EPSV");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::HEADER,"HEADER");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::HEADERFUNCTION,"HEADERFUNCTION");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::HTTP200ALIASES,"HTTP200ALIASES");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::HTTPGET,"HTTPGET");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::HTTPHEADER,"HTTPHEADER");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::HTTPPROXYTUNNEL,"HTTPPROXYTUNNEL");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::HTTP_VERSION,"HTTP_VERSION");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::INFILE,"INFILE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::INFILESIZE,"INFILESIZE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::INTERFACE,"INTERFACE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::KRB4LEVEL,"KRB4LEVEL");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::LOW_SPEED_LIMIT,"LOW_SPEED_LIMIT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::LOW_SPEED_TIME,"LOW_SPEED_TIME");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::MAXCONNECTS,"MAXCONNECTS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::MAXREDIRS,"MAXREDIRS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::NETRC,"NETRC");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::NOBODY,"NOBODY");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::NOPROGRESS,"NOPROGRESS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::NOSIGNAL,"NOSIGNAL");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PORT,"PORT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::POST,"POST");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::POSTFIELDS,"POSTFIELDS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::POSTQUOTE,"POSTQUOTE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PREQUOTE,"PREQUOTE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PRIVATE,"PRIVATE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PROGRESSFUNCTION,"PROGRESSFUNCTION");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PROXY,"PROXY");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PROXYPORT,"PROXYPORT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PROXYTYPE,"PROXYTYPE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PROXYUSERPWD,"PROXYUSERPWD");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PUT,"PUT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::QUOTE,"QUOTE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::RANDOM_FILE,"RANDOM_FILE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::RANGE,"RANGE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::READDATA,"READDATA");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::READFUNCTION,"READFUNCTION");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::REFERER,"REFERER");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::RESUME_FROM,"RESUME_FROM");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SHARE,"SHARE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSLCERT,"SSLCERT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSLCERTPASSWD,"SSLCERTPASSWD");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSLCERTTYPE,"SSLCERTTYPE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSLENGINE,"SSLENGINE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSLENGINE_DEFAULT,"SSLENGINE_DEFAULT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSLKEY,"SSLKEY");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSLKEYPASSWD,"SSLKEYPASSWD");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSLKEYTYPE,"SSLKEYTYPE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSLVERSION,"SSLVERSION");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSL_CIPHER_LIST,"SSL_CIPHER_LIST");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSL_VERIFYHOST,"SSL_VERIFYHOST");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSL_VERIFYPEER,"SSL_VERIFYPEER");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::STDERR,"STDERR");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::TELNETOPTIONS,"TELNETOPTIONS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::TIMECONDITION,"TIMECONDITION");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::TIMEOUT,"TIMEOUT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::TIMEVALUE,"TIMEVALUE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::TRANSFERTEXT,"TRANSFERTEXT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::UNRESTRICTED_AUTH,"UNRESTRICTED_AUTH");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::UPLOAD,"UPLOAD");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::URL,"URL");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::USERAGENT,"USERAGENT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::USERPWD,"USERPWD");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::VERBOSE,"VERBOSE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::WRITEFUNCTION,"WRITEFUNCTION");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::WRITEHEADER,"WRITEHEADER");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::HTTPAUTH,"HTTPAUTH");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTP_CREATE_MISSING_DIRS,"FTP_CREATE_MISSING_DIRS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PROXYAUTH,"PROXYAUTH");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTP_RESPONSE_TIMEOUT,"FTP_RESPONSE_TIMEOUT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::IPRESOLVE,"IPRESOLVE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::MAXFILESIZE,"MAXFILESIZE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTP_SSL,"FTP_SSL");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::NETRC_FILE,"NETRC_FILE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTPSSLAUTH,"FTPSSLAUTH");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTP_ACCOUNT,"FTP_ACCOUNT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::TCP_NODELAY,"TCP_NODELAY");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::COOKIELIST,"COOKIELIST");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::IGNORE_CONTENT_LENGTH,"IGNORE_CONTENT_LENGTH");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTP_SKIP_PASV_IP,"FTP_SKIP_PASV_IP");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTP_FILEMETHOD,"FTP_FILEMETHOD");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::CONNECT_ONLY,"CONNECT_ONLY");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::LOCALPORT,"LOCALPORT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::LOCALPORTRANGE,"LOCALPORTRANGE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTP_ALTERNATIVE_TO_USER,"FTP_ALTERNATIVE_TO_USER");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::MAX_RECV_SPEED_LARGE,"MAX_RECV_SPEED_LARGE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::MAX_SEND_SPEED_LARGE,"MAX_SEND_SPEED_LARGE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSL_SESSIONID_CACHE,"SSL_SESSIONID_CACHE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTP_SSL_CCC,"FTP_SSL_CCC");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSH_AUTH_TYPES,"SSH_AUTH_TYPES");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSH_PRIVATE_KEYFILE,"SSH_PRIVATE_KEYFILE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSH_PUBLIC_KEYFILE,"SSH_PUBLIC_KEYFILE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::CONNECTTIMEOUT_MS,"CONNECTTIMEOUT_MS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::HTTP_CONTENT_DECODING,"HTTP_CONTENT_DECODING");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::HTTP_TRANSFER_DECODING,"HTTP_TRANSFER_DECODING");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::TIMEOUT_MS,"TIMEOUT_MS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::KRBLEVEL,"KRBLEVEL");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::NEW_DIRECTORY_PERMS,"NEW_DIRECTORY_PERMS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::NEW_FILE_PERMS,"NEW_FILE_PERMS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::APPEND,"APPEND");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::DIRLISTONLY,"DIRLISTONLY");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::USE_SSL,"USE_SSL");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSH_HOST_PUBLIC_KEY_MD5,"SSH_HOST_PUBLIC_KEY_MD5");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PROXY_TRANSFER_MODE,"PROXY_TRANSFER_MODE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::ADDRESS_SCOPE,"ADDRESS_SCOPE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::CRLFILE,"CRLFILE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::ISSUERCERT,"ISSUERCERT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::KEYPASSWD,"KEYPASSWD");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::CERTINFO,"CERTINFO");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PASSWORD,"PASSWORD");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::POSTREDIR,"POSTREDIR");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PROXYPASSWORD,"PROXYPASSWORD");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PROXYUSERNAME,"PROXYUSERNAME");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::USERNAME,"USERNAME");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::NOPROXY,"NOPROXY");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::PROTOCOLS,"PROTOCOLS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::REDIR_PROTOCOLS,"REDIR_PROTOCOLS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SOCKS5_GSSAPI_NEC,"SOCKS5_GSSAPI_NEC");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SOCKS5_GSSAPI_SERVICE,"SOCKS5_GSSAPI_SERVICE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::TFTP_BLKSIZE,"TFTP_BLKSIZE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::SSH_KNOWNHOSTS,"SSH_KNOWNHOSTS");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FTP_USE_PRET,"FTP_USE_PRET");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::MAIL_FROM,"MAIL_FROM");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::MAIL_RCPT,"MAIL_RCPT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::RTSP_CLIENT_CSEQ,"RTSP_CLIENT_CSEQ");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::RTSP_REQUEST,"RTSP_REQUEST");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::RTSP_SERVER_CSEQ,"RTSP_SERVER_CSEQ");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::RTSP_SESSION_ID,"RTSP_SESSION_ID");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::RTSP_STREAM_URI,"RTSP_STREAM_URI");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::RTSP_TRANSPORT,"RTSP_TRANSPORT");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::FNMATCH_FUNCTION,"FNMATCH_FUNCTION");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::WILDCARDMATCH,"WILDCARDMATCH");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::RESOLVE,"RESOLVE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::TLSAUTH_PASSWORD,"TLSAUTH_PASSWORD");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::TLSAUTH_TYPE,"TLSAUTH_TYPE");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::TLSAUTH_USERNAME,"TLSAUTH_USERNAME");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::ACCEPT_ENCODING,"ACCEPT_ENCODING");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::TRANSFER_ENCODING,"TRANSFER_ENCODING");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::GSSAPI_DELEGATION,"GSSAPI_DELEGATION");
	HX_VISIT_MEMBER_NAME(CurlOptions_obj::ACCEPTTIMEOUT_MS,"ACCEPTTIMEOUT_MS");
};

Class CurlOptions_obj::__mClass;

void CurlOptions_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ua.org.shaddy.tools.url.CurlOptions"), hx::TCanCast< CurlOptions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CurlOptions_obj::__boot()
{
}

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
