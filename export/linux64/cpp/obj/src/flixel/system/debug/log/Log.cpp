#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicLog
#include <flixel/system/debug/GraphicLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_Log
#include <flixel/system/debug/log/Log.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
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
namespace log{

Void Log_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.log.Log","new",0x3aeefde4,"flixel.system.debug.log.Log.new","flixel/system/debug/log/Log.hx",23,0x223ade2e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	::flixel::_system::debug::GraphicLog tmp = ::flixel::_system::debug::GraphicLog_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	super::__construct(HX_HCSTRING("Log","\x64","\x0c","\x3a","\x00"),tmp,null(),null(),null(),null(),null());
	HX_STACK_LINE(26)
	::openfl::_legacy::text::TextField tmp1 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	this->_text = tmp1;
	HX_STACK_LINE(27)
	::openfl::_legacy::text::TextField tmp2 = this->_text;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	tmp2->set_x((int)2);
	HX_STACK_LINE(28)
	::openfl::_legacy::text::TextField tmp3 = this->_text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	tmp3->set_y((int)15);
	HX_STACK_LINE(29)
	::openfl::_legacy::text::TextField tmp4 = this->_text;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	tmp4->set_multiline(true);
	HX_STACK_LINE(30)
	::openfl::_legacy::text::TextField tmp5 = this->_text;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(30)
	tmp5->set_wordWrap(true);
	HX_STACK_LINE(31)
	::openfl::_legacy::text::TextField tmp6 = this->_text;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	tmp6->set_selectable(true);
	HX_STACK_LINE(32)
	::openfl::_legacy::text::TextField tmp7 = this->_text;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	tmp7->set_embedFonts(true);
	HX_STACK_LINE(33)
	::openfl::_legacy::text::TextField tmp8 = this->_text;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(33)
	::String tmp9 = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(33)
	::openfl::_legacy::text::TextFormat tmp10 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp9,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(33)
	tmp8->set_defaultTextFormat(tmp10);
	HX_STACK_LINE(34)
	::openfl::_legacy::text::TextField tmp11 = this->_text;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(34)
	this->addChild(tmp11);
	HX_STACK_LINE(36)
	this->_lines = Array_obj< ::String >::__new();
}
;
	return null();
}

//Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hx::ObjectPtr< Log_obj > Log_obj::__new()
{  hx::ObjectPtr< Log_obj > _result_ = new Log_obj();
	_result_->__construct();
	return _result_;}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Log_obj > _result_ = new Log_obj();
	_result_->__construct();
	return _result_;}

Void Log_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.Log","destroy",0x51a06c7e,"flixel.system.debug.log.Log.destroy","flixel/system/debug/log/Log.hx",43,0x223ade2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::openfl::_legacy::text::TextField tmp = this->_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		if ((tmp1)){
			HX_STACK_LINE(46)
			::openfl::_legacy::text::TextField tmp2 = this->_text;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			this->removeChild(tmp2);
			HX_STACK_LINE(47)
			this->_text = null();
		}
		HX_STACK_LINE(50)
		this->_lines = null();
		HX_STACK_LINE(51)
		this->super::destroy();
	}
return null();
}


bool Log_obj::add( cpp::ArrayBase Data,::flixel::_system::debug::log::LogStyle Style,hx::Null< bool >  __o_FireOnce){
bool FireOnce = __o_FireOnce.Default(false);
	HX_STACK_FRAME("flixel.system.debug.log.Log","add",0x3ae51fa5,"flixel.system.debug.log.Log.add","flixel/system/debug/log/Log.hx",61,0x223ade2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(FireOnce,"FireOnce")
{
		HX_STACK_LINE(62)
		bool tmp = (Data == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		if ((tmp)){
			HX_STACK_LINE(64)
			return false;
		}
		HX_STACK_LINE(67)
		Array< ::String > texts = Array_obj< ::String >::__new();		HX_STACK_VAR(texts,"texts");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(70)
			int _g = Data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(70)
			while((true)){
				HX_STACK_LINE(70)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(70)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(70)
				if ((tmp2)){
					HX_STACK_LINE(70)
					break;
				}
				HX_STACK_LINE(70)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(72)
				Dynamic tmp4 = Data->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(72)
				texts[i] = tmp5;
				HX_STACK_LINE(75)
				::String tmp6 = texts->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(75)
				::String tmp7 = ::StringTools_obj::htmlEscape(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(75)
				texts[i] = tmp7;
			}
		}
		HX_STACK_LINE(78)
		::String tmp1 = Style->__Field(HX_HCSTRING("prefix","\x92","\xd9","\xb6","\xae"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		::String tmp2 = texts->join(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		::String text = tmp3;		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(82)
		::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		int tmp5 = Style->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		::String tmp6 = Style->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		bool tmp7 = Style->__Field(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		bool tmp8 = Style->__Field(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		bool tmp9 = Style->__Field(HX_HCSTRING("underlined","\xd8","\x55","\x21","\x4f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		::String tmp10 = ::flixel::util::FlxStringUtil_obj::htmlFormat(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(82)
		text = tmp10;
		HX_STACK_LINE(86)
		bool tmp11 = FireOnce;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(86)
		if ((tmp11)){
			HX_STACK_LINE(88)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			Array< ::String > _g1 = this->_lines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(88)
			while((true)){
				HX_STACK_LINE(88)
				bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(88)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(88)
				if ((tmp13)){
					HX_STACK_LINE(88)
					break;
				}
				HX_STACK_LINE(88)
				::String tmp14 = _g1->__get(_g);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(88)
				::String line = tmp14;		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(88)
				++(_g);
				HX_STACK_LINE(90)
				bool tmp15 = (text == line);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(90)
				if ((tmp15)){
					HX_STACK_LINE(92)
					return false;
				}
			}
		}
		HX_STACK_LINE(98)
		int tmp12 = this->_lines->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(98)
		bool tmp13 = (tmp12 <= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(98)
		if ((tmp13)){
			HX_STACK_LINE(100)
			::openfl::_legacy::text::TextField tmp14 = this->_text;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			tmp14->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(103)
		::String tmp14 = text;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(103)
		this->_lines->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
		HX_STACK_LINE(105)
		int tmp15 = this->_lines->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(105)
		bool tmp16 = (tmp15 > (int)200);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(105)
		if ((tmp16)){
			HX_STACK_LINE(107)
			this->_lines->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();
			HX_STACK_LINE(108)
			::String newText = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(newText,"newText");
			HX_STACK_LINE(109)
			{
				HX_STACK_LINE(109)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(109)
				int tmp17 = this->_lines->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(109)
				int _g = tmp17;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(109)
				while((true)){
					HX_STACK_LINE(109)
					bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(109)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(109)
					if ((tmp19)){
						HX_STACK_LINE(109)
						break;
					}
					HX_STACK_LINE(109)
					int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(109)
					int i = tmp20;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(111)
					::String tmp21 = this->_lines->__GetItem(i);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(111)
					::String tmp22 = (tmp21 + HX_HCSTRING("<br>","\xb2","\x8d","\xf3","\x27"));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(111)
					hx::AddEq(newText,tmp22);
				}
			}
			HX_STACK_LINE(115)
			::openfl::_legacy::text::TextField tmp17 = this->_text;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(115)
			::String tmp18 = newText;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(115)
			tmp17->set_htmlText(tmp18);
		}
		else{
			HX_STACK_LINE(124)
			::openfl::_legacy::text::TextField tmp17 = this->_text;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(124)
			::openfl::_legacy::text::TextField _g = tmp17;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(124)
			::String tmp18 = _g->get_htmlText();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(124)
			::String tmp19 = (text + HX_HCSTRING("<br>","\xb2","\x8d","\xf3","\x27"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(124)
			::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(124)
			_g->set_htmlText(tmp20);
		}
		HX_STACK_LINE(130)
		::openfl::_legacy::text::TextField tmp17 = this->_text;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(130)
		::openfl::_legacy::text::TextField tmp18 = this->_text;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(130)
		int tmp19 = tmp18->get_maxScrollV();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(130)
		int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(130)
		tmp17->set_scrollV(tmp20);
		HX_STACK_LINE(131)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Log_obj,add,return )

Void Log_obj::clear( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.Log","clear",0xc2400811,"flixel.system.debug.log.Log.clear","flixel/system/debug/log/Log.hx",135,0x223ade2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		::openfl::_legacy::text::TextField tmp = this->_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		tmp->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(137)
		int tmp1 = this->_lines->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		this->_lines->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp1);
		HX_STACK_LINE(139)
		::openfl::_legacy::text::TextField tmp2 = this->_text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		tmp2->set_scrollV((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Log_obj,clear,(void))

Void Log_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.Log","updateSize",0x7fdfd666,"flixel.system.debug.log.Log.updateSize","flixel/system/debug/log/Log.hx",147,0x223ade2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		this->super::updateSize();
		HX_STACK_LINE(150)
		::openfl::_legacy::text::TextField tmp = this->_text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		int tmp1 = this->_width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		int tmp2 = (tmp1 - (int)10);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		tmp->set_width(tmp2);
		HX_STACK_LINE(151)
		::openfl::_legacy::text::TextField tmp3 = this->_text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		int tmp4 = this->_height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		int tmp5 = (tmp4 - (int)15);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		tmp3->set_height(tmp5);
	}
return null();
}


int Log_obj::MAX_LOG_LINES;

::String Log_obj::LINE_BREAK;


Log_obj::Log_obj()
{
}

void Log_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Log);
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_lines,"_lines");
	::flixel::_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Log_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_lines,"_lines");
	::flixel::_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Log_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { return _lines; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Log_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { _lines=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Log_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"));
	outFields->push(HX_HCSTRING("_lines","\x40","\x25","\xe9","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Log_obj,_text),HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Log_obj,_lines),HX_HCSTRING("_lines","\x40","\x25","\xe9","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Log_obj::MAX_LOG_LINES,HX_HCSTRING("MAX_LOG_LINES","\xc9","\x9f","\x1f","\x12")},
	{hx::fsString,(void *) &Log_obj::LINE_BREAK,HX_HCSTRING("LINE_BREAK","\xd4","\xf2","\x5b","\x12")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"),
	HX_HCSTRING("_lines","\x40","\x25","\xe9","\x70"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_MARK_MEMBER_NAME(Log_obj::LINE_BREAK,"LINE_BREAK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_VISIT_MEMBER_NAME(Log_obj::LINE_BREAK,"LINE_BREAK");
};

#endif

hx::Class Log_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MAX_LOG_LINES","\xc9","\x9f","\x1f","\x12"),
	HX_HCSTRING("LINE_BREAK","\xd4","\xf2","\x5b","\x12"),
	::String(null()) };

void Log_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.log.Log","\xf2","\x7b","\x61","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Log_obj >;
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

void Log_obj::__boot()
{
	MAX_LOG_LINES= (int)200;
	LINE_BREAK= HX_HCSTRING("<br>","\xb2","\x8d","\xf3","\x27");
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log
