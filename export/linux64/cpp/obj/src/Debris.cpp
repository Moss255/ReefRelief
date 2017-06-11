#include <hxcpp.h>

#ifndef INCLUDED_Debris
#include <Debris.h>
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
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

Void Debris_obj::__construct(Float X,Float Y)
{
HX_STACK_FRAME("Debris","new",0x082e104d,"Debris.new","Debris.hx",10,0xda2737c3)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(11)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(13)
	this->set_width((int)16);
	HX_STACK_LINE(14)
	this->set_height((int)16);
	HX_STACK_LINE(16)
	this->loadGraphic(HX_HCSTRING("assets/images/Seaweed.png","\x4c","\xb4","\x96","\x56"),false,(int)16,(int)16,null(),null());
}
;
	return null();
}

//Debris_obj::~Debris_obj() { }

Dynamic Debris_obj::__CreateEmpty() { return  new Debris_obj; }
hx::ObjectPtr< Debris_obj > Debris_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Debris_obj > _result_ = new Debris_obj();
	_result_->__construct(X,Y);
	return _result_;}

Dynamic Debris_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debris_obj > _result_ = new Debris_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Debris_obj::destroyEnemy( ::Enemy _enemy){
{
		HX_STACK_FRAME("Debris","destroyEnemy",0xe7d1e561,"Debris.destroyEnemy","Debris.hx",21,0xda2737c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_enemy,"_enemy")
		HX_STACK_LINE(22)
		::Enemy tmp = _enemy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		bool tmp1 = ::flixel::FlxG_obj::overlap(hx::ObjectPtr<OBJ_>(this),tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		if ((tmp1)){
			HX_STACK_LINE(24)
			_enemy->destroy();
			HX_STACK_LINE(25)
			this->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debris_obj,destroyEnemy,(void))


Debris_obj::Debris_obj()
{
}

Dynamic Debris_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"destroyEnemy") ) { return destroyEnemy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("destroyEnemy","\xee","\x0a","\x7b","\x62"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debris_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debris_obj::__mClass,"__mClass");
};

#endif

hx::Class Debris_obj::__mClass;

void Debris_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Debris","\xdb","\xe5","\xda","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Debris_obj >;
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

