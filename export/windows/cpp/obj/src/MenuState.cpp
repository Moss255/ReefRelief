// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
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
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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


void MenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",10,0xdfbcb22c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(MaxSize,"MaxSize")
HXLINE(  13)		this->isFullscreen = false;
HXLINE(  10)		super::__construct(MaxSize);
            	}

Dynamic MenuState_obj::__CreateEmpty() { return new MenuState_obj; }

hx::ObjectPtr< MenuState_obj > MenuState_obj::__new( ::Dynamic MaxSize)
{
	hx::ObjectPtr< MenuState_obj > _hx_result = new MenuState_obj();
	_hx_result->__construct(MaxSize);
	return _hx_result;
}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MenuState_obj > _hx_result = new MenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void MenuState_obj::create(){
            	HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",15,0xdfbcb22c)
            	HX_STACK_THIS(this)
HXLINE(  16)		::flixel::FlxG_obj::game->_state->set_bgColor((int)-16246183);
HXLINE(  20)		HX_VAR(  ::flixel::text::FlxText,t);
HXLINE(  21)		Float _hx_tmp = (((Float)::flixel::FlxG_obj::height / (Float)(int)2) - (int)20);
HXDLIN(  21)		t =  ::flixel::text::FlxText_obj::__new((int)0,_hx_tmp,::flixel::FlxG_obj::width,HX_("Reef Relief",1d,a1,15,93),null(),null());
HXLINE(  22)		t->setFormat(HX_("assets/fonts/Oswald-Regular.ttf",e4,c6,d9,7e),(int)42,(int)-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE(  23)		this->add(t);
HXLINE(  25)		Int _hx_tmp1 = (::flixel::FlxG_obj::height - (int)60);
HXDLIN(  25)		t =  ::flixel::text::FlxText_obj::__new((int)0,_hx_tmp1,::flixel::FlxG_obj::width,HX_("Use Arrow Keys to move - F4 for Fullscreen",eb,2f,bc,5b),null(),null());
HXLINE(  26)		t->setFormat(HX_("assets/fonts/Oswald-Regular.ttf",e4,c6,d9,7e),(int)16,(int)-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE(  27)		this->add(t);
HXLINE(  29)		Int _hx_tmp2 = (::flixel::FlxG_obj::height - (int)60);
HXDLIN(  29)		t =  ::flixel::text::FlxText_obj::__new((int)0,_hx_tmp2,::flixel::FlxG_obj::width,HX_("Touch the screen to move",d2,79,9f,a1),null(),null());
HXLINE(  30)		t->setFormat(HX_("assets/fonts/Oswald-Regular.ttf",e4,c6,d9,7e),(int)16,(int)-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE(  31)		this->add(t);
HXLINE(  33)		Int _hx_tmp3 = (::flixel::FlxG_obj::height - (int)30);
HXDLIN(  33)		t =  ::flixel::text::FlxText_obj::__new((int)0,_hx_tmp3,::flixel::FlxG_obj::width,HX_("space to play",5f,a1,5b,9a),null(),null());
HXLINE(  34)		t->setFormat(HX_("assets/fonts/Oswald-Regular.ttf",e4,c6,d9,7e),(int)16,(int)-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE(  35)		this->add(t);
            	}


void MenuState_obj::update(Float elapsed){
            	HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",39,0xdfbcb22c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE(  40)		HX_VARI(  ::flixel::input::keyboard::FlxKeyList,_this) = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justReleased) );
HXDLIN(  40)		Bool _hx_tmp = _this->keyManager->checkStatus((int)32,_this->status);
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  42)			HX_VARI(  ::flixel::FlxState,nextState) =  ::PlayState_obj::__new(null());
HXDLIN(  42)			Bool _hx_tmp1 = ::flixel::FlxG_obj::game->_state->switchTo(nextState);
HXDLIN(  42)			if (_hx_tmp1) {
HXLINE(  42)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE(  45)		HX_VARI_NAME(  ::flixel::input::keyboard::FlxKeyList,_this1,"_this") = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  45)		Bool _hx_tmp2 = _this1->keyManager->checkStatus((int)115,_this1->status);
HXDLIN(  45)		if (_hx_tmp2) {
HXLINE(  47)			Bool _hx_tmp3 = this->isFullscreen;
HXDLIN(  47)			if (_hx_tmp3) {
HXLINE(  48)				this->isFullscreen = false;
            			}
            			else {
HXLINE(  50)				this->isFullscreen = true;
            			}
            		}
HXLINE(  53)		::flixel::FlxG_obj::set_fullscreen(this->isFullscreen);
            	}



MenuState_obj::MenuState_obj()
{
}

hx::Val MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn()); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isFullscreen") ) { return hx::Val( isFullscreen); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MenuState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"isFullscreen") ) { isFullscreen=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isFullscreen","\xc5","\x62","\xd3","\xcb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MenuState_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(MenuState_obj,isFullscreen),HX_HCSTRING("isFullscreen","\xc5","\x62","\xd3","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuState_obj_sMemberFields[] = {
	HX_HCSTRING("isFullscreen","\xc5","\x62","\xd3","\xcb"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void MenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MenuState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MenuState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
