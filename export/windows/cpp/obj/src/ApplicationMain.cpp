// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Loader
#include <openfl/_legacy/display/Loader.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LoaderInfo
#include <openfl/_legacy/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_StageAlign
#include <openfl/_legacy/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_StageScaleMode
#include <openfl/_legacy/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif


void ApplicationMain_obj::__construct() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return new ApplicationMain_obj; }

hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{
	hx::ObjectPtr< ApplicationMain_obj > _hx_result = new ApplicationMain_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ApplicationMain_obj > _hx_result = new ApplicationMain_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::openfl::_legacy::display::Sprite ApplicationMain_obj::barA;

 ::openfl::_legacy::display::Sprite ApplicationMain_obj::barB;

 ::openfl::_legacy::display::Sprite ApplicationMain_obj::container;

Int ApplicationMain_obj::forceHeight;

Int ApplicationMain_obj::forceWidth;

void ApplicationMain_obj::main(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_STACK_FRAME("ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",52,0x0780ded5)
HXLINE(  54)			::openfl::_legacy::Lib_obj::get_current()->get_stage()->set_align(::openfl::_legacy::display::StageAlign_obj::TOP_LEFT_dyn());
HXLINE(  55)			::openfl::_legacy::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::_legacy::display::StageScaleMode_obj::NO_SCALE_dyn());
HXLINE(  56)			::openfl::_legacy::Lib_obj::get_current()->loaderInfo = ::openfl::_legacy::display::LoaderInfo_obj::create(null());
HXLINE(  78)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  80)				::String _hx_tmp1 = ::Sys_obj::executablePath();
HXDLIN(  80)				HX_VARI( ::String,currentPath) = ::haxe::io::Path_obj::directory(_hx_tmp1);
HXLINE(  81)				::Sys_obj::setCwd(currentPath);
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic e = _hx_e;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE(  98)			::openfl::_legacy::Assets_obj::initialize();
HXLINE( 100)			HX_VARI( Bool,hasMain) = false;
HXLINE( 102)			{
HXLINE( 102)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 102)				HX_VARI( ::Array< ::String >,_g1) = ::Type_obj::getClassFields(hx::ClassOf< ::Main >());
HXDLIN( 102)				while((_g < _g1->length)){
HXLINE( 102)					HX_VARI( ::String,methodName) = _g1->__get(_g);
HXDLIN( 102)					++_g;
HXLINE( 104)					if ((methodName == HX_("main",39,38,56,48))) {
HXLINE( 106)						hasMain = true;
HXLINE( 107)						goto _hx_goto_0;
            					}
            				}
            				_hx_goto_0:;
            			}
HXLINE( 113)			if (hasMain) {
HXLINE( 115)				 ::Dynamic _hx_tmp2 = ::Reflect_obj::field(hx::ClassOf< ::Main >(),HX_("main",39,38,56,48));
HXDLIN( 115)				::Reflect_obj::callMethod(hx::ClassOf< ::Main >(),_hx_tmp2,::cpp::VirtualArray_obj::__new(0));
            			}
            			else {
HXLINE( 119)				HX_VARI(  ::DocumentClass,instance) = ( ( ::DocumentClass)(::Type_obj::createInstance(hx::ClassOf< ::DocumentClass >(),::cpp::VirtualArray_obj::__new(0))) );
HXLINE( 121)				Bool _hx_tmp3 = ::Std_obj::is(instance,hx::ClassOf< ::openfl::_legacy::display::DisplayObject >());
HXDLIN( 121)				if (_hx_tmp3) {
HXLINE( 123)					::openfl::_legacy::Lib_obj::get_current()->addChild(( ( ::openfl::_legacy::display::DisplayObject)(instance) ));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACK_FRAME("ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",27,0x0780ded5)
HXLINE(  29)		::openfl::_legacy::Lib_obj::setPackage(HX_("MossGames",3f,d8,8e,0a),HX_("ReefRelief",65,67,fc,2b),HX_("com.example.myapp",84,30,57,c1),HX_("0.0.1",35,3d,c8,c1));
HXLINE( 133)		Int _hx_tmp = ((int)((int)((int)((int)((int)((int)((int)((int)::openfl::_legacy::Lib_obj::HARDWARE | (int)::openfl::_legacy::Lib_obj::ALLOW_SHADERS) | (int)(int)0) | (int)(int)0) | (int)(int)0) | (int)::openfl::_legacy::Lib_obj::RESIZABLE) | (int)(int)0) | (int)::openfl::_legacy::Lib_obj::VSYNC) | (int)(int)0);
HXLINE(  52)		::openfl::_legacy::Lib_obj::create( ::Dynamic(new _hx_Closure_0()),(int)640,(int)480,(int)60,(int)0,((int)((int)_hx_tmp | (int)(int)0) | (int)(int)0),HX_("ReefRelief",65,67,fc,2b),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))


ApplicationMain_obj::ApplicationMain_obj()
{
}

bool ApplicationMain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"barA") ) { outValue = barA; return true; }
		if (HX_FIELD_EQ(inName,"barB") ) { outValue = barB; return true; }
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { outValue = container; return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceWidth") ) { outValue = forceWidth; return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"forceHeight") ) { outValue = forceHeight; return true; }
	}
	return false;
}

bool ApplicationMain_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"barA") ) { barA=ioValue.Cast<  ::openfl::_legacy::display::Sprite >(); return true; }
		if (HX_FIELD_EQ(inName,"barB") ) { barB=ioValue.Cast<  ::openfl::_legacy::display::Sprite >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { container=ioValue.Cast<  ::openfl::_legacy::display::Sprite >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceWidth") ) { forceWidth=ioValue.Cast< Int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"forceHeight") ) { forceHeight=ioValue.Cast< Int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ApplicationMain_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ApplicationMain_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(void *) &ApplicationMain_obj::barA,HX_HCSTRING("barA","\x0e","\xe7","\x10","\x41")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(void *) &ApplicationMain_obj::barB,HX_HCSTRING("barB","\x0f","\xe7","\x10","\x41")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(void *) &ApplicationMain_obj::container,HX_HCSTRING("container","\x41","\x75","\x73","\xbf")},
	{hx::fsInt,(void *) &ApplicationMain_obj::forceHeight,HX_HCSTRING("forceHeight","\x32","\xf0","\xc3","\x65")},
	{hx::fsInt,(void *) &ApplicationMain_obj::forceWidth,HX_HCSTRING("forceWidth","\x1b","\xa0","\x37","\x61")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ApplicationMain_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::barA,"barA");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::barB,"barB");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::container,"container");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::forceHeight,"forceHeight");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::forceWidth,"forceWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ApplicationMain_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::barA,"barA");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::barB,"barB");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::container,"container");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::forceHeight,"forceHeight");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::forceWidth,"forceWidth");
};

#endif

hx::Class ApplicationMain_obj::__mClass;

static ::String ApplicationMain_obj_sStaticFields[] = {
	HX_HCSTRING("barA","\x0e","\xe7","\x10","\x41"),
	HX_HCSTRING("barB","\x0f","\xe7","\x10","\x41"),
	HX_HCSTRING("container","\x41","\x75","\x73","\xbf"),
	HX_HCSTRING("forceHeight","\x32","\xf0","\xc3","\x65"),
	HX_HCSTRING("forceWidth","\x1b","\xa0","\x37","\x61"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null())
};

void ApplicationMain_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ApplicationMain","\x89","\xff","\x39","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ApplicationMain_obj::__GetStatic;
	__mClass->mSetStaticField = &ApplicationMain_obj::__SetStatic;
	__mClass->mMarkFunc = ApplicationMain_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ApplicationMain_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ApplicationMain_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ApplicationMain_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ApplicationMain_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ApplicationMain_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

