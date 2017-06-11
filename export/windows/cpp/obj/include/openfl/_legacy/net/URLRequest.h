// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#define INCLUDED_openfl__legacy_net_URLRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLRequest)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,net,URLRequestHeader)

namespace openfl{
namespace _legacy{
namespace net{


class HXCPP_CLASS_ATTRIBUTES URLRequest_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef URLRequest_obj OBJ_;
		URLRequest_obj();

	public:
		void __construct(::String url);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.net.URLRequest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.net.URLRequest"); }
		static hx::ObjectPtr< URLRequest_obj > __new(::String url);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLRequest_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("URLRequest","\xc0","\x57","\xdd","\x76"); }

		static void __boot();
		static Int AUTH_BASIC;
		static Int AUTH_DIGEST;
		static Int AUTH_GSSNEGOTIATE;
		static Int AUTH_NTLM;
		static Int AUTH_DIGEST_IE;
		static Int AUTH_DIGEST_ANY;
		Int authType;
		::String contentType;
		::String cookieString;
		::String credentials;
		 ::Dynamic data;
		Bool followRedirects;
		::String method;
		::Array< ::Dynamic> requestHeaders;
		::String url;
		::String userAgent;
		Bool verbose;
		 ::openfl::_legacy::utils::ByteArray _hx___bytes;
		void basicAuth(::String user,::String password);
		::Dynamic basicAuth_dyn();

		void digestAuth(::String user,::String password);
		::Dynamic digestAuth_dyn();

		void _hx___prepare();
		::Dynamic _hx___prepare_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace net

#endif /* INCLUDED_openfl__legacy_net_URLRequest */ 
