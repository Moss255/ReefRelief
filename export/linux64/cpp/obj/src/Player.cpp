#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

Void Player_obj::__construct()
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",10,0xa27fc9dd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->lives = (int)5;
	HX_STACK_LINE(16)
	int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	Float tmp2 = (tmp1 - (int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	int tmp4 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16)
	Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(16)
	Float tmp6 = (tmp5 - (int)8);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(16)
	int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(16)
	super::__construct(tmp3,tmp7,null());
	HX_STACK_LINE(18)
	this->set_antialiasing(true);
	HX_STACK_LINE(20)
	this->loadGraphic(HX_HCSTRING("assets/images/sub.png","\x70","\x6a","\xd5","\xf3"),null(),null(),null(),null(),null());
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		Float tmp8 = _g->get_width();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(22)
		Float tmp9 = (tmp8 * ((Float)0.75));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(22)
		_g->set_width(tmp9);
	}
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		Float tmp8 = _g->get_height();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(23)
		Float tmp9 = (tmp8 * ((Float)0.75));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(23)
		_g->set_height(tmp9);
	}
	HX_STACK_LINE(24)
	this->set_x((int)330);
	HX_STACK_LINE(25)
	this->set_y((int)60);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct();
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct();
	return _result_;}

int Player_obj::getLives( ){
	HX_STACK_FRAME("Player","getLives",0x6655061e,"Player.getLives","Player.hx",29,0xa27fc9dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	int tmp = this->lives;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getLives,return )

Void Player_obj::setLives( int newLives){
{
		HX_STACK_FRAME("Player","setLives",0x14b25f92,"Player.setLives","Player.hx",35,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newLives,"newLives")
		HX_STACK_LINE(35)
		hx::SubEq(this->lives,newLives);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,setLives,(void))

::flixel::math::FlxPoint Player_obj::getPos( ){
	HX_STACK_FRAME("Player","getPos",0x0e17efeb,"Player.getPos","Player.hx",39,0xa27fc9dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	::flixel::math::FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getPos,return )

Void Player_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",44,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(45)
		this->angularVelocity = (int)0;
		HX_STACK_LINE(46)
		Float speed = (int)0;		HX_STACK_VAR(speed,"speed");
		HX_STACK_LINE(48)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		bool tmp1 = tmp->checkKeyArrayState(Array_obj< int >::__new().Add((int)65).Add((int)37),(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		if ((tmp1)){
			HX_STACK_LINE(50)
			hx::SubEq(this->angularVelocity,(int)240);
		}
		HX_STACK_LINE(53)
		::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		bool tmp3 = tmp2->checkKeyArrayState(Array_obj< int >::__new().Add((int)68).Add((int)39),(int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		if ((tmp3)){
			HX_STACK_LINE(55)
			hx::AddEq(this->angularVelocity,(int)240);
		}
		HX_STACK_LINE(58)
		::flixel::input::keyboard::FlxKeyboard tmp4 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		bool tmp5 = tmp4->checkKeyArrayState(Array_obj< int >::__new().Add((int)87).Add((int)38),(int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		if ((tmp5)){
			HX_STACK_LINE(60)
			hx::AddEq(speed,(int)60);
			HX_STACK_LINE(61)
			::flixel::math::FlxPoint tmp6 = this->velocity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			Float tmp7 = speed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			tmp6->set(tmp7,(int)0);
			HX_STACK_LINE(62)
			::flixel::math::FlxPoint tmp8 = this->velocity;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			::flixel::math::FlxPoint tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				::flixel::math::FlxPoint tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				{
					HX_STACK_LINE(62)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp11 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(62)
					::flixel::math::FlxPoint tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(62)
					::flixel::math::FlxPoint tmp13 = tmp12->set((int)0,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(62)
					point->_inPool = false;
					HX_STACK_LINE(62)
					tmp10 = point;
				}
				HX_STACK_LINE(62)
				::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(62)
				point->_weak = true;
				HX_STACK_LINE(62)
				tmp9 = point;
			}
			HX_STACK_LINE(62)
			Float tmp10 = this->angle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(62)
			tmp8->rotate(tmp9,tmp10);
		}
		HX_STACK_LINE(66)
		::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		bool tmp7 = tmp6->checkKeyArrayState(Array_obj< int >::__new().Add((int)83).Add((int)40),(int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		if ((tmp7)){
			HX_STACK_LINE(68)
			speed = (int)0;
			HX_STACK_LINE(69)
			::flixel::math::FlxPoint tmp8 = this->velocity;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			Float tmp9 = speed;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(69)
			tmp8->set(tmp9,(int)0);
			HX_STACK_LINE(70)
			::flixel::math::FlxPoint tmp10 = this->velocity;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(70)
			::flixel::math::FlxPoint tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::flixel::math::FlxPoint tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp13 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(70)
					::flixel::math::FlxPoint tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(70)
					::flixel::math::FlxPoint tmp15 = tmp14->set((int)0,(int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(70)
					::flixel::math::FlxPoint point = tmp15;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(70)
					point->_inPool = false;
					HX_STACK_LINE(70)
					tmp12 = point;
				}
				HX_STACK_LINE(70)
				::flixel::math::FlxPoint point = tmp12;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(70)
				point->_weak = true;
				HX_STACK_LINE(70)
				tmp11 = point;
			}
			HX_STACK_LINE(70)
			Float tmp12 = this->angle;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(70)
			tmp10->rotate(tmp11,tmp12);
		}
		HX_STACK_LINE(73)
		Float tmp8 = elapsed;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		this->super::update(tmp8);
	}
return null();
}



Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lives") ) { return lives; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getPos") ) { return getPos_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getLives") ) { return getLives_dyn(); }
		if (HX_FIELD_EQ(inName,"setLives") ) { return setLives_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lives") ) { lives=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lives","\x07","\xf0","\x07","\x75"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Player_obj,lives),HX_HCSTRING("lives","\x07","\xf0","\x07","\x75")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("lives","\x07","\xf0","\x07","\x75"),
	HX_HCSTRING("getLives","\x91","\xff","\xde","\xd4"),
	HX_HCSTRING("setLives","\x05","\x59","\x3c","\x83"),
	HX_HCSTRING("getPos","\x9e","\x96","\x24","\xa3"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

