#include <hxcpp.h>

#ifndef INCLUDED_FSM
#include <FSM.h>
#endif

Void FSM_obj::__construct(Dynamic InitState)
{
HX_STACK_FRAME("FSM","new",0x0313b752,"FSM.new","FSM.hx",7,0xfa46185e)
HX_STACK_THIS(this)
HX_STACK_ARG(InitState,"InitState")
{
	HX_STACK_LINE(7)
	this->activeState = InitState;
}
;
	return null();
}

//FSM_obj::~FSM_obj() { }

Dynamic FSM_obj::__CreateEmpty() { return  new FSM_obj; }
hx::ObjectPtr< FSM_obj > FSM_obj::__new(Dynamic InitState)
{  hx::ObjectPtr< FSM_obj > _result_ = new FSM_obj();
	_result_->__construct(InitState);
	return _result_;}

Dynamic FSM_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FSM_obj > _result_ = new FSM_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FSM_obj::update( ){
{
		HX_STACK_FRAME("FSM","update",0x2caf0257,"FSM.update","FSM.hx",11,0xfa46185e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12)
		Dynamic tmp = this->activeState_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12)
		if ((tmp1)){
			HX_STACK_LINE(13)
			this->activeState();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FSM_obj,update,(void))


FSM_obj::FSM_obj()
{
}

void FSM_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FSM);
	HX_MARK_MEMBER_NAME(activeState,"activeState");
	HX_MARK_END_CLASS();
}

void FSM_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeState,"activeState");
}

Dynamic FSM_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeState") ) { return activeState; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FSM_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"activeState") ) { activeState=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FSM_obj,activeState),HX_HCSTRING("activeState","\x6b","\x76","\x50","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("activeState","\x6b","\x76","\x50","\xe0"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FSM_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FSM_obj::__mClass,"__mClass");
};

#endif

hx::Class FSM_obj::__mClass;

void FSM_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("FSM","\x60","\x66","\x35","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FSM_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

