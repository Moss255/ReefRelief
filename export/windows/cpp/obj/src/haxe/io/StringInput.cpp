// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_StringInput
#include <haxe/io/StringInput.h>
#endif

namespace haxe{
namespace io{

void StringInput_obj::__construct(::String s){
            	HX_STACK_FRAME("haxe.io.StringInput","new",0x8fd1998b,"haxe.io.StringInput.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/StringInput.hx",31,0x3094757e)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
HXLINE(  31)		super::__construct(::haxe::io::Bytes_obj::ofString(s),null(),null());
            	}

Dynamic StringInput_obj::__CreateEmpty() { return new StringInput_obj; }

hx::ObjectPtr< StringInput_obj > StringInput_obj::__new(::String s)
{
	hx::ObjectPtr< StringInput_obj > _hx_result = new StringInput_obj();
	_hx_result->__construct(s);
	return _hx_result;
}

Dynamic StringInput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringInput_obj > _hx_result = new StringInput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}


StringInput_obj::StringInput_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StringInput_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StringInput_obj_sStaticStorageInfo = 0;
#endif

static void StringInput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringInput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringInput_obj::__mClass,"__mClass");
};

#endif

hx::Class StringInput_obj::__mClass;

void StringInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.StringInput","\x19","\x78","\xf5","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StringInput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringInput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringInput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
