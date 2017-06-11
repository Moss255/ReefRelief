#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
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
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicCloseButton
#include <flixel/system/debug/GraphicCloseButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_EditableTextField
#include <flixel/system/debug/watch/EditableTextField.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#include <flixel/system/debug/watch/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFieldAutoSize
#include <openfl/_legacy/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace watch{

Void WatchEntry_obj::__construct(::String displayName,::flixel::_system::debug::watch::WatchEntryData data,Dynamic removeEntry)
{
HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","new",0x96ec41fc,"flixel.system.debug.watch.WatchEntry.new","flixel/system/debug/watch/WatchEntry.hx",35,0x2bd112d2)
HX_STACK_THIS(this)
HX_STACK_ARG(displayName,"displayName")
HX_STACK_ARG(data,"data")
HX_STACK_ARG(removeEntry,"removeEntry")
{
	HX_STACK_LINE(36)
	super::__construct();
	HX_STACK_LINE(38)
	this->displayName = displayName;
	HX_STACK_LINE(39)
	this->data = data;
	HX_STACK_LINE(41)
	::String tmp = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	int tmp1 = this->getTextColor();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	::openfl::_legacy::text::TextFormat tmp2 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp,(int)12,tmp1,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	this->defaultFormat = tmp2;
	HX_STACK_LINE(42)
	::openfl::_legacy::text::TextField tmp3 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	::openfl::_legacy::text::TextField tmp4 = this->initTextField(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	this->nameText = tmp4;
	HX_STACK_LINE(43)
	Dynamic tmp5 = this->getValue();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	::ValueType tmp6 = ::Type_obj::_typeof(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	::ValueType expectedType = tmp6;		HX_STACK_VAR(expectedType,"expectedType");
	HX_STACK_LINE(45)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	switch( (int)(data->__Index())){
		case (int)0: {
			HX_STACK_LINE(45)
			tmp7 = true;
		}
		;break;
		default: {
			HX_STACK_LINE(45)
			tmp7 = false;
		}
	}
	HX_STACK_LINE(45)
	::openfl::_legacy::text::TextFormat tmp8 = this->defaultFormat;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	Dynamic tmp9 = this->submitValue_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(45)
	::ValueType tmp10 = expectedType;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(45)
	::flixel::_system::debug::watch::EditableTextField tmp11 = ::flixel::_system::debug::watch::EditableTextField_obj::__new(tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(44)
	::flixel::_system::debug::watch::EditableTextField tmp12 = ::flixel::_system::debug::DebuggerUtil_obj::initTextField(tmp11,null(),null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(44)
	::flixel::_system::debug::watch::EditableTextField tmp13 = this->initTextField(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(44)
	this->valueText = tmp13;
	HX_STACK_LINE(47)
	this->updateName();
	HX_STACK_LINE(49)
	::flixel::_system::debug::GraphicCloseButton tmp14 = ::flixel::_system::debug::GraphicCloseButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(49)
	Dynamic tmp15 = removeEntry;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(49)
	Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		Dynamic f = tmp15;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(49)
		::flixel::_system::debug::watch::WatchEntry a1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(a1,"a1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::flixel::_system::debug::watch::WatchEntry,a1,Dynamic,f)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/system/debug/watch/WatchEntry.hx",49,0x2bd112d2)
			{
				HX_STACK_LINE(49)
				::flixel::_system::debug::watch::WatchEntry tmp17 = a1;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(49)
				f(tmp17).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(49)
		tmp16 =  Dynamic(new _Function_2_1(a1,f));
	}
	HX_STACK_LINE(49)
	::flixel::_system::ui::FlxSystemButton tmp17 = ::flixel::_system::ui::FlxSystemButton_obj::__new(tmp14,tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(49)
	::flixel::_system::ui::FlxSystemButton tmp18 = this->removeButton = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(49)
	this->addChild(tmp18);
	HX_STACK_LINE(50)
	::flixel::_system::ui::FlxSystemButton tmp19 = this->removeButton;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(50)
	::flixel::_system::ui::FlxSystemButton tmp20 = this->removeButton;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(50)
	Float tmp21 = tmp20->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(50)
	Float tmp22 = ((int)20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(50)
	Float tmp23 = (Float(tmp22) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(50)
	tmp19->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp23);
	HX_STACK_LINE(51)
	::flixel::_system::ui::FlxSystemButton tmp24 = this->removeButton;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(51)
	tmp24->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(((Float)0.3));
}
;
	return null();
}

//WatchEntry_obj::~WatchEntry_obj() { }

Dynamic WatchEntry_obj::__CreateEmpty() { return  new WatchEntry_obj; }
hx::ObjectPtr< WatchEntry_obj > WatchEntry_obj::__new(::String displayName,::flixel::_system::debug::watch::WatchEntryData data,Dynamic removeEntry)
{  hx::ObjectPtr< WatchEntry_obj > _result_ = new WatchEntry_obj();
	_result_->__construct(displayName,data,removeEntry);
	return _result_;}

Dynamic WatchEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WatchEntry_obj > _result_ = new WatchEntry_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *WatchEntry_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

WatchEntry_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< WatchEntry_obj >(this); }
int WatchEntry_obj::getTextColor( ){
	HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","getTextColor",0xd55318e4,"flixel.system.debug.watch.WatchEntry.getTextColor","flixel/system/debug/watch/WatchEntry.hx",55,0x2bd112d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		::flixel::_system::debug::watch::WatchEntryData tmp1 = this->data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		::flixel::_system::debug::watch::WatchEntryData _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(58)
				tmp = (int)16777215;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(59)
				tmp = (int)10875373;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(60)
				tmp = (int)12910211;
			}
			;break;
		}
	}
	HX_STACK_LINE(56)
	return tmp;
	HX_STACK_LINE(56)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getTextColor,return )

Dynamic WatchEntry_obj::initTextField( Dynamic textField){
	HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","initTextField",0x8df9f439,"flixel.system.debug.watch.WatchEntry.initTextField","flixel/system/debug/watch/WatchEntry.hx",65,0x2bd112d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(66)
	textField->__Field(HX_HCSTRING("set_selectable","\x53","\x27","\x40","\x5a"), hx::paccDynamic )(true);
	HX_STACK_LINE(67)
	::openfl::_legacy::text::TextFormat tmp = this->defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	textField->__Field(HX_HCSTRING("set_defaultTextFormat","\xc8","\x98","\x97","\xdd"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(68)
	textField->__Field(HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"), hx::paccDynamic )(::openfl::_legacy::text::TextFieldAutoSize_obj::NONE);
	HX_STACK_LINE(69)
	textField->__Field(HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"), hx::paccDynamic )((int)20);
	HX_STACK_LINE(70)
	Dynamic tmp1 = textField;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	this->addChild(tmp1);
	HX_STACK_LINE(71)
	Dynamic tmp2 = textField;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,initTextField,return )

Void WatchEntry_obj::updateSize( Float nameWidth,Float windowWidth){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","updateSize",0x108dc54e,"flixel.system.debug.watch.WatchEntry.updateSize","flixel/system/debug/watch/WatchEntry.hx",75,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nameWidth,"nameWidth")
		HX_STACK_ARG(windowWidth,"windowWidth")
		HX_STACK_LINE(76)
		Float tmp = windowWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		::flixel::_system::ui::FlxSystemButton tmp1 = this->removeButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		Float tmp2 = tmp1->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		Float tmp4 = (tmp3 - (int)4);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		Float textWidth = tmp4;		HX_STACK_VAR(textWidth,"textWidth");
		HX_STACK_LINE(78)
		::openfl::_legacy::text::TextField tmp5 = this->nameText;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		Float tmp6 = nameWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		tmp5->set_width(tmp6);
		HX_STACK_LINE(79)
		::flixel::_system::debug::watch::EditableTextField tmp7 = this->valueText;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(79)
		Float tmp8 = (nameWidth + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(79)
		tmp7->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp8);
		HX_STACK_LINE(80)
		::flixel::_system::debug::watch::EditableTextField tmp9 = this->valueText;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(80)
		Float tmp10 = (textWidth - nameWidth);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(80)
		Float tmp11 = (tmp10 - (int)4);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(80)
		tmp9->__Field(HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"), hx::paccDynamic )(tmp11);
		HX_STACK_LINE(81)
		::flixel::_system::ui::FlxSystemButton tmp12 = this->removeButton;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(81)
		Float tmp13 = textWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(81)
		tmp12->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WatchEntry_obj,updateSize,(void))

Void WatchEntry_obj::updateName( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","updateName",0x0d3996d8,"flixel.system.debug.watch.WatchEntry.updateName","flixel/system/debug/watch/WatchEntry.hx",85,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		::String tmp = this->displayName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		if ((tmp1)){
			HX_STACK_LINE(88)
			::String tmp2 = this->displayName;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			this->setNameText(tmp2);
			HX_STACK_LINE(89)
			return null();
		}
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			::flixel::_system::debug::watch::WatchEntryData tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			::flixel::_system::debug::watch::WatchEntryData _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(92)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(92)
					::String tmp3 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(92)
					::String field = tmp3;		HX_STACK_VAR(field,"field");
					HX_STACK_LINE(92)
					Dynamic tmp4 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(92)
					Dynamic object = tmp4;		HX_STACK_VAR(object,"object");
					HX_STACK_LINE(94)
					{
						HX_STACK_LINE(95)
						Dynamic tmp5 = object;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(95)
						::String tmp6 = ::flixel::util::FlxStringUtil_obj::getClassName(tmp5,true);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(95)
						::String tmp7 = (tmp6 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						::String tmp8 = field;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(95)
						::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(95)
						this->setNameText(tmp9);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(92)
					::String tmp3 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(92)
					::String expression = tmp3;		HX_STACK_VAR(expression,"expression");
					HX_STACK_LINE(96)
					{
						HX_STACK_LINE(97)
						::String tmp4 = expression;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(97)
						this->setNameText(tmp4);
					}
				}
				;break;
				case (int)1: {
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateName,(void))

Void WatchEntry_obj::setNameText( ::String name){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","setNameText",0x82ef23f6,"flixel.system.debug.watch.WatchEntry.setNameText","flixel/system/debug/watch/WatchEntry.hx",103,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(104)
		::openfl::_legacy::text::TextField tmp = this->nameText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		tmp->set_text(tmp1);
		HX_STACK_LINE(105)
		::openfl::_legacy::text::TextField tmp2 = this->nameText;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		Float tmp3 = tmp2->get_textWidth();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		Float tmp4 = (tmp3 + (int)4);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		Float currentWidth = tmp4;		HX_STACK_VAR(currentWidth,"currentWidth");
		HX_STACK_LINE(106)
		::openfl::_legacy::text::TextField tmp5 = this->nameText;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(106)
		Float tmp6 = currentWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(106)
		Float tmp7 = ::Math_obj::min(tmp6,(int)125);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		tmp5->set_width(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,setNameText,(void))

Dynamic WatchEntry_obj::getValue( ){
	HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","getValue",0xc769c7df,"flixel.system.debug.watch.WatchEntry.getValue","flixel/system/debug/watch/WatchEntry.hx",110,0x2bd112d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		::flixel::_system::debug::watch::WatchEntryData tmp1 = this->data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		::flixel::_system::debug::watch::WatchEntryData _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(111)
				::String tmp2 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(111)
				::String field = tmp2;		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(111)
				Dynamic tmp3 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(111)
				Dynamic object = tmp3;		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(113)
				{
					HX_STACK_LINE(114)
					Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(114)
					::String tmp5 = field;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(114)
					tmp = ::Reflect_obj::getProperty(tmp4,tmp5);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(111)
				::String tmp2 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(111)
				::String expression = tmp2;		HX_STACK_VAR(expression,"expression");
				HX_STACK_LINE(119)
				tmp = HX_HCSTRING("hscript is not installed","\x84","\x84","\xf9","\x28");
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(111)
				::String tmp2 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(111)
				::String value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(122)
				tmp = value;
			}
			;break;
		}
	}
	HX_STACK_LINE(111)
	return tmp;
	HX_STACK_LINE(111)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getValue,return )

::String WatchEntry_obj::getFormattedValue( ){
	HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","getFormattedValue",0xb861eca7,"flixel.system.debug.watch.WatchEntry.getFormattedValue","flixel/system/debug/watch/WatchEntry.hx",127,0x2bd112d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	Dynamic tmp = this->getValue();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	Dynamic value = tmp;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(129)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	if ((tmp2)){
		HX_STACK_LINE(130)
		Float tmp3 = ((Float)(value));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp4 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		int tmp5 = tmp4->__Field(HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		Float tmp6 = ::flixel::math::FlxMath_obj::roundDecimal(tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		value = tmp6;
	}
	HX_STACK_LINE(131)
	Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(131)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(131)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getFormattedValue,return )

Void WatchEntry_obj::submitValue( Dynamic value){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","submitValue",0x1e7eadd5,"flixel.system.debug.watch.WatchEntry.submitValue","flixel/system/debug/watch/WatchEntry.hx",136,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::flixel::_system::debug::watch::WatchEntryData tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(136)
			::flixel::_system::debug::watch::WatchEntryData _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(136)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(136)
					::String tmp1 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(136)
					::String field = tmp1;		HX_STACK_VAR(field,"field");
					HX_STACK_LINE(136)
					Dynamic tmp2 = (::flixel::_system::debug::watch::WatchEntryData(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(136)
					Dynamic object = tmp2;		HX_STACK_VAR(object,"object");
					HX_STACK_LINE(138)
					{
						HX_STACK_LINE(139)
						Dynamic tmp3 = object;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(139)
						::String tmp4 = field;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(139)
						Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(139)
						::Reflect_obj::setProperty(tmp3,tmp4,tmp5);
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,submitValue,(void))

Void WatchEntry_obj::updateValue( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","updateValue",0x205e5644,"flixel.system.debug.watch.WatchEntry.updateValue","flixel/system/debug/watch/WatchEntry.hx",145,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		::flixel::_system::debug::watch::EditableTextField tmp = this->valueText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		bool tmp1 = tmp->__Field(HX_HCSTRING("isEditing","\x4e","\x22","\xb6","\x29"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		if ((tmp2)){
			HX_STACK_LINE(147)
			::flixel::_system::debug::watch::EditableTextField tmp3 = this->valueText;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			::String tmp4 = this->getFormattedValue();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			tmp3->__Field(HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"), hx::paccDynamic )(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateValue,(void))

Float WatchEntry_obj::getNameWidth( ){
	HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","getNameWidth",0xb6209b29,"flixel.system.debug.watch.WatchEntry.getNameWidth","flixel/system/debug/watch/WatchEntry.hx",151,0x2bd112d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	::openfl::_legacy::text::TextField tmp = this->nameText;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	Float tmp1 = tmp->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getNameWidth,return )

Float WatchEntry_obj::getMinWidth( ){
	HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","getMinWidth",0xf09b5366,"flixel.system.debug.watch.WatchEntry.getMinWidth","flixel/system/debug/watch/WatchEntry.hx",156,0x2bd112d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	::flixel::_system::debug::watch::EditableTextField tmp = this->valueText;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	Float tmp1 = tmp->__Field(HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	int tmp2 = (int)8;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	::flixel::_system::ui::FlxSystemButton tmp4 = this->removeButton;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(157)
	Float tmp5 = tmp4->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(157)
	Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(157)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,getMinWidth,return )

Void WatchEntry_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","destroy",0x012d9c96,"flixel.system.debug.watch.WatchEntry.destroy","flixel/system/debug/watch/WatchEntry.hx",161,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(162)
		::openfl::_legacy::text::TextField tmp = this->nameText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		::openfl::_legacy::text::TextField tmp1 = ::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		this->nameText = tmp1;
		HX_STACK_LINE(163)
		::flixel::_system::debug::watch::EditableTextField tmp2 = this->valueText;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);
		HX_STACK_LINE(164)
		::flixel::_system::debug::watch::EditableTextField tmp3 = this->valueText;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		::flixel::_system::debug::watch::EditableTextField tmp4 = ::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		this->valueText = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,destroy,(void))

int WatchEntry_obj::GUTTER;

int WatchEntry_obj::TEXT_HEIGHT;

int WatchEntry_obj::MAX_NAME_WIDTH;


WatchEntry_obj::WatchEntry_obj()
{
}

void WatchEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WatchEntry);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(displayName,"displayName");
	HX_MARK_MEMBER_NAME(nameText,"nameText");
	HX_MARK_MEMBER_NAME(valueText,"valueText");
	HX_MARK_MEMBER_NAME(removeButton,"removeButton");
	HX_MARK_MEMBER_NAME(defaultFormat,"defaultFormat");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WatchEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(displayName,"displayName");
	HX_VISIT_MEMBER_NAME(nameText,"nameText");
	HX_VISIT_MEMBER_NAME(valueText,"valueText");
	HX_VISIT_MEMBER_NAME(removeButton,"removeButton");
	HX_VISIT_MEMBER_NAME(defaultFormat,"defaultFormat");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic WatchEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nameText") ) { return nameText; }
		if (HX_FIELD_EQ(inName,"getValue") ) { return getValue_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueText") ) { return valueText; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		if (HX_FIELD_EQ(inName,"updateName") ) { return updateName_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayName") ) { return displayName; }
		if (HX_FIELD_EQ(inName,"setNameText") ) { return setNameText_dyn(); }
		if (HX_FIELD_EQ(inName,"submitValue") ) { return submitValue_dyn(); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return updateValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getMinWidth") ) { return getMinWidth_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { return removeButton; }
		if (HX_FIELD_EQ(inName,"getTextColor") ) { return getTextColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getNameWidth") ) { return getNameWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { return defaultFormat; }
		if (HX_FIELD_EQ(inName,"initTextField") ) { return initTextField_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFormattedValue") ) { return getFormattedValue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WatchEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::flixel::_system::debug::watch::WatchEntryData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nameText") ) { nameText=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueText") ) { valueText=inValue.Cast< ::flixel::_system::debug::watch::EditableTextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayName") ) { displayName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { removeButton=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { defaultFormat=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WatchEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("displayName","\xad","\x11","\xf2","\x30"));
	outFields->push(HX_HCSTRING("nameText","\x98","\xec","\x80","\x49"));
	outFields->push(HX_HCSTRING("valueText","\xbe","\x84","\x7e","\x99"));
	outFields->push(HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49"));
	outFields->push(HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::debug::watch::WatchEntryData*/ ,(int)offsetof(WatchEntry_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsString,(int)offsetof(WatchEntry_obj,displayName),HX_HCSTRING("displayName","\xad","\x11","\xf2","\x30")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(WatchEntry_obj,nameText),HX_HCSTRING("nameText","\x98","\xec","\x80","\x49")},
	{hx::fsObject /*::flixel::_system::debug::watch::EditableTextField*/ ,(int)offsetof(WatchEntry_obj,valueText),HX_HCSTRING("valueText","\xbe","\x84","\x7e","\x99")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(WatchEntry_obj,removeButton),HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(WatchEntry_obj,defaultFormat),HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &WatchEntry_obj::GUTTER,HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c")},
	{hx::fsInt,(void *) &WatchEntry_obj::TEXT_HEIGHT,HX_HCSTRING("TEXT_HEIGHT","\x79","\xd0","\xdc","\x87")},
	{hx::fsInt,(void *) &WatchEntry_obj::MAX_NAME_WIDTH,HX_HCSTRING("MAX_NAME_WIDTH","\xcd","\x26","\x03","\x84")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("displayName","\xad","\x11","\xf2","\x30"),
	HX_HCSTRING("nameText","\x98","\xec","\x80","\x49"),
	HX_HCSTRING("valueText","\xbe","\x84","\x7e","\x99"),
	HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49"),
	HX_HCSTRING("defaultFormat","\xd8","\x62","\x07","\xf8"),
	HX_HCSTRING("getTextColor","\x00","\x9e","\xa0","\xf2"),
	HX_HCSTRING("initTextField","\x9d","\xe7","\x80","\x14"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	HX_HCSTRING("updateName","\xf4","\x5c","\xb4","\x01"),
	HX_HCSTRING("setNameText","\x5a","\xb6","\xe1","\x79"),
	HX_HCSTRING("getValue","\xfb","\x8e","\x8f","\x91"),
	HX_HCSTRING("getFormattedValue","\x0b","\x62","\xf0","\xec"),
	HX_HCSTRING("submitValue","\x39","\x40","\x71","\x15"),
	HX_HCSTRING("updateValue","\xa8","\xe8","\x50","\x17"),
	HX_HCSTRING("getNameWidth","\x45","\x20","\x6e","\xd3"),
	HX_HCSTRING("getMinWidth","\xca","\xe5","\x8d","\xe7"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WatchEntry_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(WatchEntry_obj::TEXT_HEIGHT,"TEXT_HEIGHT");
	HX_MARK_MEMBER_NAME(WatchEntry_obj::MAX_NAME_WIDTH,"MAX_NAME_WIDTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::TEXT_HEIGHT,"TEXT_HEIGHT");
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::MAX_NAME_WIDTH,"MAX_NAME_WIDTH");
};

#endif

hx::Class WatchEntry_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c"),
	HX_HCSTRING("TEXT_HEIGHT","\x79","\xd0","\xdc","\x87"),
	HX_HCSTRING("MAX_NAME_WIDTH","\xcd","\x26","\x03","\x84"),
	::String(null()) };

void WatchEntry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.WatchEntry","\x0a","\xd4","\x34","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WatchEntry_obj >;
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

void WatchEntry_obj::__boot()
{
	GUTTER= (int)4;
	TEXT_HEIGHT= (int)20;
	MAX_NAME_WIDTH= (int)125;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
