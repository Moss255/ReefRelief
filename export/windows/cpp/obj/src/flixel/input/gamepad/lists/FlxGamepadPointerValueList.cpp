// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadPointerValueList
#include <flixel/input/gamepad/lists/FlxGamepadPointerValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

void FlxGamepadPointerValueList_obj::__construct( ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadPointerValueList","new",0xa1fdbe8f,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.new","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",32,0x5105f03d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(gamepad,"gamepad")
HXLINE(  32)		this->gamepad = gamepad;
            	}

Dynamic FlxGamepadPointerValueList_obj::__CreateEmpty() { return new FlxGamepadPointerValueList_obj; }

hx::ObjectPtr< FlxGamepadPointerValueList_obj > FlxGamepadPointerValueList_obj::__new( ::flixel::input::gamepad::FlxGamepad gamepad)
{
	hx::ObjectPtr< FlxGamepadPointerValueList_obj > _hx_result = new FlxGamepadPointerValueList_obj();
	_hx_result->__construct(gamepad);
	return _hx_result;
}

Dynamic FlxGamepadPointerValueList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxGamepadPointerValueList_obj > _hx_result = new FlxGamepadPointerValueList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

Float FlxGamepadPointerValueList_obj::get_X(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadPointerValueList","get_X",0x6405bd1e,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.get_X","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",23,0x5105f03d)
            	HX_STACK_THIS(this)
HXLINE(  23)		Bool _hx_tmp = !(this->gamepad->mapping->supportsPointer);
HXDLIN(  23)		if (_hx_tmp) {
HXLINE(  23)			return (int)0;
            		}
            		else {
HXLINE(  23)			return this->gamepad->getAxis((int)28);
            		}
HXDLIN(  23)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadPointerValueList_obj,get_X,return )

Float FlxGamepadPointerValueList_obj::get_Y(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadPointerValueList","get_Y",0x6405bd1f,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.get_Y","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",28,0x5105f03d)
            	HX_STACK_THIS(this)
HXLINE(  28)		Bool _hx_tmp = !(this->gamepad->mapping->supportsPointer);
HXDLIN(  28)		if (_hx_tmp) {
HXLINE(  28)			return (int)0;
            		}
            		else {
HXLINE(  28)			return this->gamepad->getAxis((int)29);
            		}
HXDLIN(  28)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadPointerValueList_obj,get_Y,return )

Float FlxGamepadPointerValueList_obj::getAxis(Int id){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadPointerValueList","getAxis",0xab09fe06,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.getAxis","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",36,0x5105f03d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(  37)		if (!(this->gamepad->mapping->supportsPointer)) {
HXLINE(  38)			return (int)0;
            		}
HXLINE(  39)		return this->gamepad->getAxis(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadPointerValueList_obj,getAxis,return )

Bool FlxGamepadPointerValueList_obj::get_isSupported(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadPointerValueList","get_isSupported",0x729a2d2a,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.get_isSupported","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",44,0x5105f03d)
            	HX_STACK_THIS(this)
HXLINE(  44)		return this->gamepad->mapping->supportsPointer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadPointerValueList_obj,get_isSupported,return )


FlxGamepadPointerValueList_obj::FlxGamepadPointerValueList_obj()
{
}

void FlxGamepadPointerValueList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadPointerValueList);
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void FlxGamepadPointerValueList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

hx::Val FlxGamepadPointerValueList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"X") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_X()); }
		if (HX_FIELD_EQ(inName,"Y") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_Y()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_X") ) { return hx::Val( get_X_dyn()); }
		if (HX_FIELD_EQ(inName,"get_Y") ) { return hx::Val( get_Y_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return hx::Val( gamepad); }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return hx::Val( getAxis_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_isSupported()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return hx::Val( get_isSupported_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxGamepadPointerValueList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast<  ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadPointerValueList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3"));
	outFields->push(HX_HCSTRING("X","\x58","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("Y","\x59","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxGamepadPointerValueList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadPointerValueList_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxGamepadPointerValueList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadPointerValueList_obj_sMemberFields[] = {
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("get_X","\x2f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_Y","\x30","\xa5","\x60","\x91"),
	HX_HCSTRING("getAxis","\x57","\xcc","\xfb","\x12"),
	HX_HCSTRING("get_isSupported","\x7b","\x34","\x6c","\xb4"),
	::String(null()) };

static void FlxGamepadPointerValueList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadPointerValueList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGamepadPointerValueList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadPointerValueList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadPointerValueList_obj::__mClass;

void FlxGamepadPointerValueList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxGamepadPointerValueList","\x1d","\xcb","\x61","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxGamepadPointerValueList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxGamepadPointerValueList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadPointerValueList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGamepadPointerValueList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadPointerValueList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadPointerValueList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists
