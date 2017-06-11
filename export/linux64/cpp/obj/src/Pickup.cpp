#include <hxcpp.h>

#ifndef INCLUDED_Pickup
#include <Pickup.h>
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

Void Pickup_obj::__construct(Float X,Float Y)
{
HX_STACK_FRAME("Pickup","new",0x7fa21c8e,"Pickup.new","Pickup.hx",11,0xe62b2ea2)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(12)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(14)
	this->set_width((int)16);
	HX_STACK_LINE(15)
	this->set_height((int)16);
	HX_STACK_LINE(17)
	this->loadGraphic(HX_HCSTRING("assets/images/barrell.png","\xb6","\x06","\x35","\x2e"),false,(int)16,(int)16,null(),null());
}
;
	return null();
}

//Pickup_obj::~Pickup_obj() { }

Dynamic Pickup_obj::__CreateEmpty() { return  new Pickup_obj; }
hx::ObjectPtr< Pickup_obj > Pickup_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Pickup_obj > _result_ = new Pickup_obj();
	_result_->__construct(X,Y);
	return _result_;}

Dynamic Pickup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pickup_obj > _result_ = new Pickup_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool Pickup_obj::isCollided( ::Player newPlayer){
	HX_STACK_FRAME("Pickup","isCollided",0xabe8a6c2,"Pickup.isCollided","Pickup.hx",21,0xe62b2ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newPlayer,"newPlayer")
	HX_STACK_LINE(22)
	::Player tmp = newPlayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	Dynamic tmp1 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	bool tmp2 = ::flixel::FlxG_obj::overlap(tmp,hx::ObjectPtr<OBJ_>(this),null(),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	if ((tmp2)){
		HX_STACK_LINE(24)
		return true;
	}
	else{
		HX_STACK_LINE(28)
		return false;
	}
	HX_STACK_LINE(22)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Pickup_obj,isCollided,return )


Pickup_obj::Pickup_obj()
{
}

Dynamic Pickup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"isCollided") ) { return isCollided_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("isCollided","\x30","\xf1","\x84","\x44"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pickup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pickup_obj::__mClass,"__mClass");
};

#endif

hx::Class Pickup_obj::__mClass;

void Pickup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Pickup","\x9c","\x7d","\x61","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Pickup_obj >;
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

