// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_Int16Array
#include <openfl/_legacy/utils/Int16Array.h>
#endif

namespace openfl{
namespace _legacy{
namespace utils{

void Int16Array_obj::__construct( ::Dynamic bufferOrArray,hx::Null< Int >  __o_start, ::Dynamic elements){
Int start = __o_start.Default(0);
            	HX_STACK_FRAME("openfl._legacy.utils.Int16Array","new",0xdfdfba78,"openfl._legacy.utils.Int16Array.new","openfl/_legacy/utils/Int16Array.hx",19,0x50e40f95)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bufferOrArray,"bufferOrArray")
            	HX_STACK_ARG(start,"start")
            	HX_STACK_ARG(elements,"elements")
HXLINE(  21)		this->BYTES_PER_ELEMENT = (int)2;
HXLINE(  23)		Bool _hx_tmp = ::Std_obj::is(bufferOrArray,hx::ClassOf< ::Int >());
HXDLIN(  23)		if (_hx_tmp) {
HXLINE(  25)			Int _hx_tmp1 = ::Std_obj::_hx_int(bufferOrArray);
HXDLIN(  25)			super::__construct(((int)_hx_tmp1 << (int)(int)1),null(),null());
HXLINE(  26)			this->length = ::Std_obj::_hx_int(bufferOrArray);
            		}
            		else {
HXLINE(  28)			Bool _hx_tmp2 = ::Std_obj::is(bufferOrArray,hx::ArrayBase::__mClass);
HXDLIN(  28)			if (_hx_tmp2) {
HXLINE(  30)				HX_VARI( ::Array< Int >,ints) = ( (::Array< Int >)(bufferOrArray) );
HXLINE(  32)				Bool _hx_tmp3 = hx::IsNotNull( elements );
HXDLIN(  32)				if (_hx_tmp3) {
HXLINE(  34)					this->length = elements;
            				}
            				else {
HXLINE(  38)					this->length = (ints->length - start);
            				}
HXLINE(  42)				Int _hx_tmp4 = ((int)this->length << (int)(int)1);
HXDLIN(  42)				super::__construct(_hx_tmp4,null(),null());
HXLINE(  48)				{
HXLINE(  48)					HX_VARI( Int,_g1) = (int)0;
HXDLIN(  48)					HX_VARI( Int,_g) = this->length;
HXDLIN(  48)					while((_g1 < _g)){
HXLINE(  48)						HX_VARI( Int,i) = _g1++;
HXLINE(  51)						Int _hx_tmp5 = ((int)i << (int)(int)1);
HXDLIN(  51)						Int _hx_tmp6 = ints->__get(i);
HXDLIN(  51)						::__hxcpp_memory_set_i16(this->bytes,_hx_tmp5,_hx_tmp6);
            					}
            				}
            			}
            			else {
HXLINE(  94)				 ::Dynamic _hx_tmp7;
HXDLIN(  94)				Bool _hx_tmp8 = hx::IsNotNull( elements );
HXDLIN(  94)				if (_hx_tmp8) {
HXLINE(  94)					_hx_tmp7 = (elements * (int)2);
            				}
            				else {
HXLINE(  94)					_hx_tmp7 = null();
            				}
HXDLIN(  94)				super::__construct(bufferOrArray,start,_hx_tmp7);
HXLINE(  96)				if ((((int)this->byteLength & (int)(int)1) > (int)0)) {
HXLINE(  98)					HX_STACK_DO_THROW(HX_("Invalid array size",51,8f,9a,6e));
            				}
HXLINE( 102)				this->length = ((int)this->byteLength >> (int)(int)1);
HXLINE( 104)				if ((((int)this->length << (int)(int)1) != this->byteLength)) {
HXLINE( 106)					HX_STACK_DO_THROW(HX_("Invalid length multiple",41,25,0f,e4));
            				}
            			}
            		}
            	}

Dynamic Int16Array_obj::__CreateEmpty() { return new Int16Array_obj; }

hx::ObjectPtr< Int16Array_obj > Int16Array_obj::__new( ::Dynamic bufferOrArray,hx::Null< Int >  __o_start, ::Dynamic elements)
{
	hx::ObjectPtr< Int16Array_obj > _hx_result = new Int16Array_obj();
	_hx_result->__construct(bufferOrArray,__o_start,elements);
	return _hx_result;
}

Dynamic Int16Array_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Int16Array_obj > _hx_result = new Int16Array_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

Int Int16Array_obj::__get(Int index){
            	HX_STACK_FRAME("openfl._legacy.utils.Int16Array","__get",0xbc17818e,"openfl._legacy.utils.Int16Array.__get","openfl/_legacy/utils/Int16Array.hx",115,0x50e40f95)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
HXLINE( 115)		Int _hx_tmp = (((int)index << (int)(int)1) + this->byteOffset);
HXDLIN( 115)		return ::__hxcpp_memory_get_i16(this->bytes,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Int16Array_obj,__get,return )

void Int16Array_obj::__set(Int index,Int value){
            	HX_STACK_FRAME("openfl._legacy.utils.Int16Array","__set",0xbc209c9a,"openfl._legacy.utils.Int16Array.__set","openfl/_legacy/utils/Int16Array.hx",116,0x50e40f95)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(value,"value")
HXLINE( 116)		Int _hx_tmp = (((int)index << (int)(int)1) + this->byteOffset);
HXDLIN( 116)		::__hxcpp_memory_set_i16(this->bytes,_hx_tmp,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Int16Array_obj,__set,(void))

Int Int16Array_obj::SBYTES_PER_ELEMENT;


Int16Array_obj::Int16Array_obj()
{
}

hx::Val Int16Array_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return hx::Val( __get_dyn()); }
		if (HX_FIELD_EQ(inName,"__set") ) { return hx::Val( __set_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { return hx::Val( BYTES_PER_ELEMENT); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Int16Array_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { BYTES_PER_ELEMENT=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Int16Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Int16Array_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Int16Array_obj,BYTES_PER_ELEMENT),HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{hx::fsInt,(int)offsetof(Int16Array_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Int16Array_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Int16Array_obj::SBYTES_PER_ELEMENT,HX_HCSTRING("SBYTES_PER_ELEMENT","\xf3","\x76","\x83","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Int16Array_obj_sMemberFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	::String(null()) };

static void Int16Array_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int16Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Int16Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Int16Array_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int16Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Int16Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#endif

hx::Class Int16Array_obj::__mClass;

static ::String Int16Array_obj_sStaticFields[] = {
	HX_HCSTRING("SBYTES_PER_ELEMENT","\xf3","\x76","\x83","\xc2"),
	::String(null())
};

void Int16Array_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.Int16Array","\x86","\x5e","\x6b","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Int16Array_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Int16Array_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Int16Array_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Int16Array_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Int16Array_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Int16Array_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Int16Array_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Int16Array_obj::__boot()
{
{
            	HX_STACK_FRAME("openfl._legacy.utils.Int16Array","boot",0xfbfc6f1a,"openfl._legacy.utils.Int16Array.boot","openfl/_legacy/utils/Int16Array.hx",13,0x50e40f95)
HXLINE(  13)		SBYTES_PER_ELEMENT = (int)2;
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
