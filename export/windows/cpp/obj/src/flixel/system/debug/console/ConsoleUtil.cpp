// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console__ConsoleUtil_Interp
#include <flixel/system/debug/console/_ConsoleUtil/Interp.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif

namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{

void ConsoleUtil_obj::__construct() { }

Dynamic ConsoleUtil_obj::__CreateEmpty() { return new ConsoleUtil_obj; }

hx::ObjectPtr< ConsoleUtil_obj > ConsoleUtil_obj::__new()
{
	hx::ObjectPtr< ConsoleUtil_obj > _hx_result = new ConsoleUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic ConsoleUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConsoleUtil_obj > _hx_result = new ConsoleUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::hscript::Parser ConsoleUtil_obj::parser;

 ::flixel::_hx_system::debug::console::_ConsoleUtil::Interp ConsoleUtil_obj::interp;

void ConsoleUtil_obj::init(){
            	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","init",0x40765844,"flixel.system.debug.console.ConsoleUtil.init","flixel/system/debug/console/ConsoleUtil.hx",33,0x2e8bcde6)
HXLINE(  34)		::flixel::_hx_system::debug::console::ConsoleUtil_obj::parser =  ::hscript::Parser_obj::__new();
HXLINE(  35)		::flixel::_hx_system::debug::console::ConsoleUtil_obj::parser->allowJSON = true;
HXLINE(  36)		::flixel::_hx_system::debug::console::ConsoleUtil_obj::parser->allowTypes = true;
HXLINE(  38)		::flixel::_hx_system::debug::console::ConsoleUtil_obj::interp =  ::flixel::_hx_system::debug::console::_ConsoleUtil::Interp_obj::__new();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ConsoleUtil_obj,init,(void))

::hx::EnumBase ConsoleUtil_obj::parseCommand(::String Input){
            	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","parseCommand",0xbaf1368c,"flixel.system.debug.console.ConsoleUtil.parseCommand","flixel/system/debug/console/ConsoleUtil.hx",48,0x2e8bcde6)
            	HX_STACK_ARG(Input,"Input")
HXLINE(  49)		Bool _hx_tmp = ::StringTools_obj::endsWith(Input,HX_(";",3b,00,00,00));
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  50)			Input = Input.substr((int)0,(int)-1);
            		}
HXLINE(  51)		return ::flixel::_hx_system::debug::console::ConsoleUtil_obj::parser->parseString(Input);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,parseCommand,return )

 ::Dynamic ConsoleUtil_obj::runCommand(::String Input){
            	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","runCommand",0x85b4fd74,"flixel.system.debug.console.ConsoleUtil.runCommand","flixel/system/debug/console/ConsoleUtil.hx",62,0x2e8bcde6)
            	HX_STACK_ARG(Input,"Input")
HXLINE(  62)		::hx::EnumBase _hx_tmp = ::flixel::_hx_system::debug::console::ConsoleUtil_obj::parseCommand(Input);
HXDLIN(  62)		return ::flixel::_hx_system::debug::console::ConsoleUtil_obj::interp->expr(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,runCommand,return )

void ConsoleUtil_obj::registerObject(::String ObjectAlias, ::Dynamic AnyObject){
            	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","registerObject",0x0d502bb6,"flixel.system.debug.console.ConsoleUtil.registerObject","flixel/system/debug/console/ConsoleUtil.hx",73,0x2e8bcde6)
            	HX_STACK_ARG(ObjectAlias,"ObjectAlias")
            	HX_STACK_ARG(AnyObject,"AnyObject")
HXLINE(  73)		Bool _hx_tmp = ::Reflect_obj::isObject(AnyObject);
HXDLIN(  73)		if (_hx_tmp) {
HXLINE(  74)			::flixel::_hx_system::debug::console::ConsoleUtil_obj::interp->variables->set(ObjectAlias,AnyObject);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,registerObject,(void))

void ConsoleUtil_obj::registerFunction(::String FunctionAlias, ::Dynamic Function){
            	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","registerFunction",0xb3a1c3cf,"flixel.system.debug.console.ConsoleUtil.registerFunction","flixel/system/debug/console/ConsoleUtil.hx",85,0x2e8bcde6)
            	HX_STACK_ARG(FunctionAlias,"FunctionAlias")
            	HX_STACK_ARG(Function,"Function")
HXLINE(  85)		Bool _hx_tmp = ::Reflect_obj::isFunction(Function);
HXDLIN(  85)		if (_hx_tmp) {
HXLINE(  86)			::flixel::_hx_system::debug::console::ConsoleUtil_obj::interp->variables->set(FunctionAlias,Function);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,registerFunction,(void))

::Array< ::String > ConsoleUtil_obj::getFields( ::Dynamic Object){
            	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","getFields",0x604f9dfb,"flixel.system.debug.console.ConsoleUtil.getFields","flixel/system/debug/console/ConsoleUtil.hx",91,0x2e8bcde6)
            	HX_STACK_ARG(Object,"Object")
HXLINE(  92)		HX_VARI( ::Array< ::String >,fields) = ::Array_obj< ::String >::__new(0);
HXLINE(  93)		Bool _hx_tmp = ::Std_obj::is(Object,hx::ClassOf< ::hx::Class >());
HXDLIN(  93)		if (_hx_tmp) {
HXLINE(  94)			fields = ::Type_obj::getClassFields(Object);
            		}
            		else {
HXLINE(  95)			Bool _hx_tmp1 = ::Reflect_obj::isObject(Object);
HXDLIN(  95)			if (_hx_tmp1) {
HXLINE(  96)				hx::Class _hx_tmp2 = ::Type_obj::getClass(Object);
HXDLIN(  96)				fields = ::Type_obj::getInstanceFields(_hx_tmp2);
            			}
            		}
HXLINE(  98)		HX_VARI( ::Array< ::String >,filteredFields) = ::Array_obj< ::String >::__new(0);
HXLINE(  99)		{
HXLINE(  99)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  99)			while((_g < fields->length)){
HXLINE(  99)				HX_VARI( ::String,field) = fields->__get(_g);
HXDLIN(  99)				++_g;
HXLINE( 102)				Bool _hx_tmp3;
HXDLIN( 102)				Bool _hx_tmp4 = !(::StringTools_obj::startsWith(field,HX_("get_",09,03,62,44)));
HXDLIN( 102)				if (_hx_tmp4) {
HXLINE( 102)					_hx_tmp3 = ::StringTools_obj::startsWith(field,HX_("set_",7d,92,50,4c));
            				}
            				else {
HXLINE( 102)					_hx_tmp3 = true;
            				}
HXDLIN( 102)				if (_hx_tmp3) {
HXLINE( 104)					HX_VARI( ::String,name) = field.substr((int)4,null());
HXLINE( 106)					Bool _hx_tmp5;
HXDLIN( 106)					Int _hx_tmp6 = fields->indexOf(name,null());
HXDLIN( 106)					if ((_hx_tmp6 == (int)-1)) {
HXLINE( 106)						Int _hx_tmp7 = filteredFields->indexOf(name,null());
HXDLIN( 106)						_hx_tmp5 = (_hx_tmp7 == (int)-1);
            					}
            					else {
HXLINE( 106)						_hx_tmp5 = false;
            					}
HXDLIN( 106)					if (_hx_tmp5) {
HXLINE( 107)						filteredFields->push(name);
            					}
            				}
            				else {
HXLINE( 110)					filteredFields->push(field);
            				}
            			}
            		}
HXLINE( 113)		return ::flixel::_hx_system::debug::console::ConsoleUtil_obj::sortFields(filteredFields);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,getFields,return )

::Array< ::String > ConsoleUtil_obj::sortFields(::Array< ::String > fields){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0,::Array< ::String >,underscoreList) HXARGC(1)
            		Bool _hx_run(::String field){
            			HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","sortFields",0x773f00ab,"flixel.system.debug.console.ConsoleUtil.sortFields","flixel/system/debug/console/ConsoleUtil.hx",121,0x2e8bcde6)
            			HX_STACK_ARG(field,"field")
HXLINE( 122)			Bool _hx_tmp = ::StringTools_obj::startsWith(field,HX_("_",5f,00,00,00));
HXDLIN( 122)			if (_hx_tmp) {
HXLINE( 124)				underscoreList->push(field);
HXLINE( 125)				return false;
            			}
HXLINE( 127)			return true;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","sortFields",0x773f00ab,"flixel.system.debug.console.ConsoleUtil.sortFields","flixel/system/debug/console/ConsoleUtil.hx",117,0x2e8bcde6)
            	HX_STACK_ARG(fields,"fields")
HXLINE( 118)		HX_VARI( ::Array< ::String >,underscoreList) = ::Array_obj< ::String >::__new(0);
HXLINE( 120)		fields = fields->filter( ::Dynamic(new _hx_Closure_0(underscoreList)));
HXLINE( 130)		::flixel::util::FlxStringUtil_obj::sortAlphabetically(fields);
HXLINE( 131)		::flixel::util::FlxStringUtil_obj::sortAlphabetically(underscoreList);
HXLINE( 133)		return fields->concat(underscoreList);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,sortFields,return )

void ConsoleUtil_obj::log( ::Dynamic Text){
            	HX_STACK_FRAME("flixel.system.debug.console.ConsoleUtil","log",0x2bebd9d0,"flixel.system.debug.console.ConsoleUtil.log","flixel/system/debug/console/ConsoleUtil.hx",143,0x2e8bcde6)
            	HX_STACK_ARG(Text,"Text")
HXLINE( 143)		::flixel::FlxG_obj::log->advanced(::cpp::VirtualArray_obj::__new(1)->init(0,Text),::flixel::_hx_system::debug::log::LogStyle_obj::CONSOLE,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,log,(void))


ConsoleUtil_obj::ConsoleUtil_obj()
{
}

bool ConsoleUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parser") ) { outValue = parser; return true; }
		if (HX_FIELD_EQ(inName,"interp") ) { outValue = interp; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFields") ) { outValue = getFields_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"runCommand") ) { outValue = runCommand_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sortFields") ) { outValue = sortFields_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parseCommand") ) { outValue = parseCommand_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerObject") ) { outValue = registerObject_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFunction") ) { outValue = registerFunction_dyn(); return true; }
	}
	return false;
}

bool ConsoleUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parser") ) { parser=ioValue.Cast<  ::hscript::Parser >(); return true; }
		if (HX_FIELD_EQ(inName,"interp") ) { interp=ioValue.Cast<  ::flixel::_hx_system::debug::console::_ConsoleUtil::Interp >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ConsoleUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ConsoleUtil_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::hscript::Parser*/ ,(void *) &ConsoleUtil_obj::parser,HX_HCSTRING("parser","\xdf","\x9c","\x88","\xed")},
	{hx::fsObject /*::flixel::_hx_system::debug::console::_ConsoleUtil::Interp*/ ,(void *) &ConsoleUtil_obj::interp,HX_HCSTRING("interp","\xd4","\x79","\x86","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ConsoleUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ConsoleUtil_obj::parser,"parser");
	HX_MARK_MEMBER_NAME(ConsoleUtil_obj::interp,"interp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConsoleUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ConsoleUtil_obj::parser,"parser");
	HX_VISIT_MEMBER_NAME(ConsoleUtil_obj::interp,"interp");
};

#endif

hx::Class ConsoleUtil_obj::__mClass;

static ::String ConsoleUtil_obj_sStaticFields[] = {
	HX_HCSTRING("parser","\xdf","\x9c","\x88","\xed"),
	HX_HCSTRING("interp","\xd4","\x79","\x86","\x9e"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("parseCommand","\x58","\xc5","\x47","\xdb"),
	HX_HCSTRING("runCommand","\x40","\x01","\xea","\xeb"),
	HX_HCSTRING("registerObject","\x82","\x05","\x81","\xdb"),
	HX_HCSTRING("registerFunction","\x9b","\xa8","\x15","\x13"),
	HX_HCSTRING("getFields","\xaf","\x17","\xe5","\xfc"),
	HX_HCSTRING("sortFields","\x77","\x04","\x74","\xdd"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	::String(null())
};

void ConsoleUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.console.ConsoleUtil","\xba","\x4f","\xd6","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConsoleUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &ConsoleUtil_obj::__SetStatic;
	__mClass->mMarkFunc = ConsoleUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ConsoleUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ConsoleUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConsoleUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console