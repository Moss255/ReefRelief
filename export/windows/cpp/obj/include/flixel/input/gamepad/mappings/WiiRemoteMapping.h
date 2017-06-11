// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping
#define INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxGamepadMapping)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,WiiRemoteMapping)

namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{


class HXCPP_CLASS_ATTRIBUTES WiiRemoteMapping_obj : public  ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj
{
	public:
		typedef  ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj super;
		typedef WiiRemoteMapping_obj OBJ_;
		WiiRemoteMapping_obj();

	public:
		void __construct(::hx::EnumBase attachment);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.mappings.WiiRemoteMapping")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.mappings.WiiRemoteMapping"); }
		static hx::ObjectPtr< WiiRemoteMapping_obj > __new(::hx::EnumBase attachment);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WiiRemoteMapping_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WiiRemoteMapping","\xb1","\x06","\xec","\x64"); }

		static void __boot();
		static Int LEFT_ANALOG_STICK_FAKE_X;
		static Int LEFT_ANALOG_STICK_FAKE_Y;
		static Int RIGHT_ANALOG_STICK_FAKE_X;
		static Int RIGHT_ANALOG_STICK_FAKE_Y;
		void initValues();

		Int getID(Int rawID);

		Int getIDClassicController(Int rawID);
		::Dynamic getIDClassicController_dyn();

		Int getIDNunchuk(Int rawID);
		::Dynamic getIDNunchuk_dyn();

		Int getIDDefault(Int rawID);
		::Dynamic getIDDefault_dyn();

		Int getRawID(Int ID);

		Int getRawClassicController(Int ID);
		::Dynamic getRawClassicController_dyn();

		Int getRawNunchuk(Int ID);
		::Dynamic getRawNunchuk_dyn();

		Int getRawDefault(Int ID);
		::Dynamic getRawDefault_dyn();

		Bool isAxisForMotion(Int ID);

		Bool isAxisFlipped(Int axisID);

		Int axisIndexToRawID(Int axisID);

		Int checkForFakeAxis(Int ID);

		::hx::EnumBase set_attachment(::hx::EnumBase attachment);

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

#endif /* INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping */ 
