// Generated by Haxe 3.3.0
#ifndef INCLUDED_haxe_ds_ArraySort
#define INCLUDED_haxe_ds_ArraySort

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,ArraySort)

namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES ArraySort_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ArraySort_obj OBJ_;
		ArraySort_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ds.ArraySort")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ds.ArraySort"); }
		static hx::ObjectPtr< ArraySort_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArraySort_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ArraySort","\x77","\xe1","\x9c","\x37"); }

		static void sort(::cpp::VirtualArray a, ::Dynamic cmp);
		static ::Dynamic sort_dyn();

		static void rec(::cpp::VirtualArray a, ::Dynamic cmp,Int from,Int to);
		static ::Dynamic rec_dyn();

		static void doMerge(::cpp::VirtualArray a, ::Dynamic cmp,Int from,Int pivot,Int to,Int len1,Int len2);
		static ::Dynamic doMerge_dyn();

		static void rotate(::cpp::VirtualArray a, ::Dynamic cmp,Int from,Int mid,Int to);
		static ::Dynamic rotate_dyn();

		static Int gcd(Int m,Int n);
		static ::Dynamic gcd_dyn();

		static Int upper(::cpp::VirtualArray a, ::Dynamic cmp,Int from,Int to,Int val);
		static ::Dynamic upper_dyn();

		static Int lower(::cpp::VirtualArray a, ::Dynamic cmp,Int from,Int to,Int val);
		static ::Dynamic lower_dyn();

		static void swap(::cpp::VirtualArray a,Int i,Int j);
		static ::Dynamic swap_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_ArraySort */ 