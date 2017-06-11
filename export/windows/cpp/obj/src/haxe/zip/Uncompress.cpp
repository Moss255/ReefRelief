// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_zip_FlushMode
#include <haxe/zip/FlushMode.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif

namespace haxe{
namespace zip{

void Uncompress_obj::__construct( ::Dynamic windowBits){
            	HX_STACK_FRAME("haxe.zip.Uncompress","new",0x34f307c2,"haxe.zip.Uncompress.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",29,0x0a7f5a92)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(windowBits,"windowBits")
HXLINE(  29)		this->s = _hx_inflate_init(windowBits);
            	}

Dynamic Uncompress_obj::__CreateEmpty() { return new Uncompress_obj; }

hx::ObjectPtr< Uncompress_obj > Uncompress_obj::__new( ::Dynamic windowBits)
{
	hx::ObjectPtr< Uncompress_obj > _hx_result = new Uncompress_obj();
	_hx_result->__construct(windowBits);
	return _hx_result;
}

Dynamic Uncompress_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Uncompress_obj > _hx_result = new Uncompress_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

 ::Dynamic Uncompress_obj::execute( ::haxe::io::Bytes src,Int srcPos, ::haxe::io::Bytes dst,Int dstPos){
            	HX_STACK_FRAME("haxe.zip.Uncompress","execute",0xb3589a97,"haxe.zip.Uncompress.execute","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",33,0x0a7f5a92)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(src,"src")
            	HX_STACK_ARG(srcPos,"srcPos")
            	HX_STACK_ARG(dst,"dst")
            	HX_STACK_ARG(dstPos,"dstPos")
HXLINE(  33)		return _hx_inflate_buffer(this->s,src->b,srcPos,dst->b,dstPos);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Uncompress_obj,execute,return )

void Uncompress_obj::setFlushMode(::hx::EnumBase f){
            	HX_STACK_FRAME("haxe.zip.Uncompress","setFlushMode",0xbecba0a3,"haxe.zip.Uncompress.setFlushMode","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",37,0x0a7f5a92)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(f,"f")
HXLINE(  37)		 ::Dynamic _hx_tmp = this->s;
HXDLIN(  37)		::String _hx_tmp1 = ( (::String)(f->__Tag()) );
HXDLIN(  37)		_hx_zip_set_flush_mode(_hx_tmp,_hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Uncompress_obj,setFlushMode,(void))

void Uncompress_obj::close(){
            	HX_STACK_FRAME("haxe.zip.Uncompress","close",0x4cc86b9a,"haxe.zip.Uncompress.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",41,0x0a7f5a92)
            	HX_STACK_THIS(this)
HXLINE(  41)		_hx_inflate_end(this->s);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Uncompress_obj,close,(void))

 ::haxe::io::Bytes Uncompress_obj::run( ::haxe::io::Bytes src, ::Dynamic bufsize){
            	HX_STACK_FRAME("haxe.zip.Uncompress","run",0x34f61ead,"haxe.zip.Uncompress.run","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/zip/Uncompress.hx",44,0x0a7f5a92)
            	HX_STACK_ARG(src,"src")
            	HX_STACK_ARG(bufsize,"bufsize")
HXLINE(  45)		HX_VARI(  ::haxe::zip::Uncompress,u) =  ::haxe::zip::Uncompress_obj::__new(null());
HXLINE(  46)		Bool _hx_tmp = hx::IsNull( bufsize );
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  46)			bufsize = (int)65536;
            		}
HXLINE(  47)		HX_VARI(  ::haxe::io::Bytes,tmp) = ::haxe::io::Bytes_obj::alloc(bufsize);
HXLINE(  48)		HX_VARI(  ::haxe::io::BytesBuffer,b) =  ::haxe::io::BytesBuffer_obj::__new();
HXLINE(  49)		HX_VARI( Int,pos) = (int)0;
HXLINE(  50)		u->setFlushMode(::haxe::zip::FlushMode_obj::SYNC_dyn());
HXLINE(  51)		while(true){
HXLINE(  52)			HX_VARI(  ::Dynamic,r) = u->execute(src,pos,tmp,(int)0);
HXLINE(  53)			{
HXLINE(  53)				HX_VARI( Int,len) = ( (Int)(r->__Field(HX_("write",df,6c,59,d0),hx::paccDynamic)) );
HXDLIN(  53)				Bool _hx_tmp1;
HXDLIN(  53)				if ((len >= (int)0)) {
HXLINE(  53)					_hx_tmp1 = (len > tmp->length);
            				}
            				else {
HXLINE(  53)					_hx_tmp1 = true;
            				}
HXDLIN(  53)				if (_hx_tmp1) {
HXLINE(  53)					HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            				}
HXDLIN(  53)				HX_VARI( ::Array< unsigned char >,b2) = tmp->b;
HXDLIN(  53)				{
HXLINE(  53)					HX_VARI( Int,_g1) = (int)0;
HXDLIN(  53)					while((_g1 < len)){
HXLINE(  53)						HX_VARI( Int,i) = _g1++;
HXDLIN(  53)						unsigned char _hx_tmp2 = b2->__get(i);
HXDLIN(  53)						b->b->push(_hx_tmp2);
            					}
            				}
            			}
HXLINE(  54)			hx::AddEq(pos,( (Int)(r->__Field(HX_("read",56,4b,a7,4b),hx::paccDynamic)) ));
HXLINE(  55)			if (( (Bool)(r->__Field(HX_("done",82,f0,6d,42),hx::paccDynamic)) )) {
HXLINE(  56)				goto _hx_goto_0;
            			}
            		}
            		_hx_goto_0:;
HXLINE(  58)		u->close();
HXLINE(  59)		return b->getBytes();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Uncompress_obj,run,return )


Uncompress_obj::Uncompress_obj()
{
}

void Uncompress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uncompress);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void Uncompress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
}

hx::Val Uncompress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return hx::Val( s); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return hx::Val( execute_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setFlushMode") ) { return hx::Val( setFlushMode_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Uncompress_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
	}
	return false;
}

hx::Val Uncompress_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uncompress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Uncompress_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Uncompress_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Uncompress_obj_sStaticStorageInfo = 0;
#endif

static ::String Uncompress_obj_sMemberFields[] = {
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("setFlushMode","\x45","\xd4","\x07","\x63"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void Uncompress_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uncompress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Uncompress_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uncompress_obj::__mClass,"__mClass");
};

#endif

hx::Class Uncompress_obj::__mClass;

static ::String Uncompress_obj_sStaticFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null())
};

void Uncompress_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.zip.Uncompress","\xd0","\xbe","\x27","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Uncompress_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Uncompress_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Uncompress_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Uncompress_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Uncompress_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Uncompress_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Uncompress_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Uncompress_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace zip
