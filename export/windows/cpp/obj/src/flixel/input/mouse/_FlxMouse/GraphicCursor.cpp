// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_mouse__FlxMouse_GraphicCursor
#include <flixel/input/mouse/_FlxMouse/GraphicCursor.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif

namespace flixel{
namespace input{
namespace mouse{
namespace _FlxMouse{

void GraphicCursor_obj::__construct(Int width,Int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
 ::Dynamic transparent = __o_transparent.Default(true);
 ::Dynamic fillRGBA = __o_fillRGBA.Default(-1);
            	HX_STACK_FRAME("flixel.input.mouse._FlxMouse.GraphicCursor","new",0x35242895,"flixel.input.mouse._FlxMouse.GraphicCursor.new","openfl/_legacy/Assets.hx",2010,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(transparent,"transparent")
            	HX_STACK_ARG(fillRGBA,"fillRGBA")
HXLINE(2076)		super::__construct(width,height,transparent,fillRGBA,null());
HXLINE(2078)		 ::haxe::io::Bytes _hx_tmp = ::haxe::Resource_obj::getBytes(::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::resourceName);
HXDLIN(2078)		HX_VARI(  ::openfl::_legacy::utils::ByteArray,byteArray) = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(_hx_tmp);
HXLINE(2079)		this->_hx___handle = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_from_bytes(byteArray,null());
            	}

Dynamic GraphicCursor_obj::__CreateEmpty() { return new GraphicCursor_obj; }

hx::ObjectPtr< GraphicCursor_obj > GraphicCursor_obj::__new(Int width,Int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA)
{
	hx::ObjectPtr< GraphicCursor_obj > _hx_result = new GraphicCursor_obj();
	_hx_result->__construct(width,height,__o_transparent,__o_fillRGBA);
	return _hx_result;
}

Dynamic GraphicCursor_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicCursor_obj > _hx_result = new GraphicCursor_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

::String GraphicCursor_obj::resourceName;


GraphicCursor_obj::GraphicCursor_obj()
{
}

bool GraphicCursor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = resourceName; return true; }
	}
	return false;
}

bool GraphicCursor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicCursor_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GraphicCursor_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GraphicCursor_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GraphicCursor_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicCursor_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicCursor_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicCursor_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicCursor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicCursor_obj::resourceName,"resourceName");
};

#endif

hx::Class GraphicCursor_obj::__mClass;

static ::String GraphicCursor_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void GraphicCursor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.mouse._FlxMouse.GraphicCursor","\x23","\x3a","\x3d","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicCursor_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicCursor_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicCursor_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicCursor_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicCursor_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicCursor_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicCursor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicCursor_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicCursor_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.input.mouse._FlxMouse.GraphicCursor","boot",0x42985a5d,"flixel.input.mouse._FlxMouse.GraphicCursor.boot","openfl/_legacy/display/BitmapData.hx",22,0x0b92a012)
HXLINE(  22)		resourceName = HX_("__ASSET__:bitmap_flixel_input_mouse__FlxMouse_GraphicCursor",c5,22,e3,93);
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
} // end namespace _FlxMouse