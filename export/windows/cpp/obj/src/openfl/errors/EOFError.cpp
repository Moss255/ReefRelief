// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
#endif

namespace openfl{
namespace errors{

void EOFError_obj::__construct(){
            	HX_STACK_FRAME("openfl.errors.EOFError","new",0xc20c3743,"openfl.errors.EOFError.new","openfl/errors/EOFError.hx",7,0x8db2236d)
            	HX_STACK_THIS(this)
HXLINE(   9)		super::__construct(HX_("End of file was encountered",fb,7f,d6,0b));
HXLINE(  11)		this->name = HX_("EOFError",8c,e5,0a,43);
HXLINE(  12)		this->errorID = (int)2030;
            	}

Dynamic EOFError_obj::__CreateEmpty() { return new EOFError_obj; }

hx::ObjectPtr< EOFError_obj > EOFError_obj::__new()
{
	hx::ObjectPtr< EOFError_obj > _hx_result = new EOFError_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic EOFError_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EOFError_obj > _hx_result = new EOFError_obj();
	_hx_result->__construct();
	return _hx_result;
}


EOFError_obj::EOFError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *EOFError_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *EOFError_obj_sStaticStorageInfo = 0;
#endif

static void EOFError_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EOFError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EOFError_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EOFError_obj::__mClass,"__mClass");
};

#endif

hx::Class EOFError_obj::__mClass;

void EOFError_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.errors.EOFError","\xd1","\xd9","\xb0","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EOFError_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EOFError_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EOFError_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EOFError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EOFError_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace errors
