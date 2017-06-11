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
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
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
namespace _system{
namespace debug{
namespace completion{

Void CompletionHandler_obj::__construct(::flixel::_system::debug::completion::CompletionList completionList,::openfl::_legacy::text::TextField input)
{
HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","new",0xfa133d96,"flixel.system.debug.completion.CompletionHandler.new","flixel/system/debug/completion/CompletionHandler.hx",14,0x776a5e1a)
HX_STACK_THIS(this)
HX_STACK_ARG(completionList,"completionList")
HX_STACK_ARG(input,"input")
{
	HX_STACK_LINE(18)
	this->watchingSelection = false;
	HX_STACK_LINE(22)
	this->completionList = completionList;
	HX_STACK_LINE(23)
	this->input = input;
	HX_STACK_LINE(25)
	Dynamic tmp = this->completed_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	completionList->__FieldRef(HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f")) = tmp;
	HX_STACK_LINE(26)
	Dynamic tmp1 = this->selectionChanged_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	completionList->__FieldRef(HX_HCSTRING("selectionChanged","\x08","\xc2","\xcb","\x3c")) = tmp1;
	HX_STACK_LINE(27)
	Dynamic tmp2 = this->completionClosed_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	completionList->__FieldRef(HX_HCSTRING("closed","\xac","\xa9","\x51","\x0e")) = tmp2;
	HX_STACK_LINE(29)
	::String tmp3 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	Dynamic tmp4 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	input->addEventListener(tmp3,tmp4,null(),null(),null());
}
;
	return null();
}

//CompletionHandler_obj::~CompletionHandler_obj() { }

Dynamic CompletionHandler_obj::__CreateEmpty() { return  new CompletionHandler_obj; }
hx::ObjectPtr< CompletionHandler_obj > CompletionHandler_obj::__new(::flixel::_system::debug::completion::CompletionList completionList,::openfl::_legacy::text::TextField input)
{  hx::ObjectPtr< CompletionHandler_obj > _result_ = new CompletionHandler_obj();
	_result_->__construct(completionList,input);
	return _result_;}

Dynamic CompletionHandler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CompletionHandler_obj > _result_ = new CompletionHandler_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String CompletionHandler_obj::getTextUntilCaret( ){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getTextUntilCaret",0x57018dfe,"flixel.system.debug.completion.CompletionHandler.getTextUntilCaret","flixel/system/debug/completion/CompletionHandler.hx",33,0x776a5e1a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::openfl::_legacy::text::TextField tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	int tmp2 = this->getCaretIndex();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	::String tmp3 = tmp1.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getTextUntilCaret,return )

int CompletionHandler_obj::getCaretIndex( ){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getCaretIndex",0x5ae25f7b,"flixel.system.debug.completion.CompletionHandler.getCaretIndex","flixel/system/debug/completion/CompletionHandler.hx",38,0x776a5e1a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	::openfl::_legacy::text::TextField tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	int tmp2 = tmp1.length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getCaretIndex,return )

Void CompletionHandler_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","onKeyUp",0x7f599871,"flixel.system.debug.completion.CompletionHandler.onKeyUp","flixel/system/debug/completion/CompletionHandler.hx",48,0x776a5e1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(49)
		::String tmp = this->getTextUntilCaret();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::String text = tmp;		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(52)
		::String tmp1 = text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::String tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		bool tmp3 = ::StringTools_obj::endsWith(tmp2,HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		if ((tmp5)){
			HX_STACK_LINE(52)
			::String tmp7 = text;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			tmp6 = ::StringTools_obj::endsWith(tmp9,HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(52)
			tmp6 = true;
		}
		HX_STACK_LINE(52)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		if ((tmp7)){
			HX_STACK_LINE(52)
			::String tmp9 = text;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(52)
			tmp8 = ::StringTools_obj::endsWith(tmp10,HX_HCSTRING("'","\x27","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(52)
			tmp8 = true;
		}
		HX_STACK_LINE(52)
		if ((tmp8)){
			HX_STACK_LINE(54)
			::flixel::_system::debug::completion::CompletionList tmp9 = this->completionList;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			tmp9->__Field(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"), hx::paccDynamic )();
			HX_STACK_LINE(55)
			return null();
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int _g = e->keyCode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(58)
			switch( (int)(tmp9)){
				case (int)37: case (int)39: {
					HX_STACK_LINE(61)
					::flixel::_system::debug::completion::CompletionList tmp10 = this->completionList;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(61)
					tmp10->__Field(HX_HCSTRING("close","\xb8","\x17","\x63","\x48"), hx::paccDynamic )();
				}
				;break;
				case (int)13: case (int)27: case (int)38: case (int)40: {
				}
				;break;
				default: {
					HX_STACK_LINE(67)
					::String tmp10 = text;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(67)
					::String tmp11 = this->getPathBeforeDot(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					bool tmp12 = (e->keyCode == (int)190);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(67)
					this->invokeCompletion(tmp11,tmp12);
					HX_STACK_LINE(69)
					::flixel::_system::debug::completion::CompletionList tmp13 = this->completionList;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(69)
					bool tmp14 = tmp13->__Field(HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(69)
					if ((tmp14)){
						HX_STACK_LINE(70)
						::flixel::_system::debug::completion::CompletionList tmp15 = this->completionList;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(70)
						::String tmp16 = text;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(70)
						::String tmp17 = this->getWordAfterDot(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(70)
						tmp15->__Field(HX_HCSTRING("set_filter","\xf5","\x2d","\x3a","\x79"), hx::paccDynamic )(tmp17);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,onKeyUp,(void))

Void CompletionHandler_obj::invokeCompletion( ::String path,bool isPeriod){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","invokeCompletion",0x74f655be,"flixel.system.debug.completion.CompletionHandler.invokeCompletion","flixel/system/debug/completion/CompletionHandler.hx",75,0x776a5e1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(isPeriod,"isPeriod")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CompletionHandler_obj,invokeCompletion,(void))

Array< ::String > CompletionHandler_obj::getGlobals( ){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getGlobals",0x3af6d144,"flixel.system.debug.completion.CompletionHandler.getGlobals","flixel/system/debug/completion/CompletionHandler.hx",111,0x776a5e1a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	return Array_obj< ::String >::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getGlobals,return )

Float CompletionHandler_obj::getCharXPosition( ){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getCharXPosition",0x2e5e3e1f,"flixel.system.debug.completion.CompletionHandler.getCharXPosition","flixel/system/debug/completion/CompletionHandler.hx",116,0x776a5e1a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	Float pos = ((Float)0.0);		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		int tmp = this->getCaretIndex();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		while((true)){
			HX_STACK_LINE(118)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(118)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			if ((tmp2)){
				HX_STACK_LINE(118)
				break;
			}
			HX_STACK_LINE(118)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(119)
			hx::AddEq(pos,(int)6);
		}
	}
	HX_STACK_LINE(120)
	Float tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getCharXPosition,return )

::String CompletionHandler_obj::getCompletedText( ::String text,::String selectedItem){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getCompletedText",0xf1336e6c,"flixel.system.debug.completion.CompletionHandler.getCompletedText","flixel/system/debug/completion/CompletionHandler.hx",124,0x776a5e1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(selectedItem,"selectedItem")
	HX_STACK_LINE(126)
	::String tmp = text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	::String tmp1 = this->getWordAfterDot(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	::String tmp2 = (tmp1 + HX_HCSTRING("$","\x24","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	::EReg tmp3 = ::EReg_obj::__new(tmp2,HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	::String tmp5 = selectedItem;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(126)
	::String tmp6 = tmp3->replace(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(126)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(CompletionHandler_obj,getCompletedText,return )

Void CompletionHandler_obj::completed( ::String selectedItem){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","completed",0x0b4edb41,"flixel.system.debug.completion.CompletionHandler.completed","flixel/system/debug/completion/CompletionHandler.hx",130,0x776a5e1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(selectedItem,"selectedItem")
		HX_STACK_LINE(131)
		::String tmp = this->getTextUntilCaret();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		::String textUntilCaret = tmp;		HX_STACK_VAR(textUntilCaret,"textUntilCaret");
		HX_STACK_LINE(132)
		::String tmp1 = textUntilCaret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		::String tmp2 = selectedItem;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		::String tmp3 = this->getCompletedText(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(132)
		::String insert = tmp3;		HX_STACK_VAR(insert,"insert");
		HX_STACK_LINE(133)
		::openfl::_legacy::text::TextField tmp4 = this->input;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(133)
		::String tmp5 = insert;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		::openfl::_legacy::text::TextField tmp6 = this->input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		::String tmp7 = tmp6->get_text();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(133)
		int tmp8 = this->getCaretIndex();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(133)
		::String tmp9 = tmp7.substr(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(133)
		::String tmp10 = (tmp5 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(133)
		tmp4->set_text(tmp10);
		HX_STACK_LINE(134)
		::openfl::_legacy::text::TextField tmp11 = this->input;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(134)
		int tmp12 = insert.length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(134)
		int tmp13 = insert.length;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(134)
		tmp11->setSelection(tmp12,tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,completed,(void))

Void CompletionHandler_obj::selectionChanged( ::String selectedItem){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","selectionChanged",0xb4bbcb12,"flixel.system.debug.completion.CompletionHandler.selectionChanged","flixel/system/debug/completion/CompletionHandler.hx",138,0x776a5e1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(selectedItem,"selectedItem")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,selectionChanged,(void))

Void CompletionHandler_obj::completionClosed( ){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","completionClosed",0xa9f12ef2,"flixel.system.debug.completion.CompletionHandler.completionClosed","flixel/system/debug/completion/CompletionHandler.hx",154,0x776a5e1a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		bool tmp = this->watchingSelection;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		if ((tmp1)){
			HX_STACK_LINE(156)
			return null();
		}
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			::flixel::_system::debug::watch::Watch tmp3 = tmp2->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			::flixel::_system::debug::watch::WatchEntryData tmp4 = ::flixel::_system::debug::watch::WatchEntryData_obj::QUICK(null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			tmp3->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(HX_HCSTRING("Selection","\x2c","\xd8","\xed","\x2f"),tmp4);
		}
		HX_STACK_LINE(159)
		this->watchingSelection = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,completionClosed,(void))

::String CompletionHandler_obj::getPathBeforeDot( ::String text){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getPathBeforeDot",0x9fcc8f79,"flixel.system.debug.completion.CompletionHandler.getPathBeforeDot","flixel/system/debug/completion/CompletionHandler.hx",163,0x776a5e1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(164)
	::String tmp = text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	::String tmp1 = this->getLastWord(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	::String lastWord = tmp1;		HX_STACK_VAR(lastWord,"lastWord");
	HX_STACK_LINE(165)
	int tmp2 = lastWord.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	int dotIndex = tmp2;		HX_STACK_VAR(dotIndex,"dotIndex");
	HX_STACK_LINE(166)
	int tmp3 = dotIndex;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	::String tmp4 = lastWord.substr((int)0,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,getPathBeforeDot,return )

::String CompletionHandler_obj::getWordAfterDot( ::String text){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getWordAfterDot",0x4edfa1a3,"flixel.system.debug.completion.CompletionHandler.getWordAfterDot","flixel/system/debug/completion/CompletionHandler.hx",170,0x776a5e1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(171)
	::String tmp = text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	::String tmp1 = this->getLastWord(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	::String lastWord = tmp1;		HX_STACK_VAR(lastWord,"lastWord");
	HX_STACK_LINE(173)
	int tmp2 = lastWord.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	int index = tmp2;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(174)
	bool tmp3 = (index < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(174)
	if ((tmp3)){
		HX_STACK_LINE(175)
		index = (int)0;
	}
	else{
		HX_STACK_LINE(177)
		(index)++;
	}
	HX_STACK_LINE(179)
	int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	::String tmp5 = lastWord.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(179)
	::String word = tmp5;		HX_STACK_VAR(word,"word");
	HX_STACK_LINE(180)
	bool tmp6 = (word == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(180)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(180)
	if ((tmp6)){
		HX_STACK_LINE(180)
		tmp7 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(180)
		tmp7 = word;
	}
	HX_STACK_LINE(180)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,getWordAfterDot,return )

::String CompletionHandler_obj::getLastWord( ::String text){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionHandler","getLastWord",0xa19a712c,"flixel.system.debug.completion.CompletionHandler.getLastWord","flixel/system/debug/completion/CompletionHandler.hx",184,0x776a5e1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(185)
	::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("([^.a-zA-Z0-9_\\[\\]\"']+)","\x90","\x0f","\x11","\x57"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	::String tmp1 = text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	::String tmp2 = ::flixel::util::FlxArrayUtil_obj::last(tmp->split(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	return tmp2;
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

Dynamic CompletionHandler_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { return completed_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getGlobals") ) { return getGlobals_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getLastWord") ) { return getLastWord_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCaretIndex") ) { return getCaretIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"completionList") ) { return completionList; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getWordAfterDot") ) { return getWordAfterDot_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invokeCompletion") ) { return invokeCompletion_dyn(); }
		if (HX_FIELD_EQ(inName,"getCharXPosition") ) { return getCharXPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getCompletedText") ) { return getCompletedText_dyn(); }
		if (HX_FIELD_EQ(inName,"selectionChanged") ) { return selectionChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"completionClosed") ) { return completionClosed_dyn(); }
		if (HX_FIELD_EQ(inName,"getPathBeforeDot") ) { return getPathBeforeDot_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"watchingSelection") ) { return watchingSelection; }
		if (HX_FIELD_EQ(inName,"getTextUntilCaret") ) { return getTextUntilCaret_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CompletionHandler_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"completionList") ) { completionList=inValue.Cast< ::flixel::_system::debug::completion::CompletionList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"watchingSelection") ) { watchingSelection=inValue.Cast< bool >(); return inValue; }
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
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::debug::completion::CompletionList*/ ,(int)offsetof(CompletionHandler_obj,completionList),HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(CompletionHandler_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsBool,(int)offsetof(CompletionHandler_obj,watchingSelection),HX_HCSTRING("watchingSelection","\xd9","\xef","\xce","\x5e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
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

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompletionHandler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
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
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CompletionHandler_obj >;
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
} // end namespace completion
