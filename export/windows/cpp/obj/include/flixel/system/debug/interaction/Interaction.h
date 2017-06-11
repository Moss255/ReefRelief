// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#define INCLUDED_flixel_system_debug_interaction_Interaction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,interaction,Interaction)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,Tool)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{


class HXCPP_CLASS_ATTRIBUTES Interaction_obj : public  ::flixel::_hx_system::debug::Window_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::Window_obj super;
		typedef Interaction_obj OBJ_;
		Interaction_obj();

	public:
		void __construct( ::openfl::_legacy::display::Sprite container);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.Interaction")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.interaction.Interaction"); }
		static hx::ObjectPtr< Interaction_obj > __new( ::openfl::_legacy::display::Sprite container);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Interaction_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Interaction","\xb2","\xcf","\x8b","\x20"); }

		 ::flixel::_hx_system::debug::interaction::tools::Tool activeTool;
		 ::flixel::group::FlxTypedGroup selectedItems;
		 ::flixel::math::FlxPoint flixelPointer;
		Bool pointerJustPressed;
		Bool pointerJustReleased;
		Bool pointerPressed;
		 ::openfl::_legacy::display::Sprite _container;
		 ::openfl::_legacy::display::Sprite _customCursor;
		::Array< ::Dynamic> _tools;
		Int _turn;
		 ::haxe::ds::IntMap _keysDown;
		 ::haxe::ds::IntMap _keysUp;
		Bool _wasMouseVisible;
		Bool _wasUsingSystemCursor;
		Bool _debuggerInteraction;
		 ::flixel::input::FlxPointer _flixelPointer;
		void handleDebuggerVisibilityChanged();
		::Dynamic handleDebuggerVisibilityChanged_dyn();

		void updateMouse( ::openfl::_legacy::events::MouseEvent event);
		::Dynamic updateMouse_dyn();

		void handleMouseClick( ::openfl::_legacy::events::MouseEvent event);
		::Dynamic handleMouseClick_dyn();

		void handleMouseInDebugger( ::openfl::_legacy::events::MouseEvent event);
		::Dynamic handleMouseInDebugger_dyn();

		void handleKeyEvent( ::openfl::_legacy::events::KeyboardEvent event);
		::Dynamic handleKeyEvent_dyn();

		void addTool( ::flixel::_hx_system::debug::interaction::tools::Tool tool);
		::Dynamic addTool_dyn();

		void destroy();

		Bool isActive();
		::Dynamic isActive_dyn();

		void update();

		void postDraw();
		::Dynamic postDraw_dyn();

		 ::openfl::_legacy::display::Graphics getDebugGraphics();
		::Dynamic getDebugGraphics_dyn();

		void drawItemsSelection();
		::Dynamic drawItemsSelection_dyn();

		 ::flixel::_hx_system::debug::interaction::tools::Tool getTool(hx::Class className);
		::Dynamic getTool_dyn();

		void toggleVisible();

		void registerCustomCursor(::String name, ::openfl::_legacy::display::BitmapData icon);
		::Dynamic registerCustomCursor_dyn();

		void updateCustomCursors();
		::Dynamic updateCustomCursors_dyn();

		void saveSystemCursorInfo();
		::Dynamic saveSystemCursorInfo_dyn();

		void restoreSystemCursor();
		::Dynamic restoreSystemCursor_dyn();

		void setActiveTool( ::flixel::_hx_system::debug::interaction::tools::Tool value);
		::Dynamic setActiveTool_dyn();

		void setSystemCursorVisibility(Bool status);
		::Dynamic setSystemCursorVisibility_dyn();

		void setToolsCursorVisibility(Bool status);
		::Dynamic setToolsCursorVisibility_dyn();

		void clearSelection();
		::Dynamic clearSelection_dyn();

		Bool keyPressed(Int key);
		::Dynamic keyPressed_dyn();

		Bool keyJustPressed(Int key);
		::Dynamic keyJustPressed_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction

#endif /* INCLUDED_flixel_system_debug_interaction_Interaction */ 