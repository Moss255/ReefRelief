#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_SplashState
#include <SplashState.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",9,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(9)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	super::__construct(tmp);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",13,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		tmp->_state->set_bgColor((int)-16246183);
		HX_STACK_LINE(16)
		::flixel::input::mouse::FlxMouse tmp1 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		tmp1->set_visible(false);
		HX_STACK_LINE(19)
		::flixel::text::FlxText t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(20)
		int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		Float tmp4 = (tmp3 - (int)20);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		int tmp5 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(20)
		::flixel::text::FlxText tmp6 = ::flixel::text::FlxText_obj::__new((int)0,tmp4,tmp5,HX_HCSTRING("Reef Relief","\x1d","\xa1","\x15","\x93"),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(20)
		t = tmp6;
		HX_STACK_LINE(21)
		t->setFormat(HX_HCSTRING("assets/fonts/Oswald-Regular.ttf","\xe4","\xc6","\xd9","\x7e"),(int)42,(int)-1,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,null(),null());
		HX_STACK_LINE(22)
		::flixel::text::FlxText tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(22)
		this->add(tmp7);
		HX_STACK_LINE(24)
		int tmp8 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(24)
		int tmp9 = (tmp8 - (int)60);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(24)
		int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(24)
		::flixel::text::FlxText tmp11 = ::flixel::text::FlxText_obj::__new((int)0,tmp9,tmp10,HX_HCSTRING("Use Arrow Keys to move and collect the barrells","\x01","\xad","\xbb","\xed"),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(24)
		t = tmp11;
		HX_STACK_LINE(25)
		t->setFormat(HX_HCSTRING("assets/fonts/Oswald-Regular.ttf","\xe4","\xc6","\xd9","\x7e"),(int)16,(int)-1,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,null(),null());
		HX_STACK_LINE(26)
		::flixel::text::FlxText tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(26)
		this->add(tmp12);
		HX_STACK_LINE(28)
		int tmp13 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(28)
		int tmp14 = (tmp13 - (int)30);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(28)
		int tmp15 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(28)
		::flixel::text::FlxText tmp16 = ::flixel::text::FlxText_obj::__new((int)0,tmp14,tmp15,HX_HCSTRING("space to play","\x5f","\xa1","\x5b","\x9a"),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(28)
		t = tmp16;
		HX_STACK_LINE(29)
		t->setFormat(HX_HCSTRING("assets/fonts/Oswald-Regular.ttf","\xe4","\xc6","\xd9","\x7e"),(int)16,(int)-1,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,null(),null());
		HX_STACK_LINE(30)
		::flixel::text::FlxText tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(30)
		this->add(tmp17);
	}
return null();
}


Void MenuState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",34,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(35)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::flixel::input::keyboard::FlxKeyboard tmp1 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			::flixel::input::keyboard::FlxKeyList _this = tmp1->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(35)
			int tmp2 = _this->status;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			tmp = _this->keyManager->checkStatus((int)32,tmp2);
		}
		HX_STACK_LINE(35)
		if ((tmp)){
			HX_STACK_LINE(37)
			::SplashState tmp1 = ::SplashState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(37)
			::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
			HX_STACK_LINE(37)
			::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(37)
			::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			if ((tmp4)){
				HX_STACK_LINE(37)
				::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				tmp5->_requestedState = nextState;
			}
		}
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

Dynamic MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
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
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
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

