// Generated by Haxe 3.3.0
#ifndef INCLUDED_cpp_vm_Thread
#define INCLUDED_cpp_vm_Thread

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Thread)

namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES Thread_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Thread_obj OBJ_;
		Thread_obj();

	public:
		void __construct( ::Dynamic h);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cpp.vm.Thread")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"cpp.vm.Thread"); }
		static hx::ObjectPtr< Thread_obj > __new( ::Dynamic h);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Thread_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Thread","\xea","\xee","\x4d","\xc3"); }

		static  ::cpp::vm::Thread current();
		static ::Dynamic current_dyn();

		static  ::cpp::vm::Thread create( ::Dynamic callb);
		static ::Dynamic create_dyn();

		static  ::Dynamic readMessage(Bool block);
		static ::Dynamic readMessage_dyn();

		 ::Dynamic handle;
		void sendMessage( ::Dynamic msg);
		::Dynamic sendMessage_dyn();

		virtual Int __compare( ::Dynamic t);
		::Dynamic __compare_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Thread */ 
