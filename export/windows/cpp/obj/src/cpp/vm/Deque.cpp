// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Deque
#include <cpp/vm/Deque.h>
#endif

namespace cpp{
namespace vm{

void Deque_obj::__construct(){
            	HX_STACK_FRAME("cpp.vm.Deque","new",0xa6685326,"cpp.vm.Deque.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Deque.hx",28,0xd5f989f1)
            	HX_STACK_THIS(this)
HXLINE(  28)		this->q = ::__hxcpp_deque_create();
            	}

Dynamic Deque_obj::__CreateEmpty() { return new Deque_obj; }

hx::ObjectPtr< Deque_obj > Deque_obj::__new()
{
	hx::ObjectPtr< Deque_obj > _hx_result = new Deque_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Deque_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Deque_obj > _hx_result = new Deque_obj();
	_hx_result->__construct();
	return _hx_result;
}

void Deque_obj::add( ::Dynamic i){
            	HX_STACK_FRAME("cpp.vm.Deque","add",0xa65e74e7,"cpp.vm.Deque.add","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Deque.hx",31,0xd5f989f1)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(i,"i")
HXLINE(  31)		::__hxcpp_deque_add(this->q,i);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Deque_obj,add,(void))

 ::Dynamic Deque_obj::pop(Bool block){
            	HX_STACK_FRAME("cpp.vm.Deque","pop",0xa669e057,"cpp.vm.Deque.pop","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Deque.hx",37,0xd5f989f1)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(block,"block")
HXLINE(  37)		return ::__hxcpp_deque_pop(this->q,block);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Deque_obj,pop,return )


Deque_obj::Deque_obj()
{
}

void Deque_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Deque);
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_END_CLASS();
}

void Deque_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(q,"q");
}

hx::Val Deque_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { return hx::Val( q); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		if (HX_FIELD_EQ(inName,"pop") ) { return hx::Val( pop_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Deque_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Deque_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Deque_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Deque_obj,q),HX_HCSTRING("q","\x71","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Deque_obj_sStaticStorageInfo = 0;
#endif

static ::String Deque_obj_sMemberFields[] = {
	HX_HCSTRING("q","\x71","\x00","\x00","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	::String(null()) };

static void Deque_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Deque_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Deque_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Deque_obj::__mClass,"__mClass");
};

#endif

hx::Class Deque_obj::__mClass;

void Deque_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Deque","\x34","\x88","\xf2","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Deque_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Deque_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Deque_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Deque_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Deque_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Deque_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
} // end namespace vm