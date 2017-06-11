#include <hxcpp.h>

#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void Enemy_obj::__construct(Float X,Float Y)
{
HX_STACK_FRAME("Enemy","new",0x35d4571a,"Enemy.new","Enemy.hx",13,0xbda88996)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(14)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(16)
	this->loadGraphic(HX_HCSTRING("assets/images/Urchin.png","\xed","\x7a","\x9a","\x6b"),null(),null(),null(),null(),null());
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(18)
		Float tmp2 = _g->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		Float tmp3 = (tmp2 * ((Float)0.75));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		_g->set_width(tmp3);
	}
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		Float tmp2 = _g->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		Float tmp3 = (tmp2 * ((Float)0.75));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		_g->set_height(tmp3);
	}
}
;
	return null();
}

//Enemy_obj::~Enemy_obj() { }

Dynamic Enemy_obj::__CreateEmpty() { return  new Enemy_obj; }
hx::ObjectPtr< Enemy_obj > Enemy_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct(X,Y);
	return _result_;}

Dynamic Enemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Enemy_obj::attack( ::Player _player){
{
		HX_STACK_FRAME("Enemy","attack",0x2818e54e,"Enemy.attack","Enemy.hx",26,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_player,"_player")
		HX_STACK_LINE(27)
		::Player tmp = _player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		Dynamic tmp1 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		bool tmp2 = ::flixel::FlxG_obj::overlap(tmp,hx::ObjectPtr<OBJ_>(this),null(),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		if ((tmp2)){
			HX_STACK_LINE(29)
			_player->setLives((int)1);
			HX_STACK_LINE(30)
			_player->set_x((int)330);
			HX_STACK_LINE(31)
			_player->set_y((int)60);
			HX_STACK_LINE(32)
			this->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,attack,(void))

Void Enemy_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Enemy","update",0xcf0e6f8f,"Enemy.update","Enemy.hx",37,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(38)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		this->super::update(tmp);
	}
return null();
}



Enemy_obj::Enemy_obj()
{
}

void Enemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enemy);
	HX_MARK_MEMBER_NAME(_player,"_player");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Enemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_player,"_player");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Enemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"attack") ) { return attack_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Enemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::Player >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Enemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Player*/ ,(int)offsetof(Enemy_obj,_player),HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6"),
	HX_HCSTRING("attack","\xc8","\xfb","\x0f","\xe0"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#endif

hx::Class Enemy_obj::__mClass;

void Enemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Enemy","\x28","\x82","\xa8","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Enemy_obj >;
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

