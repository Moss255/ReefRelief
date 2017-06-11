// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

void FlxGamepadButtonList_obj::__construct(Int status, ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","new",0xeb174acd,"flixel.input.gamepad.lists.FlxGamepadButtonList.new","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",41,0x834770bf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(status,"status")
            	HX_STACK_ARG(gamepad,"gamepad")
HXLINE(  41)		super::__construct(status,gamepad);
            	}

Dynamic FlxGamepadButtonList_obj::__CreateEmpty() { return new FlxGamepadButtonList_obj; }

hx::ObjectPtr< FlxGamepadButtonList_obj > FlxGamepadButtonList_obj::__new(Int status, ::flixel::input::gamepad::FlxGamepad gamepad)
{
	hx::ObjectPtr< FlxGamepadButtonList_obj > _hx_result = new FlxGamepadButtonList_obj();
	_hx_result->__construct(status,gamepad);
	return _hx_result;
}

Dynamic FlxGamepadButtonList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxGamepadButtonList_obj > _hx_result = new FlxGamepadButtonList_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

Bool FlxGamepadButtonList_obj::get_A(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_A",0x4fc954c5,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_A","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",12,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  12)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  12)		Int Status = this->status;
HXDLIN(  12)		Int _hx_tmp = _this->mapping->getRawID((int)0);
HXDLIN(  12)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_A,return )

Bool FlxGamepadButtonList_obj::get_B(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_B",0x4fc954c6,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_B","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",13,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  13)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  13)		Int Status = this->status;
HXDLIN(  13)		Int _hx_tmp = _this->mapping->getRawID((int)1);
HXDLIN(  13)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_B,return )

Bool FlxGamepadButtonList_obj::get_X(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_X",0x4fc954dc,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_X","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",14,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  14)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  14)		Int Status = this->status;
HXDLIN(  14)		Int _hx_tmp = _this->mapping->getRawID((int)2);
HXDLIN(  14)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_X,return )

Bool FlxGamepadButtonList_obj::get_Y(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_Y",0x4fc954dd,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_Y","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",15,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  15)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  15)		Int Status = this->status;
HXDLIN(  15)		Int _hx_tmp = _this->mapping->getRawID((int)3);
HXDLIN(  15)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_Y,return )

Bool FlxGamepadButtonList_obj::get_LEFT_SHOULDER(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_SHOULDER",0x7b61bc5c,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_SHOULDER","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",16,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  16)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  16)		Int Status = this->status;
HXDLIN(  16)		Int _hx_tmp = _this->mapping->getRawID((int)4);
HXDLIN(  16)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_SHOULDER,return )

Bool FlxGamepadButtonList_obj::get_RIGHT_SHOULDER(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_SHOULDER",0x1879c87f,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_SHOULDER","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",17,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  17)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  17)		Int Status = this->status;
HXDLIN(  17)		Int _hx_tmp = _this->mapping->getRawID((int)5);
HXDLIN(  17)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_SHOULDER,return )

Bool FlxGamepadButtonList_obj::get_BACK(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_BACK",0xfcd4f823,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_BACK","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",18,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  18)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  18)		Int Status = this->status;
HXDLIN(  18)		Int _hx_tmp = _this->mapping->getRawID((int)6);
HXDLIN(  18)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_BACK,return )

Bool FlxGamepadButtonList_obj::get_START(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_START",0x13e192c6,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_START","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",19,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  19)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  19)		Int Status = this->status;
HXDLIN(  19)		Int _hx_tmp = _this->mapping->getRawID((int)7);
HXDLIN(  19)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_START,return )

Bool FlxGamepadButtonList_obj::get_LEFT_STICK_CLICK(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_STICK_CLICK",0x1bf4fd1d,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_STICK_CLICK","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",20,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  20)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  20)		Int Status = this->status;
HXDLIN(  20)		Int _hx_tmp = _this->mapping->getRawID((int)8);
HXDLIN(  20)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_STICK_CLICK,return )

Bool FlxGamepadButtonList_obj::get_RIGHT_STICK_CLICK(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_STICK_CLICK",0xc38ee8da,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_STICK_CLICK","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",21,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  21)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  21)		Int Status = this->status;
HXDLIN(  21)		Int _hx_tmp = _this->mapping->getRawID((int)9);
HXDLIN(  21)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_STICK_CLICK,return )

Bool FlxGamepadButtonList_obj::get_GUIDE(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_GUIDE",0x2bc1d920,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_GUIDE","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",22,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  22)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  22)		Int Status = this->status;
HXDLIN(  22)		Int _hx_tmp = _this->mapping->getRawID((int)10);
HXDLIN(  22)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_GUIDE,return )

Bool FlxGamepadButtonList_obj::get_DPAD_UP(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD_UP",0xeb188fef,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD_UP","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",23,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  23)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  23)		Int Status = this->status;
HXDLIN(  23)		Int _hx_tmp = _this->mapping->getRawID((int)11);
HXDLIN(  23)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD_UP,return )

Bool FlxGamepadButtonList_obj::get_DPAD_DOWN(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD_DOWN",0x431292f6,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD_DOWN","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",24,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  24)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  24)		Int Status = this->status;
HXDLIN(  24)		Int _hx_tmp = _this->mapping->getRawID((int)12);
HXDLIN(  24)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD_DOWN,return )

Bool FlxGamepadButtonList_obj::get_DPAD_LEFT(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD_LEFT",0x4854a29b,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD_LEFT","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",25,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  25)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  25)		Int Status = this->status;
HXDLIN(  25)		Int _hx_tmp = _this->mapping->getRawID((int)13);
HXDLIN(  25)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD_LEFT,return )

Bool FlxGamepadButtonList_obj::get_DPAD_RIGHT(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD_RIGHT",0x78c6b2a8,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD_RIGHT","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",26,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  26)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  26)		Int Status = this->status;
HXDLIN(  26)		Int _hx_tmp = _this->mapping->getRawID((int)14);
HXDLIN(  26)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD_RIGHT,return )

Bool FlxGamepadButtonList_obj::get_LEFT_TRIGGER(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_TRIGGER",0xc549e39c,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_TRIGGER","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",31,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  31)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  31)		Int Status = this->status;
HXDLIN(  31)		Int _hx_tmp = _this->mapping->getRawID((int)22);
HXDLIN(  31)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_TRIGGER,return )

Bool FlxGamepadButtonList_obj::get_RIGHT_TRIGGER(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_TRIGGER",0x7a39ecd9,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_TRIGGER","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",32,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  32)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  32)		Int Status = this->status;
HXDLIN(  32)		Int _hx_tmp = _this->mapping->getRawID((int)23);
HXDLIN(  32)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_TRIGGER,return )

Bool FlxGamepadButtonList_obj::get_EXTRA_0(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_EXTRA_0",0x415030e5,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_EXTRA_0","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",34,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  34)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  34)		Int Status = this->status;
HXDLIN(  34)		Int _hx_tmp = _this->mapping->getRawID((int)30);
HXDLIN(  34)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_EXTRA_0,return )

Bool FlxGamepadButtonList_obj::get_EXTRA_1(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_EXTRA_1",0x415030e6,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_EXTRA_1","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",35,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  35)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  35)		Int Status = this->status;
HXDLIN(  35)		Int _hx_tmp = _this->mapping->getRawID((int)31);
HXDLIN(  35)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_EXTRA_1,return )

Bool FlxGamepadButtonList_obj::get_EXTRA_2(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_EXTRA_2",0x415030e7,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_EXTRA_2","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",36,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  36)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  36)		Int Status = this->status;
HXDLIN(  36)		Int _hx_tmp = _this->mapping->getRawID((int)32);
HXDLIN(  36)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_EXTRA_2,return )

Bool FlxGamepadButtonList_obj::get_EXTRA_3(){
            	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_EXTRA_3",0x415030e8,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_EXTRA_3","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",37,0x834770bf)
            	HX_STACK_THIS(this)
HXLINE(  37)		HX_VARI(  ::flixel::input::gamepad::FlxGamepad,_this) = this->gamepad;
HXDLIN(  37)		Int Status = this->status;
HXDLIN(  37)		Int _hx_tmp = _this->mapping->getRawID((int)33);
HXDLIN(  37)		return _this->checkStatusRaw(_hx_tmp,Status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_EXTRA_3,return )


FlxGamepadButtonList_obj::FlxGamepadButtonList_obj()
{
}

hx::Val FlxGamepadButtonList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_A()); }
		if (HX_FIELD_EQ(inName,"B") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_B()); }
		if (HX_FIELD_EQ(inName,"X") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_X()); }
		if (HX_FIELD_EQ(inName,"Y") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_Y()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_BACK()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_A") ) { return hx::Val( get_A_dyn()); }
		if (HX_FIELD_EQ(inName,"get_B") ) { return hx::Val( get_B_dyn()); }
		if (HX_FIELD_EQ(inName,"get_X") ) { return hx::Val( get_X_dyn()); }
		if (HX_FIELD_EQ(inName,"get_Y") ) { return hx::Val( get_Y_dyn()); }
		if (HX_FIELD_EQ(inName,"START") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_START()); }
		if (HX_FIELD_EQ(inName,"GUIDE") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_GUIDE()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DPAD_UP") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_DPAD_UP()); }
		if (HX_FIELD_EQ(inName,"EXTRA_0") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_EXTRA_0()); }
		if (HX_FIELD_EQ(inName,"EXTRA_1") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_EXTRA_1()); }
		if (HX_FIELD_EQ(inName,"EXTRA_2") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_EXTRA_2()); }
		if (HX_FIELD_EQ(inName,"EXTRA_3") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_EXTRA_3()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_BACK") ) { return hx::Val( get_BACK_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_START") ) { return hx::Val( get_START_dyn()); }
		if (HX_FIELD_EQ(inName,"get_GUIDE") ) { return hx::Val( get_GUIDE_dyn()); }
		if (HX_FIELD_EQ(inName,"DPAD_DOWN") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_DPAD_DOWN()); }
		if (HX_FIELD_EQ(inName,"DPAD_LEFT") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_DPAD_LEFT()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DPAD_RIGHT") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_DPAD_RIGHT()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_DPAD_UP") ) { return hx::Val( get_DPAD_UP_dyn()); }
		if (HX_FIELD_EQ(inName,"get_EXTRA_0") ) { return hx::Val( get_EXTRA_0_dyn()); }
		if (HX_FIELD_EQ(inName,"get_EXTRA_1") ) { return hx::Val( get_EXTRA_1_dyn()); }
		if (HX_FIELD_EQ(inName,"get_EXTRA_2") ) { return hx::Val( get_EXTRA_2_dyn()); }
		if (HX_FIELD_EQ(inName,"get_EXTRA_3") ) { return hx::Val( get_EXTRA_3_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LEFT_TRIGGER") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_LEFT_TRIGGER()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"LEFT_SHOULDER") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_LEFT_SHOULDER()); }
		if (HX_FIELD_EQ(inName,"get_DPAD_DOWN") ) { return hx::Val( get_DPAD_DOWN_dyn()); }
		if (HX_FIELD_EQ(inName,"get_DPAD_LEFT") ) { return hx::Val( get_DPAD_LEFT_dyn()); }
		if (HX_FIELD_EQ(inName,"RIGHT_TRIGGER") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_RIGHT_TRIGGER()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RIGHT_SHOULDER") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_RIGHT_SHOULDER()); }
		if (HX_FIELD_EQ(inName,"get_DPAD_RIGHT") ) { return hx::Val( get_DPAD_RIGHT_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LEFT_STICK_CLICK") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_LEFT_STICK_CLICK()); }
		if (HX_FIELD_EQ(inName,"get_LEFT_TRIGGER") ) { return hx::Val( get_LEFT_TRIGGER_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_LEFT_SHOULDER") ) { return hx::Val( get_LEFT_SHOULDER_dyn()); }
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_CLICK") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_RIGHT_STICK_CLICK()); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_TRIGGER") ) { return hx::Val( get_RIGHT_TRIGGER_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_RIGHT_SHOULDER") ) { return hx::Val( get_RIGHT_SHOULDER_dyn()); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_CLICK") ) { return hx::Val( get_LEFT_STICK_CLICK_dyn()); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_CLICK") ) { return hx::Val( get_RIGHT_STICK_CLICK_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

void FlxGamepadButtonList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("A","\x41","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("B","\x42","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("X","\x58","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("Y","\x59","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("LEFT_SHOULDER","\xd8","\xb1","\xa9","\x01"));
	outFields->push(HX_HCSTRING("RIGHT_SHOULDER","\x83","\x9f","\x28","\x11"));
	outFields->push(HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"));
	outFields->push(HX_HCSTRING("START","\x42","\xac","\xf9","\x01"));
	outFields->push(HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf"));
	outFields->push(HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b"));
	outFields->push(HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19"));
	outFields->push(HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"));
	outFields->push(HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"));
	outFields->push(HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"));
	outFields->push(HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"));
	outFields->push(HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"));
	outFields->push(HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"));
	outFields->push(HX_HCSTRING("EXTRA_0","\x61","\xa1","\xbe","\xf8"));
	outFields->push(HX_HCSTRING("EXTRA_1","\x62","\xa1","\xbe","\xf8"));
	outFields->push(HX_HCSTRING("EXTRA_2","\x63","\xa1","\xbe","\xf8"));
	outFields->push(HX_HCSTRING("EXTRA_3","\x64","\xa1","\xbe","\xf8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxGamepadButtonList_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxGamepadButtonList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadButtonList_obj_sMemberFields[] = {
	HX_HCSTRING("get_A","\x18","\xa5","\x60","\x91"),
	HX_HCSTRING("get_B","\x19","\xa5","\x60","\x91"),
	HX_HCSTRING("get_X","\x2f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_Y","\x30","\xa5","\x60","\x91"),
	HX_HCSTRING("get_LEFT_SHOULDER","\x2f","\xbd","\x19","\x08"),
	HX_HCSTRING("get_RIGHT_SHOULDER","\x4c","\x80","\xc2","\xac"),
	HX_HCSTRING("get_BACK","\xb0","\x5d","\x8c","\xab"),
	HX_HCSTRING("get_START","\x99","\x08","\xa3","\x45"),
	HX_HCSTRING("get_LEFT_STICK_CLICK","\x2a","\x02","\xb5","\xdd"),
	HX_HCSTRING("get_RIGHT_STICK_CLICK","\x2d","\x4f","\xd3","\x89"),
	HX_HCSTRING("get_GUIDE","\xf3","\x4e","\x83","\x5d"),
	HX_HCSTRING("get_DPAD_UP","\x82","\x60","\x81","\x28"),
	HX_HCSTRING("get_DPAD_DOWN","\x49","\xee","\xbe","\x48"),
	HX_HCSTRING("get_DPAD_LEFT","\xee","\xfd","\x00","\x4e"),
	HX_HCSTRING("get_DPAD_RIGHT","\xf5","\x3f","\xea","\x69"),
	HX_HCSTRING("get_LEFT_TRIGGER","\x29","\x1e","\x65","\xf0"),
	HX_HCSTRING("get_RIGHT_TRIGGER","\xac","\xed","\xf1","\x06"),
	HX_HCSTRING("get_EXTRA_0","\x78","\x01","\xb9","\x7e"),
	HX_HCSTRING("get_EXTRA_1","\x79","\x01","\xb9","\x7e"),
	HX_HCSTRING("get_EXTRA_2","\x7a","\x01","\xb9","\x7e"),
	HX_HCSTRING("get_EXTRA_3","\x7b","\x01","\xb9","\x7e"),
	::String(null()) };

static void FlxGamepadButtonList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadButtonList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGamepadButtonList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadButtonList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadButtonList_obj::__mClass;

void FlxGamepadButtonList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxGamepadButtonList","\x5b","\xe0","\xf4","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxGamepadButtonList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxGamepadButtonList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadButtonList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGamepadButtonList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadButtonList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadButtonList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists
