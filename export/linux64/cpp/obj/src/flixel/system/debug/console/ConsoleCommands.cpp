#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
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
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace console{

Void ConsoleCommands_obj::__construct(::flixel::_system::debug::console::Console console)
{
HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","new",0xbec7c572,"flixel.system.debug.console.ConsoleCommands.new","flixel/system/debug/console/ConsoleCommands.hx",13,0x8e0df1e0)
HX_STACK_THIS(this)
HX_STACK_ARG(console,"console")
{
	HX_STACK_LINE(19)
	this->_watchingMouse = false;
	HX_STACK_LINE(23)
	this->_console = console;
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			Dynamic tmp = this->help_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(25)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(25)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(25)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"),tmp1);
		}
		HX_STACK_LINE(25)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		if ((tmp)){
			HX_STACK_LINE(25)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"),HX_HCSTRING("Displays the help text of a registered object or function. See \"help\".","\x74","\x09","\xe6","\x6d"));
		}
	}
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			Dynamic tmp = this->close_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(26)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(26)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),tmp1);
		}
		HX_STACK_LINE(26)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		if ((tmp)){
			HX_STACK_LINE(26)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),HX_HCSTRING("Closes the debugger overlay.","\x09","\xdd","\x14","\xda"));
		}
	}
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			::flixel::_system::debug::console::Console tmp = this->_console;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(28)
			Dynamic tmp1 = tmp->__Field(HX_HCSTRING("history","\x54","\x35","\x47","\x64"), hx::paccDynamic )->__Field(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			Dynamic value = tmp1;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(28)
			Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("clearHistory","\x47","\xe7","\xc5","\x3f"),tmp2);
		}
		HX_STACK_LINE(28)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		if ((tmp)){
			HX_STACK_LINE(28)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("clearHistory","\x47","\xe7","\xc5","\x3f"),HX_HCSTRING("Closes the debugger overlay.","\x09","\xdd","\x14","\xda"));
		}
	}
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::flixel::_system::frontEnds::LogFrontEnd tmp = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(29)
			Dynamic value = tmp->__Field(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(29)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(29)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("clearLog","\xf7","\x50","\x0e","\x31"),tmp1);
		}
		HX_STACK_LINE(29)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		if ((tmp)){
			HX_STACK_LINE(29)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("clearLog","\xf7","\x50","\x0e","\x31"),HX_HCSTRING("Clears the command history.","\x58","\xc6","\xe5","\x46"));
		}
	}
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			Dynamic tmp = this->fields_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(31)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(31)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(31)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),tmp1);
		}
		HX_STACK_LINE(31)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		if ((tmp)){
			HX_STACK_LINE(31)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),HX_HCSTRING("Lists the fields of a class or instance","\x6f","\xdd","\x83","\x14"));
		}
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			Dynamic tmp = this->listObjects_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(33)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(33)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("listObjects","\x16","\xdc","\x4e","\x39"),tmp1);
		}
		HX_STACK_LINE(33)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(33)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("listObjects","\x16","\xdc","\x4e","\x39"),HX_HCSTRING("Lists the aliases of all registered objects.","\x6c","\x4a","\x89","\xe2"));
		}
	}
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			Dynamic tmp = this->listFunctions_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(34)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(34)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("listFunctions","\x1d","\x52","\x37","\xc0"),tmp1);
		}
		HX_STACK_LINE(34)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		if ((tmp)){
			HX_STACK_LINE(34)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("listFunctions","\x1d","\x52","\x37","\xc0"),HX_HCSTRING("Lists the aliases of all registered functions.","\x85","\x07","\x62","\x7a"));
		}
	}
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			Dynamic tmp = this->step_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(36)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(36)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),tmp1);
		}
		HX_STACK_LINE(36)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		if ((tmp)){
			HX_STACK_LINE(36)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),HX_HCSTRING("Steps the game forward one frame if currently paused. No effect if unpaused.","\xe3","\xb2","\x6b","\x29"));
		}
	}
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			Dynamic tmp = this->pause_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(37)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(37)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(37)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),tmp1);
		}
		HX_STACK_LINE(37)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		if ((tmp)){
			HX_STACK_LINE(37)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),HX_HCSTRING("Toggles the game between paused and unpaused.","\x42","\x15","\xb4","\xfb"));
		}
	}
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			::flixel::_system::frontEnds::BitmapLogFrontEnd tmp = ::flixel::FlxG_obj::bitmapLog;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(39)
			Dynamic value = tmp->__Field(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(39)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(39)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("clearBitmapLog","\x88","\xb0","\xe0","\x84"),tmp1);
		}
		HX_STACK_LINE(39)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		if ((tmp)){
			HX_STACK_LINE(39)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("clearBitmapLog","\x88","\xb0","\xe0","\x84"),HX_HCSTRING("Clears the bitmapLog window.","\x4a","\x2e","\xfa","\xed"));
		}
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::flixel::_system::frontEnds::BitmapLogFrontEnd tmp = ::flixel::FlxG_obj::bitmapLog;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(40)
			Dynamic value = tmp->__Field(HX_HCSTRING("viewCache","\x9d","\x09","\xa9","\x81"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(40)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("viewCache","\x9d","\x09","\xa9","\x81"),tmp1);
		}
		HX_STACK_LINE(40)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		if ((tmp)){
			HX_STACK_LINE(40)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("viewCache","\x9d","\x09","\xa9","\x81"),HX_HCSTRING("Adds the cache to the bitmapLog window.","\x9a","\x4b","\xf4","\xec"));
		}
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			Dynamic tmp = this->create_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(42)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(42)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),tmp1);
		}
		HX_STACK_LINE(42)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		if ((tmp)){
			HX_STACK_LINE(42)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),HX_HCSTRING("Creates a new FlxObject and registers it - by default at the mouse position. \"create(ObjClass:Class<T>, PlaceAtMouse:Bool, ExtraParams:Array<Dynamic>)\" Ex: \"create(FlxSprite, false, [100, 100])\"","\xe1","\x71","\x2c","\x4a"));
		}
	}
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::flixel::_system::frontEnds::WatchFrontEnd tmp = ::flixel::FlxG_obj::watch;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(44)
			Dynamic value = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(44)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"),tmp1);
		}
		HX_STACK_LINE(44)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		if ((tmp)){
			HX_STACK_LINE(44)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"),HX_HCSTRING("Adds the specified field of an object to the watch window.","\x3d","\x3d","\xb8","\x00"));
		}
	}
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::flixel::_system::frontEnds::WatchFrontEnd tmp = ::flixel::FlxG_obj::watch;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(45)
			Dynamic value = tmp->__Field(HX_HCSTRING("addExpression","\x19","\x5b","\xe8","\x98"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(45)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("watchExpression","\xc7","\xc4","\x8f","\x8c"),tmp1);
		}
		HX_STACK_LINE(45)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		if ((tmp)){
			HX_STACK_LINE(45)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("watchExpression","\xc7","\xc4","\x8f","\x8c"),HX_HCSTRING("Adds the specified expression to the watch window. Be sure any objects, functions, and classes used are registered!","\x28","\x72","\x30","\xfe"));
		}
	}
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			Dynamic tmp = this->watchMouse_dyn();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(46)
			Dynamic value = tmp;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(46)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("watchMouse","\x56","\x31","\x6f","\x84"),tmp1);
		}
		HX_STACK_LINE(46)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		if ((tmp)){
			HX_STACK_LINE(46)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("watchMouse","\x56","\x31","\x6f","\x84"),HX_HCSTRING("Adds the mouse coordinates to the watch window.","\x16","\x85","\x0c","\x85"));
		}
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(47)
			Dynamic value = tmp->__Field(HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(47)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(47)
			console->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"),tmp1);
		}
		HX_STACK_LINE(47)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		if ((tmp)){
			HX_STACK_LINE(47)
			console->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"),HX_HCSTRING("Adds a tracker window for the specified object or class.","\xa3","\xa1","\xe4","\x47"));
		}
	}
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::hx::Class cl = hx::ClassOf< ::Math >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(50)
			::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(50)
			::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(50)
				::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(50)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(50)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
			}
		}
	}
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::hx::Class cl = hx::ClassOf< ::Reflect >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(51)
				::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(51)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(51)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
			}
		}
	}
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::hx::Class cl = hx::ClassOf< ::Std >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(52)
			::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(52)
			::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(52)
				::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
			}
		}
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::hx::Class cl = hx::ClassOf< ::StringTools >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(53)
			::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(53)
				::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(53)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(53)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
			}
		}
	}
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		::hx::Class cl = hx::ClassOf< ::Sys >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(55)
			::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(55)
			::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(55)
				::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(55)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(55)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
			}
		}
	}
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::hx::Class cl = hx::ClassOf< ::Type >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(57)
			::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(57)
			::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(57)
				::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(57)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
			}
		}
	}
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::hx::Class cl = hx::ClassOf< ::flixel::FlxG >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(59)
			::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(59)
			::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(59)
			{
				HX_STACK_LINE(59)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(59)
				::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(59)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(59)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
			}
		}
	}
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::hx::Class cl = hx::ClassOf< ::flixel::FlxObject >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(60)
			::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(60)
			::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(60)
				::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(60)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(60)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
			}
		}
	}
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::hx::Class cl = hx::ClassOf< ::flixel::FlxSprite >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(61)
			::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(61)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(61)
				::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(61)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(61)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
			}
		}
	}
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::hx::Class cl = hx::ClassOf< ::flixel::math::FlxMath >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(62)
			::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(62)
			::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(62)
				::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(62)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(62)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
			}
		}
	}
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::hx::Class cl = hx::ClassOf< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(63)
			::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(63)
			::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(63)
				::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(63)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
			}
		}
	}
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		::hx::Class cl = hx::ClassOf< ::flixel::FlxCamera >();		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(64)
			::String tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(64)
			::String objectAlias = tmp1;		HX_STACK_VAR(objectAlias,"objectAlias");
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				Dynamic value = cl;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(64)
				::String tmp2 = objectAlias;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(64)
				Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(64)
				console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp2,tmp3);
			}
		}
	}
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		Dynamic value = hx::ClassOf< ::flixel::_system::debug::FlxDebuggerLayout >();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(66)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("FlxDebuggerLayout","\x9d","\xd1","\xb4","\xd8"),tmp);
	}
}
;
	return null();
}

//ConsoleCommands_obj::~ConsoleCommands_obj() { }

Dynamic ConsoleCommands_obj::__CreateEmpty() { return  new ConsoleCommands_obj; }
hx::ObjectPtr< ConsoleCommands_obj > ConsoleCommands_obj::__new(::flixel::_system::debug::console::Console console)
{  hx::ObjectPtr< ConsoleCommands_obj > _result_ = new ConsoleCommands_obj();
	_result_->__construct(console);
	return _result_;}

Dynamic ConsoleCommands_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleCommands_obj > _result_ = new ConsoleCommands_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String ConsoleCommands_obj::help( ::String Alias){
	HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","help",0x2c0dad6f,"flixel.system.debug.console.ConsoleCommands.help","flixel/system/debug/console/ConsoleCommands.hx",70,0x8e0df1e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alias,"Alias")
	HX_STACK_LINE(71)
	bool tmp = (Alias == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	if ((tmp1)){
		HX_STACK_LINE(71)
		tmp2 = (Alias.length == (int)0);
	}
	else{
		HX_STACK_LINE(71)
		tmp2 = true;
	}
	HX_STACK_LINE(71)
	if ((tmp2)){
		HX_STACK_LINE(73)
		::String output = HX_HCSTRING("System classes and commands: ","\x42","\x07","\x6a","\xe4");		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(74)
		::flixel::_system::debug::console::Console tmp3 = this->_console;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		Dynamic tmp4 = tmp3->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp4);  __it->hasNext(); ){
			::String obj = __it->next();
			{
				HX_STACK_LINE(76)
				::String tmp5 = (obj + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				hx::AddEq(output,tmp5);
			}
;
		}
		HX_STACK_LINE(78)
		::flixel::_system::debug::console::Console tmp5 = this->_console;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp6);  __it->hasNext(); ){
			::String func = __it->next();
			{
				HX_STACK_LINE(80)
				::String tmp7 = (func + HX_HCSTRING("(), ","\xb5","\xcb","\x8f","\x1a"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(80)
				hx::AddEq(output,tmp7);
			}
;
		}
		HX_STACK_LINE(82)
		::String tmp7 = (output + HX_HCSTRING("\nTry 'help(\"command\")' for more information about a specific command.","\xcf","\x42","\x2c","\x8a"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		return tmp7;
	}
	else{
		HX_STACK_LINE(86)
		::flixel::_system::debug::console::Console tmp3 = this->_console;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		::String tmp4 = Alias;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		bool tmp5 = tmp3->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		if ((tmp5)){
			HX_STACK_LINE(88)
			::String tmp6 = Alias;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			::flixel::_system::debug::console::Console tmp7 = this->_console;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			::String tmp8 = Alias;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(88)
			bool tmp9 = tmp7->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(88)
			::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(88)
			if ((tmp9)){
				HX_STACK_LINE(88)
				tmp10 = HX_HCSTRING("()","\x01","\x23","\x00","\x00");
			}
			else{
				HX_STACK_LINE(88)
				tmp10 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(88)
			::String tmp11 = (tmp6 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(88)
			::String tmp12 = (tmp11 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(88)
			::flixel::_system::debug::console::Console tmp13 = this->_console;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(88)
			::String tmp14 = Alias;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(88)
			::String tmp15 = tmp13->__Field(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(88)
			::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(88)
			::String tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(88)
			return tmp17;
		}
		else{
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				::flixel::_system::frontEnds::LogFrontEnd tmp6 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(93)
				::String tmp7 = (HX_HCSTRING("Help: The command '","\x5c","\xdd","\x57","\x6e") + Alias);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(93)
				::String tmp8 = (tmp7 + HX_HCSTRING("' does not have help text.","\x1f","\x16","\x65","\x26"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(93)
				::flixel::_system::debug::log::LogStyle tmp9 = ::flixel::_system::debug::log::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(93)
				tmp6->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp8,tmp9,true);
			}
			HX_STACK_LINE(94)
			return null();
		}
	}
	HX_STACK_LINE(71)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,help,return )

Void ConsoleCommands_obj::close( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","close",0x838bf54a,"flixel.system.debug.console.ConsoleCommands.close","flixel/system/debug/console/ConsoleCommands.hx",100,0x8e0df1e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		tmp->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,close,(void))

Void ConsoleCommands_obj::create( ::hx::Class ObjClass,hx::Null< bool >  __o_MousePos,cpp::ArrayBase Params){
bool MousePos = __o_MousePos.Default(true);
	HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","create",0x04a8692a,"flixel.system.debug.console.ConsoleCommands.create","flixel/system/debug/console/ConsoleCommands.hx",105,0x8e0df1e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjClass,"ObjClass")
	HX_STACK_ARG(MousePos,"MousePos")
	HX_STACK_ARG(Params,"Params")
{
		HX_STACK_LINE(106)
		bool tmp = (Params == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		if ((tmp)){
			HX_STACK_LINE(107)
			Params = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(109)
		::hx::Class tmp1 = ObjClass;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		Dynamic tmp2 = ::Type_obj::createInstance(tmp1,Params);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		::flixel::FlxObject obj = tmp2;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(111)
		bool tmp3 = (obj == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		if ((tmp3)){
			HX_STACK_LINE(111)
			return null();
		}
		HX_STACK_LINE(113)
		bool tmp4 = MousePos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		if ((tmp4)){
			HX_STACK_LINE(115)
			::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			Float tmp6 = tmp5->get_mouseX();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			obj->set_x(tmp6);
			HX_STACK_LINE(116)
			::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			Float tmp8 = tmp7->get_mouseY();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			obj->set_y(tmp8);
		}
		HX_STACK_LINE(119)
		::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		::flixel::FlxObject tmp6 = obj;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		tmp5->_state->add(tmp6);
		HX_STACK_LINE(121)
		bool tmp7 = (Params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(121)
		if ((tmp7)){
			HX_STACK_LINE(122)
			::flixel::_system::frontEnds::LogFrontEnd tmp8 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(122)
			::hx::Class tmp9 = ObjClass;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(122)
			::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(122)
			::String tmp11 = (HX_HCSTRING("create: New ","\x82","\xf9","\x21","\xbf") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(122)
			::String tmp12 = (tmp11 + HX_HCSTRING(" created at X = ","\x00","\xf4","\xdf","\x3b"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(122)
			Float tmp13 = obj->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(122)
			::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(122)
			::String tmp15 = (tmp14 + HX_HCSTRING(" Y = ","\xca","\x0a","\xbf","\xa7"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(122)
			Float tmp16 = obj->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(122)
			::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(122)
			::flixel::_system::debug::log::LogStyle tmp18 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(122)
			tmp8->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp17),tmp18,null());
		}
		else{
			HX_STACK_LINE(124)
			::flixel::_system::frontEnds::LogFrontEnd tmp8 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			::hx::Class tmp9 = ObjClass;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(124)
			::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(124)
			::String tmp11 = (HX_HCSTRING("create: New ","\x82","\xf9","\x21","\xbf") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(124)
			::String tmp12 = (tmp11 + HX_HCSTRING(" created at X = ","\x00","\xf4","\xdf","\x3b"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(124)
			Float tmp13 = obj->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(124)
			::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(124)
			::String tmp15 = (tmp14 + HX_HCSTRING(" Y = ","\xca","\x0a","\xbf","\xa7"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(124)
			Float tmp16 = obj->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(124)
			::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(124)
			::String tmp18 = (tmp17 + HX_HCSTRING(" with params ","\x20","\xc2","\x85","\xfb"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(124)
			::String tmp19 = ::Std_obj::string(Params);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(124)
			::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(124)
			::flixel::_system::debug::log::LogStyle tmp21 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(124)
			tmp8->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp20),tmp21,null());
		}
		HX_STACK_LINE(126)
		::flixel::_system::debug::console::Console tmp8 = this->_console;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(126)
		::flixel::FlxObject tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(126)
		tmp8->__Field(HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
		HX_STACK_LINE(128)
		::flixel::_system::debug::console::Console tmp10 = this->_console;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(128)
		int tmp11 = tmp10->__Field(HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(128)
		::String tmp12 = (HX_HCSTRING("Object_","\xa0","\x90","\xa0","\x4f") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(128)
		::String name = tmp12;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			Dynamic value = obj;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(129)
			::flixel::_system::debug::console::Console tmp13 = this->_console;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(129)
			::String tmp14 = name;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(129)
			Dynamic tmp15 = value;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(129)
			tmp13->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp14,tmp15);
		}
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			::flixel::_system::frontEnds::LogFrontEnd tmp13 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(131)
			::hx::Class tmp14 = ObjClass;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(131)
			::String tmp15 = ::Std_obj::string(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(131)
			::String tmp16 = (HX_HCSTRING("create: ","\xa2","\x50","\xf4","\x2b") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(131)
			::String tmp17 = (tmp16 + HX_HCSTRING(" registered as '","\xb7","\xf0","\xb7","\xdc"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(131)
			::String tmp18 = name;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(131)
			::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(131)
			::String tmp20 = (tmp19 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(131)
			::flixel::_system::debug::log::LogStyle tmp21 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(131)
			tmp13->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp20),tmp21,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleCommands_obj,create,(void))

::String ConsoleCommands_obj::fields( Dynamic Object){
	HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","fields",0x092790a7,"flixel.system.debug.console.ConsoleCommands.fields","flixel/system/debug/console/ConsoleCommands.hx",135,0x8e0df1e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(136)
	Dynamic tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	::String tmp2 = (HX_HCSTRING("Fields of ","\x22","\x2a","\x96","\x7d") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	::String tmp3 = (tmp2 + HX_HCSTRING(":\n","\x90","\x32","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	Dynamic tmp4 = Object;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(137)
	::String tmp5 = ::flixel::_system::debug::console::ConsoleUtil_obj::getFields(tmp4)->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(137)
	::String tmp6 = ::StringTools_obj::trim(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(136)
	::String tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(136)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,fields,return )

Void ConsoleCommands_obj::listObjects( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","listObjects",0x01393328,"flixel.system.debug.console.ConsoleCommands.listObjects","flixel/system/debug/console/ConsoleCommands.hx",142,0x8e0df1e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		::flixel::_system::debug::console::Console tmp = this->_console;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		::haxe::ds::StringMap tmp1 = tmp->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		::String tmp2 = ::flixel::util::FlxStringUtil_obj::formatStringMap(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		::String tmp3 = (HX_HCSTRING("Objects registered: \n","\xf6","\xad","\x0c","\xd4") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		Dynamic Text = tmp3;		HX_STACK_VAR(Text,"Text");
		HX_STACK_LINE(142)
		::flixel::_system::frontEnds::LogFrontEnd tmp4 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		::flixel::_system::debug::log::LogStyle tmp5 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(142)
		tmp4->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(Text),tmp5,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listObjects,(void))

Void ConsoleCommands_obj::listFunctions( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","listFunctions",0x18b311af,"flixel.system.debug.console.ConsoleCommands.listFunctions","flixel/system/debug/console/ConsoleCommands.hx",147,0x8e0df1e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(147)
		::flixel::_system::debug::console::Console tmp = this->_console;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		::haxe::ds::StringMap tmp1 = tmp->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		::String tmp2 = ::flixel::util::FlxStringUtil_obj::formatStringMap(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		::String tmp3 = (HX_HCSTRING("Functions registered: \n","\xbd","\x05","\x3d","\x78") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		Dynamic Text = tmp3;		HX_STACK_VAR(Text,"Text");
		HX_STACK_LINE(147)
		::flixel::_system::frontEnds::LogFrontEnd tmp4 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		::flixel::_system::debug::log::LogStyle tmp5 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		tmp4->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(Text),tmp5,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listFunctions,(void))

Void ConsoleCommands_obj::watchMouse( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","watchMouse",0x171fe284,"flixel.system.debug.console.ConsoleCommands.watchMouse","flixel/system/debug/console/ConsoleCommands.hx",151,0x8e0df1e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		bool tmp = this->_watchingMouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		if ((tmp1)){
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(154)
				::flixel::_system::debug::watch::Watch tmp3 = tmp2->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(154)
				::flixel::_system::debug::watch::WatchEntryData tmp4 = ::flixel::_system::debug::watch::WatchEntryData_obj::FIELD(hx::ClassOf< ::flixel::FlxG >(),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(154)
				tmp3->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(HX_HCSTRING("Mouse Position","\x44","\x8e","\x3a","\x9d"),tmp4);
			}
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(155)
				::flixel::_system::debug::log::LogStyle tmp3 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(155)
				tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("watchMouse: Mouse position added to watch window","\x86","\x9c","\xf8","\x24")),tmp3,null());
			}
		}
		else{
			HX_STACK_LINE(159)
			{
				HX_STACK_LINE(159)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(159)
				::flixel::_system::debug::watch::Watch tmp3 = tmp2->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(159)
				::flixel::_system::debug::watch::WatchEntryData tmp4 = ::flixel::_system::debug::watch::WatchEntryData_obj::FIELD(hx::ClassOf< ::flixel::FlxG >(),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(159)
				tmp3->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(null(),tmp4);
			}
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(160)
				::flixel::_system::debug::log::LogStyle tmp3 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(160)
				tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("watchMouse: Mouse position removed from watch window","\x17","\xfe","\x23","\x1d")),tmp3,null());
			}
		}
		HX_STACK_LINE(163)
		bool tmp2 = this->_watchingMouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		this->_watchingMouse = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,watchMouse,(void))

Void ConsoleCommands_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","pause",0xf880b488,"flixel.system.debug.console.ConsoleCommands.pause","flixel/system/debug/console/ConsoleCommands.hx",167,0x8e0df1e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		::flixel::_system::frontEnds::VCRFrontEnd tmp = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		bool tmp1 = tmp->__Field(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		if ((tmp1)){
			HX_STACK_LINE(170)
			::flixel::_system::frontEnds::VCRFrontEnd tmp2 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(170)
			tmp2->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic )();
			HX_STACK_LINE(171)
			{
				HX_STACK_LINE(171)
				::flixel::_system::frontEnds::LogFrontEnd tmp3 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(171)
				::flixel::_system::debug::log::LogStyle tmp4 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(171)
				tmp3->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("pause: Game unpaused","\xf9","\xe8","\xd5","\xeb")),tmp4,null());
			}
		}
		else{
			HX_STACK_LINE(175)
			::flixel::_system::frontEnds::VCRFrontEnd tmp2 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			tmp2->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				::flixel::_system::frontEnds::LogFrontEnd tmp3 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(176)
				::flixel::_system::debug::log::LogStyle tmp4 = ::flixel::_system::debug::log::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(176)
				tmp3->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("pause: Game paused","\x60","\xa9","\xdd","\x91")),tmp4,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,pause,(void))

Void ConsoleCommands_obj::step( ){
{
		HX_STACK_FRAME("flixel.system.debug.console.ConsoleCommands","step",0x335e61fa,"flixel.system.debug.console.ConsoleCommands.step","flixel/system/debug/console/ConsoleCommands.hx",181,0x8e0df1e0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(182)
		::flixel::_system::frontEnds::VCRFrontEnd tmp = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		bool tmp1 = tmp->__Field(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		if ((tmp1)){
			HX_STACK_LINE(183)
			::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			::flixel::_system::debug::VCR tmp3 = tmp2->debugger->__Field(HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			tmp3->__Field(HX_HCSTRING("onStep","\x0b","\xf0","\xe5","\xee"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,step,(void))


ConsoleCommands_obj::ConsoleCommands_obj()
{
}

void ConsoleCommands_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConsoleCommands);
	HX_MARK_MEMBER_NAME(_console,"_console");
	HX_MARK_MEMBER_NAME(_watchingMouse,"_watchingMouse");
	HX_MARK_END_CLASS();
}

void ConsoleCommands_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_console,"_console");
	HX_VISIT_MEMBER_NAME(_watchingMouse,"_watchingMouse");
}

Dynamic ConsoleCommands_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"help") ) { return help_dyn(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"fields") ) { return fields_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { return _console; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"watchMouse") ) { return watchMouse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listObjects") ) { return listObjects_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listFunctions") ) { return listFunctions_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { return _watchingMouse; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConsoleCommands_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast< ::flixel::_system::debug::console::Console >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { _watchingMouse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleCommands_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52"));
	outFields->push(HX_HCSTRING("_watchingMouse","\x73","\xf3","\x3a","\x2a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::debug::console::Console*/ ,(int)offsetof(ConsoleCommands_obj,_console),HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52")},
	{hx::fsBool,(int)offsetof(ConsoleCommands_obj,_watchingMouse),HX_HCSTRING("_watchingMouse","\x73","\xf3","\x3a","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52"),
	HX_HCSTRING("_watchingMouse","\x73","\xf3","\x3a","\x2a"),
	HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),
	HX_HCSTRING("listObjects","\x16","\xdc","\x4e","\x39"),
	HX_HCSTRING("listFunctions","\x1d","\x52","\x37","\xc0"),
	HX_HCSTRING("watchMouse","\x56","\x31","\x6f","\x84"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleCommands_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleCommands_obj::__mClass,"__mClass");
};

#endif

hx::Class ConsoleCommands_obj::__mClass;

void ConsoleCommands_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.console.ConsoleCommands","\x80","\xe4","\xff","\xa4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConsoleCommands_obj >;
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

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
