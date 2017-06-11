// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_MFiID
#include <flixel/input/gamepad/id/MFiID.h>
#endif

namespace flixel{
namespace input{
namespace gamepad{
namespace id{

void MFiID_obj::__construct() { }

Dynamic MFiID_obj::__CreateEmpty() { return new MFiID_obj; }

hx::ObjectPtr< MFiID_obj > MFiID_obj::__new()
{
	hx::ObjectPtr< MFiID_obj > _hx_result = new MFiID_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic MFiID_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MFiID_obj > _hx_result = new MFiID_obj();
	_hx_result->__construct();
	return _hx_result;
}

Int MFiID_obj::A;

Int MFiID_obj::B;

Int MFiID_obj::X;

Int MFiID_obj::Y;

Int MFiID_obj::LB;

Int MFiID_obj::RB;

Int MFiID_obj::BACK;

Int MFiID_obj::START;

Int MFiID_obj::LEFT_STICK_CLICK;

Int MFiID_obj::RIGHT_STICK_CLICK;

Int MFiID_obj::GUIDE;

Int MFiID_obj::DPAD_UP;

Int MFiID_obj::DPAD_DOWN;

Int MFiID_obj::DPAD_LEFT;

Int MFiID_obj::DPAD_RIGHT;

 ::flixel::input::gamepad::FlxGamepadAnalogStick MFiID_obj::LEFT_ANALOG_STICK;

 ::flixel::input::gamepad::FlxGamepadAnalogStick MFiID_obj::RIGHT_ANALOG_STICK;

Int MFiID_obj::LEFT_TRIGGER;

Int MFiID_obj::RIGHT_TRIGGER;


MFiID_obj::MFiID_obj()
{
}

bool MFiID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { outValue = LEFT_ANALOG_STICK; return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOG_STICK") ) { outValue = RIGHT_ANALOG_STICK; return true; }
	}
	return false;
}

bool MFiID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { LEFT_ANALOG_STICK=ioValue.Cast<  ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOG_STICK") ) { RIGHT_ANALOG_STICK=ioValue.Cast<  ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MFiID_obj_sMemberStorageInfo = 0;
static hx::StaticInfo MFiID_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &MFiID_obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &MFiID_obj::B,HX_HCSTRING("B","\x42","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &MFiID_obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &MFiID_obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &MFiID_obj::LB,HX_HCSTRING("LB","\x76","\x42","\x00","\x00")},
	{hx::fsInt,(void *) &MFiID_obj::RB,HX_HCSTRING("RB","\xb0","\x47","\x00","\x00")},
	{hx::fsInt,(void *) &MFiID_obj::BACK,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsInt,(void *) &MFiID_obj::START,HX_HCSTRING("START","\x42","\xac","\xf9","\x01")},
	{hx::fsInt,(void *) &MFiID_obj::LEFT_STICK_CLICK,HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf")},
	{hx::fsInt,(void *) &MFiID_obj::RIGHT_STICK_CLICK,HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b")},
	{hx::fsInt,(void *) &MFiID_obj::GUIDE,HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19")},
	{hx::fsInt,(void *) &MFiID_obj::DPAD_UP,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2")},
	{hx::fsInt,(void *) &MFiID_obj::DPAD_DOWN,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87")},
	{hx::fsInt,(void *) &MFiID_obj::DPAD_LEFT,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c")},
	{hx::fsInt,(void *) &MFiID_obj::DPAD_RIGHT,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &MFiID_obj::LEFT_ANALOG_STICK,HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &MFiID_obj::RIGHT_ANALOG_STICK,HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8")},
	{hx::fsInt,(void *) &MFiID_obj::LEFT_TRIGGER,HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb")},
	{hx::fsInt,(void *) &MFiID_obj::RIGHT_TRIGGER,HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void MFiID_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MFiID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MFiID_obj::A,"A");
	HX_MARK_MEMBER_NAME(MFiID_obj::B,"B");
	HX_MARK_MEMBER_NAME(MFiID_obj::X,"X");
	HX_MARK_MEMBER_NAME(MFiID_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(MFiID_obj::LB,"LB");
	HX_MARK_MEMBER_NAME(MFiID_obj::RB,"RB");
	HX_MARK_MEMBER_NAME(MFiID_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(MFiID_obj::START,"START");
	HX_MARK_MEMBER_NAME(MFiID_obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(MFiID_obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(MFiID_obj::GUIDE,"GUIDE");
	HX_MARK_MEMBER_NAME(MFiID_obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(MFiID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(MFiID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(MFiID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(MFiID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(MFiID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(MFiID_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_MARK_MEMBER_NAME(MFiID_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MFiID_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MFiID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MFiID_obj::A,"A");
	HX_VISIT_MEMBER_NAME(MFiID_obj::B,"B");
	HX_VISIT_MEMBER_NAME(MFiID_obj::X,"X");
	HX_VISIT_MEMBER_NAME(MFiID_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(MFiID_obj::LB,"LB");
	HX_VISIT_MEMBER_NAME(MFiID_obj::RB,"RB");
	HX_VISIT_MEMBER_NAME(MFiID_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(MFiID_obj::START,"START");
	HX_VISIT_MEMBER_NAME(MFiID_obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(MFiID_obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(MFiID_obj::GUIDE,"GUIDE");
	HX_VISIT_MEMBER_NAME(MFiID_obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(MFiID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(MFiID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(MFiID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(MFiID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(MFiID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(MFiID_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_VISIT_MEMBER_NAME(MFiID_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
};

#endif

hx::Class MFiID_obj::__mClass;

static ::String MFiID_obj_sStaticFields[] = {
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("B","\x42","\x00","\x00","\x00"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("LB","\x76","\x42","\x00","\x00"),
	HX_HCSTRING("RB","\xb0","\x47","\x00","\x00"),
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),
	HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf"),
	HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b"),
	HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19"),
	HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),
	HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),
	HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),
	HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),
	HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5"),
	HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8"),
	HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"),
	HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"),
	::String(null())
};

void MFiID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.id.MFiID","\x1b","\x1c","\x17","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MFiID_obj::__GetStatic;
	__mClass->mSetStaticField = &MFiID_obj::__SetStatic;
	__mClass->mMarkFunc = MFiID_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MFiID_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MFiID_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MFiID_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MFiID_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MFiID_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MFiID_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",8,0x95a04aa1)
HXLINE(   8)		A = (int)6;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",9,0x95a04aa1)
HXLINE(   9)		B = (int)7;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",10,0x95a04aa1)
HXLINE(  10)		X = (int)8;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",11,0x95a04aa1)
HXLINE(  11)		Y = (int)9;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",12,0x95a04aa1)
HXLINE(  12)		LB = (int)15;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",13,0x95a04aa1)
HXLINE(  13)		RB = (int)16;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",14,0x95a04aa1)
HXLINE(  14)		BACK = (int)10;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",15,0x95a04aa1)
HXLINE(  15)		START = (int)12;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",16,0x95a04aa1)
HXLINE(  16)		LEFT_STICK_CLICK = (int)13;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",17,0x95a04aa1)
HXLINE(  17)		RIGHT_STICK_CLICK = (int)14;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",19,0x95a04aa1)
HXLINE(  19)		GUIDE = (int)11;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",21,0x95a04aa1)
HXLINE(  21)		DPAD_UP = (int)17;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",22,0x95a04aa1)
HXLINE(  22)		DPAD_DOWN = (int)18;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",23,0x95a04aa1)
HXLINE(  23)		DPAD_LEFT = (int)19;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",24,0x95a04aa1)
HXLINE(  24)		DPAD_RIGHT = (int)20;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",26,0x95a04aa1)
HXLINE(  26)		LEFT_ANALOG_STICK =  ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)0,(int)1, ::Dynamic(hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("right",dc,0b,64,e9),(int)24)
            			->setFixed(1,HX_("up",5b,66,00,00),(int)21)
            			->setFixed(2,HX_("down",62,f8,6d,42),(int)22)
            			->setFixed(3,HX_("left",07,08,b0,47),(int)23)));
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",27,0x95a04aa1)
HXLINE(  27)		RIGHT_ANALOG_STICK =  ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)2,(int)3, ::Dynamic(hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("right",dc,0b,64,e9),(int)28)
            			->setFixed(1,HX_("up",5b,66,00,00),(int)25)
            			->setFixed(2,HX_("down",62,f8,6d,42),(int)26)
            			->setFixed(3,HX_("left",07,08,b0,47),(int)27)));
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",29,0x95a04aa1)
HXLINE(  29)		LEFT_TRIGGER = (int)4;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",30,0x95a04aa1)
HXLINE(  30)		RIGHT_TRIGGER = (int)5;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id
