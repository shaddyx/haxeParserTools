#ifndef INCLUDED_ua_org_shaddy_tools_url_cache_Cache
#define INCLUDED_ua_org_shaddy_tools_url_cache_Cache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(ua,org,shaddy,tools,url,cache,Cache)
namespace ua{
namespace org{
namespace shaddy{
namespace tools{
namespace url{
namespace cache{


class HXCPP_CLASS_ATTRIBUTES  Cache_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Cache_obj OBJ_;
		Cache_obj();
		Void __construct(::String path);

	public:
		static hx::ObjectPtr< Cache_obj > __new(::String path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Cache_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Cache"); }

		virtual Void put( Dynamic url,Dynamic data);
		Dynamic put_dyn();

		virtual ::String get( ::String url);
		Dynamic get_dyn();

		::String path;
};

} // end namespace ua
} // end namespace org
} // end namespace shaddy
} // end namespace tools
} // end namespace url
} // end namespace cache

#endif /* INCLUDED_ua_org_shaddy_tools_url_cache_Cache */ 
