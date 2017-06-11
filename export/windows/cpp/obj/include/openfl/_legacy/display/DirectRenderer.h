// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__legacy_display_DirectRenderer
#define INCLUDED_openfl__legacy_display_DirectRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,DirectRenderer)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)

namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES DirectRenderer_obj : public  ::openfl::_legacy::display::DisplayObject_obj
{
	public:
		typedef  ::openfl::_legacy::display::DisplayObject_obj super;
		typedef DirectRenderer_obj OBJ_;
		DirectRenderer_obj();

	public:
		void __construct(::String __o_type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.DirectRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.display.DirectRenderer"); }
		static hx::ObjectPtr< DirectRenderer_obj > __new(::String __o_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DirectRenderer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DirectRenderer","\xac","\x31","\xba","\xef"); }

		static void __boot();
		static  ::Dynamic lime_direct_renderer_create;
		static  ::Dynamic &lime_direct_renderer_create_dyn() { return lime_direct_renderer_create;}
		static  ::Dynamic lime_direct_renderer_set;
		static  ::Dynamic &lime_direct_renderer_set_dyn() { return lime_direct_renderer_set;}
		void dispose();
		::Dynamic dispose_dyn();

		::Dynamic render;
		inline ::Dynamic &render_dyn() {return render; }

		void _hx___onRender( ::Dynamic rect);
		::Dynamic _hx___onRender_dyn();

		void _hx___stage_onAddedToStage( ::openfl::_legacy::events::Event event);
		::Dynamic _hx___stage_onAddedToStage_dyn();

		void _hx___stage_onRemovedFromStage( ::openfl::_legacy::events::Event event);
		::Dynamic _hx___stage_onRemovedFromStage_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_DirectRenderer */ 
