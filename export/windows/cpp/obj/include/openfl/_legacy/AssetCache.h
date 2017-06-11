// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__legacy_AssetCache
#define INCLUDED_openfl__legacy_AssetCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_IAssetCache
#include <openfl/_legacy/IAssetCache.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,_legacy,AssetCache)
HX_DECLARE_CLASS2(openfl,_legacy,IAssetCache)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,text,Font)

namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES AssetCache_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AssetCache_obj OBJ_;
		AssetCache_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.AssetCache")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.AssetCache"); }
		static hx::ObjectPtr< AssetCache_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetCache_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("AssetCache","\x52","\x9e","\xa3","\xe4"); }

		 ::haxe::ds::StringMap bitmapData;
		 ::haxe::ds::StringMap font;
		 ::haxe::ds::StringMap sound;
		Bool _hx___enabled;
		void clear(::String prefix);
		::Dynamic clear_dyn();

		 ::openfl::_legacy::display::BitmapData getBitmapData(::String id);
		::Dynamic getBitmapData_dyn();

		 ::openfl::_legacy::text::Font getFont(::String id);
		::Dynamic getFont_dyn();

		 ::openfl::_legacy::media::Sound getSound(::String id);
		::Dynamic getSound_dyn();

		Bool hasBitmapData(::String id);
		::Dynamic hasBitmapData_dyn();

		Bool hasFont(::String id);
		::Dynamic hasFont_dyn();

		Bool hasSound(::String id);
		::Dynamic hasSound_dyn();

		Bool removeBitmapData(::String id);
		::Dynamic removeBitmapData_dyn();

		Bool removeFont(::String id);
		::Dynamic removeFont_dyn();

		Bool removeSound(::String id);
		::Dynamic removeSound_dyn();

		void setBitmapData(::String id, ::openfl::_legacy::display::BitmapData bitmapData);
		::Dynamic setBitmapData_dyn();

		void setFont(::String id, ::openfl::_legacy::text::Font font);
		::Dynamic setFont_dyn();

		void setSound(::String id, ::openfl::_legacy::media::Sound sound);
		::Dynamic setSound_dyn();

		Bool get_enabled();
		::Dynamic get_enabled_dyn();

		Bool set_enabled(Bool value);
		::Dynamic set_enabled_dyn();

};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_AssetCache */ 
