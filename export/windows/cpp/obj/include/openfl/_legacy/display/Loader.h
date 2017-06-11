// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__legacy_display_Loader
#define INCLUDED_openfl__legacy_display_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Loader)
HX_DECLARE_CLASS3(openfl,_legacy,display,LoaderInfo)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLLoader)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLRequest)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,_hx_system,LoaderContext)

namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Loader_obj : public  ::openfl::_legacy::display::Sprite_obj
{
	public:
		typedef  ::openfl::_legacy::display::Sprite_obj super;
		typedef Loader_obj OBJ_;
		Loader_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.Loader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.display.Loader"); }
		static hx::ObjectPtr< Loader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Loader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Loader","\x33","\xbc","\x03","\x8d"); }

		 ::openfl::_legacy::display::DisplayObject content;
		 ::openfl::_legacy::display::LoaderInfo contentLoaderInfo;
		 ::openfl::_legacy::display::BitmapData _hx___image;
		void load( ::openfl::_legacy::net::URLRequest request, ::openfl::_hx_system::LoaderContext context);
		::Dynamic load_dyn();

		void loadBytes( ::openfl::_legacy::utils::ByteArray bytes, ::openfl::_hx_system::LoaderContext context);
		::Dynamic loadBytes_dyn();

		void unload();
		::Dynamic unload_dyn();

		Bool _hx___onComplete( ::openfl::_legacy::utils::ByteArray bytes);
		::Dynamic _hx___onComplete_dyn();

		void contentLoaderInfo_onData( ::openfl::_legacy::events::Event event);
		::Dynamic contentLoaderInfo_onData_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_Loader */ 
