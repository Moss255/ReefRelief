#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicConsole
#include <flixel/system/debug/GraphicConsole.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionHandler
#include <flixel/system/debug/completion/CompletionHandler.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionList
#include <flixel/system/debug/completion/CompletionList.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleCommands
#include <flixel/system/debug/console/ConsoleCommands.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleHistory
#include <flixel/system/debug/console/ConsoleHistory.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace console{

Void Console_obj::__construct(::flixel::_system::debug::completion::CompletionList completionList)
{
HX_STACK_FRAME("flixel.system.debug.console.Console","new",0x900a6c8a,"flixel.system.debug.console.Console.new","flixel/system/debug/console/Console.hx",30,0x367943c8)
HX_STACK_THIS(this)
HX_STACK_ARG(completionList,"completionList")
{
	HX_STACK_LINE(64)
	this->stageMouseDown = false;
	HX_STACK_LINE(63)
	this->inputMouseDown = false;
	HX_STACK_LINE(55)
	this->objectStack = Array_obj< ::Dynamic >::__new();
	struct _Function_1_1{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/console/Console.hx",50,0x367943c8)
			{
				HX_STACK_LINE(50)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(50)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(50)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(50)
	this->registeredHelp = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/console/Console.hx",46,0x367943c8)
			{
				HX_STACK_LINE(46)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(46)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(46)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(46)
	this->registeredFunctions = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/console/Console.hx",42,0x367943c8)
			{
				HX_STACK_LINE(42)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(42)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(42)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(42)
	this->registeredObjects = _Function_1_3::Block();
	HX_STACK_LINE(76)
	::flixel::_system::debug::GraphicConsole tmp = ::flixel::_system::debug::GraphicConsole_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	super::__construct(HX_HCSTRING("Console","\x37","\x13","\x27","\xe6"),tmp,(int)0,(int)0,false,null(),null());
	HX_STACK_LINE(77)
	this->completionList = completionList;
	HX_STACK_LINE(78)
	Float tmp1 = this->get_y();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	Float tmp2 = (tmp1 + (int)15);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	completionList->__Field(HX_HCSTRING("setY","\x77","\x92","\x50","\x4c"), hx::paccDynamic )(tmp2);
	HX_STACK_LINE(84)
	::flixel::_system::debug::console::ConsoleHistory tmp3 = ::flixel::_system::debug::console::ConsoleHistory_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	this->history = tmp3;
	HX_STACK_LINE(85)
	this->createInputTextField();
	HX_STACK_LINE(86)
	::flixel::_system::debug::completion::CompletionList tmp4 = completionList;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	::openfl::_legacy::text::TextField tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	::flixel::_system::debug::completion::CompletionHandler_obj::__new(tmp4,tmp5);
	HX_STACK_LINE(87)
	this->registerEventListeners();
	HX_STACK_LINE(91)
	::flixel::_system::debug::console::ConsoleCommands_obj::__new(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Console_obj::~Console_obj() { }

Dynamic Console_obj::__CreateEmpty() { return  new Console_obj; }
hx::ObjectPtr< Console_obj > Console_obj::__new(::flixel::_system::debug::completion::CompletionList completionList)
{  hx::ObjectPtr< Console_obj > _result_ = new Console_obj();
	_result_->__construct(completionList);
	return _result_;}

Dynamic Console_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Console_obj > _result_ = new Console_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Console_obj::createInputTextField( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","createInputTextField",0x91c24015,"flixel.system.debug.console.Console.createInputTextField","flixel/system/debug/console/Console.hx",96,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		::openfl::_legacy::text::TextField tmp = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		this->input = tmp;
		HX_STACK_LINE(99)
		::openfl::_legacy::text::TextField tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		tmp1->set_embedFonts(true);
		HX_STACK_LINE(100)
		::openfl::_legacy::text::TextField tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		::String tmp3 = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		::openfl::_legacy::text::TextFormat tmp4 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp3,(int)12,(int)16777215,false,false,false,null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		tmp2->set_defaultTextFormat(tmp4);
		HX_STACK_LINE(102)
		::openfl::_legacy::text::TextField tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		tmp5->set_text(HX_HCSTRING("Using the console requires hscript - please run 'haxelib install hscript'.","\x1a","\x91","\xca","\x5f"));
		HX_STACK_LINE(103)
		::openfl::_legacy::text::TextField tmp6 = this->input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		int tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(103)
		int tmp8 = (tmp7 - (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(103)
		tmp6->set_width(tmp8);
		HX_STACK_LINE(104)
		::openfl::_legacy::text::TextField tmp9 = this->input;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(104)
		int tmp10 = this->_height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(104)
		int tmp11 = (tmp10 - (int)15);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(104)
		tmp9->set_height(tmp11);
		HX_STACK_LINE(105)
		::openfl::_legacy::text::TextField tmp12 = this->input;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(105)
		tmp12->set_x((int)2);
		HX_STACK_LINE(106)
		::openfl::_legacy::text::TextField tmp13 = this->input;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(106)
		tmp13->set_y((int)15);
		HX_STACK_LINE(107)
		::openfl::_legacy::text::TextField tmp14 = this->input;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(107)
		this->addChild(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,createInputTextField,(void))

Void Console_obj::registerEventListeners( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","registerEventListeners",0x714c11de,"flixel.system.debug.console.Console.registerEventListeners","flixel/system/debug/console/Console.hx",111,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		::flixel::_system::debug::console::Console _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		::openfl::_legacy::text::TextField tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::flixel::_system::debug::console::Console,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/console/Console.hx",122,0x367943c8)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(122)
				_g->__FieldRef(HX_HCSTRING("inputMouseDown","\xbd","\xfb","\x87","\x2d")) = true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(120)
		tmp->addEventListener(tmp1, Dynamic(new _Function_1_1(_g)),null(),null(),null());
		HX_STACK_LINE(124)
		::openfl::_legacy::display::MovieClip tmp2 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		::openfl::_legacy::display::Stage tmp3 = tmp2->get_stage();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::flixel::_system::debug::console::Console,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","flixel/system/debug/console/Console.hx",126,0x367943c8)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(126)
				_g->__FieldRef(HX_HCSTRING("stageMouseDown","\x89","\xde","\x11","\x40")) = true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(124)
		tmp3->addEventListener(tmp4, Dynamic(new _Function_1_2(_g)),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,registerEventListeners,(void))

Void Console_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","update",0x661b601f,"flixel.system.debug.console.Console.update","flixel/system/debug/console/Console.hx",134,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		this->super::update();
		HX_STACK_LINE(137)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		::openfl::_legacy::display::InteractiveObject tmp2 = tmp1->get_focus();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		::openfl::_legacy::text::TextField tmp3 = this->input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(137)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(137)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(137)
		if ((tmp5)){
			HX_STACK_LINE(137)
			tmp6 = this->stageMouseDown;
		}
		else{
			HX_STACK_LINE(137)
			tmp6 = false;
		}
		HX_STACK_LINE(137)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(137)
		if ((tmp6)){
			HX_STACK_LINE(137)
			bool tmp8 = this->inputMouseDown;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(137)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(137)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(137)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(137)
			tmp7 = false;
		}
		HX_STACK_LINE(137)
		if ((tmp7)){
			HX_STACK_LINE(139)
			::openfl::_legacy::display::MovieClip tmp8 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(139)
			::openfl::_legacy::display::Stage tmp9 = tmp8->get_stage();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(139)
			tmp9->set_focus(null());
			HX_STACK_LINE(141)
			::flixel::FlxGame tmp10 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(141)
			tmp10->onFocus(null());
		}
		HX_STACK_LINE(144)
		this->stageMouseDown = false;
		HX_STACK_LINE(145)
		this->inputMouseDown = false;
	}
return null();
}


Void Console_obj::onFocus( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","onFocus",0xeecff763,"flixel.system.debug.console.Console.onFocus","flixel/system/debug/console/Console.hx",151,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(159)
		::flixel::_system::frontEnds::ConsoleFrontEnd tmp = ::flixel::FlxG_obj::console;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		bool tmp1 = tmp->__Field(HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		if ((tmp1)){
			HX_STACK_LINE(160)
			::flixel::_system::frontEnds::VCRFrontEnd tmp2 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			tmp2->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
		}
		HX_STACK_LINE(164)
		::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		tmp2->enabled = false;
		HX_STACK_LINE(167)
		::openfl::_legacy::text::TextField tmp3 = this->input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		::String tmp4 = tmp3->get_text();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(167)
		bool tmp5 = (tmp4 == HX_HCSTRING("Using the console requires hscript - please run 'haxelib install hscript'.","\x1a","\x91","\xca","\x5f"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(167)
		if ((tmp5)){
			HX_STACK_LINE(168)
			::openfl::_legacy::text::TextField tmp6 = this->input;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			tmp6->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocus,(void))

Void Console_obj::onFocusLost( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","onFocusLost",0x2ed3bae7,"flixel.system.debug.console.Console.onFocusLost","flixel/system/debug/console/Console.hx",174,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(182)
		::flixel::_system::frontEnds::ConsoleFrontEnd tmp = ::flixel::FlxG_obj::console;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		bool tmp1 = tmp->__Field(HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		if ((tmp1)){
			HX_STACK_LINE(183)
			::flixel::_system::frontEnds::VCRFrontEnd tmp2 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			tmp2->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic )();
		}
		HX_STACK_LINE(187)
		::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		tmp2->enabled = true;
		HX_STACK_LINE(190)
		::openfl::_legacy::text::TextField tmp3 = this->input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		::String tmp4 = tmp3->get_text();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		bool tmp5 = (tmp4 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		if ((tmp5)){
			HX_STACK_LINE(191)
			::openfl::_legacy::text::TextField tmp6 = this->input;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(191)
			tmp6->set_text(HX_HCSTRING("Using the console requires hscript - please run 'haxelib install hscript'.","\x1a","\x91","\xca","\x5f"));
		}
		HX_STACK_LINE(194)
		::flixel::_system::debug::completion::CompletionList tmp6 = this->completionList;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(194)
		tmp6->__Field(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"), hx::paccDynamic )();
		HX_STACK_LINE(195)
		::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(195)
		tmp7->debugger->__Field(HX_HCSTRING("onMouseFocusLost","\x76","\x6c","\x77","\xbd"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocusLost,(void))

Void Console_obj::registerFunction( ::String functionAlias,Dynamic func,::String helpText){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","registerFunction",0xf8dd3a31,"flixel.system.debug.console.Console.registerFunction","flixel/system/debug/console/Console.hx",282,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(functionAlias,"functionAlias")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(helpText,"helpText")
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			Dynamic value = func;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(283)
			::haxe::ds::StringMap tmp = this->registeredFunctions;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(283)
			::String tmp1 = functionAlias;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(283)
			Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(283)
			tmp->set(tmp1,tmp2);
		}
		HX_STACK_LINE(288)
		bool tmp = (helpText != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		if ((tmp)){
			HX_STACK_LINE(289)
			::haxe::ds::StringMap tmp1 = this->registeredHelp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(289)
			::String tmp2 = functionAlias;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			::String tmp3 = helpText;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			tmp1->set(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Console_obj,registerFunction,(void))

Void Console_obj::registerObject( ::String objectAlias,Dynamic anyObject){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","registerObject",0x0bbfe598,"flixel.system.debug.console.Console.registerObject","flixel/system/debug/console/Console.hx",300,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(objectAlias,"objectAlias")
		HX_STACK_ARG(anyObject,"anyObject")
		HX_STACK_LINE(300)
		Dynamic value = anyObject;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(300)
		::haxe::ds::StringMap tmp = this->registeredObjects;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		::String tmp1 = objectAlias;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(300)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,registerObject,(void))

Void Console_obj::registerClass( ::hx::Class cl){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","registerClass",0x7ad06f7f,"flixel.system.debug.console.Console.registerClass","flixel/system/debug/console/Console.hx",313,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cl,"cl")
		HX_STACK_LINE(313)
		::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
		HX_STACK_LINE(313)
		{
			HX_STACK_LINE(313)
			Dynamic value = cl;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(313)
			::haxe::ds::StringMap tmp2 = this->registeredObjects;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(313)
			::String tmp3 = objectAlias;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(313)
			Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			tmp2->set(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,registerClass,(void))

Void Console_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","destroy",0x788f2624,"flixel.system.debug.console.Console.destroy","flixel/system/debug/console/Console.hx",317,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(318)
		this->super::destroy();
		HX_STACK_LINE(326)
		::openfl::_legacy::text::TextField tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(326)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(326)
		if ((tmp1)){
			HX_STACK_LINE(328)
			::openfl::_legacy::text::TextField tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(328)
			this->removeChild(tmp2);
			HX_STACK_LINE(329)
			this->input = null();
		}
		HX_STACK_LINE(332)
		this->registeredObjects = null();
		HX_STACK_LINE(333)
		this->registeredFunctions = null();
		HX_STACK_LINE(334)
		this->registeredHelp = null();
		HX_STACK_LINE(336)
		this->objectStack = null();
	}
return null();
}


Void Console_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.Console","updateSize",0x97e42880,"flixel.system.debug.console.Console.updateSize","flixel/system/debug/console/Console.hx",343,0x367943c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(344)
		this->super::updateSize();
		HX_STACK_LINE(346)
		::openfl::_legacy::text::TextField tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		int tmp1 = this->_width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		int tmp2 = (tmp1 - (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(346)
		tmp->set_width(tmp2);
		HX_STACK_LINE(347)
		::openfl::_legacy::text::TextField tmp3 = this->input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(347)
		int tmp4 = this->_height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(347)
		int tmp5 = (tmp4 - (int)15);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(347)
		tmp3->set_height(tmp5);
	}
return null();
}


::String Console_obj::DEFAULT_TEXT;


Console_obj::Console_obj()
{
}

void Console_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Console);
	HX_MARK_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_MARK_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_MARK_MEMBER_NAME(registeredHelp,"registeredHelp");
	HX_MARK_MEMBER_NAME(objectStack,"objectStack");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(inputMouseDown,"inputMouseDown");
	HX_MARK_MEMBER_NAME(stageMouseDown,"stageMouseDown");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(completionList,"completionList");
	::flixel::_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Console_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_VISIT_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_VISIT_MEMBER_NAME(registeredHelp,"registeredHelp");
	HX_VISIT_MEMBER_NAME(objectStack,"objectStack");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(inputMouseDown,"inputMouseDown");
	HX_VISIT_MEMBER_NAME(stageMouseDown,"stageMouseDown");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(completionList,"completionList");
	::flixel::_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Console_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { return history; }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectStack") ) { return objectStack; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerClass") ) { return registerClass_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registeredHelp") ) { return registeredHelp; }
		if (HX_FIELD_EQ(inName,"inputMouseDown") ) { return inputMouseDown; }
		if (HX_FIELD_EQ(inName,"stageMouseDown") ) { return stageMouseDown; }
		if (HX_FIELD_EQ(inName,"completionList") ) { return completionList; }
		if (HX_FIELD_EQ(inName,"registerObject") ) { return registerObject_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFunction") ) { return registerFunction_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { return registeredObjects; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { return registeredFunctions; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createInputTextField") ) { return createInputTextField_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"registerEventListeners") ) { return registerEventListeners_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Console_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< ::flixel::_system::debug::console::ConsoleHistory >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectStack") ) { objectStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registeredHelp") ) { registeredHelp=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputMouseDown") ) { inputMouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageMouseDown") ) { stageMouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"completionList") ) { completionList=inValue.Cast< ::flixel::_system::debug::completion::CompletionList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { registeredObjects=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { registeredFunctions=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Console_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"));
	outFields->push(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"));
	outFields->push(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"));
	outFields->push(HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("inputMouseDown","\xbd","\xfb","\x87","\x2d"));
	outFields->push(HX_HCSTRING("stageMouseDown","\x89","\xde","\x11","\x40"));
	outFields->push(HX_HCSTRING("history","\x54","\x35","\x47","\x64"));
	outFields->push(HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Console_obj,registeredObjects),HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Console_obj,registeredFunctions),HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Console_obj,registeredHelp),HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,objectStack),HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsBool,(int)offsetof(Console_obj,inputMouseDown),HX_HCSTRING("inputMouseDown","\xbd","\xfb","\x87","\x2d")},
	{hx::fsBool,(int)offsetof(Console_obj,stageMouseDown),HX_HCSTRING("stageMouseDown","\x89","\xde","\x11","\x40")},
	{hx::fsObject /*::flixel::_system::debug::console::ConsoleHistory*/ ,(int)offsetof(Console_obj,history),HX_HCSTRING("history","\x54","\x35","\x47","\x64")},
	{hx::fsObject /*::flixel::_system::debug::completion::CompletionList*/ ,(int)offsetof(Console_obj,completionList),HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Console_obj::DEFAULT_TEXT,HX_HCSTRING("DEFAULT_TEXT","\x4b","\x9c","\x59","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"),
	HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"),
	HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"),
	HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("inputMouseDown","\xbd","\xfb","\x87","\x2d"),
	HX_HCSTRING("stageMouseDown","\x89","\xde","\x11","\x40"),
	HX_HCSTRING("history","\x54","\x35","\x47","\x64"),
	HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23"),
	HX_HCSTRING("createInputTextField","\x7f","\x2b","\x43","\x44"),
	HX_HCSTRING("registerEventListeners","\xc8","\x2b","\x6e","\x76"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("registerFunction","\x9b","\xa8","\x15","\x13"),
	HX_HCSTRING("registerObject","\x82","\x05","\x81","\xdb"),
	HX_HCSTRING("registerClass","\xd5","\x3a","\xc1","\x3d"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Console_obj::DEFAULT_TEXT,"DEFAULT_TEXT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Console_obj::DEFAULT_TEXT,"DEFAULT_TEXT");
};

#endif

hx::Class Console_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFAULT_TEXT","\x4b","\x9c","\x59","\x2d"),
	::String(null()) };

void Console_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.console.Console","\x98","\x1f","\xeb","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Console_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Console_obj::__boot()
{
	DEFAULT_TEXT= HX_HCSTRING("Using the console requires hscript - please run 'haxelib install hscript'.","\x1a","\x91","\xca","\x5f");
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
