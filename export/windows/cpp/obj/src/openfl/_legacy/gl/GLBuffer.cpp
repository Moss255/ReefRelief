// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_gl_GLBuffer
#include <openfl/_legacy/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif

namespace openfl{
namespace _legacy{
namespace gl{

void GLBuffer_obj::__construct(Int version, ::Dynamic id){
            	HX_STACK_FRAME("openfl._legacy.gl.GLBuffer","new",0x8a9a38fc,"openfl._legacy.gl.GLBuffer.new","openfl/_legacy/gl/GLBuffer.hx",9,0x58b2d015)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(version,"version")
            	HX_STACK_ARG(id,"id")
HXLINE(   9)		super::__construct(version,id);
            	}

Dynamic GLBuffer_obj::__CreateEmpty() { return new GLBuffer_obj; }

hx::ObjectPtr< GLBuffer_obj > GLBuffer_obj::__new(Int version, ::Dynamic id)
{
	hx::ObjectPtr< GLBuffer_obj > _hx_result = new GLBuffer_obj();
	_hx_result->__construct(version,id);
	return _hx_result;
}

Dynamic GLBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLBuffer_obj > _hx_result = new GLBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

::String GLBuffer_obj::getType(){
            	HX_STACK_FRAME("openfl._legacy.gl.GLBuffer","getType",0xc3a8890c,"openfl._legacy.gl.GLBuffer.getType","openfl/_legacy/gl/GLBuffer.hx",16,0x58b2d015)
            	HX_STACK_THIS(this)
HXLINE(  16)		return HX_("Buffer",20,31,29,05);
            	}



GLBuffer_obj::GLBuffer_obj()
{
}

hx::Val GLBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return hx::Val( getType_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLBuffer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String GLBuffer_obj_sMemberFields[] = {
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	::String(null()) };

static void GLBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBuffer_obj::__mClass;

void GLBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl.GLBuffer","\x0a","\x4b","\xdb","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLBuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLBuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl
