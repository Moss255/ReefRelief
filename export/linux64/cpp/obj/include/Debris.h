#ifndef INCLUDED_Debris
#define INCLUDED_Debris

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Debris)
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Debris_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Debris_obj OBJ_;
		Debris_obj();
		Void __construct(Float X,Float Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Debris")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Debris_obj > __new(Float X,Float Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Debris_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Debris","\xdb","\xe5","\xda","\x98"); }

		virtual Void destroyEnemy( ::Enemy _enemy);
		Dynamic destroyEnemy_dyn();

};


#endif /* INCLUDED_Debris */ 
