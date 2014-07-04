#define IMPLEMENT_API
#include <hx/CFFI.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <curl/curl.h>
extern "C" {
    value hx_curl_easy_init()
    {
    	CURL *curl = curl_easy_init();
        return alloc_int((long)curl); //val_int(1));
    }
}
DEFINE_PRIM( hx_curl_easy_init, 0 );
