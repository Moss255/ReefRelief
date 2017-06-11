#ifndef INCLUDED_Pickup
#define INCLUDED_Pickup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Pickup)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Pickup_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Pickup_obj OBJ_;
		Pickup_obj();
		Void __construct(Float X,Float Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Pickup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Pickup_obj > __new(Float X,Float Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Pickup_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Pickup","\x9c","\x7d","\x61","\xb3"); }

		virtual bool isCollided( ::Player newPlayer);
		Dynamic isCollided_dyn();

};


#endif /* INCLUDED_Pickup */ 
