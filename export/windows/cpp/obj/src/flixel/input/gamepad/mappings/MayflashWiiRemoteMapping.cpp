// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_MayflashWiiRemoteID
#include <flixel/input/gamepad/id/MayflashWiiRemoteID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_MayflashWiiRemoteMapping
#include <flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.h>
#endif

namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void MayflashWiiRemoteMapping_obj::__construct(::hx::EnumBase attachment){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","new",0x14c5ed14,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.new","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",7,0xb7763ebe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE(   7)		super::__construct(attachment);
            	}

Dynamic MayflashWiiRemoteMapping_obj::__CreateEmpty() { return new MayflashWiiRemoteMapping_obj; }

hx::ObjectPtr< MayflashWiiRemoteMapping_obj > MayflashWiiRemoteMapping_obj::__new(::hx::EnumBase attachment)
{
	hx::ObjectPtr< MayflashWiiRemoteMapping_obj > _hx_result = new MayflashWiiRemoteMapping_obj();
	_hx_result->__construct(attachment);
	return _hx_result;
}

Dynamic MayflashWiiRemoteMapping_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MayflashWiiRemoteMapping_obj > _hx_result = new MayflashWiiRemoteMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void MayflashWiiRemoteMapping_obj::initValues(){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","initValues",0x4dbe00de,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.initValues","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",22,0xb7763ebe)
            	HX_STACK_THIS(this)
HXLINE(  22)		this->supportsPointer = true;
            	}


Int MayflashWiiRemoteMapping_obj::getID(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getID",0x3c1a43a5,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getID","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",27,0xb7763ebe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  27)		Int _hx_tmp = ( ( ::hx::EnumBase)(this->attachment) )->_hx_getIndex();
HXDLIN(  27)		switch((int)(_hx_tmp)){
            			case (int)0: {
HXLINE(  27)				return this->getIDNunchuk(rawID);
            			}
            			break;
            			case (int)1: {
HXLINE(  27)				return this->getIDClassicController(rawID);
            			}
            			break;
            			case (int)2: {
HXLINE(  27)				return this->getIDDefault(rawID);
            			}
            			break;
            		}
HXDLIN(  27)		return null();
            	}


Int MayflashWiiRemoteMapping_obj::getIDClassicController(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getIDClassicController",0xdc580be9,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getIDClassicController","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",37,0xb7763ebe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  37)		switch((int)(rawID)){
            			case (int)0: {
HXLINE(  37)				return (int)2;
            			}
            			break;
            			case (int)1: {
HXLINE(  37)				return (int)3;
            			}
            			break;
            			case (int)2: {
HXLINE(  37)				return (int)0;
            			}
            			break;
            			case (int)3: {
HXLINE(  37)				return (int)1;
            			}
            			break;
            			case (int)4: {
HXLINE(  37)				return (int)17;
            			}
            			break;
            			case (int)5: {
HXLINE(  37)				return (int)18;
            			}
            			break;
            			case (int)6: {
HXLINE(  37)				return (int)4;
            			}
            			break;
            			case (int)7: {
HXLINE(  37)				return (int)5;
            			}
            			break;
            			case (int)8: {
HXLINE(  37)				return (int)6;
            			}
            			break;
            			case (int)9: {
HXLINE(  37)				return (int)7;
            			}
            			break;
            			case (int)11: {
HXLINE(  37)				return (int)10;
            			}
            			break;
            			case (int)12: {
HXLINE(  37)				return (int)12;
            			}
            			break;
            			case (int)13: {
HXLINE(  37)				return (int)11;
            			}
            			break;
            			case (int)14: {
HXLINE(  37)				return (int)13;
            			}
            			break;
            			case (int)15: {
HXLINE(  37)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  54)				if ((rawID == this->leftStick->rawUp)) {
HXLINE(  37)					return (int)34;
            				}
            				else {
HXLINE(  55)					if ((rawID == this->leftStick->rawDown)) {
HXLINE(  37)						return (int)36;
            					}
            					else {
HXLINE(  56)						if ((rawID == this->leftStick->rawLeft)) {
HXLINE(  37)							return (int)37;
            						}
            						else {
HXLINE(  57)							if ((rawID == this->leftStick->rawRight)) {
HXLINE(  37)								return (int)35;
            							}
            							else {
HXLINE(  58)								if ((rawID == this->rightStick->rawUp)) {
HXLINE(  37)									return (int)38;
            								}
            								else {
HXLINE(  59)									if ((rawID == this->rightStick->rawDown)) {
HXLINE(  37)										return (int)40;
            									}
            									else {
HXLINE(  60)										if ((rawID == this->rightStick->rawLeft)) {
HXLINE(  37)											return (int)41;
            										}
            										else {
HXLINE(  61)											if ((rawID == this->rightStick->rawRight)) {
HXLINE(  37)												return (int)39;
            											}
            											else {
HXLINE(  37)												return (int)-1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXDLIN(  37)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getIDClassicController,return )

Int MayflashWiiRemoteMapping_obj::getIDNunchuk(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getIDNunchuk",0xf7a650dd,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getIDNunchuk","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",68,0xb7763ebe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  68)		switch((int)(rawID)){
            			case (int)0: {
HXLINE(  68)				return (int)2;
            			}
            			break;
            			case (int)1: {
HXLINE(  68)				return (int)3;
            			}
            			break;
            			case (int)2: {
HXLINE(  68)				return (int)0;
            			}
            			break;
            			case (int)3: {
HXLINE(  68)				return (int)1;
            			}
            			break;
            			case (int)4: {
HXLINE(  68)				return (int)6;
            			}
            			break;
            			case (int)5: {
HXLINE(  68)				return (int)7;
            			}
            			break;
            			case (int)6: {
HXLINE(  68)				return (int)17;
            			}
            			break;
            			case (int)7: {
HXLINE(  68)				return (int)4;
            			}
            			break;
            			case (int)11: {
HXLINE(  68)				return (int)10;
            			}
            			break;
            			case (int)12: {
HXLINE(  68)				return (int)12;
            			}
            			break;
            			case (int)13: {
HXLINE(  68)				return (int)11;
            			}
            			break;
            			case (int)14: {
HXLINE(  68)				return (int)13;
            			}
            			break;
            			case (int)15: {
HXLINE(  68)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  68)				return (int)-1;
            			}
            		}
HXDLIN(  68)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getIDNunchuk,return )

Int MayflashWiiRemoteMapping_obj::getIDDefault(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getIDDefault",0x559cab9c,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getIDDefault","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",94,0xb7763ebe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  94)		switch((int)(rawID)){
            			case (int)0: {
HXLINE(  94)				return (int)2;
            			}
            			break;
            			case (int)1: {
HXLINE(  94)				return (int)3;
            			}
            			break;
            			case (int)2: {
HXLINE(  94)				return (int)0;
            			}
            			break;
            			case (int)3: {
HXLINE(  94)				return (int)1;
            			}
            			break;
            			case (int)4: {
HXLINE(  94)				return (int)6;
            			}
            			break;
            			case (int)5: {
HXLINE(  94)				return (int)7;
            			}
            			break;
            			case (int)11: {
HXLINE(  94)				return (int)10;
            			}
            			break;
            			case (int)22: {
HXLINE(  94)				return (int)11;
            			}
            			break;
            			case (int)23: {
HXLINE(  94)				return (int)12;
            			}
            			break;
            			case (int)24: {
HXLINE(  94)				return (int)13;
            			}
            			break;
            			case (int)25: {
HXLINE(  94)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  94)				return (int)-1;
            			}
            		}
HXDLIN(  94)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getIDDefault,return )

Int MayflashWiiRemoteMapping_obj::getRawID(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getRawID",0xc8a2c619,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getRawID","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",113,0xb7763ebe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 113)		Int _hx_tmp = ( ( ::hx::EnumBase)(this->attachment) )->_hx_getIndex();
HXDLIN( 113)		switch((int)(_hx_tmp)){
            			case (int)0: {
HXLINE( 113)				return this->getRawNunchuk(ID);
            			}
            			break;
            			case (int)1: {
HXLINE( 113)				return this->getRawClassicController(ID);
            			}
            			break;
            			case (int)2: {
HXLINE( 113)				return this->getRawDefault(ID);
            			}
            			break;
            		}
HXDLIN( 113)		return (int)0;
            	}


Int MayflashWiiRemoteMapping_obj::getRawClassicController(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getRawClassicController",0x0492e8b0,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getRawClassicController","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",123,0xb7763ebe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 123)		switch((int)(ID)){
            			case (int)0: {
HXLINE( 123)				return (int)2;
            			}
            			break;
            			case (int)1: {
HXLINE( 123)				return (int)3;
            			}
            			break;
            			case (int)2: {
HXLINE( 123)				return (int)0;
            			}
            			break;
            			case (int)3: {
HXLINE( 123)				return (int)1;
            			}
            			break;
            			case (int)4: {
HXLINE( 123)				return (int)6;
            			}
            			break;
            			case (int)5: {
HXLINE( 123)				return (int)7;
            			}
            			break;
            			case (int)6: {
HXLINE( 123)				return (int)8;
            			}
            			break;
            			case (int)7: {
HXLINE( 123)				return (int)9;
            			}
            			break;
            			case (int)10: {
HXLINE( 123)				return (int)11;
            			}
            			break;
            			case (int)11: {
HXLINE( 123)				return (int)13;
            			}
            			break;
            			case (int)12: {
HXLINE( 123)				return (int)12;
            			}
            			break;
            			case (int)13: {
HXLINE( 123)				return (int)14;
            			}
            			break;
            			case (int)14: {
HXLINE( 123)				return (int)15;
            			}
            			break;
            			case (int)17: {
HXLINE( 123)				return (int)4;
            			}
            			break;
            			case (int)18: {
HXLINE( 123)				return (int)5;
            			}
            			break;
            			case (int)30: {
HXLINE( 123)				return (int)-1;
            			}
            			break;
            			case (int)31: {
HXLINE( 123)				return (int)-1;
            			}
            			break;
            			case (int)34: {
HXLINE( 123)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE( 123)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE( 123)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE( 123)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE( 123)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE( 123)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE( 123)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE( 123)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE( 123)				return this->getRawDefault(ID);
            			}
            		}
HXDLIN( 123)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getRawClassicController,return )

Int MayflashWiiRemoteMapping_obj::getRawNunchuk(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getRawNunchuk",0x53b6bee4,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getRawNunchuk","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",156,0xb7763ebe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 156)		switch((int)(ID)){
            			case (int)0: {
HXLINE( 156)				return (int)2;
            			}
            			break;
            			case (int)1: {
HXLINE( 156)				return (int)3;
            			}
            			break;
            			case (int)2: {
HXLINE( 156)				return (int)0;
            			}
            			break;
            			case (int)3: {
HXLINE( 156)				return (int)1;
            			}
            			break;
            			case (int)4: {
HXLINE( 156)				return (int)7;
            			}
            			break;
            			case (int)6: {
HXLINE( 156)				return (int)4;
            			}
            			break;
            			case (int)7: {
HXLINE( 156)				return (int)5;
            			}
            			break;
            			case (int)10: {
HXLINE( 156)				return (int)11;
            			}
            			break;
            			case (int)11: {
HXLINE( 156)				return (int)13;
            			}
            			break;
            			case (int)12: {
HXLINE( 156)				return (int)12;
            			}
            			break;
            			case (int)13: {
HXLINE( 156)				return (int)14;
            			}
            			break;
            			case (int)14: {
HXLINE( 156)				return (int)15;
            			}
            			break;
            			case (int)17: {
HXLINE( 156)				return (int)6;
            			}
            			break;
            			case (int)28: {
HXLINE( 156)				return (int)2;
            			}
            			break;
            			case (int)29: {
HXLINE( 156)				return (int)3;
            			}
            			break;
            			case (int)34: {
HXLINE( 156)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE( 156)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE( 156)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE( 156)				return ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE( 156)				return (int)-1;
            			}
            		}
HXDLIN( 156)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getRawNunchuk,return )

Int MayflashWiiRemoteMapping_obj::getRawDefault(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","getRawDefault",0xb1ad19a3,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.getRawDefault","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",183,0xb7763ebe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 183)		switch((int)(ID)){
            			case (int)0: {
HXLINE( 183)				return (int)2;
            			}
            			break;
            			case (int)1: {
HXLINE( 183)				return (int)3;
            			}
            			break;
            			case (int)2: {
HXLINE( 183)				return (int)0;
            			}
            			break;
            			case (int)3: {
HXLINE( 183)				return (int)1;
            			}
            			break;
            			case (int)6: {
HXLINE( 183)				return (int)4;
            			}
            			break;
            			case (int)7: {
HXLINE( 183)				return (int)5;
            			}
            			break;
            			case (int)10: {
HXLINE( 183)				return (int)11;
            			}
            			break;
            			case (int)11: {
HXLINE( 183)				return (int)22;
            			}
            			break;
            			case (int)12: {
HXLINE( 183)				return (int)23;
            			}
            			break;
            			case (int)13: {
HXLINE( 183)				return (int)24;
            			}
            			break;
            			case (int)14: {
HXLINE( 183)				return (int)25;
            			}
            			break;
            			default:{
HXLINE( 183)				return (int)-1;
            			}
            		}
HXDLIN( 183)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MayflashWiiRemoteMapping_obj,getRawDefault,return )

Int MayflashWiiRemoteMapping_obj::axisIndexToRawID(Int axisID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","axisIndexToRawID",0xa42bf863,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.axisIndexToRawID","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",202,0xb7763ebe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(axisID,"axisID")
HXLINE( 203)		Bool _hx_tmp;
HXDLIN( 203)		if (hx::IsNotEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK_dyn() )) {
HXLINE( 203)			_hx_tmp = hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_CLASSIC_CONTROLLER_dyn() );
            		}
            		else {
HXLINE( 203)			_hx_tmp = true;
            		}
HXDLIN( 203)		if (_hx_tmp) {
HXLINE( 205)			if ((axisID == this->leftStick->x)) {
HXLINE( 206)				return (int)18;
            			}
            			else {
HXLINE( 207)				if ((axisID == this->rightStick->y)) {
HXLINE( 208)					return (int)19;
            				}
            			}
            		}
            		else {
HXLINE( 212)			if ((axisID == this->leftStick->x)) {
HXLINE( 213)				return (int)16;
            			}
            			else {
HXLINE( 214)				if ((axisID == this->rightStick->y)) {
HXLINE( 215)					return (int)17;
            				}
            			}
            		}
HXLINE( 218)		if ((axisID == this->leftStick->x)) {
HXLINE( 219)			return (int)20;
            		}
            		else {
HXLINE( 220)			if ((axisID == this->rightStick->y)) {
HXLINE( 221)				return (int)21;
            			}
            		}
HXLINE( 223)		return axisID;
            	}


Int MayflashWiiRemoteMapping_obj::checkForFakeAxis(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","checkForFakeAxis",0x40fccde3,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.checkForFakeAxis","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",227,0xb7763ebe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 228)		if (hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK_dyn() )) {
HXLINE( 230)			if ((ID == (int)17)) {
HXLINE( 231)				return (int)6;
            			}
            		}
            		else {
HXLINE( 233)			if (hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_CLASSIC_CONTROLLER_dyn() )) {
HXLINE( 235)				if ((ID == (int)17)) {
HXLINE( 236)					return (int)22;
            				}
HXLINE( 237)				if ((ID == (int)18)) {
HXLINE( 238)					return (int)23;
            				}
            			}
            		}
HXLINE( 240)		return (int)-1;
            	}


::hx::EnumBase MayflashWiiRemoteMapping_obj::set_attachment(::hx::EnumBase attachment){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","set_attachment",0xdaecf06c,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.set_attachment","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",245,0xb7763ebe)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE( 246)		 ::flixel::input::gamepad::FlxGamepadAnalogStick _hx_tmp;
HXDLIN( 246)		Int _hx_tmp1 = ( ( ::hx::EnumBase)(attachment) )->_hx_getIndex();
HXDLIN( 246)		switch((int)(_hx_tmp1)){
            			case (int)0: case (int)1: {
HXLINE( 246)				_hx_tmp = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;
            			}
            			break;
            			case (int)2: {
HXLINE( 246)				_hx_tmp = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::REMOTE_DPAD;
            			}
            			break;
            		}
HXDLIN( 246)		this->leftStick = _hx_tmp;
HXLINE( 252)		 ::flixel::input::gamepad::FlxGamepadAnalogStick _hx_tmp2;
HXDLIN( 252)		Int _hx_tmp3 = ( ( ::hx::EnumBase)(attachment) )->_hx_getIndex();
HXDLIN( 252)		if ((_hx_tmp3 == (int)1)) {
HXLINE( 252)			_hx_tmp2 = ::flixel::input::gamepad::id::MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK;
            		}
            		else {
HXLINE( 252)			_hx_tmp2 = null();
            		}
HXDLIN( 252)		this->rightStick = _hx_tmp2;
HXLINE( 258)		return this->super::set_attachment(attachment);
            	}


Int MayflashWiiRemoteMapping_obj::REMOTE_DPAD_X;

Int MayflashWiiRemoteMapping_obj::REMOTE_DPAD_Y;

Int MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X;

Int MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y;

Int MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X;

Int MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y;


MayflashWiiRemoteMapping_obj::MayflashWiiRemoteMapping_obj()
{
}

hx::Val MayflashWiiRemoteMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return hx::Val( getID_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return hx::Val( getRawID_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return hx::Val( initValues_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getIDNunchuk") ) { return hx::Val( getIDNunchuk_dyn()); }
		if (HX_FIELD_EQ(inName,"getIDDefault") ) { return hx::Val( getIDDefault_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRawNunchuk") ) { return hx::Val( getRawNunchuk_dyn()); }
		if (HX_FIELD_EQ(inName,"getRawDefault") ) { return hx::Val( getRawDefault_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_attachment") ) { return hx::Val( set_attachment_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return hx::Val( axisIndexToRawID_dyn()); }
		if (HX_FIELD_EQ(inName,"checkForFakeAxis") ) { return hx::Val( checkForFakeAxis_dyn()); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getIDClassicController") ) { return hx::Val( getIDClassicController_dyn()); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRawClassicController") ) { return hx::Val( getRawClassicController_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MayflashWiiRemoteMapping_obj_sMemberStorageInfo = 0;
static hx::StaticInfo MayflashWiiRemoteMapping_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &MayflashWiiRemoteMapping_obj::REMOTE_DPAD_X,HX_HCSTRING("REMOTE_DPAD_X","\x21","\x04","\xe6","\xa5")},
	{hx::fsInt,(void *) &MayflashWiiRemoteMapping_obj::REMOTE_DPAD_Y,HX_HCSTRING("REMOTE_DPAD_Y","\x22","\x04","\xe6","\xa5")},
	{hx::fsInt,(void *) &MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MayflashWiiRemoteMapping_obj_sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getIDClassicController","\x1d","\xe8","\xc4","\x20"),
	HX_HCSTRING("getIDNunchuk","\x11","\xa4","\xdf","\xd0"),
	HX_HCSTRING("getIDDefault","\xd0","\xfe","\xd5","\x2e"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("getRawClassicController","\xfc","\xb9","\x66","\x9f"),
	HX_HCSTRING("getRawNunchuk","\x30","\x39","\xa6","\x8c"),
	HX_HCSTRING("getRawDefault","\xef","\x93","\x9c","\xea"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	HX_HCSTRING("checkForFakeAxis","\x17","\xcb","\xb1","\xdd"),
	HX_HCSTRING("set_attachment","\xa0","\x78","\x88","\x73"),
	::String(null()) };

static void MayflashWiiRemoteMapping_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::REMOTE_DPAD_X,"REMOTE_DPAD_X");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::REMOTE_DPAD_Y,"REMOTE_DPAD_Y");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MayflashWiiRemoteMapping_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::REMOTE_DPAD_X,"REMOTE_DPAD_X");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::REMOTE_DPAD_Y,"REMOTE_DPAD_Y");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#endif

hx::Class MayflashWiiRemoteMapping_obj::__mClass;

static ::String MayflashWiiRemoteMapping_obj_sStaticFields[] = {
	HX_HCSTRING("REMOTE_DPAD_X","\x21","\x04","\xe6","\xa5"),
	HX_HCSTRING("REMOTE_DPAD_Y","\x22","\x04","\xe6","\xa5"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1"),
	::String(null())
};

void MayflashWiiRemoteMapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","\x22","\x13","\xe5","\xee");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MayflashWiiRemoteMapping_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MayflashWiiRemoteMapping_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MayflashWiiRemoteMapping_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MayflashWiiRemoteMapping_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MayflashWiiRemoteMapping_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MayflashWiiRemoteMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MayflashWiiRemoteMapping_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MayflashWiiRemoteMapping_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","boot",0x108284fe,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.boot","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",10,0xb7763ebe)
HXLINE(  10)		REMOTE_DPAD_X = (int)16;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","boot",0x108284fe,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.boot","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",11,0xb7763ebe)
HXLINE(  11)		REMOTE_DPAD_Y = (int)17;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","boot",0x108284fe,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.boot","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",13,0xb7763ebe)
HXLINE(  13)		LEFT_ANALOG_STICK_FAKE_X = (int)18;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","boot",0x108284fe,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.boot","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",14,0xb7763ebe)
HXLINE(  14)		LEFT_ANALOG_STICK_FAKE_Y = (int)19;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","boot",0x108284fe,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.boot","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",15,0xb7763ebe)
HXLINE(  15)		RIGHT_ANALOG_STICK_FAKE_X = (int)20;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.MayflashWiiRemoteMapping","boot",0x108284fe,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping.boot","flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.hx",16,0xb7763ebe)
HXLINE(  16)		RIGHT_ANALOG_STICK_FAKE_Y = (int)21;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
