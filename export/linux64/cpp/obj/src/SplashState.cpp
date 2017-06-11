#include <hxcpp.h>

#ifndef INCLUDED_Pickup
#include <Pickup.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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

Void SplashState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("SplashState","new",0x8aae74fc,"SplashState.new","SplashState.hx",9,0x800c3df4)
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

//SplashState_obj::~SplashState_obj() { }

Dynamic SplashState_obj::__CreateEmpty() { return  new SplashState_obj; }
hx::ObjectPtr< SplashState_obj > SplashState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< SplashState_obj > _result_ = new SplashState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic SplashState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SplashState_obj > _result_ = new SplashState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void SplashState_obj::create( ){
{
		HX_STACK_FRAME("SplashState","create",0x34108be0,"SplashState.create","SplashState.hx",14,0x800c3df4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15)
		int tmp = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(15)
		int tmp1 = (tmp - (int)64);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		int tmp2 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		::Pickup tmp3 = ::Pickup_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		this->_pickup = tmp3;
		HX_STACK_LINE(17)
		::flixel::text::FlxText t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(18)
		int tmp4 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(18)
		Float tmp5 = (Float(tmp4) / Float((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(18)
		int tmp6 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(18)
		::flixel::text::FlxText tmp7 = ::flixel::text::FlxText_obj::__new((int)0,tmp5,tmp6,HX_HCSTRING("How to play","\x09","\xd2","\xe1","\xc3"),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(18)
		t = tmp7;
		HX_STACK_LINE(19)
		t->setFormat(HX_HCSTRING("assets/fonts/Oswald-Regular.ttf","\xe4","\xc6","\xd9","\x7e"),(int)32,(int)-1,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,null(),null());
		HX_STACK_LINE(20)
		::flixel::text::FlxText tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(20)
		this->add(tmp8);
		HX_STACK_LINE(22)
		::flixel::FlxSprite tmp9 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(22)
		::flixel::FlxSprite player = tmp9;		HX_STACK_VAR(player,"player");
		HX_STACK_LINE(23)
		player->loadGraphic(HX_HCSTRING("assets/images/sub.png","\x70","\x6a","\xd5","\xf3"),null(),null(),null(),null(),null());
		HX_STACK_LINE(24)
		int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(24)
		Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(24)
		player->set_x(tmp11);
		HX_STACK_LINE(25)
		player->set_y((int)120);
		HX_STACK_LINE(26)
		player->setGraphicSize((int)64,(int)64);
		HX_STACK_LINE(27)
		::flixel::FlxSprite tmp12 = player;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(27)
		this->add(tmp12);
		HX_STACK_LINE(29)
		::flixel::FlxSprite tmp13 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(29)
		::flixel::FlxSprite enemy = tmp13;		HX_STACK_VAR(enemy,"enemy");
		HX_STACK_LINE(30)
		enemy->loadGraphic(HX_HCSTRING("assets/images/Urchin.png","\xed","\x7a","\x9a","\x6b"),null(),null(),null(),null(),null());
		HX_STACK_LINE(31)
		int tmp14 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(31)
		Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(31)
		enemy->set_x(tmp15);
		HX_STACK_LINE(32)
		enemy->set_y((int)280);
		HX_STACK_LINE(33)
		enemy->setGraphicSize((int)64,(int)64);
		HX_STACK_LINE(34)
		::flixel::FlxSprite tmp16 = enemy;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(34)
		this->add(tmp16);
		HX_STACK_LINE(36)
		::flixel::FlxSprite tmp17 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(36)
		::flixel::FlxSprite pickup = tmp17;		HX_STACK_VAR(pickup,"pickup");
		HX_STACK_LINE(37)
		pickup->loadGraphic(HX_HCSTRING("assets/images/barrell.png","\xb6","\x06","\x35","\x2e"),null(),null(),null(),null(),null());
		HX_STACK_LINE(38)
		int tmp18 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(38)
		Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(38)
		pickup->set_x(tmp19);
		HX_STACK_LINE(39)
		pickup->set_y((int)400);
		HX_STACK_LINE(40)
		pickup->setGraphicSize((int)64,(int)64);
		HX_STACK_LINE(41)
		::flixel::FlxSprite tmp20 = pickup;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(41)
		this->add(tmp20);
		HX_STACK_LINE(43)
		int tmp21 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(43)
		Float tmp22 = (Float(tmp21) / Float((int)3));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(43)
		int tmp23 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(43)
		::flixel::text::FlxText tmp24 = ::flixel::text::FlxText_obj::__new((int)0,tmp22,tmp23,HX_HCSTRING("This is your submarine","\x29","\x87","\x70","\x3f"),null(),null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(43)
		t = tmp24;
		HX_STACK_LINE(44)
		t->setFormat(HX_HCSTRING("assets/fonts/Oswald-Regular.ttf","\xe4","\xc6","\xd9","\x7e"),(int)16,(int)-1,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,null(),null());
		HX_STACK_LINE(45)
		::flixel::text::FlxText tmp25 = t;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(45)
		this->add(tmp25);
		HX_STACK_LINE(47)
		int tmp26 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(47)
		Float tmp27 = (Float(tmp26) / Float((int)3));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(47)
		Float tmp28 = (tmp27 * (int)2);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(47)
		int tmp29 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(47)
		::flixel::text::FlxText tmp30 = ::flixel::text::FlxText_obj::__new((int)0,tmp28,tmp29,HX_HCSTRING("These are the urchins you should avoid","\x95","\x62","\x59","\x9d"),null(),null());		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(47)
		t = tmp30;
		HX_STACK_LINE(48)
		t->setFormat(HX_HCSTRING("assets/fonts/Oswald-Regular.ttf","\xe4","\xc6","\xd9","\x7e"),(int)16,(int)-1,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,null(),null());
		HX_STACK_LINE(49)
		::flixel::text::FlxText tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(49)
		this->add(tmp31);
		HX_STACK_LINE(51)
		int tmp32 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(51)
		int tmp33 = (tmp32 - (int)32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(51)
		int tmp34 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(51)
		::flixel::text::FlxText tmp35 = ::flixel::text::FlxText_obj::__new((int)0,tmp33,tmp34,HX_HCSTRING("These are the barrells you should collect","\x39","\xc3","\x67","\x38"),null(),null());		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(51)
		t = tmp35;
		HX_STACK_LINE(52)
		t->setFormat(HX_HCSTRING("assets/fonts/Oswald-Regular.ttf","\xe4","\xc6","\xd9","\x7e"),(int)16,(int)-1,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,null(),null());
		HX_STACK_LINE(53)
		::flixel::text::FlxText tmp36 = t;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(53)
		this->add(tmp36);
	}
return null();
}


Void SplashState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("SplashState","update",0x3f06aaed,"SplashState.update","SplashState.hx",59,0x800c3df4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(60)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::flixel::input::keyboard::FlxKeyboard tmp1 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(60)
			::flixel::input::keyboard::FlxKeyList _this = tmp1->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(60)
			int tmp2 = _this->status;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			tmp = _this->keyManager->checkStatus((int)32,tmp2);
		}
		HX_STACK_LINE(60)
		if ((tmp)){
			HX_STACK_LINE(62)
			::PlayState tmp1 = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(62)
			::flixel::FlxState nextState = tmp1;		HX_STACK_VAR(nextState,"nextState");
			HX_STACK_LINE(62)
			::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			::flixel::FlxState tmp3 = nextState;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			bool tmp4 = tmp2->_state->switchTo(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			if ((tmp4)){
				HX_STACK_LINE(62)
				::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(62)
				tmp5->_requestedState = nextState;
			}
		}
	}
return null();
}



SplashState_obj::SplashState_obj()
{
}

void SplashState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SplashState);
	HX_MARK_MEMBER_NAME(_pickup,"_pickup");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SplashState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pickup,"_pickup");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SplashState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pickup") ) { return _pickup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SplashState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_pickup") ) { _pickup=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SplashState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_pickup","\x1b","\x1b","\x44","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(SplashState_obj,_pickup),HX_HCSTRING("_pickup","\x1b","\x1b","\x44","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_pickup","\x1b","\x1b","\x44","\xed"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SplashState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SplashState_obj::__mClass,"__mClass");
};

#endif

hx::Class SplashState_obj::__mClass;

void SplashState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("SplashState","\x0a","\x87","\x21","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SplashState_obj >;
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

