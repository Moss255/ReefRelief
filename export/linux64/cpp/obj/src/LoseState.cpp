#include <hxcpp.h>

#ifndef INCLUDED_LoseState
#include <LoseState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
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
#ifndef INCLUDED_openfl__legacy_system_System
#include <openfl/_legacy/system/System.h>
#endif

Void LoseState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("LoseState","new",0xb0ce16ce,"LoseState.new","LoseState.hx",9,0x390b3c62)
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

//LoseState_obj::~LoseState_obj() { }

Dynamic LoseState_obj::__CreateEmpty() { return  new LoseState_obj; }
hx::ObjectPtr< LoseState_obj > LoseState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< LoseState_obj > _result_ = new LoseState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic LoseState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoseState_obj > _result_ = new LoseState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void LoseState_obj::create( ){
{
		HX_STACK_FRAME("LoseState","create",0x617a594e,"LoseState.create","LoseState.hx",12,0x390b3c62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(13)
		this->super::create();
		HX_STACK_LINE(15)
		::flixel::text::FlxText t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(16)
		int tmp = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		Float tmp2 = (tmp1 - (int)20);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		int tmp3 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		::flixel::text::FlxText tmp4 = ::flixel::text::FlxText_obj::__new((int)0,tmp2,tmp3,HX_HCSTRING("Your ship has been damage beyond repair :(","\x0a","\x5e","\x77","\x96"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		t = tmp4;
		HX_STACK_LINE(17)
		t->setFormat(HX_HCSTRING("assets/fonts/Oswald-Regular.ttf","\xe4","\xc6","\xd9","\x7e"),(int)42,(int)-1,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,null(),null());
		HX_STACK_LINE(18)
		::flixel::text::FlxText tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(18)
		this->add(tmp5);
		HX_STACK_LINE(20)
		int tmp6 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(20)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(20)
		Float tmp8 = (tmp7 + (int)120);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(20)
		int tmp9 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(20)
		::flixel::text::FlxText tmp10 = ::flixel::text::FlxText_obj::__new((int)0,tmp8,tmp9,HX_HCSTRING("Press 'Space' to restart","\xbf","\x0f","\x5d","\xbf"),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(20)
		t = tmp10;
		HX_STACK_LINE(21)
		t->setFormat(HX_HCSTRING("assets/fonts/Oswald-Regular.ttf","\xe4","\xc6","\xd9","\x7e"),(int)16,(int)-1,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,null(),null());
		HX_STACK_LINE(22)
		::flixel::text::FlxText tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(22)
		this->add(tmp11);
	}
return null();
}


Void LoseState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("LoseState","update",0x6c70785b,"LoseState.update","LoseState.hx",26,0x390b3c62)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(28)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			::flixel::input::keyboard::FlxKeyboard tmp1 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			::flixel::input::keyboard::FlxKeyList _this = tmp1->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(28)
			int tmp2 = _this->status;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			tmp = _this->keyManager->checkStatus((int)27,tmp2);
		}
		HX_STACK_LINE(28)
		if ((tmp)){
			HX_STACK_LINE(30)
			::openfl::_legacy::_system::System_obj::exit((int)0);
		}
		else{
			HX_STACK_LINE(32)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(32)
				::flixel::input::keyboard::FlxKeyList _this = tmp2->pressed;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(32)
				int tmp3 = _this->status;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(32)
				tmp1 = _this->keyManager->checkStatus((int)32,tmp3);
			}
			HX_STACK_LINE(32)
			if ((tmp1)){
				HX_STACK_LINE(34)
				::MenuState tmp2 = ::MenuState_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(34)
				::flixel::FlxState nextState = tmp2;		HX_STACK_VAR(nextState,"nextState");
				HX_STACK_LINE(34)
				::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(34)
				::flixel::FlxState tmp4 = nextState;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				bool tmp5 = tmp3->_state->switchTo(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(34)
				if ((tmp5)){
					HX_STACK_LINE(34)
					::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(34)
					tmp6->_requestedState = nextState;
				}
			}
		}
		HX_STACK_LINE(38)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		this->super::update(tmp1);
	}
return null();
}



LoseState_obj::LoseState_obj()
{
}

Dynamic LoseState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(LoseState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoseState_obj::__mClass,"__mClass");
};

#endif

hx::Class LoseState_obj::__mClass;

void LoseState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("LoseState","\xdc","\x57","\xf3","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LoseState_obj >;
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

