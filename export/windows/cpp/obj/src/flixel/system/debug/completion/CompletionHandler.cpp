// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
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
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console__ConsoleUtil_Interp
#include <flixel/system/debug/console/_ConsoleUtil/Interp.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif

namespace flixel{
namespace _hx_system{
namespace debug{
namespace completion{

void CompletionHandler_obj::__construct( ::flixel::_hx_system::debug::completion::CompletionList completionList, ::openfl::_legacy::text::TextField input){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","new",0xfa133d96,"flixel.system.debug.completion.CompletionHandler.new","flixel/system/debug/completion/CompletionHandler.hx",14,0x776a5e1a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(completionList,"completionList")
            	HX_STACK_ARG(input,"input")
HXLINE(  18)		this->watchingSelection = false;
HXLINE(  22)		this->completionList = completionList;
HXLINE(  23)		this->input = input;
HXLINE(  25)		completionList->completed = this->completed_dyn();
HXLINE(  26)		completionList->selectionChanged = this->selectionChanged_dyn();
HXLINE(  27)		completionList->closed = this->completionClosed_dyn();
HXLINE(  29)		input->addEventListener(::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
            	}

Dynamic CompletionHandler_obj::__CreateEmpty() { return new CompletionHandler_obj; }

hx::ObjectPtr< CompletionHandler_obj > CompletionHandler_obj::__new( ::flixel::_hx_system::debug::completion::CompletionList completionList, ::openfl::_legacy::text::TextField input)
{
	hx::ObjectPtr< CompletionHandler_obj > _hx_result = new CompletionHandler_obj();
	_hx_result->__construct(completionList,input);
	return _hx_result;
}

Dynamic CompletionHandler_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CompletionHandler_obj > _hx_result = new CompletionHandler_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

::String CompletionHandler_obj::getTextUntilCaret(){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getTextUntilCaret",0x57018dfe,"flixel.system.debug.completion.CompletionHandler.getTextUntilCaret","flixel/system/debug/completion/CompletionHandler.hx",34,0x776a5e1a)
            	HX_STACK_THIS(this)
HXLINE(  34)		::String _hx_tmp = this->input->get_text();
HXDLIN(  34)		Int _hx_tmp1 = this->getCaretIndex();
HXDLIN(  34)		return _hx_tmp.substring((int)0,_hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getTextUntilCaret,return )

Int CompletionHandler_obj::getCaretIndex(){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getCaretIndex",0x5ae25f7b,"flixel.system.debug.completion.CompletionHandler.getCaretIndex","flixel/system/debug/completion/CompletionHandler.hx",41,0x776a5e1a)
            	HX_STACK_THIS(this)
HXLINE(  41)		return this->input->get_text().length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getCaretIndex,return )

void CompletionHandler_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent e){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","onKeyUp",0x7f599871,"flixel.system.debug.completion.CompletionHandler.onKeyUp","flixel/system/debug/completion/CompletionHandler.hx",48,0x776a5e1a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
HXLINE(  49)		HX_VARI( ::String,text) = this->getTextUntilCaret();
HXLINE(  52)		Bool _hx_tmp;
HXDLIN(  52)		Bool _hx_tmp1;
HXDLIN(  52)		Bool _hx_tmp2 = !(::StringTools_obj::endsWith(text,HX_(")",29,00,00,00)));
HXDLIN(  52)		if (_hx_tmp2) {
HXLINE(  52)			_hx_tmp1 = ::StringTools_obj::endsWith(text,HX_("\"",22,00,00,00));
            		}
            		else {
HXLINE(  52)			_hx_tmp1 = true;
            		}
HXDLIN(  52)		if (!(_hx_tmp1)) {
HXLINE(  52)			_hx_tmp = ::StringTools_obj::endsWith(text,HX_("'",27,00,00,00));
            		}
            		else {
HXLINE(  52)			_hx_tmp = true;
            		}
HXDLIN(  52)		if (_hx_tmp) {
HXLINE(  54)			this->completionList->close();
HXLINE(  55)			return;
            		}
HXLINE(  58)		{
HXLINE(  58)			HX_VARI( Int,_g) = e->keyCode;
HXDLIN(  58)			switch((int)(_g)){
            				case (int)13: case (int)27: case (int)38: case (int)40: {
            				}
            				break;
            				case (int)37: case (int)39: {
HXLINE(  61)					this->completionList->close();
            				}
            				break;
            				default:{
HXLINE(  67)					::String _hx_tmp3 = this->getPathBeforeDot(text);
HXDLIN(  67)					Bool _hx_tmp4 = (e->keyCode == (int)190);
HXDLIN(  67)					this->invokeCompletion(_hx_tmp3,_hx_tmp4);
HXLINE(  69)					Bool _hx_tmp5 = this->completionList->get_visible();
HXDLIN(  69)					if (_hx_tmp5) {
HXLINE(  70)						::String _hx_tmp6 = this->getWordAfterDot(text);
HXDLIN(  70)						this->completionList->set_filter(_hx_tmp6);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,onKeyUp,(void))

void CompletionHandler_obj::invokeCompletion(::String path,Bool isPeriod){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","invokeCompletion",0x74f655be,"flixel.system.debug.completion.CompletionHandler.invokeCompletion","flixel/system/debug/completion/CompletionHandler.hx",75,0x776a5e1a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(isPeriod,"isPeriod")
HXLINE(  77)		HX_VARI( ::Array< ::String >,items) = null();
HXLINE(  79)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  81)			Bool _hx_tmp = (path.length != (int)0);
HXDLIN(  81)			if (_hx_tmp) {
HXLINE(  83)				HX_VARI(  ::Dynamic,output) = ::flixel::_hx_system::debug::console::ConsoleUtil_obj::runCommand(path);
HXLINE(  84)				items = ::flixel::_hx_system::debug::console::ConsoleUtil_obj::getFields(output);
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  89)				if (isPeriod) {
HXLINE(  91)					this->completionList->close();
HXLINE(  92)					return;
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  96)		Bool _hx_tmp1 = hx::IsNull( items );
HXDLIN(  96)		if (_hx_tmp1) {
HXLINE(  97)			items = this->getGlobals();
            		}
HXLINE(  99)		Bool _hx_tmp2 = (items->length > (int)0);
HXDLIN(  99)		if (_hx_tmp2) {
HXLINE( 100)			Float _hx_tmp3 = this->getCharXPosition();
HXDLIN( 100)			this->completionList->show(_hx_tmp3,items);
            		}
            		else {
HXLINE( 102)			this->completionList->close();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompletionHandler_obj,invokeCompletion,(void))

::Array< ::String > CompletionHandler_obj::getGlobals(){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getGlobals",0x3af6d144,"flixel.system.debug.completion.CompletionHandler.getGlobals","flixel/system/debug/completion/CompletionHandler.hx",109,0x776a5e1a)
            	HX_STACK_THIS(this)
HXLINE( 109)		::Array< ::String > _hx_tmp = ::flixel::_hx_system::debug::console::ConsoleUtil_obj::interp->getGlobals();
HXDLIN( 109)		return ::flixel::util::FlxStringUtil_obj::sortAlphabetically(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getGlobals,return )

Float CompletionHandler_obj::getCharXPosition(){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getCharXPosition",0x2e5e3e1f,"flixel.system.debug.completion.CompletionHandler.getCharXPosition","flixel/system/debug/completion/CompletionHandler.hx",116,0x776a5e1a)
            	HX_STACK_THIS(this)
HXLINE( 117)		HX_VARI( Float,pos) = ((Float)0.0);
HXLINE( 118)		{
HXLINE( 118)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 118)			HX_VARI( Int,_g) = this->getCaretIndex();
HXDLIN( 118)			while((_g1 < _g)){
HXLINE( 118)				++_g1;
HXLINE( 119)				hx::AddEq(pos,(int)6);
            			}
            		}
HXLINE( 120)		return pos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getCharXPosition,return )

::String CompletionHandler_obj::getCompletedText(::String text,::String selectedItem){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getCompletedText",0xf1336e6c,"flixel.system.debug.completion.CompletionHandler.getCompletedText","flixel/system/debug/completion/CompletionHandler.hx",126,0x776a5e1a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(text,"text")
            	HX_STACK_ARG(selectedItem,"selectedItem")
HXLINE( 126)		::String _hx_tmp = this->getWordAfterDot(text);
HXDLIN( 126)		return  ::EReg_obj::__new((_hx_tmp + HX_("$",24,00,00,00)),HX_("g",67,00,00,00))->replace(text,selectedItem);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompletionHandler_obj,getCompletedText,return )

void CompletionHandler_obj::completed(::String selectedItem){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","completed",0x0b4edb41,"flixel.system.debug.completion.CompletionHandler.completed","flixel/system/debug/completion/CompletionHandler.hx",130,0x776a5e1a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(selectedItem,"selectedItem")
HXLINE( 131)		HX_VARI( ::String,textUntilCaret) = this->getTextUntilCaret();
HXLINE( 132)		HX_VARI( ::String,insert) = this->getCompletedText(textUntilCaret,selectedItem);
HXLINE( 133)		::String _hx_tmp = this->input->get_text();
HXDLIN( 133)		Int _hx_tmp1 = this->getCaretIndex();
HXDLIN( 133)		::String _hx_tmp2 = _hx_tmp.substr(_hx_tmp1,null());
HXDLIN( 133)		this->input->set_text((insert + _hx_tmp2));
HXLINE( 134)		this->input->setSelection(insert.length,insert.length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,completed,(void))

void CompletionHandler_obj::selectionChanged(::String selectedItem){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","selectionChanged",0xb4bbcb12,"flixel.system.debug.completion.CompletionHandler.selectionChanged","flixel/system/debug/completion/CompletionHandler.hx",140,0x776a5e1a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(selectedItem,"selectedItem")
HXLINE( 140)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 142)			::String _hx_tmp = this->input->get_text();
HXDLIN( 142)			HX_VARI( ::String,lastWord) = this->getLastWord(_hx_tmp);
HXLINE( 143)			HX_VARI( ::String,command) = this->getCompletedText(lastWord,selectedItem);
HXLINE( 144)			HX_VARI(  ::Dynamic,output) = ::flixel::_hx_system::debug::console::ConsoleUtil_obj::runCommand(command);
HXLINE( 146)			this->watchingSelection = true;
HXLINE( 147)			::hx::EnumBase _hx_tmp1 = ::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(output);
HXDLIN( 147)			::flixel::FlxG_obj::game->debugger->watch->add(HX_("Selection",2c,d8,ed,2f),_hx_tmp1);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,selectionChanged,(void))

void CompletionHandler_obj::completionClosed(){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","completionClosed",0xa9f12ef2,"flixel.system.debug.completion.CompletionHandler.completionClosed","flixel/system/debug/completion/CompletionHandler.hx",154,0x776a5e1a)
            	HX_STACK_THIS(this)
HXLINE( 155)		if (!(this->watchingSelection)) {
HXLINE( 156)			return;
            		}
HXLINE( 158)		::hx::EnumBase _hx_tmp = ::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(null());
HXDLIN( 158)		::flixel::FlxG_obj::game->debugger->watch->remove(HX_("Selection",2c,d8,ed,2f),_hx_tmp);
HXLINE( 159)		this->watchingSelection = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,completionClosed,(void))

::String CompletionHandler_obj::getPathBeforeDot(::String text){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getPathBeforeDot",0x9fcc8f79,"flixel.system.debug.completion.CompletionHandler.getPathBeforeDot","flixel/system/debug/completion/CompletionHandler.hx",163,0x776a5e1a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(text,"text")
HXLINE( 164)		HX_VARI( ::String,lastWord) = this->getLastWord(text);
HXLINE( 165)		HX_VARI( Int,dotIndex) = lastWord.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 166)		return lastWord.substr((int)0,dotIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,getPathBeforeDot,return )

::String CompletionHandler_obj::getWordAfterDot(::String text){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getWordAfterDot",0x4edfa1a3,"flixel.system.debug.completion.CompletionHandler.getWordAfterDot","flixel/system/debug/completion/CompletionHandler.hx",170,0x776a5e1a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(text,"text")
HXLINE( 171)		HX_VARI( ::String,lastWord) = this->getLastWord(text);
HXLINE( 173)		HX_VARI( Int,index) = lastWord.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 174)		Bool _hx_tmp = (index < (int)0);
HXDLIN( 174)		if (_hx_tmp) {
HXLINE( 175)			index = (int)0;
            		}
            		else {
HXLINE( 177)			++index;
            		}
HXLINE( 179)		HX_VARI( ::String,word) = lastWord.substr(index,null());
HXLINE( 180)		Bool _hx_tmp1 = hx::IsNull( word );
HXDLIN( 180)		if (_hx_tmp1) {
HXLINE( 180)			return HX_("",00,00,00,00);
            		}
            		else {
HXLINE( 180)			return word;
            		}
HXDLIN( 180)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,getWordAfterDot,return )

::String CompletionHandler_obj::getLastWord(::String text){
            	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getLastWord",0xa19a712c,"flixel.system.debug.completion.CompletionHandler.getLastWord","flixel/system/debug/completion/CompletionHandler.hx",185,0x776a5e1a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(text,"text")
HXLINE( 185)		::Array< ::String > _hx_tmp =  ::EReg_obj::__new(HX_("([^.a-zA-Z0-9_\\[\\]\"']+)",90,0f,11,57),HX_("g",67,00,00,00))->split(text);
HXDLIN( 185)		return ( (::String)(::flixel::util::FlxArrayUtil_obj::last(_hx_tmp)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,getLastWord,return )


CompletionHandler_obj::CompletionHandler_obj()
{
}

void CompletionHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompletionHandler);
	HX_MARK_MEMBER_NAME(completionList,"completionList");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(watchingSelection,"watchingSelection");
	HX_MARK_END_CLASS();
}

void CompletionHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(completionList,"completionList");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(watchingSelection,"watchingSelection");
}

hx::Val CompletionHandler_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return hx::Val( input); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return hx::Val( onKeyUp_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { return hx::Val( completed_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getGlobals") ) { return hx::Val( getGlobals_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getLastWord") ) { return hx::Val( getLastWord_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCaretIndex") ) { return hx::Val( getCaretIndex_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"completionList") ) { return hx::Val( completionList); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getWordAfterDot") ) { return hx::Val( getWordAfterDot_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invokeCompletion") ) { return hx::Val( invokeCompletion_dyn()); }
		if (HX_FIELD_EQ(inName,"getCharXPosition") ) { return hx::Val( getCharXPosition_dyn()); }
		if (HX_FIELD_EQ(inName,"getCompletedText") ) { return hx::Val( getCompletedText_dyn()); }
		if (HX_FIELD_EQ(inName,"selectionChanged") ) { return hx::Val( selectionChanged_dyn()); }
		if (HX_FIELD_EQ(inName,"completionClosed") ) { return hx::Val( completionClosed_dyn()); }
		if (HX_FIELD_EQ(inName,"getPathBeforeDot") ) { return hx::Val( getPathBeforeDot_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"watchingSelection") ) { return hx::Val( watchingSelection); }
		if (HX_FIELD_EQ(inName,"getTextUntilCaret") ) { return hx::Val( getTextUntilCaret_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CompletionHandler_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"completionList") ) { completionList=inValue.Cast<  ::flixel::_hx_system::debug::completion::CompletionList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"watchingSelection") ) { watchingSelection=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompletionHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("watchingSelection","\xd9","\xef","\xce","\x5e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CompletionHandler_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_hx_system::debug::completion::CompletionList*/ ,(int)offsetof(CompletionHandler_obj,completionList),HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(CompletionHandler_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsBool,(int)offsetof(CompletionHandler_obj,watchingSelection),HX_HCSTRING("watchingSelection","\xd9","\xef","\xce","\x5e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CompletionHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String CompletionHandler_obj_sMemberFields[] = {
	HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("watchingSelection","\xd9","\xef","\xce","\x5e"),
	HX_HCSTRING("getTextUntilCaret","\x48","\xae","\xe9","\xdc"),
	HX_HCSTRING("getCaretIndex","\xc5","\x12","\xce","\x39"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("invokeCompletion","\xb4","\x4c","\x06","\xfd"),
	HX_HCSTRING("getGlobals","\xba","\x8b","\x9a","\x63"),
	HX_HCSTRING("getCharXPosition","\x15","\x35","\x6e","\xb6"),
	HX_HCSTRING("getCompletedText","\x62","\x65","\x43","\x79"),
	HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f"),
	HX_HCSTRING("selectionChanged","\x08","\xc2","\xcb","\x3c"),
	HX_HCSTRING("completionClosed","\xe8","\x25","\x01","\x32"),
	HX_HCSTRING("getPathBeforeDot","\x6f","\x86","\xdc","\x27"),
	HX_HCSTRING("getWordAfterDot","\x6d","\x3b","\x96","\x86"),
	HX_HCSTRING("getLastWord","\xf6","\xdd","\x39","\x08"),
	::String(null()) };

static void CompletionHandler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompletionHandler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CompletionHandler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompletionHandler_obj::__mClass,"__mClass");
};

#endif

hx::Class CompletionHandler_obj::__mClass;

void CompletionHandler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.completion.CompletionHandler","\xa4","\x7a","\x5b","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CompletionHandler_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CompletionHandler_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CompletionHandler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CompletionHandler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompletionHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompletionHandler_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion
