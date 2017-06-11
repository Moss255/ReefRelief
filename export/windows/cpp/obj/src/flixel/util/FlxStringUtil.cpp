// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
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
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif

static const ::String _hx_array_data_4[] = {
	HX_("Bytes",4b,78,c5,50),HX_("kB",77,5d,00,00),HX_("MB",55,43,00,00),HX_("GB",1b,3e,00,00),HX_("TB",6e,49,00,00),HX_("PB",f2,45,00,00),
};
namespace flixel{
namespace util{

void FlxStringUtil_obj::__construct() { }

Dynamic FlxStringUtil_obj::__CreateEmpty() { return new FlxStringUtil_obj; }

hx::ObjectPtr< FlxStringUtil_obj > FlxStringUtil_obj::__new()
{
	hx::ObjectPtr< FlxStringUtil_obj > _hx_result = new FlxStringUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FlxStringUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxStringUtil_obj > _hx_result = new FlxStringUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

::String FlxStringUtil_obj::formatTicks(Int StartTicks,Int EndTicks){
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatTicks",0xe4bb609c,"flixel.util.FlxStringUtil.formatTicks","flixel/util/FlxStringUtil.hx",30,0x4e012e33)
            	HX_STACK_ARG(StartTicks,"StartTicks")
            	HX_STACK_ARG(EndTicks,"EndTicks")
HXLINE(  30)		Float _hx_tmp = ::Math_obj::abs((EndTicks - StartTicks));
HXDLIN(  30)		return (((Float)_hx_tmp / (Float)(int)1000) + HX_("s",73,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTicks,return )

::String FlxStringUtil_obj::formatTime(Float Seconds,hx::Null< Bool >  __o_ShowMS){
Bool ShowMS = __o_ShowMS.Default(false);
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatTime",0xcfa9a0a7,"flixel.util.FlxStringUtil.formatTime","flixel/util/FlxStringUtil.hx",41,0x4e012e33)
            	HX_STACK_ARG(Seconds,"Seconds")
            	HX_STACK_ARG(ShowMS,"ShowMS")
HXLINE(  42)		Int _hx_tmp = ::Std_obj::_hx_int(((Float)Seconds / (Float)(int)60));
HXDLIN(  42)		HX_VARI( ::String,timeString) = (_hx_tmp + HX_(":",3a,00,00,00));
HXLINE(  43)		Int _hx_tmp1 = ::Std_obj::_hx_int(Seconds);
HXDLIN(  43)		HX_VARI( Int,timeStringHelper) = hx::Mod(_hx_tmp1,(int)60);
HXLINE(  44)		if ((timeStringHelper < (int)10)) {
HXLINE(  46)			hx::AddEq(timeString,HX_("0",30,00,00,00));
            		}
HXLINE(  48)		hx::AddEq(timeString,timeStringHelper);
HXLINE(  49)		if (ShowMS) {
HXLINE(  51)			hx::AddEq(timeString,HX_(".",2e,00,00,00));
HXLINE(  52)			Int _hx_tmp2 = ::Std_obj::_hx_int(Seconds);
HXDLIN(  52)			timeStringHelper = ::Std_obj::_hx_int(((Seconds - _hx_tmp2) * (int)100));
HXLINE(  53)			if ((timeStringHelper < (int)10)) {
HXLINE(  55)				hx::AddEq(timeString,HX_("0",30,00,00,00));
            			}
HXLINE(  57)			hx::AddEq(timeString,timeStringHelper);
            		}
HXLINE(  60)		return timeString;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTime,return )

::String FlxStringUtil_obj::formatArray(::cpp::VirtualArray AnyArray){
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatArray",0xfa1c9fbf,"flixel.util.FlxStringUtil.formatArray","flixel/util/FlxStringUtil.hx",71,0x4e012e33)
            	HX_STACK_ARG(AnyArray,"AnyArray")
HXLINE(  72)		HX_VARI( ::String,string) = HX_("",00,00,00,00);
HXLINE(  73)		Bool _hx_tmp;
HXDLIN(  73)		Bool _hx_tmp1 = hx::IsNotNull( AnyArray );
HXDLIN(  73)		if (_hx_tmp1) {
HXLINE(  73)			_hx_tmp = (AnyArray->get_length() > (int)0);
            		}
            		else {
HXLINE(  73)			_hx_tmp = false;
            		}
HXDLIN(  73)		if (_hx_tmp) {
HXLINE(  75)			 ::Dynamic _hx_tmp2 = AnyArray->__get((int)0);
HXDLIN(  75)			string = ::Std_obj::string(_hx_tmp2);
HXLINE(  76)			HX_VARI( Int,i) = (int)1;
HXLINE(  77)			HX_VARI( Int,l) = AnyArray->get_length();
HXLINE(  78)			while((i < l)){
HXLINE(  80)				Int _hx_tmp3 = i++;
HXDLIN(  80)				 ::Dynamic _hx_tmp4 = AnyArray->__get(_hx_tmp3);
HXDLIN(  80)				::String _hx_tmp5 = ::Std_obj::string(_hx_tmp4);
HXDLIN(  80)				hx::AddEq(string,(HX_(", ",74,26,00,00) + _hx_tmp5));
            			}
            		}
HXLINE(  83)		return string;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatArray,return )

::String FlxStringUtil_obj::formatStringMap( ::haxe::ds::StringMap AnyMap){
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatStringMap",0x51016f71,"flixel.util.FlxStringUtil.formatStringMap","flixel/util/FlxStringUtil.hx",93,0x4e012e33)
            	HX_STACK_ARG(AnyMap,"AnyMap")
HXLINE(  94)		HX_VARI( ::String,string) = HX_("",00,00,00,00);
HXLINE(  95)		{
HXLINE(  95)			HX_VARI(  ::Dynamic,tmp) = AnyMap->keys();
HXDLIN(  95)			while(true){
HXLINE(  95)				Bool _hx_tmp = !(( (Bool)( ::Dynamic(tmp->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN(  95)				if (_hx_tmp) {
HXLINE(  95)					goto _hx_goto_1;
            				}
HXDLIN(  95)				HX_VARI( ::String,key) = ( (::String)( ::Dynamic(tmp->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE(  97)				::String _hx_tmp1 = ::Std_obj::string(key);
HXDLIN(  97)				hx::AddEq(string,_hx_tmp1);
HXLINE(  98)				hx::AddEq(string,HX_(", ",74,26,00,00));
            			}
            			_hx_goto_1:;
            		}
HXLINE( 101)		Int _hx_tmp2 = (string.length - (int)2);
HXDLIN( 101)		return string.substring((int)0,_hx_tmp2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatStringMap,return )

::String FlxStringUtil_obj::formatMoney(Float Amount,hx::Null< Bool >  __o_ShowDecimal,hx::Null< Bool >  __o_EnglishStyle){
Bool ShowDecimal = __o_ShowDecimal.Default(true);
Bool EnglishStyle = __o_EnglishStyle.Default(true);
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatMoney",0xe0ecec66,"flixel.util.FlxStringUtil.formatMoney","flixel/util/FlxStringUtil.hx",116,0x4e012e33)
            	HX_STACK_ARG(Amount,"Amount")
            	HX_STACK_ARG(ShowDecimal,"ShowDecimal")
            	HX_STACK_ARG(EnglishStyle,"EnglishStyle")
HXLINE( 117)		HX_VARI( Bool,isNegative) = (Amount < (int)0);
HXLINE( 118)		Amount = ::Math_obj::abs(Amount);
HXLINE( 120)		HX_VARI( ::String,string) = HX_("",00,00,00,00);
HXLINE( 121)		HX_VARI( ::String,comma) = HX_("",00,00,00,00);
HXLINE( 122)		HX_VARI( Int,amount) = ::Math_obj::floor(Amount);
HXLINE( 123)		while((amount > (int)0)){
HXLINE( 125)			Bool _hx_tmp;
HXDLIN( 125)			if ((string.length > (int)0)) {
HXLINE( 125)				_hx_tmp = (comma.length <= (int)0);
            			}
            			else {
HXLINE( 125)				_hx_tmp = false;
            			}
HXDLIN( 125)			if (_hx_tmp) {
HXLINE( 126)				if (EnglishStyle) {
HXLINE( 126)					comma = HX_(",",2c,00,00,00);
            				}
            				else {
HXLINE( 126)					comma = HX_(".",2e,00,00,00);
            				}
            			}
HXLINE( 128)			HX_VARI( ::String,zeroes) = HX_("",00,00,00,00);
HXLINE( 129)			Int _hx_tmp1 = ::Math_obj::floor(((Float)amount / (Float)(int)1000));
HXDLIN( 129)			HX_VARI( Int,helper) = (amount - (_hx_tmp1 * (int)1000));
HXLINE( 130)			amount = ::Math_obj::floor(((Float)amount / (Float)(int)1000));
HXLINE( 131)			if ((amount > (int)0)) {
HXLINE( 133)				if ((helper < (int)100)) {
HXLINE( 134)					zeroes = HX_("0",30,00,00,00);
            				}
HXLINE( 135)				if ((helper < (int)10)) {
HXLINE( 136)					hx::AddEq(zeroes,HX_("0",30,00,00,00));
            				}
            			}
HXLINE( 138)			string = (((zeroes + helper) + comma) + string);
            		}
HXLINE( 141)		Bool _hx_tmp2 = (string == HX_("",00,00,00,00));
HXDLIN( 141)		if (_hx_tmp2) {
HXLINE( 142)			string = HX_("0",30,00,00,00);
            		}
HXLINE( 144)		if (ShowDecimal) {
HXLINE( 146)			Int _hx_tmp3 = ::Math_obj::floor((Amount * (int)100));
HXDLIN( 146)			Int _hx_tmp4 = ::Math_obj::floor(Amount);
HXDLIN( 146)			amount = (_hx_tmp3 - (_hx_tmp4 * (int)100));
HXLINE( 147)			::String _hx_tmp5;
HXDLIN( 147)			if (EnglishStyle) {
HXLINE( 147)				_hx_tmp5 = HX_(".",2e,00,00,00);
            			}
            			else {
HXLINE( 147)				_hx_tmp5 = HX_(",",2c,00,00,00);
            			}
HXDLIN( 147)			hx::AddEq(string,(_hx_tmp5 + amount));
HXLINE( 148)			if ((amount < (int)10)) {
HXLINE( 149)				hx::AddEq(string,HX_("0",30,00,00,00));
            			}
            		}
HXLINE( 152)		if (isNegative) {
HXLINE( 153)			string = (HX_("-",2d,00,00,00) + string);
            		}
HXLINE( 154)		return string;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,formatMoney,return )

::String FlxStringUtil_obj::formatBytes(Float Bytes,hx::Null< Int >  __o_Precision){
Int Precision = __o_Precision.Default(2);
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatBytes",0x92253a91,"flixel.util.FlxStringUtil.formatBytes","flixel/util/FlxStringUtil.hx",162,0x4e012e33)
            	HX_STACK_ARG(Bytes,"Bytes")
            	HX_STACK_ARG(Precision,"Precision")
HXLINE( 163)		HX_VARI( ::Array< ::String >,units) = ::Array_obj< ::String >::fromData( _hx_array_data_4,6);
HXLINE( 164)		HX_VARI( Int,curUnit) = (int)0;
HXLINE( 165)		while(true){
HXLINE( 165)			Bool _hx_tmp;
HXDLIN( 165)			if ((Bytes >= (int)1024)) {
HXLINE( 165)				_hx_tmp = (curUnit < (units->length - (int)1));
            			}
            			else {
HXLINE( 165)				_hx_tmp = false;
            			}
HXDLIN( 165)			if (!(_hx_tmp)) {
HXLINE( 165)				goto _hx_goto_3;
            			}
HXLINE( 167)			hx::DivEq(Bytes,(int)1024);
HXLINE( 168)			++curUnit;
            		}
            		_hx_goto_3:;
HXLINE( 170)		Float _hx_tmp1 = ::flixel::math::FlxMath_obj::roundDecimal(Bytes,Precision);
HXDLIN( 170)		return (_hx_tmp1 + units->__get(curUnit));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatBytes,return )

::String FlxStringUtil_obj::filterDigits(::String Input){
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","filterDigits",0xab6a2081,"flixel.util.FlxStringUtil.filterDigits","flixel/util/FlxStringUtil.hx",180,0x4e012e33)
            	HX_STACK_ARG(Input,"Input")
HXLINE( 181)		HX_VARI(  ::StringBuf,output) =  ::StringBuf_obj::__new();
HXLINE( 182)		{
HXLINE( 182)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 182)			HX_VARI( Int,_g) = Input.length;
HXDLIN( 182)			while((_g1 < _g)){
HXLINE( 182)				HX_VARI( Int,i) = _g1++;
HXLINE( 184)				HX_VARI(  ::Dynamic,c) = Input.charCodeAt(i);
HXLINE( 185)				Bool _hx_tmp;
HXDLIN( 185)				if (hx::IsGreaterEq( c,(int)48 )) {
HXLINE( 185)					_hx_tmp = hx::IsLessEq( c,(int)57 );
            				}
            				else {
HXLINE( 185)					_hx_tmp = false;
            				}
HXDLIN( 185)				if (_hx_tmp) {
HXLINE( 187)					Int c1 = c;
HXDLIN( 187)					Bool _hx_tmp1 = hx::IsNull( output->charBuf );
HXDLIN( 187)					if (_hx_tmp1) {
HXLINE( 187)						output->charBuf = ::Array_obj< char >::__new();
            					}
HXDLIN( 187)					output->charBuf->push(c1);
            				}
            			}
            		}
HXLINE( 190)		Bool _hx_tmp2 = hx::IsNotNull( output->charBuf );
HXDLIN( 190)		if (_hx_tmp2) {
HXLINE( 190)			output->flush();
            		}
HXDLIN( 190)		return output->b->join(HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,filterDigits,return )

::String FlxStringUtil_obj::htmlFormat(::String Text,hx::Null< Int >  __o_Size,::String __o_Color,hx::Null< Bool >  __o_Bold,hx::Null< Bool >  __o_Italic,hx::Null< Bool >  __o_Underlined){
Int Size = __o_Size.Default(12);
::String Color = __o_Color.Default(HX_HCSTRING("FFFFFF","\xc0","\x27","\x82","\x79"));
Bool Bold = __o_Bold.Default(false);
Bool Italic = __o_Italic.Default(false);
Bool Underlined = __o_Underlined.Default(false);
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","htmlFormat",0x8e97acc5,"flixel.util.FlxStringUtil.htmlFormat","flixel/util/FlxStringUtil.hx",206,0x4e012e33)
            	HX_STACK_ARG(Text,"Text")
            	HX_STACK_ARG(Size,"Size")
            	HX_STACK_ARG(Color,"Color")
            	HX_STACK_ARG(Bold,"Bold")
            	HX_STACK_ARG(Italic,"Italic")
            	HX_STACK_ARG(Underlined,"Underlined")
HXLINE( 207)		HX_VARI( ::String,prefix) = ((((HX_("<font size='",c0,5b,1a,a4) + Size) + HX_("' color='#",2f,1d,64,33)) + Color) + HX_("'>",37,22,00,00));
HXLINE( 208)		HX_VARI( ::String,suffix) = HX_("</font>",3c,82,5f,8e);
HXLINE( 210)		if (Bold) {
HXLINE( 212)			prefix = (HX_("<b>",d8,dc,2d,00) + prefix);
HXLINE( 213)			suffix = (HX_("</font>",3c,82,5f,8e) + HX_("</b>",cf,cc,cc,27));
            		}
HXLINE( 215)		if (Italic) {
HXLINE( 217)			prefix = (HX_("<i>",f1,e2,2d,00) + prefix);
HXLINE( 218)			hx::AddEq(suffix,HX_("</i>",e8,d2,cc,27));
            		}
HXLINE( 220)		if (Underlined) {
HXLINE( 222)			prefix = (HX_("<u>",65,ed,2d,00) + prefix);
HXLINE( 223)			hx::AddEq(suffix,HX_("</u>",5c,dd,cc,27));
            		}
HXLINE( 226)		return ((prefix + Text) + suffix);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxStringUtil_obj,htmlFormat,return )

::String FlxStringUtil_obj::getClassName( ::Dynamic Obj,hx::Null< Bool >  __o_Simple){
Bool Simple = __o_Simple.Default(false);
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","getClassName",0xd57e17b0,"flixel.util.FlxStringUtil.getClassName","flixel/util/FlxStringUtil.hx",237,0x4e012e33)
            	HX_STACK_ARG(Obj,"Obj")
            	HX_STACK_ARG(Simple,"Simple")
HXLINE( 238)		HX_VAR( hx::Class,cl);
HXLINE( 239)		Bool _hx_tmp = ::Std_obj::is(Obj,hx::ClassOf< ::hx::Class >());
HXDLIN( 239)		if (_hx_tmp) {
HXLINE( 241)			cl = Obj;
            		}
            		else {
HXLINE( 245)			cl = ::Type_obj::getClass(Obj);
            		}
HXLINE( 248)		HX_VARI( ::String,s) = ::Type_obj::getClassName(cl);
HXLINE( 249)		Bool _hx_tmp1 = hx::IsNotNull( s );
HXDLIN( 249)		if (_hx_tmp1) {
HXLINE( 251)			s = ::StringTools_obj::replace(s,HX_("::",c0,32,00,00),HX_(".",2e,00,00,00));
HXLINE( 252)			if (Simple) {
HXLINE( 254)				Int _hx_tmp2 = s.lastIndexOf(HX_(".",2e,00,00,00),null());
HXDLIN( 254)				s = s.substr((_hx_tmp2 + (int)1),null());
            			}
            		}
HXLINE( 257)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,getClassName,return )

::String FlxStringUtil_obj::getDomain(::String url){
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","getDomain",0x05683217,"flixel.util.FlxStringUtil.getDomain","flixel/util/FlxStringUtil.hx",264,0x4e012e33)
            	HX_STACK_ARG(url,"url")
HXLINE( 265)		Int _hx_tmp = url.indexOf(HX_("://",da,2b,2c,00),null());
HXDLIN( 265)		HX_VARI( Int,urlStart) = (_hx_tmp + (int)3);
HXLINE( 266)		HX_VARI( Int,urlEnd) = url.indexOf(HX_("/",2f,00,00,00),urlStart);
HXLINE( 267)		HX_VARI( ::String,home) = url.substring(urlStart,urlEnd);
HXLINE( 268)		Int _hx_tmp1 = home.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 269)		Int _hx_tmp2 = home.lastIndexOf(HX_(".",2e,00,00,00),(_hx_tmp1 - (int)1));
HXLINE( 270)		home = home.substring((_hx_tmp2 + (int)1),home.length);
HXLINE( 271)		::Array< ::String > _hx_tmp3 = home.split(HX_(":",3a,00,00,00));
HXDLIN( 271)		home = _hx_tmp3->__get((int)0);
HXLINE( 272)		if ((home == HX_("",00,00,00,00))) {
HXLINE( 272)			return HX_("local",6b,c9,f0,78);
            		}
            		else {
HXLINE( 272)			return home;
            		}
HXDLIN( 272)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDomain,return )

Bool FlxStringUtil_obj::sameClassName( ::Dynamic Obj1, ::Dynamic Obj2,hx::Null< Bool >  __o_Simple){
Bool Simple = __o_Simple.Default(true);
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","sameClassName",0x3be7dc7a,"flixel.util.FlxStringUtil.sameClassName","flixel/util/FlxStringUtil.hx",285,0x4e012e33)
            	HX_STACK_ARG(Obj1,"Obj1")
            	HX_STACK_ARG(Obj2,"Obj2")
            	HX_STACK_ARG(Simple,"Simple")
HXLINE( 285)		::String _hx_tmp = ::flixel::util::FlxStringUtil_obj::getClassName(Obj1,Simple);
HXDLIN( 285)		::String _hx_tmp1 = ::flixel::util::FlxStringUtil_obj::getClassName(Obj2,Simple);
HXDLIN( 285)		return (_hx_tmp == _hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,sameClassName,return )

::Array< Int > FlxStringUtil_obj::toIntArray(::String Data){
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","toIntArray",0xa370d488,"flixel.util.FlxStringUtil.toIntArray","flixel/util/FlxStringUtil.hx",295,0x4e012e33)
            	HX_STACK_ARG(Data,"Data")
HXLINE( 296)		Bool _hx_tmp;
HXDLIN( 296)		Bool _hx_tmp1 = hx::IsNotNull( Data );
HXDLIN( 296)		if (_hx_tmp1) {
HXLINE( 296)			_hx_tmp = (Data != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 296)			_hx_tmp = false;
            		}
HXDLIN( 296)		if (_hx_tmp) {
HXLINE( 298)			HX_VARI( ::Array< ::String >,strArray) = Data.split(HX_(",",2c,00,00,00));
HXLINE( 299)			HX_VARI( ::Array< Int >,iArray) = ::Array_obj< Int >::__new();
HXLINE( 300)			{
HXLINE( 300)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 300)				while((_g < strArray->length)){
HXLINE( 300)					HX_VARI( ::String,str) = strArray->__get(_g);
HXDLIN( 300)					++_g;
HXLINE( 302)					 ::Dynamic _hx_tmp2 = ::Std_obj::parseInt(str);
HXDLIN( 302)					iArray->push(_hx_tmp2);
            				}
            			}
HXLINE( 304)			return iArray;
            		}
HXLINE( 306)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toIntArray,return )

::Array< Float > FlxStringUtil_obj::toFloatArray(::String Data){
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","toFloatArray",0xcff15c3b,"flixel.util.FlxStringUtil.toFloatArray","flixel/util/FlxStringUtil.hx",316,0x4e012e33)
            	HX_STACK_ARG(Data,"Data")
HXLINE( 317)		Bool _hx_tmp;
HXDLIN( 317)		Bool _hx_tmp1 = hx::IsNotNull( Data );
HXDLIN( 317)		if (_hx_tmp1) {
HXLINE( 317)			_hx_tmp = (Data != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 317)			_hx_tmp = false;
            		}
HXDLIN( 317)		if (_hx_tmp) {
HXLINE( 319)			HX_VARI( ::Array< ::String >,strArray) = Data.split(HX_(",",2c,00,00,00));
HXLINE( 320)			HX_VARI( ::Array< Float >,fArray) = ::Array_obj< Float >::__new();
HXLINE( 321)			{
HXLINE( 321)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 321)				while((_g < strArray->length)){
HXLINE( 321)					HX_VARI( ::String,str) = strArray->__get(_g);
HXDLIN( 321)					++_g;
HXLINE( 323)					Float _hx_tmp2 = ::Std_obj::parseFloat(str);
HXDLIN( 323)					fArray->push(_hx_tmp2);
            				}
            			}
HXLINE( 325)			return fArray;
            		}
HXLINE( 327)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toFloatArray,return )

::String FlxStringUtil_obj::arrayToCSV(::Array< Int > Data,Int Width,hx::Null< Bool >  __o_Invert){
Bool Invert = __o_Invert.Default(false);
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","arrayToCSV",0xd181e275,"flixel.util.FlxStringUtil.arrayToCSV","flixel/util/FlxStringUtil.hx",339,0x4e012e33)
            	HX_STACK_ARG(Data,"Data")
            	HX_STACK_ARG(Width,"Width")
            	HX_STACK_ARG(Invert,"Invert")
HXLINE( 340)		HX_VARI( Int,row) = (int)0;
HXLINE( 341)		HX_VAR( Int,column);
HXLINE( 342)		HX_VARI( ::String,csv) = HX_("",00,00,00,00);
HXLINE( 343)		Float _hx_tmp = ((Float)Data->length / (Float)Width);
HXDLIN( 343)		HX_VARI( Int,height) = ::Std_obj::_hx_int(_hx_tmp);
HXLINE( 344)		HX_VAR( Int,index);
HXLINE( 345)		HX_VARI( Int,offset) = (int)0;
HXLINE( 347)		while((row < height)){
HXLINE( 349)			column = (int)0;
HXLINE( 351)			while((column < Width)){
HXLINE( 353)				index = Data->__get(offset);
HXLINE( 355)				if (Invert) {
HXLINE( 357)					Bool _hx_tmp1 = (index == (int)0);
HXDLIN( 357)					if (_hx_tmp1) {
HXLINE( 359)						index = (int)1;
            					}
            					else {
HXLINE( 361)						Bool _hx_tmp2 = (index == (int)1);
HXDLIN( 361)						if (_hx_tmp2) {
HXLINE( 363)							index = (int)0;
            						}
            					}
            				}
HXLINE( 367)				if ((column == (int)0)) {
HXLINE( 369)					if ((row == (int)0)) {
HXLINE( 371)						hx::AddEq(csv,index);
            					}
            					else {
HXLINE( 375)						hx::AddEq(csv,(HX_("\n",0a,00,00,00) + index));
            					}
            				}
            				else {
HXLINE( 380)					hx::AddEq(csv,(HX_(", ",74,26,00,00) + index));
            				}
HXLINE( 383)				++column;
HXLINE( 384)				++offset;
            			}
HXLINE( 387)			++row;
            		}
HXLINE( 390)		return csv;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,arrayToCSV,return )

::String FlxStringUtil_obj::bitmapToCSV( ::openfl::_legacy::display::BitmapData Bitmap,hx::Null< Bool >  __o_Invert,hx::Null< Int >  __o_Scale,::Array< Int > ColorMap){
Bool Invert = __o_Invert.Default(false);
Int Scale = __o_Scale.Default(1);
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","bitmapToCSV",0x6fd72f79,"flixel.util.FlxStringUtil.bitmapToCSV","flixel/util/FlxStringUtil.hx",404,0x4e012e33)
            	HX_STACK_ARG(Bitmap,"Bitmap")
            	HX_STACK_ARG(Invert,"Invert")
            	HX_STACK_ARG(Scale,"Scale")
            	HX_STACK_ARG(ColorMap,"ColorMap")
HXLINE( 405)		Bool _hx_tmp = (Scale < (int)1);
HXDLIN( 405)		if (_hx_tmp) {
HXLINE( 407)			Scale = (int)1;
            		}
HXLINE( 411)		if ((Scale > (int)1)) {
HXLINE( 413)			HX_VARI(  ::openfl::_legacy::display::BitmapData,bd) = Bitmap;
HXLINE( 414)			Int _hx_tmp1 = Bitmap->get_width();
HXDLIN( 414)			Int _hx_tmp2 = (_hx_tmp1 * Scale);
HXDLIN( 414)			Int _hx_tmp3 = Bitmap->get_height();
HXDLIN( 414)			Bitmap =  ::openfl::_legacy::display::BitmapData_obj::__new(_hx_tmp2,(_hx_tmp3 * Scale),null(),null(),null());
HXLINE( 417)			HX_VARI( Int,bdW) = bd->get_width();
HXLINE( 418)			HX_VARI( Int,bdH) = bd->get_height();
HXLINE( 419)			HX_VARI( Int,pCol) = (int)0;
HXLINE( 421)			{
HXLINE( 421)				HX_VARI( Int,_g1) = (int)0;
HXDLIN( 421)				while((_g1 < bdW)){
HXLINE( 421)					HX_VARI( Int,i) = _g1++;
HXLINE( 423)					{
HXLINE( 423)						HX_VARI( Int,_g3) = (int)0;
HXDLIN( 423)						while((_g3 < bdH)){
HXLINE( 423)							HX_VARI( Int,j) = _g3++;
HXLINE( 425)							pCol = bd->getPixel(i,j);
HXLINE( 427)							{
HXLINE( 427)								HX_VARI( Int,_g5) = (int)0;
HXDLIN( 427)								HX_VARI( Int,_g4) = Scale;
HXDLIN( 427)								while((_g5 < _g4)){
HXLINE( 427)									HX_VARI( Int,k) = _g5++;
HXLINE( 429)									{
HXLINE( 429)										HX_VARI( Int,_g7) = (int)0;
HXDLIN( 429)										HX_VARI( Int,_g6) = Scale;
HXDLIN( 429)										while((_g7 < _g6)){
HXLINE( 429)											HX_VARI( Int,m) = _g7++;
HXLINE( 431)											Bitmap->setPixel(((i * Scale) + k),((j * Scale) + m),pCol);
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 443)		Bool _hx_tmp4 = hx::IsNotNull( ColorMap );
HXDLIN( 443)		if (_hx_tmp4) {
HXLINE( 445)			HX_VARI_NAME( Int,_g11,"_g1") = (int)0;
HXDLIN( 445)			HX_VARI( Int,_g) = ColorMap->length;
HXDLIN( 445)			while((_g11 < _g)){
HXLINE( 445)				HX_VARI_NAME( Int,i1,"i") = _g11++;
HXLINE( 447)				ColorMap[i1] = ((int)ColorMap->__get(i1) & (int)(int)16777215);
            			}
            		}
HXLINE( 452)		HX_VARI( Int,row) = (int)0;
HXLINE( 453)		HX_VAR( Int,column);
HXLINE( 454)		HX_VAR( Int,pixel);
HXLINE( 455)		HX_VARI( ::String,csv) = HX_("",00,00,00,00);
HXLINE( 456)		HX_VARI( Int,bitmapWidth) = Bitmap->get_width();
HXLINE( 457)		HX_VARI( Int,bitmapHeight) = Bitmap->get_height();
HXLINE( 459)		while((row < bitmapHeight)){
HXLINE( 461)			column = (int)0;
HXLINE( 463)			while((column < bitmapWidth)){
HXLINE( 466)				pixel = Bitmap->getPixel(column,row);
HXLINE( 468)				Bool _hx_tmp5 = hx::IsNotNull( ColorMap );
HXDLIN( 468)				if (_hx_tmp5) {
HXLINE( 470)					pixel = ColorMap->indexOf(pixel,null());
            				}
            				else {
HXLINE( 472)					Bool _hx_tmp6;
HXDLIN( 472)					Bool _hx_tmp7;
HXDLIN( 472)					if (Invert) {
HXLINE( 472)						_hx_tmp7 = (pixel > (int)0);
            					}
            					else {
HXLINE( 472)						_hx_tmp7 = false;
            					}
HXDLIN( 472)					if (!(_hx_tmp7)) {
HXLINE( 472)						if (!(Invert)) {
HXLINE( 472)							_hx_tmp6 = (pixel == (int)0);
            						}
            						else {
HXLINE( 472)							_hx_tmp6 = false;
            						}
            					}
            					else {
HXLINE( 472)						_hx_tmp6 = true;
            					}
HXDLIN( 472)					if (_hx_tmp6) {
HXLINE( 474)						pixel = (int)1;
            					}
            					else {
HXLINE( 478)						pixel = (int)0;
            					}
            				}
HXLINE( 482)				if ((column == (int)0)) {
HXLINE( 484)					if ((row == (int)0)) {
HXLINE( 486)						hx::AddEq(csv,pixel);
            					}
            					else {
HXLINE( 490)						hx::AddEq(csv,(HX_("\n",0a,00,00,00) + pixel));
            					}
            				}
            				else {
HXLINE( 495)					hx::AddEq(csv,(HX_(", ",74,26,00,00) + pixel));
            				}
HXLINE( 498)				++column;
            			}
HXLINE( 501)			++row;
            		}
HXLINE( 504)		return csv;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxStringUtil_obj,bitmapToCSV,return )

::String FlxStringUtil_obj::imageToCSV( ::Dynamic ImageFile,hx::Null< Bool >  __o_Invert,hx::Null< Int >  __o_Scale,::Array< Int > ColorMap){
Bool Invert = __o_Invert.Default(false);
Int Scale = __o_Scale.Default(1);
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","imageToCSV",0xe3229173,"flixel.util.FlxStringUtil.imageToCSV","flixel/util/FlxStringUtil.hx",518,0x4e012e33)
            	HX_STACK_ARG(ImageFile,"ImageFile")
            	HX_STACK_ARG(Invert,"Invert")
            	HX_STACK_ARG(Scale,"Scale")
            	HX_STACK_ARG(ColorMap,"ColorMap")
HXLINE( 519)		HX_VAR(  ::openfl::_legacy::display::BitmapData,tempBitmapData);
HXLINE( 521)		Bool _hx_tmp = ::Std_obj::is(ImageFile,hx::ClassOf< ::String >());
HXDLIN( 521)		if (_hx_tmp) {
HXLINE( 523)			HX_VARI( ::String,id) = ( (::String)(ImageFile) );
HXDLIN( 523)			Bool _hx_tmp1 = ::openfl::_legacy::Assets_obj::exists(id,null());
HXDLIN( 523)			if (_hx_tmp1) {
HXLINE( 523)				tempBitmapData = ::openfl::_legacy::Assets_obj::getBitmapData(id,false);
            			}
            			else {
HXLINE( 523)				::flixel::FlxG_obj::log->advanced(((HX_("Could not find a BitmapData asset with ID '",5f,79,a9,21) + id) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXDLIN( 523)				tempBitmapData = null();
            			}
            		}
            		else {
HXLINE( 527)			tempBitmapData = ( ( ::openfl::_legacy::display::BitmapData)(::Type_obj::createInstance(ImageFile,::cpp::VirtualArray_obj::__new(0))->__Field(HX_("bitmapData",b9,b5,c0,33),hx::paccDynamic)) );
            		}
HXLINE( 530)		return ::flixel::util::FlxStringUtil_obj::bitmapToCSV(tempBitmapData,Invert,Scale,ColorMap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxStringUtil_obj,imageToCSV,return )

::String FlxStringUtil_obj::getDebugString(::Array< ::Dynamic> LabelValuePairs){
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","getDebugString",0x47d891d1,"flixel.util.FlxStringUtil.getDebugString","flixel/util/FlxStringUtil.hx",540,0x4e012e33)
            	HX_STACK_ARG(LabelValuePairs,"LabelValuePairs")
HXLINE( 541)		HX_VARI( ::String,output) = HX_("(",28,00,00,00);
HXLINE( 542)		{
HXLINE( 542)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 542)			while((_g < LabelValuePairs->length)){
HXLINE( 542)				HX_VARI(  ::flixel::util::LabelValuePair,pair) = LabelValuePairs->__get(_g).StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 542)				++_g;
HXLINE( 544)				hx::AddEq(output,(pair->label + HX_(": ",a6,32,00,00)));
HXLINE( 545)				HX_VARI(  ::Dynamic,value) = pair->value;
HXLINE( 546)				Bool _hx_tmp = ::Std_obj::is(value,hx::ClassOf< ::Float >());
HXDLIN( 546)				if (_hx_tmp) {
HXLINE( 548)					value = ::flixel::math::FlxMath_obj::roundDecimal(( (Float)(value) ),::flixel::FlxG_obj::debugger->precision);
            				}
HXLINE( 550)				::String _hx_tmp1 = ::Std_obj::string(value);
HXDLIN( 550)				hx::AddEq(output,(_hx_tmp1 + HX_(" | ",44,b4,18,00)));
HXLINE( 551)				::flixel::util::LabelValuePair_obj::_pool->put(pair);
            			}
            		}
HXLINE( 554)		Int _hx_tmp2 = (output.length - (int)2);
HXDLIN( 554)		::String _hx_tmp3 = output.substr((int)0,_hx_tmp2);
HXDLIN( 554)		output = ::StringTools_obj::trim(_hx_tmp3);
HXLINE( 555)		return (output + HX_(")",29,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDebugString,return )

Bool FlxStringUtil_obj::contains(::String s,::String str){
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","contains",0x45000522,"flixel.util.FlxStringUtil.contains","flixel/util/FlxStringUtil.hx",560,0x4e012e33)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(str,"str")
HXLINE( 560)		Int _hx_tmp = s.indexOf(str,null());
HXDLIN( 560)		return (_hx_tmp != (int)-1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,contains,return )

::String FlxStringUtil_obj::remove(::String s,::String sub){
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","remove",0xf6fd7087,"flixel.util.FlxStringUtil.remove","flixel/util/FlxStringUtil.hx",568,0x4e012e33)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(sub,"sub")
HXLINE( 568)		return ::StringTools_obj::replace(s,sub,HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,remove,return )

::String FlxStringUtil_obj::insert(::String s,Int pos,::String insertion){
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","insert",0x9052177c,"flixel.util.FlxStringUtil.insert","flixel/util/FlxStringUtil.hx",576,0x4e012e33)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(insertion,"insertion")
HXLINE( 576)		::String _hx_tmp = s.substring((int)0,pos);
HXDLIN( 576)		::String _hx_tmp1 = (_hx_tmp + insertion);
HXDLIN( 576)		::String _hx_tmp2 = s.substr(pos,null());
HXDLIN( 576)		return (_hx_tmp1 + _hx_tmp2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,insert,return )

::Array< ::String > FlxStringUtil_obj::sortAlphabetically(::Array< ::String > list){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		Int _hx_run(::String a,::String b){
            			HX_STACK_FRAME("flixel.util.FlxStringUtil","sortAlphabetically",0xf5002ac6,"flixel.util.FlxStringUtil.sortAlphabetically","flixel/util/FlxStringUtil.hx",582,0x4e012e33)
            			HX_STACK_ARG(a,"a")
            			HX_STACK_ARG(b,"b")
HXLINE( 583)			a = a.toLowerCase();
HXLINE( 584)			b = b.toLowerCase();
HXLINE( 585)			if ((a < b)) {
HXLINE( 585)				return (int)-1;
            			}
HXLINE( 586)			if ((a > b)) {
HXLINE( 586)				return (int)1;
            			}
HXLINE( 587)			return (int)0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACK_FRAME("flixel.util.FlxStringUtil","sortAlphabetically",0xf5002ac6,"flixel.util.FlxStringUtil.sortAlphabetically","flixel/util/FlxStringUtil.hx",580,0x4e012e33)
            	HX_STACK_ARG(list,"list")
HXLINE( 581)		list->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 589)		return list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,sortAlphabetically,return )

Bool FlxStringUtil_obj::isNullOrEmpty(::String s){
            	HX_STACK_FRAME("flixel.util.FlxStringUtil","isNullOrEmpty",0x99779cf6,"flixel.util.FlxStringUtil.isNullOrEmpty","flixel/util/FlxStringUtil.hx",598,0x4e012e33)
            	HX_STACK_ARG(s,"s")
HXLINE( 598)		Bool _hx_tmp = hx::IsNotNull( s );
HXDLIN( 598)		if (_hx_tmp) {
HXLINE( 598)			return (s.length == (int)0);
            		}
            		else {
HXLINE( 598)			return true;
            		}
HXDLIN( 598)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,isNullOrEmpty,return )


FlxStringUtil_obj::FlxStringUtil_obj()
{
}

bool FlxStringUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"insert") ) { outValue = insert_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDomain") ) { outValue = getDomain_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"formatTime") ) { outValue = formatTime_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"htmlFormat") ) { outValue = htmlFormat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toIntArray") ) { outValue = toIntArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"arrayToCSV") ) { outValue = arrayToCSV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"imageToCSV") ) { outValue = imageToCSV_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"formatTicks") ) { outValue = formatTicks_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"formatArray") ) { outValue = formatArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"formatMoney") ) { outValue = formatMoney_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"formatBytes") ) { outValue = formatBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bitmapToCSV") ) { outValue = bitmapToCSV_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"filterDigits") ) { outValue = filterDigits_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getClassName") ) { outValue = getClassName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toFloatArray") ) { outValue = toFloatArray_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sameClassName") ) { outValue = sameClassName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isNullOrEmpty") ) { outValue = isNullOrEmpty_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDebugString") ) { outValue = getDebugString_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"formatStringMap") ) { outValue = formatStringMap_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"sortAlphabetically") ) { outValue = sortAlphabetically_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxStringUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxStringUtil_obj_sStaticStorageInfo = 0;
#endif

static void FlxStringUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxStringUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxStringUtil_obj::__mClass;

static ::String FlxStringUtil_obj_sStaticFields[] = {
	HX_HCSTRING("formatTicks","\xbf","\x87","\x47","\xc9"),
	HX_HCSTRING("formatTime","\xe4","\xee","\x61","\x0c"),
	HX_HCSTRING("formatArray","\xe2","\xc6","\xa8","\xde"),
	HX_HCSTRING("formatStringMap","\x14","\x64","\x33","\x33"),
	HX_HCSTRING("formatMoney","\x89","\x13","\x79","\xc5"),
	HX_HCSTRING("formatBytes","\xb4","\x61","\xb1","\x76"),
	HX_HCSTRING("filterDigits","\xfe","\x37","\x80","\xc1"),
	HX_HCSTRING("htmlFormat","\x02","\xfb","\x4f","\xcb"),
	HX_HCSTRING("getClassName","\x2d","\x2f","\x94","\xeb"),
	HX_HCSTRING("getDomain","\x7a","\x3a","\xd7","\xa9"),
	HX_HCSTRING("sameClassName","\x5d","\x52","\x26","\x79"),
	HX_HCSTRING("toIntArray","\xc5","\x22","\x29","\xe0"),
	HX_HCSTRING("toFloatArray","\xb8","\x73","\x07","\xe6"),
	HX_HCSTRING("arrayToCSV","\xb2","\x30","\x3a","\x0e"),
	HX_HCSTRING("bitmapToCSV","\x9c","\x56","\x63","\x54"),
	HX_HCSTRING("imageToCSV","\xb0","\xdf","\xda","\x1f"),
	HX_HCSTRING("getDebugString","\x8e","\x42","\x41","\xa1"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"),
	HX_HCSTRING("sortAlphabetically","\x03","\x7e","\x3c","\x7b"),
	HX_HCSTRING("isNullOrEmpty","\xd9","\x12","\xb6","\xd6"),
	::String(null())
};

void FlxStringUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxStringUtil","\xcb","\x21","\xbd","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxStringUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxStringUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxStringUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxStringUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxStringUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxStringUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxStringUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
