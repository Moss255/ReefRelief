// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::PixelSnapping PixelSnapping_obj::ALWAYS;

::openfl::_legacy::display::PixelSnapping PixelSnapping_obj::AUTO;

::openfl::_legacy::display::PixelSnapping PixelSnapping_obj::NEVER;

bool PixelSnapping_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALWAYS",cf,ba,59,f9)) { outValue = PixelSnapping_obj::ALWAYS; return true; }
	if (inName==HX_("AUTO",6f,a7,37,2b)) { outValue = PixelSnapping_obj::AUTO; return true; }
	if (inName==HX_("NEVER",6c,76,1e,17)) { outValue = PixelSnapping_obj::NEVER; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(PixelSnapping_obj)

int PixelSnapping_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ALWAYS",cf,ba,59,f9)) return 2;
	if (inName==HX_("AUTO",6f,a7,37,2b)) return 1;
	if (inName==HX_("NEVER",6c,76,1e,17)) return 0;
	return super::__FindIndex(inName);
}

int PixelSnapping_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ALWAYS",cf,ba,59,f9)) return 0;
	if (inName==HX_("AUTO",6f,a7,37,2b)) return 0;
	if (inName==HX_("NEVER",6c,76,1e,17)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val PixelSnapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALWAYS",cf,ba,59,f9)) return ALWAYS;
	if (inName==HX_("AUTO",6f,a7,37,2b)) return AUTO;
	if (inName==HX_("NEVER",6c,76,1e,17)) return NEVER;
	return super::__Field(inName,inCallProp);
}

static ::String PixelSnapping_obj_sStaticFields[] = {
	HX_("NEVER",6c,76,1e,17),
	HX_("AUTO",6f,a7,37,2b),
	HX_("ALWAYS",cf,ba,59,f9),
	::String(null())
};

static void PixelSnapping_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PixelSnapping_obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(PixelSnapping_obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(PixelSnapping_obj::NEVER,"NEVER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PixelSnapping_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PixelSnapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PixelSnapping_obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(PixelSnapping_obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(PixelSnapping_obj::NEVER,"NEVER");
};
#endif

hx::Class PixelSnapping_obj::__mClass;

Dynamic __Create_PixelSnapping_obj() { return new PixelSnapping_obj; }

void PixelSnapping_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.display.PixelSnapping","\xb2","\x48","\xb0","\xa8"), hx::TCanCast< PixelSnapping_obj >,PixelSnapping_obj_sStaticFields,0,
	&__Create_PixelSnapping_obj, &__Create,
	&super::__SGetClass(), &CreatePixelSnapping_obj, PixelSnapping_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , PixelSnapping_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &PixelSnapping_obj::__GetStatic;
}

void PixelSnapping_obj::__boot()
{
ALWAYS = hx::CreateEnum< PixelSnapping_obj >(HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),2,0);
AUTO = hx::CreateEnum< PixelSnapping_obj >(HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),1,0);
NEVER = hx::CreateEnum< PixelSnapping_obj >(HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),0,0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
