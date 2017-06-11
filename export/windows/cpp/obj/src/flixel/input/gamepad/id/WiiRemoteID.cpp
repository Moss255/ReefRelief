// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode
#include <flixel/input/gamepad/FlxAnalogToDigitalMode.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_WiiRemoteID
#include <flixel/input/gamepad/id/WiiRemoteID.h>
#endif

namespace flixel{
namespace input{
namespace gamepad{
namespace id{

void WiiRemoteID_obj::__construct() { }

Dynamic WiiRemoteID_obj::__CreateEmpty() { return new WiiRemoteID_obj; }

hx::ObjectPtr< WiiRemoteID_obj > WiiRemoteID_obj::__new()
{
	hx::ObjectPtr< WiiRemoteID_obj > _hx_result = new WiiRemoteID_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic WiiRemoteID_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WiiRemoteID_obj > _hx_result = new WiiRemoteID_obj();
	_hx_result->__construct();
	return _hx_result;
}

Int WiiRemoteID_obj::REMOTE_ONE;

Int WiiRemoteID_obj::REMOTE_TWO;

Int WiiRemoteID_obj::REMOTE_A;

Int WiiRemoteID_obj::REMOTE_B;

Int WiiRemoteID_obj::REMOTE_PLUS;

Int WiiRemoteID_obj::REMOTE_MINUS;

Int WiiRemoteID_obj::REMOTE_HOME;

Int WiiRemoteID_obj::NUNCHUK_A;

Int WiiRemoteID_obj::NUNCHUK_B;

Int WiiRemoteID_obj::NUNCHUK_C;

Int WiiRemoteID_obj::NUNCHUK_Z;

Int WiiRemoteID_obj::NUNCHUK_ONE;

Int WiiRemoteID_obj::NUNCHUK_TWO;

Int WiiRemoteID_obj::NUNCHUK_PLUS;

Int WiiRemoteID_obj::NUNCHUK_MINUS;

Int WiiRemoteID_obj::NUNCHUK_HOME;

Int WiiRemoteID_obj::CLASSIC_A;

Int WiiRemoteID_obj::CLASSIC_B;

Int WiiRemoteID_obj::CLASSIC_Y;

Int WiiRemoteID_obj::CLASSIC_X;

Int WiiRemoteID_obj::CLASSIC_L;

Int WiiRemoteID_obj::CLASSIC_R;

Int WiiRemoteID_obj::CLASSIC_ZL;

Int WiiRemoteID_obj::CLASSIC_ZR;

Int WiiRemoteID_obj::CLASSIC_START;

Int WiiRemoteID_obj::CLASSIC_SELECT;

Int WiiRemoteID_obj::CLASSIC_HOME;

Int WiiRemoteID_obj::CLASSIC_ONE;

Int WiiRemoteID_obj::CLASSIC_TWO;

Int WiiRemoteID_obj::REMOTE_TILT_PITCH;

Int WiiRemoteID_obj::REMOTE_TILT_ROLL;

Int WiiRemoteID_obj::NUNCHUK_TILT_PITCH;

Int WiiRemoteID_obj::NUNCHUK_TILT_ROLL;

Int WiiRemoteID_obj::REMOTE_NULL_AXIS;

Int WiiRemoteID_obj::NUNCHUK_NULL_AXIS;

 ::flixel::input::gamepad::FlxGamepadAnalogStick WiiRemoteID_obj::REMOTE_DPAD;

 ::flixel::input::gamepad::FlxGamepadAnalogStick WiiRemoteID_obj::LEFT_ANALOG_STICK;

 ::flixel::input::gamepad::FlxGamepadAnalogStick WiiRemoteID_obj::RIGHT_ANALOG_STICK;

Int WiiRemoteID_obj::LEFT_TRIGGER_FAKE;

Int WiiRemoteID_obj::RIGHT_TRIGGER_FAKE;

Int WiiRemoteID_obj::REMOTE_DPAD_UP;

Int WiiRemoteID_obj::REMOTE_DPAD_DOWN;

Int WiiRemoteID_obj::REMOTE_DPAD_LEFT;

Int WiiRemoteID_obj::REMOTE_DPAD_RIGHT;

Int WiiRemoteID_obj::REMOTE_DPAD_X;

Int WiiRemoteID_obj::REMOTE_DPAD_Y;

Int WiiRemoteID_obj::CLASSIC_DPAD_DOWN;

Int WiiRemoteID_obj::CLASSIC_DPAD_UP;

Int WiiRemoteID_obj::CLASSIC_DPAD_LEFT;

Int WiiRemoteID_obj::CLASSIC_DPAD_RIGHT;

Int WiiRemoteID_obj::NUNCHUK_DPAD_DOWN;

Int WiiRemoteID_obj::NUNCHUK_DPAD_UP;

Int WiiRemoteID_obj::NUNCHUK_DPAD_LEFT;

Int WiiRemoteID_obj::NUNCHUK_DPAD_RIGHT;


WiiRemoteID_obj::WiiRemoteID_obj()
{
}

bool WiiRemoteID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"REMOTE_DPAD") ) { outValue = REMOTE_DPAD; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { outValue = LEFT_ANALOG_STICK; return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOG_STICK") ) { outValue = RIGHT_ANALOG_STICK; return true; }
	}
	return false;
}

bool WiiRemoteID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"REMOTE_DPAD") ) { REMOTE_DPAD=ioValue.Cast<  ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { LEFT_ANALOG_STICK=ioValue.Cast<  ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOG_STICK") ) { RIGHT_ANALOG_STICK=ioValue.Cast<  ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *WiiRemoteID_obj_sMemberStorageInfo = 0;
static hx::StaticInfo WiiRemoteID_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_ONE,HX_HCSTRING("REMOTE_ONE","\xcd","\x7c","\xdf","\x0b")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_TWO,HX_HCSTRING("REMOTE_TWO","\xf3","\x4f","\xe3","\x0b")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_A,HX_HCSTRING("REMOTE_A","\x08","\xc7","\x4e","\x05")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_B,HX_HCSTRING("REMOTE_B","\x09","\xc7","\x4e","\x05")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_PLUS,HX_HCSTRING("REMOTE_PLUS","\xf3","\x76","\x55","\x58")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_MINUS,HX_HCSTRING("REMOTE_MINUS","\x97","\xee","\x3d","\x36")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_HOME,HX_HCSTRING("REMOTE_HOME","\xb8","\x01","\x0e","\x53")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_A,HX_HCSTRING("NUNCHUK_A","\x64","\x61","\x03","\x66")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_B,HX_HCSTRING("NUNCHUK_B","\x65","\x61","\x03","\x66")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_C,HX_HCSTRING("NUNCHUK_C","\x66","\x61","\x03","\x66")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_Z,HX_HCSTRING("NUNCHUK_Z","\x7d","\x61","\x03","\x66")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_ONE,HX_HCSTRING("NUNCHUK_ONE","\x29","\x66","\xb4","\x76")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_TWO,HX_HCSTRING("NUNCHUK_TWO","\x4f","\x39","\xb8","\x76")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_PLUS,HX_HCSTRING("NUNCHUK_PLUS","\x17","\xbe","\xcc","\x67")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_MINUS,HX_HCSTRING("NUNCHUK_MINUS","\xf3","\xe6","\x24","\xaf")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_HOME,HX_HCSTRING("NUNCHUK_HOME","\xdc","\x48","\x85","\x62")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_A,HX_HCSTRING("CLASSIC_A","\x74","\x59","\x70","\xe9")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_B,HX_HCSTRING("CLASSIC_B","\x75","\x59","\x70","\xe9")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_Y,HX_HCSTRING("CLASSIC_Y","\x8c","\x59","\x70","\xe9")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_X,HX_HCSTRING("CLASSIC_X","\x8b","\x59","\x70","\xe9")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_L,HX_HCSTRING("CLASSIC_L","\x7f","\x59","\x70","\xe9")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_R,HX_HCSTRING("CLASSIC_R","\x85","\x59","\x70","\xe9")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_ZL,HX_HCSTRING("CLASSIC_ZL","\x1f","\x02","\xde","\x58")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_ZR,HX_HCSTRING("CLASSIC_ZR","\x25","\x02","\xde","\x58")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_START,HX_HCSTRING("CLASSIC_START","\xf5","\x1a","\x7a","\x6a")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_SELECT,HX_HCSTRING("CLASSIC_SELECT","\xe9","\x34","\x96","\x24")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_HOME,HX_HCSTRING("CLASSIC_HOME","\xcc","\xba","\x16","\xc2")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_ONE,HX_HCSTRING("CLASSIC_ONE","\x39","\x82","\x5b","\x69")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_TWO,HX_HCSTRING("CLASSIC_TWO","\x5f","\x55","\x5f","\x69")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_TILT_PITCH,HX_HCSTRING("REMOTE_TILT_PITCH","\x37","\x02","\x4d","\x0f")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_TILT_ROLL,HX_HCSTRING("REMOTE_TILT_ROLL","\xc6","\xc4","\xa0","\x12")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_TILT_PITCH,HX_HCSTRING("NUNCHUK_TILT_PITCH","\x5b","\x3c","\xf8","\xde")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_TILT_ROLL,HX_HCSTRING("NUNCHUK_TILT_ROLL","\x22","\x1b","\x41","\x4f")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_NULL_AXIS,HX_HCSTRING("REMOTE_NULL_AXIS","\x60","\xf6","\x44","\x91")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_NULL_AXIS,HX_HCSTRING("NUNCHUK_NULL_AXIS","\xbc","\x4c","\xe5","\xcd")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &WiiRemoteID_obj::REMOTE_DPAD,HX_HCSTRING("REMOTE_DPAD","\x08","\xdf","\x69","\x50")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &WiiRemoteID_obj::LEFT_ANALOG_STICK,HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &WiiRemoteID_obj::RIGHT_ANALOG_STICK,HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::LEFT_TRIGGER_FAKE,HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::RIGHT_TRIGGER_FAKE,HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_DPAD_UP,HX_HCSTRING("REMOTE_DPAD_UP","\x72","\x96","\x5d","\x83")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_DPAD_DOWN,HX_HCSTRING("REMOTE_DPAD_DOWN","\x39","\x80","\x88","\x3b")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_DPAD_LEFT,HX_HCSTRING("REMOTE_DPAD_LEFT","\xde","\x8f","\xca","\x40")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_DPAD_RIGHT,HX_HCSTRING("REMOTE_DPAD_RIGHT","\x05","\x60","\x80","\xe7")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_DPAD_X,HX_HCSTRING("REMOTE_DPAD_X","\x21","\x04","\xe6","\xa5")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::REMOTE_DPAD_Y,HX_HCSTRING("REMOTE_DPAD_Y","\x22","\x04","\xe6","\xa5")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_DPAD_DOWN,HX_HCSTRING("CLASSIC_DPAD_DOWN","\xa5","\x5e","\x64","\x54")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_DPAD_UP,HX_HCSTRING("CLASSIC_DPAD_UP","\xde","\xc1","\x06","\x7f")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_DPAD_LEFT,HX_HCSTRING("CLASSIC_DPAD_LEFT","\x4a","\x6e","\xa6","\x59")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::CLASSIC_DPAD_RIGHT,HX_HCSTRING("CLASSIC_DPAD_RIGHT","\x19","\x20","\x07","\x8f")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_DPAD_DOWN,HX_HCSTRING("NUNCHUK_DPAD_DOWN","\x95","\xd6","\x28","\x78")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_DPAD_UP,HX_HCSTRING("NUNCHUK_DPAD_UP","\xce","\x5d","\x38","\x3e")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_DPAD_LEFT,HX_HCSTRING("NUNCHUK_DPAD_LEFT","\x3a","\xe6","\x6a","\x7d")},
	{hx::fsInt,(void *) &WiiRemoteID_obj::NUNCHUK_DPAD_RIGHT,HX_HCSTRING("NUNCHUK_DPAD_RIGHT","\x29","\x9a","\x2b","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void WiiRemoteID_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_ONE,"REMOTE_ONE");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_TWO,"REMOTE_TWO");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_A,"REMOTE_A");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_B,"REMOTE_B");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_PLUS,"REMOTE_PLUS");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_MINUS,"REMOTE_MINUS");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_HOME,"REMOTE_HOME");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_A,"NUNCHUK_A");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_B,"NUNCHUK_B");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_C,"NUNCHUK_C");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_Z,"NUNCHUK_Z");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_ONE,"NUNCHUK_ONE");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_TWO,"NUNCHUK_TWO");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_PLUS,"NUNCHUK_PLUS");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_MINUS,"NUNCHUK_MINUS");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_HOME,"NUNCHUK_HOME");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_A,"CLASSIC_A");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_B,"CLASSIC_B");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_Y,"CLASSIC_Y");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_X,"CLASSIC_X");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_L,"CLASSIC_L");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_R,"CLASSIC_R");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_ZL,"CLASSIC_ZL");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_ZR,"CLASSIC_ZR");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_START,"CLASSIC_START");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_SELECT,"CLASSIC_SELECT");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_HOME,"CLASSIC_HOME");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_ONE,"CLASSIC_ONE");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_TWO,"CLASSIC_TWO");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_TILT_PITCH,"REMOTE_TILT_PITCH");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_TILT_ROLL,"REMOTE_TILT_ROLL");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_TILT_PITCH,"NUNCHUK_TILT_PITCH");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_TILT_ROLL,"NUNCHUK_TILT_ROLL");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_NULL_AXIS,"REMOTE_NULL_AXIS");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_NULL_AXIS,"NUNCHUK_NULL_AXIS");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD,"REMOTE_DPAD");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::LEFT_TRIGGER_FAKE,"LEFT_TRIGGER_FAKE");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::RIGHT_TRIGGER_FAKE,"RIGHT_TRIGGER_FAKE");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD_UP,"REMOTE_DPAD_UP");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD_DOWN,"REMOTE_DPAD_DOWN");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD_LEFT,"REMOTE_DPAD_LEFT");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD_RIGHT,"REMOTE_DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD_X,"REMOTE_DPAD_X");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD_Y,"REMOTE_DPAD_Y");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_DPAD_DOWN,"CLASSIC_DPAD_DOWN");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_DPAD_UP,"CLASSIC_DPAD_UP");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_DPAD_LEFT,"CLASSIC_DPAD_LEFT");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_DPAD_RIGHT,"CLASSIC_DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_DPAD_DOWN,"NUNCHUK_DPAD_DOWN");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_DPAD_UP,"NUNCHUK_DPAD_UP");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_DPAD_LEFT,"NUNCHUK_DPAD_LEFT");
	HX_MARK_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_DPAD_RIGHT,"NUNCHUK_DPAD_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WiiRemoteID_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_ONE,"REMOTE_ONE");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_TWO,"REMOTE_TWO");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_A,"REMOTE_A");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_B,"REMOTE_B");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_PLUS,"REMOTE_PLUS");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_MINUS,"REMOTE_MINUS");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_HOME,"REMOTE_HOME");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_A,"NUNCHUK_A");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_B,"NUNCHUK_B");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_C,"NUNCHUK_C");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_Z,"NUNCHUK_Z");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_ONE,"NUNCHUK_ONE");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_TWO,"NUNCHUK_TWO");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_PLUS,"NUNCHUK_PLUS");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_MINUS,"NUNCHUK_MINUS");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_HOME,"NUNCHUK_HOME");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_A,"CLASSIC_A");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_B,"CLASSIC_B");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_Y,"CLASSIC_Y");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_X,"CLASSIC_X");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_L,"CLASSIC_L");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_R,"CLASSIC_R");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_ZL,"CLASSIC_ZL");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_ZR,"CLASSIC_ZR");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_START,"CLASSIC_START");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_SELECT,"CLASSIC_SELECT");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_HOME,"CLASSIC_HOME");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_ONE,"CLASSIC_ONE");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_TWO,"CLASSIC_TWO");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_TILT_PITCH,"REMOTE_TILT_PITCH");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_TILT_ROLL,"REMOTE_TILT_ROLL");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_TILT_PITCH,"NUNCHUK_TILT_PITCH");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_TILT_ROLL,"NUNCHUK_TILT_ROLL");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_NULL_AXIS,"REMOTE_NULL_AXIS");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_NULL_AXIS,"NUNCHUK_NULL_AXIS");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD,"REMOTE_DPAD");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::LEFT_TRIGGER_FAKE,"LEFT_TRIGGER_FAKE");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::RIGHT_TRIGGER_FAKE,"RIGHT_TRIGGER_FAKE");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD_UP,"REMOTE_DPAD_UP");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD_DOWN,"REMOTE_DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD_LEFT,"REMOTE_DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD_RIGHT,"REMOTE_DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD_X,"REMOTE_DPAD_X");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::REMOTE_DPAD_Y,"REMOTE_DPAD_Y");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_DPAD_DOWN,"CLASSIC_DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_DPAD_UP,"CLASSIC_DPAD_UP");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_DPAD_LEFT,"CLASSIC_DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::CLASSIC_DPAD_RIGHT,"CLASSIC_DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_DPAD_DOWN,"NUNCHUK_DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_DPAD_UP,"NUNCHUK_DPAD_UP");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_DPAD_LEFT,"NUNCHUK_DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(WiiRemoteID_obj::NUNCHUK_DPAD_RIGHT,"NUNCHUK_DPAD_RIGHT");
};

#endif

hx::Class WiiRemoteID_obj::__mClass;

static ::String WiiRemoteID_obj_sStaticFields[] = {
	HX_HCSTRING("REMOTE_ONE","\xcd","\x7c","\xdf","\x0b"),
	HX_HCSTRING("REMOTE_TWO","\xf3","\x4f","\xe3","\x0b"),
	HX_HCSTRING("REMOTE_A","\x08","\xc7","\x4e","\x05"),
	HX_HCSTRING("REMOTE_B","\x09","\xc7","\x4e","\x05"),
	HX_HCSTRING("REMOTE_PLUS","\xf3","\x76","\x55","\x58"),
	HX_HCSTRING("REMOTE_MINUS","\x97","\xee","\x3d","\x36"),
	HX_HCSTRING("REMOTE_HOME","\xb8","\x01","\x0e","\x53"),
	HX_HCSTRING("NUNCHUK_A","\x64","\x61","\x03","\x66"),
	HX_HCSTRING("NUNCHUK_B","\x65","\x61","\x03","\x66"),
	HX_HCSTRING("NUNCHUK_C","\x66","\x61","\x03","\x66"),
	HX_HCSTRING("NUNCHUK_Z","\x7d","\x61","\x03","\x66"),
	HX_HCSTRING("NUNCHUK_ONE","\x29","\x66","\xb4","\x76"),
	HX_HCSTRING("NUNCHUK_TWO","\x4f","\x39","\xb8","\x76"),
	HX_HCSTRING("NUNCHUK_PLUS","\x17","\xbe","\xcc","\x67"),
	HX_HCSTRING("NUNCHUK_MINUS","\xf3","\xe6","\x24","\xaf"),
	HX_HCSTRING("NUNCHUK_HOME","\xdc","\x48","\x85","\x62"),
	HX_HCSTRING("CLASSIC_A","\x74","\x59","\x70","\xe9"),
	HX_HCSTRING("CLASSIC_B","\x75","\x59","\x70","\xe9"),
	HX_HCSTRING("CLASSIC_Y","\x8c","\x59","\x70","\xe9"),
	HX_HCSTRING("CLASSIC_X","\x8b","\x59","\x70","\xe9"),
	HX_HCSTRING("CLASSIC_L","\x7f","\x59","\x70","\xe9"),
	HX_HCSTRING("CLASSIC_R","\x85","\x59","\x70","\xe9"),
	HX_HCSTRING("CLASSIC_ZL","\x1f","\x02","\xde","\x58"),
	HX_HCSTRING("CLASSIC_ZR","\x25","\x02","\xde","\x58"),
	HX_HCSTRING("CLASSIC_START","\xf5","\x1a","\x7a","\x6a"),
	HX_HCSTRING("CLASSIC_SELECT","\xe9","\x34","\x96","\x24"),
	HX_HCSTRING("CLASSIC_HOME","\xcc","\xba","\x16","\xc2"),
	HX_HCSTRING("CLASSIC_ONE","\x39","\x82","\x5b","\x69"),
	HX_HCSTRING("CLASSIC_TWO","\x5f","\x55","\x5f","\x69"),
	HX_HCSTRING("REMOTE_TILT_PITCH","\x37","\x02","\x4d","\x0f"),
	HX_HCSTRING("REMOTE_TILT_ROLL","\xc6","\xc4","\xa0","\x12"),
	HX_HCSTRING("NUNCHUK_TILT_PITCH","\x5b","\x3c","\xf8","\xde"),
	HX_HCSTRING("NUNCHUK_TILT_ROLL","\x22","\x1b","\x41","\x4f"),
	HX_HCSTRING("REMOTE_NULL_AXIS","\x60","\xf6","\x44","\x91"),
	HX_HCSTRING("NUNCHUK_NULL_AXIS","\xbc","\x4c","\xe5","\xcd"),
	HX_HCSTRING("REMOTE_DPAD","\x08","\xdf","\x69","\x50"),
	HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5"),
	HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8"),
	HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd"),
	HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11"),
	HX_HCSTRING("REMOTE_DPAD_UP","\x72","\x96","\x5d","\x83"),
	HX_HCSTRING("REMOTE_DPAD_DOWN","\x39","\x80","\x88","\x3b"),
	HX_HCSTRING("REMOTE_DPAD_LEFT","\xde","\x8f","\xca","\x40"),
	HX_HCSTRING("REMOTE_DPAD_RIGHT","\x05","\x60","\x80","\xe7"),
	HX_HCSTRING("REMOTE_DPAD_X","\x21","\x04","\xe6","\xa5"),
	HX_HCSTRING("REMOTE_DPAD_Y","\x22","\x04","\xe6","\xa5"),
	HX_HCSTRING("CLASSIC_DPAD_DOWN","\xa5","\x5e","\x64","\x54"),
	HX_HCSTRING("CLASSIC_DPAD_UP","\xde","\xc1","\x06","\x7f"),
	HX_HCSTRING("CLASSIC_DPAD_LEFT","\x4a","\x6e","\xa6","\x59"),
	HX_HCSTRING("CLASSIC_DPAD_RIGHT","\x19","\x20","\x07","\x8f"),
	HX_HCSTRING("NUNCHUK_DPAD_DOWN","\x95","\xd6","\x28","\x78"),
	HX_HCSTRING("NUNCHUK_DPAD_UP","\xce","\x5d","\x38","\x3e"),
	HX_HCSTRING("NUNCHUK_DPAD_LEFT","\x3a","\xe6","\x6a","\x7d"),
	HX_HCSTRING("NUNCHUK_DPAD_RIGHT","\x29","\x9a","\x2b","\xb7"),
	::String(null())
};

void WiiRemoteID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.id.WiiRemoteID","\x48","\xe4","\x5a","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WiiRemoteID_obj::__GetStatic;
	__mClass->mSetStaticField = &WiiRemoteID_obj::__SetStatic;
	__mClass->mMarkFunc = WiiRemoteID_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(WiiRemoteID_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< WiiRemoteID_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WiiRemoteID_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WiiRemoteID_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WiiRemoteID_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WiiRemoteID_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",27,0xc94ac714)
HXLINE(  27)		REMOTE_ONE = (int)0;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",28,0xc94ac714)
HXLINE(  28)		REMOTE_TWO = (int)1;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",29,0xc94ac714)
HXLINE(  29)		REMOTE_A = (int)2;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",30,0xc94ac714)
HXLINE(  30)		REMOTE_B = (int)3;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",31,0xc94ac714)
HXLINE(  31)		REMOTE_PLUS = (int)4;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",32,0xc94ac714)
HXLINE(  32)		REMOTE_MINUS = (int)5;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",33,0xc94ac714)
HXLINE(  33)		REMOTE_HOME = (int)6;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",36,0xc94ac714)
HXLINE(  36)		NUNCHUK_A = (int)0;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",37,0xc94ac714)
HXLINE(  37)		NUNCHUK_B = (int)1;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",38,0xc94ac714)
HXLINE(  38)		NUNCHUK_C = (int)2;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",39,0xc94ac714)
HXLINE(  39)		NUNCHUK_Z = (int)3;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",40,0xc94ac714)
HXLINE(  40)		NUNCHUK_ONE = (int)4;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",41,0xc94ac714)
HXLINE(  41)		NUNCHUK_TWO = (int)5;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",42,0xc94ac714)
HXLINE(  42)		NUNCHUK_PLUS = (int)6;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",43,0xc94ac714)
HXLINE(  43)		NUNCHUK_MINUS = (int)7;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",44,0xc94ac714)
HXLINE(  44)		NUNCHUK_HOME = (int)8;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",47,0xc94ac714)
HXLINE(  47)		CLASSIC_A = (int)0;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",48,0xc94ac714)
HXLINE(  48)		CLASSIC_B = (int)1;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",49,0xc94ac714)
HXLINE(  49)		CLASSIC_Y = (int)2;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",50,0xc94ac714)
HXLINE(  50)		CLASSIC_X = (int)3;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",51,0xc94ac714)
HXLINE(  51)		CLASSIC_L = (int)4;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",52,0xc94ac714)
HXLINE(  52)		CLASSIC_R = (int)5;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",53,0xc94ac714)
HXLINE(  53)		CLASSIC_ZL = (int)6;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",54,0xc94ac714)
HXLINE(  54)		CLASSIC_ZR = (int)7;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",55,0xc94ac714)
HXLINE(  55)		CLASSIC_START = (int)8;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",56,0xc94ac714)
HXLINE(  56)		CLASSIC_SELECT = (int)9;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",57,0xc94ac714)
HXLINE(  57)		CLASSIC_HOME = (int)10;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",58,0xc94ac714)
HXLINE(  58)		CLASSIC_ONE = (int)11;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",59,0xc94ac714)
HXLINE(  59)		CLASSIC_TWO = (int)12;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",61,0xc94ac714)
HXLINE(  61)		REMOTE_TILT_PITCH = (int)2;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",62,0xc94ac714)
HXLINE(  62)		REMOTE_TILT_ROLL = (int)3;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",64,0xc94ac714)
HXLINE(  64)		NUNCHUK_TILT_PITCH = (int)3;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",65,0xc94ac714)
HXLINE(  65)		NUNCHUK_TILT_ROLL = (int)2;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",67,0xc94ac714)
HXLINE(  67)		REMOTE_NULL_AXIS = (int)4;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",68,0xc94ac714)
HXLINE(  68)		NUNCHUK_NULL_AXIS = (int)4;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",72,0xc94ac714)
HXLINE(  72)		REMOTE_DPAD =  ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)0,(int)1, ::Dynamic(hx::Anon_obj::Create(6)
            			->setFixed(0,HX_("right",dc,0b,64,e9),(int)17)
            			->setFixed(1,HX_("up",5b,66,00,00),(int)14)
            			->setFixed(2,HX_("threshold",ab,c3,a3,34),((Float)0.5))
            			->setFixed(3,HX_("down",62,f8,6d,42),(int)15)
            			->setFixed(4,HX_("left",07,08,b0,47),(int)16)
            			->setFixed(5,HX_("mode",63,d3,60,48),::flixel::input::gamepad::FlxAnalogToDigitalMode_obj::ONLY_DIGITAL_dyn())));
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",82,0xc94ac714)
HXLINE(  82)		LEFT_ANALOG_STICK =  ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)0,(int)1, ::Dynamic(hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("right",dc,0b,64,e9),(int)35)
            			->setFixed(1,HX_("up",5b,66,00,00),(int)32)
            			->setFixed(2,HX_("down",62,f8,6d,42),(int)33)
            			->setFixed(3,HX_("left",07,08,b0,47),(int)34)));
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",84,0xc94ac714)
HXLINE(  84)		RIGHT_ANALOG_STICK =  ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)2,(int)3, ::Dynamic(hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("right",dc,0b,64,e9),(int)39)
            			->setFixed(1,HX_("up",5b,66,00,00),(int)36)
            			->setFixed(2,HX_("down",62,f8,6d,42),(int)37)
            			->setFixed(3,HX_("left",07,08,b0,47),(int)38)));
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",87,0xc94ac714)
HXLINE(  87)		LEFT_TRIGGER_FAKE = (int)4;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",88,0xc94ac714)
HXLINE(  88)		RIGHT_TRIGGER_FAKE = (int)5;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",91,0xc94ac714)
HXLINE(  91)		REMOTE_DPAD_UP = (int)14;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",92,0xc94ac714)
HXLINE(  92)		REMOTE_DPAD_DOWN = (int)15;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",93,0xc94ac714)
HXLINE(  93)		REMOTE_DPAD_LEFT = (int)16;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",94,0xc94ac714)
HXLINE(  94)		REMOTE_DPAD_RIGHT = (int)17;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",96,0xc94ac714)
HXLINE(  96)		REMOTE_DPAD_X = (int)18;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",97,0xc94ac714)
HXLINE(  97)		REMOTE_DPAD_Y = (int)19;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",99,0xc94ac714)
HXLINE(  99)		CLASSIC_DPAD_DOWN = (int)24;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",100,0xc94ac714)
HXLINE( 100)		CLASSIC_DPAD_UP = (int)25;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",101,0xc94ac714)
HXLINE( 101)		CLASSIC_DPAD_LEFT = (int)26;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",102,0xc94ac714)
HXLINE( 102)		CLASSIC_DPAD_RIGHT = (int)27;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",104,0xc94ac714)
HXLINE( 104)		NUNCHUK_DPAD_DOWN = (int)28;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",105,0xc94ac714)
HXLINE( 105)		NUNCHUK_DPAD_UP = (int)29;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",106,0xc94ac714)
HXLINE( 106)		NUNCHUK_DPAD_LEFT = (int)30;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.WiiRemoteID","boot",0xbbe6ca18,"flixel.input.gamepad.id.WiiRemoteID.boot","flixel/input/gamepad/id/WiiRemoteID.hx",107,0xc94ac714)
HXLINE( 107)		NUNCHUK_DPAD_RIGHT = (int)31;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id
