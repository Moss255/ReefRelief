// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::LineScaleMode LineScaleMode_obj::HORIZONTAL;

::openfl::_legacy::display::LineScaleMode LineScaleMode_obj::NONE;

::openfl::_legacy::display::LineScaleMode LineScaleMode_obj::NORMAL;

::openfl::_legacy::display::LineScaleMode LineScaleMode_obj::OPENGL;

::openfl::_legacy::display::LineScaleMode LineScaleMode_obj::VERTICAL;

bool LineScaleMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) { outValue = LineScaleMode_obj::HORIZONTAL; return true; }
	if (inName==HX_("NONE",b8,da,ca,33)) { outValue = LineScaleMode_obj::NONE; return true; }
	if (inName==HX_("NORMAL",27,1e,ec,e2)) { outValue = LineScaleMode_obj::NORMAL; return true; }
	if (inName==HX_("OPENGL",6f,10,17,d4)) { outValue = LineScaleMode_obj::OPENGL; return true; }
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) { outValue = LineScaleMode_obj::VERTICAL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(LineScaleMode_obj)

int LineScaleMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return 3;
	if (inName==HX_("NONE",b8,da,ca,33)) return 1;
	if (inName==HX_("NORMAL",27,1e,ec,e2)) return 0;
	if (inName==HX_("OPENGL",6f,10,17,d4)) return 4;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return 2;
	return super::__FindIndex(inName);
}

int LineScaleMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return 0;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("NORMAL",27,1e,ec,e2)) return 0;
	if (inName==HX_("OPENGL",6f,10,17,d4)) return 0;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val LineScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return HORIZONTAL;
	if (inName==HX_("NONE",b8,da,ca,33)) return NONE;
	if (inName==HX_("NORMAL",27,1e,ec,e2)) return NORMAL;
	if (inName==HX_("OPENGL",6f,10,17,d4)) return OPENGL;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return VERTICAL;
	return super::__Field(inName,inCallProp);
}

static ::String LineScaleMode_obj_sStaticFields[] = {
	HX_("NORMAL",27,1e,ec,e2),
	HX_("NONE",b8,da,ca,33),
	HX_("VERTICAL",76,4c,9b,c3),
	HX_("HORIZONTAL",e4,70,cd,07),
	HX_("OPENGL",6f,10,17,d4),
	::String(null())
};

static void LineScaleMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::OPENGL,"OPENGL");
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::VERTICAL,"VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineScaleMode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::OPENGL,"OPENGL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::VERTICAL,"VERTICAL");
};
#endif

hx::Class LineScaleMode_obj::__mClass;

Dynamic __Create_LineScaleMode_obj() { return new LineScaleMode_obj; }

void LineScaleMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.display.LineScaleMode","\xc9","\x9e","\x61","\x5f"), hx::TCanCast< LineScaleMode_obj >,LineScaleMode_obj_sStaticFields,0,
	&__Create_LineScaleMode_obj, &__Create,
	&super::__SGetClass(), &CreateLineScaleMode_obj, LineScaleMode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , LineScaleMode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &LineScaleMode_obj::__GetStatic;
}

void LineScaleMode_obj::__boot()
{
HORIZONTAL = hx::CreateEnum< LineScaleMode_obj >(HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07"),3,0);
NONE = hx::CreateEnum< LineScaleMode_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),1,0);
NORMAL = hx::CreateEnum< LineScaleMode_obj >(HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),0,0);
OPENGL = hx::CreateEnum< LineScaleMode_obj >(HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4"),4,0);
VERTICAL = hx::CreateEnum< LineScaleMode_obj >(HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3"),2,0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
