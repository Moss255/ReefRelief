// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

namespace flixel{
namespace tweens{
namespace misc{

void VarTween_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACK_FRAME("flixel.tweens.misc.VarTween","new",0x19cf09e4,"flixel.tweens.misc.VarTween.new","flixel/tweens/misc/VarTween.hx",8,0x836bddcb)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Options,"Options")
            	HX_STACK_ARG(manager,"manager")
HXLINE(  12)		this->_propertyInfos = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  26)		super::__construct(Options,manager);
            	}

Dynamic VarTween_obj::__CreateEmpty() { return new VarTween_obj; }

hx::ObjectPtr< VarTween_obj > VarTween_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager)
{
	hx::ObjectPtr< VarTween_obj > _hx_result = new VarTween_obj();
	_hx_result->__construct(Options,manager);
	return _hx_result;
}

Dynamic VarTween_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VarTween_obj > _hx_result = new VarTween_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

void VarTween_obj::destroy(){
            	HX_STACK_FRAME("flixel.tweens.misc.VarTween","destroy",0xef76787e,"flixel.tweens.misc.VarTween.destroy","flixel/tweens/misc/VarTween.hx",18,0x836bddcb)
            	HX_STACK_THIS(this)
HXLINE(  19)		this->super::destroy();
HXLINE(  20)		this->_object = null();
HXLINE(  21)		this->_properties = null();
            	}


 ::flixel::tweens::misc::VarTween VarTween_obj::tween( ::Dynamic object, ::Dynamic properties,Float duration){
            	HX_STACK_FRAME("flixel.tweens.misc.VarTween","tween",0xf3504cef,"flixel.tweens.misc.VarTween.tween","flixel/tweens/misc/VarTween.hx",37,0x836bddcb)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(properties,"properties")
            	HX_STACK_ARG(duration,"duration")
HXLINE(  39)		Bool _hx_tmp = hx::IsNull( object );
HXDLIN(  39)		if (_hx_tmp) {
HXLINE(  41)			HX_STACK_DO_THROW(HX_("Cannot tween variables of an object that is null.",4e,3a,13,2f));
            		}
            		else {
HXLINE(  43)			Bool _hx_tmp1 = hx::IsNull( properties );
HXDLIN(  43)			if (_hx_tmp1) {
HXLINE(  45)				HX_STACK_DO_THROW(HX_("Cannot tween null properties.",74,80,03,52));
            			}
            		}
HXLINE(  49)		this->_object = object;
HXLINE(  50)		this->_properties = properties;
HXLINE(  51)		this->duration = duration;
HXLINE(  52)		this->start();
HXLINE(  53)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(VarTween_obj,tween,return )

void VarTween_obj::update(Float elapsed){
            	HX_STACK_FRAME("flixel.tweens.misc.VarTween","update",0x50d41705,"flixel.tweens.misc.VarTween.update","flixel/tweens/misc/VarTween.hx",57,0x836bddcb)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE(  58)		HX_VAR( Float,delay);
HXDLIN(  58)		if ((this->executions > (int)0)) {
HXLINE(  58)			delay = this->loopDelay;
            		}
            		else {
HXLINE(  58)			delay = this->startDelay;
            		}
HXLINE(  60)		Bool _hx_tmp = (this->_secondsSinceStart < delay);
HXDLIN(  60)		if (_hx_tmp) {
HXLINE(  63)			this->super::update(elapsed);
            		}
            		else {
HXLINE(  67)			Bool _hx_tmp1 = (this->_propertyInfos->length == (int)0);
HXDLIN(  67)			if (_hx_tmp1) {
HXLINE(  71)				this->initializeVars();
            			}
HXLINE(  74)			this->super::update(elapsed);
HXLINE(  76)			{
HXLINE(  76)				HX_VARI( Int,_g) = (int)0;
HXDLIN(  76)				HX_VARI( ::Array< ::Dynamic>,_g1) = this->_propertyInfos;
HXDLIN(  76)				while((_g < _g1->length)){
HXLINE(  76)					HX_VARI(  ::Dynamic,info) = _g1->__get(_g);
HXDLIN(  76)					++_g;
HXLINE(  78)					 ::Dynamic _hx_tmp2 = this->_object;
HXDLIN(  78)					Float _hx_tmp3 = (( (Float)(info->__Field(HX_("startValue",af,57,cf,4d),hx::paccDynamic)) ) + (( (Float)(info->__Field(HX_("range",bd,a5,1f,e4),hx::paccDynamic)) ) * this->scale));
HXDLIN(  78)					::Reflect_obj::setProperty(_hx_tmp2, ::Dynamic(info->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)),_hx_tmp3);
            				}
            			}
            		}
            	}


void VarTween_obj::initializeVars(){
            	HX_STACK_FRAME("flixel.tweens.misc.VarTween","initializeVars",0x0a5a5e18,"flixel.tweens.misc.VarTween.initializeVars","flixel/tweens/misc/VarTween.hx",84,0x836bddcb)
            	HX_STACK_THIS(this)
HXLINE(  85)		HX_VAR( ::Array< ::String >,fields);
HXLINE(  87)		Bool _hx_tmp = ::Reflect_obj::isObject(this->_properties);
HXDLIN(  87)		if (_hx_tmp) {
HXLINE(  89)			fields = ::Reflect_obj::fields(this->_properties);
            		}
            		else {
HXLINE(  93)			HX_STACK_DO_THROW(HX_("Unsupported properties container - use an object containing key/value pairs.",0b,19,89,5b));
            		}
HXLINE(  96)		{
HXLINE(  96)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  96)			while((_g < fields->length)){
HXLINE(  96)				HX_VARI( ::String,p) = fields->__get(_g);
HXDLIN(  96)				++_g;
HXLINE(  98)				 ::Dynamic _hx_tmp1 = ::Reflect_obj::getProperty(this->_object,p);
HXDLIN(  98)				Bool _hx_tmp2 = hx::IsNull( _hx_tmp1 );
HXDLIN(  98)				if (_hx_tmp2) {
HXLINE( 100)					HX_STACK_DO_THROW(((HX_("The Object does not have the property \"",3c,1e,c1,a6) + p) + HX_("\"",22,00,00,00)));
            				}
HXLINE( 103)				HX_VARI(  ::Dynamic,a) = ::Reflect_obj::getProperty(this->_object,p);
HXLINE( 105)				Bool _hx_tmp3 = ::Math_obj::isNaN(a);
HXDLIN( 105)				if (_hx_tmp3) {
HXLINE( 107)					HX_STACK_DO_THROW(((HX_("The property \"",06,e3,80,a4) + p) + HX_("\" is not numeric.",66,4f,2a,cf)));
            				}
HXLINE( 110)				 ::Dynamic _hx_tmp4 = ::Reflect_obj::getProperty(this->_properties,p);
HXDLIN( 110)				this->_propertyInfos->push( ::Dynamic(hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("range",bd,a5,1f,e4),(_hx_tmp4 - a))
            					->setFixed(1,HX_("name",4b,72,ff,48),p)
            					->setFixed(2,HX_("startValue",af,57,cf,4d),( (Float)(a) ))));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VarTween_obj,initializeVars,(void))


VarTween_obj::VarTween_obj()
{
}

void VarTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VarTween);
	HX_MARK_MEMBER_NAME(_object,"_object");
	HX_MARK_MEMBER_NAME(_properties,"_properties");
	HX_MARK_MEMBER_NAME(_propertyInfos,"_propertyInfos");
	 ::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VarTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_object,"_object");
	HX_VISIT_MEMBER_NAME(_properties,"_properties");
	HX_VISIT_MEMBER_NAME(_propertyInfos,"_propertyInfos");
	 ::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

hx::Val VarTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return hx::Val( tween_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return hx::Val( _object); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_properties") ) { return hx::Val( _properties); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_propertyInfos") ) { return hx::Val( _propertyInfos); }
		if (HX_FIELD_EQ(inName,"initializeVars") ) { return hx::Val( initializeVars_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VarTween_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_properties") ) { _properties=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_propertyInfos") ) { _propertyInfos=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VarTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"));
	outFields->push(HX_HCSTRING("_properties","\x12","\xc9","\x98","\x33"));
	outFields->push(HX_HCSTRING("_propertyInfos","\xf1","\xeb","\xad","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VarTween_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(VarTween_obj,_object),HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(VarTween_obj,_properties),HX_HCSTRING("_properties","\x12","\xc9","\x98","\x33")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(VarTween_obj,_propertyInfos),HX_HCSTRING("_propertyInfos","\xf1","\xeb","\xad","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VarTween_obj_sStaticStorageInfo = 0;
#endif

static ::String VarTween_obj_sMemberFields[] = {
	HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"),
	HX_HCSTRING("_properties","\x12","\xc9","\x98","\x33"),
	HX_HCSTRING("_propertyInfos","\xf1","\xeb","\xad","\x46"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("initializeVars","\x1c","\x71","\xd8","\x51"),
	::String(null()) };

static void VarTween_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VarTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VarTween_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VarTween_obj::__mClass,"__mClass");
};

#endif

hx::Class VarTween_obj::__mClass;

void VarTween_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.misc.VarTween","\xf2","\x87","\x4b","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VarTween_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VarTween_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VarTween_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VarTween_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VarTween_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VarTween_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
