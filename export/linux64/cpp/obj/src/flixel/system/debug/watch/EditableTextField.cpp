#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_EditableTextField
#include <flixel/system/debug/watch/EditableTextField.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
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
namespace watch{

Void EditableTextField_obj::__construct(bool allowEditing,::openfl::_legacy::text::TextFormat defaultFormat,Dynamic submitValue,::ValueType expectedType)
{
HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","new",0xaaedbff4,"flixel.system.debug.watch.EditableTextField.new","flixel/system/debug/watch/EditableTextField.hx",26,0xd7488fde)
HX_STACK_THIS(this)
HX_STACK_ARG(allowEditing,"allowEditing")
HX_STACK_ARG(defaultFormat,"defaultFormat")
HX_STACK_ARG(submitValue,"submitValue")
HX_STACK_ARG(expectedType,"expectedType")
{
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(28)
	this->allowEditing = allowEditing;
	HX_STACK_LINE(29)
	this->submitValue = submitValue;
	HX_STACK_LINE(30)
	this->defaultFormat = defaultFormat;
	HX_STACK_LINE(31)
	this->expectedType = expectedType;
	HX_STACK_LINE(33)
	bool tmp = allowEditing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	if ((tmp)){
		HX_STACK_LINE(35)
		::openfl::_legacy::text::TextFormat tmp1 = ::openfl::_legacy::text::TextFormat_obj::__new(defaultFormat->font,defaultFormat->size,(int)0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		this->editFormat = tmp1;
		HX_STACK_LINE(37)
		::String tmp2 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		Dynamic tmp3 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		this->addEventListener(tmp2,tmp3,null(),null(),null());
		HX_STACK_LINE(38)
		::String tmp4 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		Dynamic tmp5 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		this->addEventListener(tmp4,tmp5,null(),null(),null());
		HX_STACK_LINE(39)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		Dynamic tmp7 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		this->addEventListener(tmp6,tmp7,null(),null(),null());
		HX_STACK_LINE(40)
		Dynamic tmp8 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		this->addEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp8,null(),null(),null());
	}
}
;
	return null();
}

//EditableTextField_obj::~EditableTextField_obj() { }

Dynamic EditableTextField_obj::__CreateEmpty() { return  new EditableTextField_obj; }
hx::ObjectPtr< EditableTextField_obj > EditableTextField_obj::__new(bool allowEditing,::openfl::_legacy::text::TextFormat defaultFormat,Dynamic submitValue,::ValueType expectedType)
{  hx::ObjectPtr< EditableTextField_obj > _result_ = new EditableTextField_obj();
	_result_->__construct(allowEditing,defaultFormat,submitValue,expectedType);
	return _result_;}

Dynamic EditableTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EditableTextField_obj > _result_ = new EditableTextField_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *EditableTextField_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

EditableTextField_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< EditableTextField_obj >(this); }
Void EditableTextField_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","destroy",0x8b91768e,"flixel.system.debug.watch.EditableTextField.destroy","flixel/system/debug/watch/EditableTextField.hx",45,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		bool tmp = this->allowEditing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		if ((tmp)){
			HX_STACK_LINE(48)
			::String tmp1 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(48)
			Dynamic tmp2 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(48)
			this->removeEventListener(tmp1,tmp2,null());
			HX_STACK_LINE(49)
			::String tmp3 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			Dynamic tmp4 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			this->removeEventListener(tmp3,tmp4,null());
			HX_STACK_LINE(50)
			::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(50)
			Dynamic tmp6 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(50)
			this->removeEventListener(tmp5,tmp6,null());
			HX_STACK_LINE(51)
			Dynamic tmp7 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			this->removeEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp7,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EditableTextField_obj,destroy,(void))

Void EditableTextField_obj::onMouseUp( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","onMouseUp",0x4fbd8315,"flixel.system.debug.watch.EditableTextField.onMouseUp","flixel/system/debug/watch/EditableTextField.hx",57,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(57)
		this->setIsEditing(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onMouseUp,(void))

Void EditableTextField_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","onKeyUp",0xdc47a1cf,"flixel.system.debug.watch.EditableTextField.onKeyUp","flixel/system/debug/watch/EditableTextField.hx",62,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(62)
		int _g = e->keyCode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		switch( (int)(tmp)){
			case (int)13: {
				HX_STACK_LINE(65)
				this->submit();
			}
			;break;
			case (int)27: {
				HX_STACK_LINE(67)
				this->setIsEditing(false);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onKeyUp,(void))

Void EditableTextField_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","onKeyDown",0x2b91f8d6,"flixel.system.debug.watch.EditableTextField.onKeyDown","flixel/system/debug/watch/EditableTextField.hx",72,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(73)
		Float modifier = ((Float)1.0);		HX_STACK_VAR(modifier,"modifier");
		HX_STACK_LINE(74)
		bool tmp = e->altKey;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		if ((tmp)){
			HX_STACK_LINE(75)
			modifier = ((Float)0.1);
		}
		HX_STACK_LINE(76)
		bool tmp1 = e->shiftKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		if ((tmp1)){
			HX_STACK_LINE(77)
			modifier = ((Float)10.0);
		}
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			int _g = e->keyCode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			switch( (int)(tmp2)){
				case (int)38: {
					HX_STACK_LINE(81)
					Float tmp3 = modifier;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(81)
					this->cycleValue(tmp3,(int)0);
				}
				;break;
				case (int)40: {
					HX_STACK_LINE(82)
					Float tmp3 = modifier;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(82)
					Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(82)
					::String tmp5 = this->get_text();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(82)
					int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(82)
					this->cycleValue(tmp4,tmp6);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onKeyDown,(void))

Void EditableTextField_obj::cycleValue( Float modifier,int selection){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","cycleValue",0xd5a483d7,"flixel.system.debug.watch.EditableTextField.cycleValue","flixel/system/debug/watch/EditableTextField.hx",88,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_ARG(selection,"selection")
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::ValueType tmp = this->expectedType;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(88)
			::ValueType _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			switch( (int)(_g->__Index())){
				case (int)1: case (int)2: {
					HX_STACK_LINE(91)
					Float tmp1 = modifier;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(91)
					this->cycleNumericValue(tmp1);
					HX_STACK_LINE(92)
					this->selectEnd();
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(94)
					::String tmp1 = this->get_text();		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(94)
					bool tmp2 = (tmp1 == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(94)
					::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(94)
					if ((tmp2)){
						HX_STACK_LINE(94)
						tmp3 = HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb");
					}
					else{
						HX_STACK_LINE(94)
						tmp3 = HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d");
					}
					HX_STACK_LINE(94)
					this->set_text(tmp3);
					HX_STACK_LINE(95)
					this->selectEnd();
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(88)
					::Enum tmp1 = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(88)
					::Enum e = tmp1;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(96)
					{
						HX_STACK_LINE(97)
						::Enum tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(97)
						bool tmp3 = (modifier < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(97)
						int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(97)
						if ((tmp3)){
							HX_STACK_LINE(97)
							tmp4 = (int)-1;
						}
						else{
							HX_STACK_LINE(97)
							tmp4 = (int)1;
						}
						HX_STACK_LINE(97)
						this->cycleEnumValue(tmp2,tmp4);
						HX_STACK_LINE(98)
						this->selectEnd();
					}
				}
				;break;
				default: {
					HX_STACK_LINE(100)
					int tmp1 = selection;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(100)
					int tmp2 = selection;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(100)
					this->setSelection(tmp1,tmp2);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(EditableTextField_obj,cycleValue,(void))

Void EditableTextField_obj::selectEnd( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","selectEnd",0x459f7cd3,"flixel.system.debug.watch.EditableTextField.selectEnd","flixel/system/debug/watch/EditableTextField.hx",105,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::String tmp = this->get_text();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		int tmp1 = tmp.length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		::String tmp2 = this->get_text();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		int tmp3 = tmp2.length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		this->setSelection(tmp1,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EditableTextField_obj,selectEnd,(void))

Void EditableTextField_obj::cycleNumericValue( Float modifier){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","cycleNumericValue",0xa550b9be,"flixel.system.debug.watch.EditableTextField.cycleNumericValue","flixel/system/debug/watch/EditableTextField.hx",110,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(111)
		::String tmp = this->get_text();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		Float tmp1 = ::Std_obj::parseFloat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		Float value = tmp1;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(112)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		bool tmp3 = ::Math_obj::isNaN(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		if ((tmp3)){
			HX_STACK_LINE(113)
			return null();
		}
		HX_STACK_LINE(115)
		hx::AddEq(value,modifier);
		HX_STACK_LINE(116)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp5 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		int tmp6 = tmp5->__Field(HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(116)
		Float tmp7 = ::flixel::math::FlxMath_obj::roundDecimal(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(116)
		value = tmp7;
		HX_STACK_LINE(117)
		Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		this->set_text(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,cycleNumericValue,(void))

Void EditableTextField_obj::cycleEnumValue( ::Enum e,int modifier){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","cycleEnumValue",0x87243016,"flixel.system.debug.watch.EditableTextField.cycleEnumValue","flixel/system/debug/watch/EditableTextField.hx",121,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(122)
		::Enum tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		Array< ::String > values = ::Type_obj::getEnumConstructs(tmp);		HX_STACK_VAR(values,"values");
		HX_STACK_LINE(123)
		::String tmp1 = this->get_text();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		int tmp2 = values->indexOf(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		int index = tmp2;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(124)
		bool tmp3 = (index == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		if ((tmp3)){
			HX_STACK_LINE(125)
			index = (int)0;
		}
		else{
			HX_STACK_LINE(128)
			hx::AddEq(index,modifier);
			HX_STACK_LINE(129)
			int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(129)
			int tmp5 = (values->length - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(129)
			int tmp6 = ::flixel::math::FlxMath_obj::wrap(tmp4,(int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(129)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(129)
			index = tmp7;
		}
		HX_STACK_LINE(131)
		::String tmp4 = values->__get(index);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		this->set_text(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(EditableTextField_obj,cycleEnumValue,(void))

Void EditableTextField_obj::onFocusLost( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","onFocusLost",0x01b78851,"flixel.system.debug.watch.EditableTextField.onFocusLost","flixel/system/debug/watch/EditableTextField.hx",136,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(136)
		this->setIsEditing(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,onFocusLost,(void))

Void EditableTextField_obj::submit( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","submit",0x30df5d04,"flixel.system.debug.watch.EditableTextField.submit","flixel/system/debug/watch/EditableTextField.hx",140,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			::ValueType tmp1 = this->expectedType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			::ValueType _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			switch( (int)(_g->__Index())){
				case (int)3: {
					HX_STACK_LINE(147)
					::String tmp2 = this->get_text();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(147)
					bool tmp3 = (tmp2 == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(147)
					if ((tmp3)){
						HX_STACK_LINE(147)
						tmp = true;
					}
					else{
						HX_STACK_LINE(148)
						::String tmp4 = this->get_text();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(148)
						bool tmp5 = (tmp4 == HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(148)
						if ((tmp5)){
							HX_STACK_LINE(148)
							tmp = false;
						}
						else{
							HX_STACK_LINE(152)
							tmp = this->get_text();
						}
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(141)
					::Enum tmp2 = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(141)
					::Enum e = tmp2;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(150)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(150)
						::Enum tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(150)
						::String tmp4 = this->get_text();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(150)
						tmp = ::Type_obj::createEnum(tmp3,tmp4,null());
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic _ = __e;{
								HX_STACK_LINE(151)
								tmp = null();
							}
						}
					}
				}
				;break;
				default: {
					HX_STACK_LINE(152)
					tmp = this->get_text();
				}
			}
		}
		HX_STACK_LINE(141)
		Dynamic value = tmp;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(155)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(157)
			Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			this->submitValue(tmp1);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
		HX_STACK_LINE(161)
		this->setIsEditing(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EditableTextField_obj,submit,(void))

Void EditableTextField_obj::setIsEditing( bool isEditing){
{
		HX_STACK_FRAME("flixel.system.debug.watch.EditableTextField","setIsEditing",0xb9436038,"flixel.system.debug.watch.EditableTextField.setIsEditing","flixel/system/debug/watch/EditableTextField.hx",165,0xd7488fde)
		HX_STACK_THIS(this)
		HX_STACK_ARG(isEditing,"isEditing")
		HX_STACK_LINE(166)
		this->isEditing = isEditing;
		HX_STACK_LINE(169)
		bool tmp = isEditing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		tmp2->enabled = tmp1;
		HX_STACK_LINE(172)
		bool tmp3 = isEditing;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		if ((tmp3)){
			HX_STACK_LINE(172)
			tmp4 = ((Dynamic)((int)1));
		}
		else{
			HX_STACK_LINE(172)
			tmp4 = ((Dynamic)((int)0));
		}
		HX_STACK_LINE(172)
		this->set_type(tmp4);
		HX_STACK_LINE(173)
		bool tmp5 = isEditing;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		this->set_background(tmp5);
		HX_STACK_LINE(174)
		bool tmp6 = isEditing;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		::openfl::_legacy::text::TextFormat tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		if ((tmp6)){
			HX_STACK_LINE(174)
			tmp7 = this->editFormat;
		}
		else{
			HX_STACK_LINE(174)
			tmp7 = this->defaultFormat;
		}
		HX_STACK_LINE(174)
		this->set_defaultTextFormat(tmp7);
		HX_STACK_LINE(175)
		::openfl::_legacy::text::TextFormat tmp8 = this->get_defaultTextFormat();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(175)
		this->setTextFormat(tmp8,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EditableTextField_obj,setIsEditing,(void))


EditableTextField_obj::EditableTextField_obj()
{
}

void EditableTextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EditableTextField);
	HX_MARK_MEMBER_NAME(isEditing,"isEditing");
	HX_MARK_MEMBER_NAME(allowEditing,"allowEditing");
	HX_MARK_MEMBER_NAME(submitValue,"submitValue");
	HX_MARK_MEMBER_NAME(expectedType,"expectedType");
	HX_MARK_MEMBER_NAME(defaultFormat,"defaultFormat");
	HX_MARK_MEMBER_NAME(editFormat,"editFormat");
	::openfl::_legacy::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EditableTextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isEditing,"isEditing");
	HX_VISIT_MEMBER_NAME(allowEditing,"allowEditing");
	HX_VISIT_MEMBER_NAME(submitValue,"submitValue");
	HX_VISIT_MEMBER_NAME(expectedType,"expectedType");
	HX_VISIT_MEMBER_NAME(defaultFormat,"defaultFormat");
	HX_VISIT_MEMBER_NAME(editFormat,"editFormat");
	::openfl::_legacy::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EditableTextField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isEditing") ) { return isEditing; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"selectEnd") ) { return selectEnd_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"editFormat") ) { return editFormat; }
		if (HX_FIELD_EQ(inName,"cycleValue") ) { return cycleValue_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"submitValue") ) { return submitValue; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowEditing") ) { return allowEditing; }
		if (HX_FIELD_EQ(inName,"expectedType") ) { return expectedType; }
		if (HX_FIELD_EQ(inName,"setIsEditing") ) { return setIsEditing_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { return defaultFormat; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cycleEnumValue") ) { return cycleEnumValue_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cycleNumericValue") ) { return cycleNumericValue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EditableTextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isEditing") ) { isEditing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"editFormat") ) { editFormat=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"submitValue") ) { submitValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowEditing") ) { allowEditing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"expectedType") ) { expectedType=inValue.Cast< ::ValueType >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { defaultFormat=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EditableTextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isEditing","\x4e","\x22","\xb6","\x29"));
	outFields->push(HX_HCSTRING("allowEditing","\x8f","\xbb","\xf0","\x66"));
	outFields->push(HX_HCSTRING("expectedType","\x52","\xe9","\xd6","\xd6"));
	outFields->push(HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"));
	outFields->push(HX_HCSTRING("editFormat","\xe1","\xf0","\x3b","\xc3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(EditableTextField_obj,isEditing),HX_HCSTRING("isEditing","\x4e","\x22","\xb6","\x29")},
	{hx::fsBool,(int)offsetof(EditableTextField_obj,allowEditing),HX_HCSTRING("allowEditing","\x8f","\xbb","\xf0","\x66")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EditableTextField_obj,submitValue),HX_HCSTRING("submitValue","\x39","\x40","\x71","\x15")},
	{hx::fsObject /*::ValueType*/ ,(int)offsetof(EditableTextField_obj,expectedType),HX_HCSTRING("expectedType","\x52","\xe9","\xd6","\xd6")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(EditableTextField_obj,defaultFormat),HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(EditableTextField_obj,editFormat),HX_HCSTRING("editFormat","\xe1","\xf0","\x3b","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("isEditing","\x4e","\x22","\xb6","\x29"),
	HX_HCSTRING("allowEditing","\x8f","\xbb","\xf0","\x66"),
	HX_HCSTRING("submitValue","\x39","\x40","\x71","\x15"),
	HX_HCSTRING("expectedType","\x52","\xe9","\xd6","\xd6"),
	HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"),
	HX_HCSTRING("editFormat","\xe1","\xf0","\x3b","\xc3"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("cycleValue","\xeb","\x98","\x68","\xe1"),
	HX_HCSTRING("selectEnd","\x3f","\xa6","\xff","\x8d"),
	HX_HCSTRING("cycleNumericValue","\x2a","\x2f","\x5a","\xf5"),
	HX_HCSTRING("cycleEnumValue","\x2a","\x5f","\x1a","\xb3"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("submit","\x18","\x58","\x06","\x9a"),
	HX_HCSTRING("setIsEditing","\x4c","\xe2","\x05","\x4e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EditableTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EditableTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class EditableTextField_obj::__mClass;

void EditableTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.EditableTextField","\x02","\xf6","\x31","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EditableTextField_obj >;
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
} // end namespace watch
