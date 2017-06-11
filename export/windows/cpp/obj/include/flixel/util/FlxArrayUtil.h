// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#define INCLUDED_flixel_util_FlxArrayUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,WatchEntry)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxArrayUtil)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxArrayUtil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxArrayUtil_obj OBJ_;
		FlxArrayUtil_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxArrayUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.util.FlxArrayUtil"); }
		static hx::ObjectPtr< FlxArrayUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxArrayUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxArrayUtil","\x89","\x7b","\x08","\xb4"); }

		static ::Array< Int > setLength_Int(::Array< Int > array,Int newLength);
		static ::Dynamic setLength_Int_dyn();

		static ::Array< Int > flatten2DArray_Int(::Array< ::Dynamic> array);
		static ::Dynamic flatten2DArray_Int_dyn();

		static ::cpp::VirtualArray setLength_flixel_group_FlxTypedGroup_T(::cpp::VirtualArray array,Int newLength);
		static ::Dynamic setLength_flixel_group_FlxTypedGroup_T_dyn();

		static ::Array< ::Dynamic> fastSplice_flixel_system_debug_Window(::Array< ::Dynamic> array, ::flixel::_hx_system::debug::Window element);
		static ::Dynamic fastSplice_flixel_system_debug_Window_dyn();

		static ::Array< ::Dynamic> fastSplice_flixel_system_debug_watch_WatchEntry(::Array< ::Dynamic> array, ::flixel::_hx_system::debug::watch::WatchEntry element);
		static ::Dynamic fastSplice_flixel_system_debug_watch_WatchEntry_dyn();

		static ::Array< ::Dynamic> fastSplice_flixel_tweens_FlxTween(::Array< ::Dynamic> array, ::flixel::tweens::FlxTween element);
		static ::Dynamic fastSplice_flixel_tweens_FlxTween_dyn();

		static ::Array< ::Dynamic> fastSplice_flixel_util_FlxTimer(::Array< ::Dynamic> array, ::flixel::util::FlxTimer element);
		static ::Dynamic fastSplice_flixel_util_FlxTimer_dyn();

		static ::cpp::VirtualArray swapAndPop_fastSplice_T(::cpp::VirtualArray array,Int index);
		static ::Dynamic swapAndPop_fastSplice_T_dyn();

		static ::cpp::VirtualArray clearArray(::cpp::VirtualArray array,hx::Null< Bool >  recursive);
		static ::Dynamic clearArray_dyn();

		static Bool equals(::cpp::VirtualArray array1,::cpp::VirtualArray array2);
		static ::Dynamic equals_dyn();

		static  ::Dynamic last(::cpp::VirtualArray array);
		static ::Dynamic last_dyn();

		static Bool contains(::cpp::VirtualArray array, ::Dynamic element);
		static ::Dynamic contains_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxArrayUtil */ 
