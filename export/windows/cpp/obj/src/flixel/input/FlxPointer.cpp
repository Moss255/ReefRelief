// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif

static const Bool _hx_array_data_0[] = {
	0,
};
namespace flixel{
namespace input{

void FlxPointer_obj::__construct(){
            	HX_STACK_FRAME("flixel.input.FlxPointer","new",0x20c36c33,"flixel.input.FlxPointer.new","flixel/input/FlxPointer.hx",8,0xe6a2529b)
            	HX_STACK_THIS(this)
HXLINE(  17)		this->_globalScreenY = (int)0;
HXLINE(  16)		this->_globalScreenX = (int)0;
HXLINE(  14)		this->screenY = (int)0;
HXLINE(  13)		this->screenX = (int)0;
HXLINE(  11)		this->y = (int)0;
HXLINE(  10)		this->x = (int)0;
            	}

Dynamic FlxPointer_obj::__CreateEmpty() { return new FlxPointer_obj; }

hx::ObjectPtr< FlxPointer_obj > FlxPointer_obj::__new()
{
	hx::ObjectPtr< FlxPointer_obj > _hx_result = new FlxPointer_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FlxPointer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxPointer_obj > _hx_result = new FlxPointer_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::flixel::math::FlxPoint FlxPointer_obj::getWorldPosition( ::flixel::FlxCamera Camera, ::flixel::math::FlxPoint point){
            	HX_STACK_FRAME("flixel.input.FlxPointer","getWorldPosition",0x52927af2,"flixel.input.FlxPointer.getWorldPosition","flixel/input/FlxPointer.hx",31,0xe6a2529b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(point,"point")
HXLINE(  32)		Bool _hx_tmp = hx::IsNull( Camera );
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  34)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(  36)		Bool _hx_tmp1 = hx::IsNull( point );
HXDLIN(  36)		if (_hx_tmp1) {
HXLINE(  38)			HX_VARI_NAME(  ::flixel::math::FlxPoint,point1,"point") = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  38)			point1->_inPool = false;
HXDLIN(  38)			point = point1;
            		}
HXLINE(  40)		this->getScreenPosition(Camera,::flixel::input::FlxPointer_obj::_cachedPoint);
HXLINE(  41)		Float _hx_tmp2 = (::flixel::input::FlxPointer_obj::_cachedPoint->x + Camera->scroll->x);
HXDLIN(  41)		point->set_x(_hx_tmp2);
HXLINE(  42)		Float _hx_tmp3 = (::flixel::input::FlxPointer_obj::_cachedPoint->y + Camera->scroll->y);
HXDLIN(  42)		point->set_y(_hx_tmp3);
HXLINE(  43)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getWorldPosition,return )

 ::flixel::math::FlxPoint FlxPointer_obj::getScreenPosition( ::flixel::FlxCamera Camera, ::flixel::math::FlxPoint point){
            	HX_STACK_FRAME("flixel.input.FlxPointer","getScreenPosition",0xae561a7e,"flixel.input.FlxPointer.getScreenPosition","flixel/input/FlxPointer.hx",55,0xe6a2529b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(point,"point")
HXLINE(  56)		Bool _hx_tmp = hx::IsNull( Camera );
HXDLIN(  56)		if (_hx_tmp) {
HXLINE(  58)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(  60)		Bool _hx_tmp1 = hx::IsNull( point );
HXDLIN(  60)		if (_hx_tmp1) {
HXLINE(  62)			HX_VARI_NAME(  ::flixel::math::FlxPoint,point1,"point") = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  62)			point1->_inPool = false;
HXDLIN(  62)			point = point1;
            		}
HXLINE(  65)		Float _hx_tmp2 = ((Float)((this->_globalScreenX - Camera->x) + ((((Float)0.5) * Camera->width) * (Camera->zoom - Camera->initialZoom))) / (Float)Camera->zoom);
HXDLIN(  65)		point->set_x(_hx_tmp2);
HXLINE(  66)		Float _hx_tmp3 = ((Float)((this->_globalScreenY - Camera->y) + ((((Float)0.5) * Camera->height) * (Camera->zoom - Camera->initialZoom))) / (Float)Camera->zoom);
HXDLIN(  66)		point->set_y(_hx_tmp3);
HXLINE(  68)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,getScreenPosition,return )

 ::flixel::math::FlxPoint FlxPointer_obj::getPosition( ::flixel::math::FlxPoint point){
            	HX_STACK_FRAME("flixel.input.FlxPointer","getPosition",0x9fea8a32,"flixel.input.FlxPointer.getPosition","flixel/input/FlxPointer.hx",75,0xe6a2529b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(point,"point")
HXLINE(  76)		Bool _hx_tmp = hx::IsNull( point );
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  77)			HX_VARI_NAME(  ::flixel::math::FlxPoint,point1,"point") = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  77)			point1->_inPool = false;
HXDLIN(  77)			point = point1;
            		}
HXLINE(  78)		return point->set(this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPointer_obj,getPosition,return )

Bool FlxPointer_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup, ::flixel::FlxCamera Camera){
            	HX_STACK_FRAME("flixel.input.FlxPointer","overlaps",0xe0967a59,"flixel.input.FlxPointer.overlaps","flixel/input/FlxPointer.hx",92,0xe6a2529b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
            	HX_STACK_ARG(Camera,"Camera")
HXLINE(  91)		HX_VARI(  ::flixel::input::FlxPointer,_gthis) = hx::ObjectPtr<OBJ_>(this);
HXLINE(  93)		HX_VARI( ::Array< Bool >,result) = ::Array_obj< Bool >::fromData( _hx_array_data_0,1);
HXLINE(  95)		HX_VARI(  ::flixel::group::FlxTypedGroup,group) = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE(  96)		Bool _hx_tmp = hx::IsNotNull( group );
HXDLIN(  96)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0, ::flixel::input::FlxPointer,_gthis, ::flixel::FlxCamera,Camera,::Array< Bool >,result) HXARGC(1)
            			void _hx_run( ::flixel::FlxBasic basic){
            				HX_STACK_FRAME("flixel.input.FlxPointer","overlaps",0xe0967a59,"flixel.input.FlxPointer.overlaps","flixel/input/FlxPointer.hx",100,0xe6a2529b)
            				HX_STACK_ARG(basic,"basic")
HXLINE( 100)				Bool _hx_tmp1 = _gthis->overlaps(basic,Camera);
HXDLIN( 100)				if (_hx_tmp1) {
HXLINE( 102)					result[(int)0] = true;
HXLINE( 103)					return;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  98)			group->forEachExists( ::Dynamic(new _hx_Closure_0(_gthis,Camera,result)),null());
            		}
            		else {
HXLINE( 109)			this->getPosition(::flixel::input::FlxPointer_obj::_cachedPoint);
HXLINE( 111)			Bool _hx_tmp2 = ( ( ::flixel::FlxObject)(ObjectOrGroup) )->overlapsPoint(::flixel::input::FlxPointer_obj::_cachedPoint,true,Camera);
HXDLIN( 111)			result[(int)0] = _hx_tmp2;
            		}
HXLINE( 114)		return result->__get((int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,overlaps,return )

void FlxPointer_obj::setGlobalScreenPositionUnsafe(Float newX,Float newY){
            	HX_STACK_FRAME("flixel.input.FlxPointer","setGlobalScreenPositionUnsafe",0x8f7aed13,"flixel.input.FlxPointer.setGlobalScreenPositionUnsafe","flixel/input/FlxPointer.hx",122,0xe6a2529b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(newX,"newX")
            	HX_STACK_ARG(newY,"newY")
HXLINE( 123)		Float _hx_tmp = ((Float)newX / (Float)::flixel::FlxG_obj::scaleMode->scale->x);
HXDLIN( 123)		this->_globalScreenX = ::Std_obj::_hx_int(_hx_tmp);
HXLINE( 124)		Float _hx_tmp1 = ((Float)newY / (Float)::flixel::FlxG_obj::scaleMode->scale->y);
HXDLIN( 124)		this->_globalScreenY = ::Std_obj::_hx_int(_hx_tmp1);
HXLINE( 126)		this->updatePositions();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxPointer_obj,setGlobalScreenPositionUnsafe,(void))

::String FlxPointer_obj::toString(){
            	HX_STACK_FRAME("flixel.input.FlxPointer","toString",0xd3da77f9,"flixel.input.FlxPointer.toString","flixel/input/FlxPointer.hx",131,0xe6a2529b)
            	HX_STACK_THIS(this)
HXLINE( 132)		 ::Dynamic value = this->x;
HXDLIN( 132)		HX_VARI(  ::flixel::util::LabelValuePair,_this) = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 132)		_this->label = HX_("x",78,00,00,00);
HXDLIN( 132)		_this->value = value;
HXLINE( 133)		 ::Dynamic value1 = this->y;
HXDLIN( 133)		HX_VARI_NAME(  ::flixel::util::LabelValuePair,_this1,"_this") = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 133)		_this1->label = HX_("y",79,00,00,00);
HXDLIN( 133)		_this1->value = value1;
HXLINE( 131)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,toString,return )

void FlxPointer_obj::updatePositions(){
            	HX_STACK_FRAME("flixel.input.FlxPointer","updatePositions",0xb47050b4,"flixel.input.FlxPointer.updatePositions","flixel/input/FlxPointer.hx",141,0xe6a2529b)
            	HX_STACK_THIS(this)
HXLINE( 142)		this->getScreenPosition(::flixel::FlxG_obj::camera,::flixel::input::FlxPointer_obj::_cachedPoint);
HXLINE( 143)		this->screenX = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->x);
HXLINE( 144)		this->screenY = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->y);
HXLINE( 146)		this->getWorldPosition(::flixel::FlxG_obj::camera,::flixel::input::FlxPointer_obj::_cachedPoint);
HXLINE( 147)		this->x = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->x);
HXLINE( 148)		this->y = ::Std_obj::_hx_int(::flixel::input::FlxPointer_obj::_cachedPoint->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointer_obj,updatePositions,(void))

 ::flixel::math::FlxPoint FlxPointer_obj::_cachedPoint;


FlxPointer_obj::FlxPointer_obj()
{
}

hx::Val FlxPointer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { return hx::Val( screenX); }
		if (HX_FIELD_EQ(inName,"screenY") ) { return hx::Val( screenY); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { return hx::Val( overlaps_dyn()); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPosition") ) { return hx::Val( getPosition_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_globalScreenX") ) { return hx::Val( _globalScreenX); }
		if (HX_FIELD_EQ(inName,"_globalScreenY") ) { return hx::Val( _globalScreenY); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updatePositions") ) { return hx::Val( updatePositions_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return hx::Val( getWorldPosition_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return hx::Val( getScreenPosition_dyn()); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setGlobalScreenPositionUnsafe") ) { return hx::Val( setGlobalScreenPositionUnsafe_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxPointer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_cachedPoint") ) { outValue = _cachedPoint; return true; }
	}
	return false;
}

hx::Val FlxPointer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< Int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_globalScreenX") ) { _globalScreenX=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_globalScreenY") ) { _globalScreenY=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPointer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_cachedPoint") ) { _cachedPoint=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
	}
	return false;
}

void FlxPointer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a"));
	outFields->push(HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a"));
	outFields->push(HX_HCSTRING("_globalScreenX","\x8a","\xec","\xc1","\x8e"));
	outFields->push(HX_HCSTRING("_globalScreenY","\x8b","\xec","\xc1","\x8e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxPointer_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxPointer_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,screenX),HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,screenY),HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,_globalScreenX),HX_HCSTRING("_globalScreenX","\x8a","\xec","\xc1","\x8e")},
	{hx::fsInt,(int)offsetof(FlxPointer_obj,_globalScreenY),HX_HCSTRING("_globalScreenY","\x8b","\xec","\xc1","\x8e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxPointer_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxPointer_obj::_cachedPoint,HX_HCSTRING("_cachedPoint","\x0f","\x9f","\x83","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxPointer_obj_sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a"),
	HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a"),
	HX_HCSTRING("_globalScreenX","\x8a","\xec","\xc1","\x8e"),
	HX_HCSTRING("_globalScreenY","\x8b","\xec","\xc1","\x8e"),
	HX_HCSTRING("getWorldPosition","\xa5","\x3e","\x0b","\xe6"),
	HX_HCSTRING("getScreenPosition","\x6b","\x93","\x88","\x24"),
	HX_HCSTRING("getPosition","\x5f","\x63","\xee","\xf0"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("setGlobalScreenPositionUnsafe","\x80","\x95","\xb5","\x56"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("updatePositions","\x61","\xc4","\xdc","\x1f"),
	::String(null()) };

static void FlxPointer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPointer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPointer_obj::_cachedPoint,"_cachedPoint");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxPointer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPointer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPointer_obj::_cachedPoint,"_cachedPoint");
};

#endif

hx::Class FlxPointer_obj::__mClass;

static ::String FlxPointer_obj_sStaticFields[] = {
	HX_HCSTRING("_cachedPoint","\x0f","\x9f","\x83","\xa5"),
	::String(null())
};

void FlxPointer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.FlxPointer","\xc1","\xd6","\x8e","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPointer_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxPointer_obj::__SetStatic;
	__mClass->mMarkFunc = FlxPointer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxPointer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxPointer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPointer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxPointer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPointer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPointer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxPointer_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.input.FlxPointer","boot",0x825440ff,"flixel.input.FlxPointer.boot","flixel/input/FlxPointer.hx",18,0xe6a2529b)
HXLINE(  18)		_cachedPoint =  ::flixel::math::FlxPoint_obj::__new(null(),null());
            	}
}

} // end namespace flixel
} // end namespace input
