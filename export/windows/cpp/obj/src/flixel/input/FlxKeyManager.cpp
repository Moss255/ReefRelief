// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif

namespace flixel{
namespace input{

void FlxKeyManager_obj::__construct(hx::Class keyListClass){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","new",0x4637a4fc,"flixel.input.FlxKeyManager.new","flixel/input/FlxKeyManager.hx",7,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(keyListClass,"keyListClass")
HXLINE(  40)		this->_keyListMap =  ::haxe::ds::IntMap_obj::__new();
HXLINE(  36)		this->_keyListArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  18)		this->preventDefaultKeys = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  12)		this->enabled = true;
HXLINE( 198)		::openfl::_legacy::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
HXLINE( 199)		::openfl::_legacy::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
HXLINE( 201)		this->pressed = ::Type_obj::createInstance(keyListClass,::cpp::VirtualArray_obj::__new(2)->init(0,(int)1)->init(1,hx::ObjectPtr<OBJ_>(this)));
HXLINE( 202)		this->justPressed = ::Type_obj::createInstance(keyListClass,::cpp::VirtualArray_obj::__new(2)->init(0,(int)2)->init(1,hx::ObjectPtr<OBJ_>(this)));
HXLINE( 203)		this->justReleased = ::Type_obj::createInstance(keyListClass,::cpp::VirtualArray_obj::__new(2)->init(0,(int)-1)->init(1,hx::ObjectPtr<OBJ_>(this)));
            	}

Dynamic FlxKeyManager_obj::__CreateEmpty() { return new FlxKeyManager_obj; }

hx::ObjectPtr< FlxKeyManager_obj > FlxKeyManager_obj::__new(hx::Class keyListClass)
{
	hx::ObjectPtr< FlxKeyManager_obj > _hx_result = new FlxKeyManager_obj();
	_hx_result->__construct(keyListClass);
	return _hx_result;
}

Dynamic FlxKeyManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxKeyManager_obj > _hx_result = new FlxKeyManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

static ::flixel::input::IFlxInputManager_obj _hx_flixel_input_FlxKeyManager__hx_flixel_input_IFlxInputManager= {
	( void (hx::Object::*)())&::flixel::input::FlxKeyManager_obj::reset,
	( void (hx::Object::*)())&::flixel::input::FlxKeyManager_obj::update,
	( void (hx::Object::*)())&::flixel::input::FlxKeyManager_obj::onFocus,
	( void (hx::Object::*)())&::flixel::input::FlxKeyManager_obj::onFocusLost,
	( void (hx::Object::*)())&::flixel::input::FlxKeyManager_obj::destroy,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_FlxKeyManager__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::input::FlxKeyManager_obj::destroy,
};

void *FlxKeyManager_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x65dd217a: return &_hx_flixel_input_FlxKeyManager__hx_flixel_input_IFlxInputManager;
		case (int)0xd4fe2fcd: return &_hx_flixel_input_FlxKeyManager__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Bool FlxKeyManager_obj::anyPressed(::cpp::VirtualArray KeyArray){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","anyPressed",0xbdbeabfa,"flixel.input.FlxKeyManager.anyPressed","flixel/input/FlxKeyManager.hx",50,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(KeyArray,"KeyArray")
HXLINE(  50)		return this->checkKeyArrayState(KeyArray,(int)1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,anyPressed,return )

Bool FlxKeyManager_obj::anyJustPressed(::cpp::VirtualArray KeyArray){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","anyJustPressed",0x4d22732e,"flixel.input.FlxKeyManager.anyJustPressed","flixel/input/FlxKeyManager.hx",61,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(KeyArray,"KeyArray")
HXLINE(  61)		return this->checkKeyArrayState(KeyArray,(int)2);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,anyJustPressed,return )

Bool FlxKeyManager_obj::anyJustReleased(::cpp::VirtualArray KeyArray){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","anyJustReleased",0x37d862b1,"flixel.input.FlxKeyManager.anyJustReleased","flixel/input/FlxKeyManager.hx",72,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(KeyArray,"KeyArray")
HXLINE(  72)		return this->checkKeyArrayState(KeyArray,(int)-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,anyJustReleased,return )

Int FlxKeyManager_obj::firstPressed(){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","firstPressed",0xa191a036,"flixel.input.FlxKeyManager.firstPressed","flixel/input/FlxKeyManager.hx",81,0xfedfa8b6)
            	HX_STACK_THIS(this)
HXLINE(  82)		{
HXLINE(  82)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  82)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->_keyListArray;
HXDLIN(  82)			while((_g < _g1->length)){
HXLINE(  82)				HX_VARI(  ::flixel::input::FlxInput,key) = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN(  82)				++_g;
HXLINE(  84)				Bool _hx_tmp;
HXDLIN(  84)				Bool _hx_tmp1 = hx::IsNotNull( key );
HXDLIN(  84)				if (_hx_tmp1) {
HXLINE(  84)					if ((key->current != (int)1)) {
HXLINE(  84)						_hx_tmp = (key->current == (int)2);
            					}
            					else {
HXLINE(  84)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  84)					_hx_tmp = false;
            				}
HXDLIN(  84)				if (_hx_tmp) {
HXLINE(  86)					return key->ID;
            				}
            			}
            		}
HXLINE(  89)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,firstPressed,return )

Int FlxKeyManager_obj::firstJustPressed(){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","firstJustPressed",0xd38a356a,"flixel.input.FlxKeyManager.firstJustPressed","flixel/input/FlxKeyManager.hx",98,0xfedfa8b6)
            	HX_STACK_THIS(this)
HXLINE(  99)		{
HXLINE(  99)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  99)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->_keyListArray;
HXDLIN(  99)			while((_g < _g1->length)){
HXLINE(  99)				HX_VARI(  ::flixel::input::FlxInput,key) = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN(  99)				++_g;
HXLINE( 101)				Bool _hx_tmp;
HXDLIN( 101)				Bool _hx_tmp1 = hx::IsNotNull( key );
HXDLIN( 101)				if (_hx_tmp1) {
HXLINE( 101)					_hx_tmp = (key->current == (int)2);
            				}
            				else {
HXLINE( 101)					_hx_tmp = false;
            				}
HXDLIN( 101)				if (_hx_tmp) {
HXLINE( 103)					return key->ID;
            				}
            			}
            		}
HXLINE( 106)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,firstJustPressed,return )

Int FlxKeyManager_obj::firstJustReleased(){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","firstJustReleased",0x4c3a94f5,"flixel.input.FlxKeyManager.firstJustReleased","flixel/input/FlxKeyManager.hx",115,0xfedfa8b6)
            	HX_STACK_THIS(this)
HXLINE( 116)		{
HXLINE( 116)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 116)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->_keyListArray;
HXDLIN( 116)			while((_g < _g1->length)){
HXLINE( 116)				HX_VARI(  ::flixel::input::FlxInput,key) = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 116)				++_g;
HXLINE( 118)				Bool _hx_tmp;
HXDLIN( 118)				Bool _hx_tmp1 = hx::IsNotNull( key );
HXDLIN( 118)				if (_hx_tmp1) {
HXLINE( 118)					_hx_tmp = (key->current == (int)-1);
            				}
            				else {
HXLINE( 118)					_hx_tmp = false;
            				}
HXDLIN( 118)				if (_hx_tmp) {
HXLINE( 120)					return key->ID;
            				}
            			}
            		}
HXLINE( 123)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,firstJustReleased,return )

Bool FlxKeyManager_obj::checkStatus( ::Dynamic KeyCode,Int Status){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","checkStatus",0xbf018ab6,"flixel.input.FlxKeyManager.checkStatus","flixel/input/FlxKeyManager.hx",134,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(KeyCode,"KeyCode")
            	HX_STACK_ARG(Status,"Status")
HXLINE( 135)		HX_VARI(  ::flixel::input::FlxInput,key) = this->_keyListMap->get(KeyCode).StaticCast<  ::flixel::input::FlxInput >();
HXLINE( 137)		Bool _hx_tmp = hx::IsNotNull( key );
HXDLIN( 137)		if (_hx_tmp) {
HXLINE( 139)			Bool _hx_tmp1 = key->hasState(Status);
HXDLIN( 139)			if (_hx_tmp1) {
HXLINE( 141)				return true;
            			}
            		}
            		else {
HXLINE( 147)			::String _hx_tmp2 = ::Std_obj::string(KeyCode);
HXDLIN( 147)			HX_STACK_DO_THROW(((HX_("Invalid key code: ",1d,50,8f,e3) + _hx_tmp2) + HX_(".",2e,00,00,00)));
            		}
HXLINE( 151)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,checkStatus,return )

::Array< ::Dynamic> FlxKeyManager_obj::getIsDown(){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","getIsDown",0x4bba783e,"flixel.input.FlxKeyManager.getIsDown","flixel/input/FlxKeyManager.hx",160,0xfedfa8b6)
            	HX_STACK_THIS(this)
HXLINE( 161)		HX_VARI( ::Array< ::Dynamic>,keysDown) = ::Array_obj< ::Dynamic>::__new();
HXLINE( 163)		{
HXLINE( 163)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 163)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->_keyListArray;
HXDLIN( 163)			while((_g < _g1->length)){
HXLINE( 163)				HX_VARI(  ::flixel::input::FlxInput,key) = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 163)				++_g;
HXLINE( 165)				Bool _hx_tmp;
HXDLIN( 165)				Bool _hx_tmp1 = hx::IsNotNull( key );
HXDLIN( 165)				if (_hx_tmp1) {
HXLINE( 165)					if ((key->current != (int)1)) {
HXLINE( 165)						_hx_tmp = (key->current == (int)2);
            					}
            					else {
HXLINE( 165)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 165)					_hx_tmp = false;
            				}
HXDLIN( 165)				if (_hx_tmp) {
HXLINE( 167)					keysDown->push(key);
            				}
            			}
            		}
HXLINE( 170)		return keysDown;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,getIsDown,return )

void FlxKeyManager_obj::destroy(){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","destroy",0x5d667f96,"flixel.input.FlxKeyManager.destroy","flixel/input/FlxKeyManager.hx",177,0xfedfa8b6)
            	HX_STACK_THIS(this)
HXLINE( 178)		this->_keyListArray = null();
HXLINE( 179)		this->_keyListMap = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,destroy,(void))

void FlxKeyManager_obj::reset(){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","reset",0x4cbf7d6b,"flixel.input.FlxKeyManager.reset","flixel/input/FlxKeyManager.hx",187,0xfedfa8b6)
            	HX_STACK_THIS(this)
HXLINE( 187)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 187)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->_keyListArray;
HXDLIN( 187)		while((_g < _g1->length)){
HXLINE( 187)			HX_VARI(  ::flixel::input::FlxInput,key) = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 187)			++_g;
HXLINE( 189)			Bool _hx_tmp = hx::IsNotNull( key );
HXDLIN( 189)			if (_hx_tmp) {
HXLINE( 191)				key->release();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,reset,(void))

void FlxKeyManager_obj::update(){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","update",0x595b7aed,"flixel.input.FlxKeyManager.update","flixel/input/FlxKeyManager.hx",211,0xfedfa8b6)
            	HX_STACK_THIS(this)
HXLINE( 211)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 211)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->_keyListArray;
HXDLIN( 211)		while((_g < _g1->length)){
HXLINE( 211)			HX_VARI(  ::flixel::input::FlxInput,key) = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 211)			++_g;
HXLINE( 213)			Bool _hx_tmp = hx::IsNotNull( key );
HXDLIN( 213)			if (_hx_tmp) {
HXLINE( 215)				key->update();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,update,(void))

Bool FlxKeyManager_obj::checkKeyArrayState(::cpp::VirtualArray KeyArray,Int State){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","checkKeyArrayState",0xb44c8d33,"flixel.input.FlxKeyManager.checkKeyArrayState","flixel/input/FlxKeyManager.hx",228,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(KeyArray,"KeyArray")
            	HX_STACK_ARG(State,"State")
HXLINE( 229)		Bool _hx_tmp = hx::IsNull( KeyArray );
HXDLIN( 229)		if (_hx_tmp) {
HXLINE( 231)			return false;
            		}
HXLINE( 234)		{
HXLINE( 234)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 234)			while((_g < KeyArray->get_length())){
HXLINE( 234)				HX_VARI(  ::Dynamic,code) = KeyArray->__get(_g);
HXDLIN( 234)				++_g;
HXLINE( 236)				HX_VARI(  ::flixel::input::FlxInput,key) = this->_keyListMap->get(code).StaticCast<  ::flixel::input::FlxInput >();
HXLINE( 238)				Bool _hx_tmp1 = hx::IsNotNull( key );
HXDLIN( 238)				if (_hx_tmp1) {
HXLINE( 240)					Bool _hx_tmp2 = key->hasState(State);
HXDLIN( 240)					if (_hx_tmp2) {
HXLINE( 242)						return true;
            					}
            				}
            			}
            		}
HXLINE( 247)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,checkKeyArrayState,return )

void FlxKeyManager_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent event){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","onKeyUp",0xae1caad7,"flixel.input.FlxKeyManager.onKeyUp","flixel/input/FlxKeyManager.hx",254,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE( 255)		HX_VARI( Int,c) = this->resolveKeyCode(event);
HXLINE( 256)		this->handlePreventDefaultKeys(c,event);
HXLINE( 258)		Bool _hx_tmp = this->enabled;
HXDLIN( 258)		if (_hx_tmp) {
HXLINE( 260)			HX_VARI(  ::flixel::input::FlxInput,key) = this->_keyListMap->get(c).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 260)			Bool _hx_tmp1 = hx::IsNotNull( key );
HXDLIN( 260)			if (_hx_tmp1) {
HXLINE( 260)				key->release();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,onKeyUp,(void))

void FlxKeyManager_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent event){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","onKeyDown",0xe38153de,"flixel.input.FlxKeyManager.onKeyDown","flixel/input/FlxKeyManager.hx",268,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE( 269)		HX_VARI( Int,c) = this->resolveKeyCode(event);
HXLINE( 270)		this->handlePreventDefaultKeys(c,event);
HXLINE( 272)		Bool _hx_tmp = this->enabled;
HXDLIN( 272)		if (_hx_tmp) {
HXLINE( 274)			HX_VARI(  ::flixel::input::FlxInput,key) = this->_keyListMap->get(c).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 274)			Bool _hx_tmp1 = hx::IsNotNull( key );
HXDLIN( 274)			if (_hx_tmp1) {
HXLINE( 274)				key->press();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,onKeyDown,(void))

void FlxKeyManager_obj::handlePreventDefaultKeys(Int keyCode, ::openfl::_legacy::events::KeyboardEvent event){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","handlePreventDefaultKeys",0x60508309,"flixel.input.FlxKeyManager.handlePreventDefaultKeys","flixel/input/FlxKeyManager.hx",279,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(keyCode,"keyCode")
            	HX_STACK_ARG(event,"event")
HXLINE( 280)		HX_VARI(  ::flixel::input::FlxInput,key) = this->_keyListMap->get(keyCode).StaticCast<  ::flixel::input::FlxInput >();
HXLINE( 281)		Bool _hx_tmp;
HXDLIN( 281)		Bool _hx_tmp1;
HXDLIN( 281)		Bool _hx_tmp2 = hx::IsNotNull( key );
HXDLIN( 281)		if (_hx_tmp2) {
HXLINE( 281)			_hx_tmp1 = hx::IsNotNull( this->preventDefaultKeys );
            		}
            		else {
HXLINE( 281)			_hx_tmp1 = false;
            		}
HXDLIN( 281)		if (_hx_tmp1) {
HXLINE( 281)			Int _hx_tmp3 = this->preventDefaultKeys->indexOf(key->ID,null());
HXDLIN( 281)			_hx_tmp = (_hx_tmp3 != (int)-1);
            		}
            		else {
HXLINE( 281)			_hx_tmp = false;
            		}
HXDLIN( 281)		if (_hx_tmp) {
HXLINE( 283)			event->stopImmediatePropagation();
HXLINE( 284)			event->stopPropagation();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,handlePreventDefaultKeys,(void))

Bool FlxKeyManager_obj::inKeyArray(::cpp::VirtualArray KeyArray, ::openfl::_legacy::events::KeyboardEvent Event){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","inKeyArray",0xf3ad4f63,"flixel.input.FlxKeyManager.inKeyArray","flixel/input/FlxKeyManager.hx",293,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(KeyArray,"KeyArray")
            	HX_STACK_ARG(Event,"Event")
HXLINE( 294)		Bool _hx_tmp = hx::IsNull( KeyArray );
HXDLIN( 294)		if (_hx_tmp) {
HXLINE( 296)			return false;
            		}
            		else {
HXLINE( 300)			HX_VARI( Int,code) = this->resolveKeyCode(Event);
HXLINE( 301)			{
HXLINE( 301)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 301)				while((_g < KeyArray->get_length())){
HXLINE( 301)					HX_VARI(  ::Dynamic,key) = KeyArray->__get(_g);
HXDLIN( 301)					++_g;
HXLINE( 303)					Bool _hx_tmp1;
HXDLIN( 303)					if (hx::IsNotEq( key,code )) {
HXLINE( 303)						_hx_tmp1 = hx::IsEq( key,(int)-2 );
            					}
            					else {
HXLINE( 303)						_hx_tmp1 = true;
            					}
HXDLIN( 303)					if (_hx_tmp1) {
HXLINE( 305)						return true;
            					}
            				}
            			}
            		}
HXLINE( 309)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,inKeyArray,return )

Int FlxKeyManager_obj::resolveKeyCode( ::openfl::_legacy::events::KeyboardEvent e){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","resolveKeyCode",0x9a8225c4,"flixel.input.FlxKeyManager.resolveKeyCode","flixel/input/FlxKeyManager.hx",314,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(e,"e")
HXLINE( 314)		return e->keyCode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,resolveKeyCode,return )

void FlxKeyManager_obj::updateKeyStates(Int KeyCode,Bool Down){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","updateKeyStates",0xe52c7794,"flixel.input.FlxKeyManager.updateKeyStates","flixel/input/FlxKeyManager.hx",321,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(KeyCode,"KeyCode")
            	HX_STACK_ARG(Down,"Down")
HXLINE( 322)		HX_VARI(  ::flixel::input::FlxInput,key) = this->_keyListMap->get(KeyCode).StaticCast<  ::flixel::input::FlxInput >();
HXLINE( 324)		Bool _hx_tmp = hx::IsNotNull( key );
HXDLIN( 324)		if (_hx_tmp) {
HXLINE( 326)			if (Down) {
HXLINE( 328)				key->press();
            			}
            			else {
HXLINE( 332)				key->release();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,updateKeyStates,(void))

void FlxKeyManager_obj::onFocus(){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","onFocus",0xd3a750d5,"flixel.input.FlxKeyManager.onFocus","flixel/input/FlxKeyManager.hx",337,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,onFocus,(void))

void FlxKeyManager_obj::onFocusLost(){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","onFocusLost",0x1879b559,"flixel.input.FlxKeyManager.onFocusLost","flixel/input/FlxKeyManager.hx",341,0xfedfa8b6)
            	HX_STACK_THIS(this)
HXLINE( 341)		this->reset();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,onFocusLost,(void))

 ::flixel::input::FlxInput FlxKeyManager_obj::getKey(Int KeyCode){
            	HX_STACK_FRAME("flixel.input.FlxKeyManager","getKey",0x7576b78d,"flixel.input.FlxKeyManager.getKey","flixel/input/FlxKeyManager.hx",349,0xfedfa8b6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(KeyCode,"KeyCode")
HXLINE( 349)		return this->_keyListMap->get(KeyCode).StaticCast<  ::flixel::input::FlxInput >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,getKey,return )


FlxKeyManager_obj::FlxKeyManager_obj()
{
}

void FlxKeyManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyManager);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(preventDefaultKeys,"preventDefaultKeys");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(justPressed,"justPressed");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_MEMBER_NAME(_keyListArray,"_keyListArray");
	HX_MARK_MEMBER_NAME(_keyListMap,"_keyListMap");
	HX_MARK_END_CLASS();
}

void FlxKeyManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(preventDefaultKeys,"preventDefaultKeys");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(justPressed,"justPressed");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
	HX_VISIT_MEMBER_NAME(_keyListArray,"_keyListArray");
	HX_VISIT_MEMBER_NAME(_keyListMap,"_keyListMap");
}

hx::Val FlxKeyManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		if (HX_FIELD_EQ(inName,"getKey") ) { return hx::Val( getKey_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return hx::Val( enabled); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return hx::Val( pressed); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return hx::Val( onKeyUp_dyn()); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return hx::Val( onFocus_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getIsDown") ) { return hx::Val( getIsDown_dyn()); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return hx::Val( onKeyDown_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return hx::Val( anyPressed_dyn()); }
		if (HX_FIELD_EQ(inName,"inKeyArray") ) { return hx::Val( inKeyArray_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return hx::Val( justPressed); }
		if (HX_FIELD_EQ(inName,"_keyListMap") ) { return hx::Val( _keyListMap); }
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return hx::Val( checkStatus_dyn()); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return hx::Val( onFocusLost_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return hx::Val( justReleased); }
		if (HX_FIELD_EQ(inName,"firstPressed") ) { return hx::Val( firstPressed_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_keyListArray") ) { return hx::Val( _keyListArray); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return hx::Val( anyJustPressed_dyn()); }
		if (HX_FIELD_EQ(inName,"resolveKeyCode") ) { return hx::Val( resolveKeyCode_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return hx::Val( anyJustReleased_dyn()); }
		if (HX_FIELD_EQ(inName,"updateKeyStates") ) { return hx::Val( updateKeyStates_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"firstJustPressed") ) { return hx::Val( firstJustPressed_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"firstJustReleased") ) { return hx::Val( firstJustReleased_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"preventDefaultKeys") ) { return hx::Val( preventDefaultKeys); }
		if (HX_FIELD_EQ(inName,"checkKeyArrayState") ) { return hx::Val( checkKeyArrayState_dyn()); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"handlePreventDefaultKeys") ) { return hx::Val( handlePreventDefaultKeys_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxKeyManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { justPressed=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyListMap") ) { _keyListMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_keyListArray") ) { _keyListArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"preventDefaultKeys") ) { preventDefaultKeys=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("preventDefaultKeys","\x5d","\xd3","\x15","\x2d"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("_keyListArray","\x9b","\x69","\x07","\xf6"));
	outFields->push(HX_HCSTRING("_keyListMap","\x1e","\xa2","\x94","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxKeyManager_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxKeyManager_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxKeyManager_obj,preventDefaultKeys),HX_HCSTRING("preventDefaultKeys","\x5d","\xd3","\x15","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxKeyManager_obj,pressed),HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxKeyManager_obj,justPressed),HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxKeyManager_obj,justReleased),HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxKeyManager_obj,_keyListArray),HX_HCSTRING("_keyListArray","\x9b","\x69","\x07","\xf6")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxKeyManager_obj,_keyListMap),HX_HCSTRING("_keyListMap","\x1e","\xa2","\x94","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxKeyManager_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxKeyManager_obj_sMemberFields[] = {
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("preventDefaultKeys","\x5d","\xd3","\x15","\x2d"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	HX_HCSTRING("_keyListArray","\x9b","\x69","\x07","\xf6"),
	HX_HCSTRING("_keyListMap","\x1e","\xa2","\x94","\x4b"),
	HX_HCSTRING("anyPressed","\x16","\x75","\x02","\x90"),
	HX_HCSTRING("anyJustPressed","\x4a","\xfa","\xb6","\xa6"),
	HX_HCSTRING("anyJustReleased","\x15","\x14","\x3a","\x40"),
	HX_HCSTRING("firstPressed","\x52","\xe8","\x2e","\x63"),
	HX_HCSTRING("firstJustPressed","\x86","\xbb","\xa3","\x20"),
	HX_HCSTRING("firstJustReleased","\x59","\x67","\x76","\x75"),
	HX_HCSTRING("checkStatus","\x1a","\xba","\x0d","\xe8"),
	HX_HCSTRING("getIsDown","\xa2","\x46","\x2b","\xdc"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("checkKeyArrayState","\x4f","\xd2","\x68","\x9f"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("handlePreventDefaultKeys","\x25","\x85","\xc7","\x5d"),
	HX_HCSTRING("inKeyArray","\x7f","\x18","\xf1","\xc5"),
	HX_HCSTRING("resolveKeyCode","\xe0","\xac","\x16","\xf4"),
	HX_HCSTRING("updateKeyStates","\xf8","\x28","\x8e","\xed"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("getKey","\xa9","\xc2","\x20","\xa3"),
	::String(null()) };

static void FlxKeyManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxKeyManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxKeyManager_obj::__mClass;

void FlxKeyManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.FlxKeyManager","\x0a","\xb7","\x52","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxKeyManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxKeyManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxKeyManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxKeyManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxKeyManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxKeyManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
