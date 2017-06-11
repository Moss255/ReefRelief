// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Eraser
#include <flixel/system/debug/interaction/tools/Eraser.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void Eraser_obj::__construct(){
            	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","new",0xafc41bf5,"flixel.system.debug.interaction.tools.Eraser.new","flixel/system/debug/interaction/tools/Eraser.hx",18,0xa546bf98)
            	HX_STACK_THIS(this)
HXLINE(  18)		super::__construct();
            	}

Dynamic Eraser_obj::__CreateEmpty() { return new Eraser_obj; }

hx::ObjectPtr< Eraser_obj > Eraser_obj::__new()
{
	hx::ObjectPtr< Eraser_obj > _hx_result = new Eraser_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Eraser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Eraser_obj > _hx_result = new Eraser_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::flixel::_hx_system::debug::interaction::tools::Tool Eraser_obj::init( ::flixel::_hx_system::debug::interaction::Interaction Brain){
            	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","init",0x188d11db,"flixel.system.debug.interaction.tools.Eraser.init","flixel/system/debug/interaction/tools/Eraser.hx",21,0xa546bf98)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Brain,"Brain")
HXLINE(  22)		this->super::init(Brain);
HXLINE(  23)		this->_name = HX_("Eraser",ec,54,c3,7a);
HXLINE(  24)		return hx::ObjectPtr<OBJ_>(this);
            	}


void Eraser_obj::update(){
            	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","update",0x1312e594,"flixel.system.debug.interaction.tools.Eraser.update","flixel/system/debug/interaction/tools/Eraser.hx",29,0xa546bf98)
            	HX_STACK_THIS(this)
HXLINE(  29)		Bool _hx_tmp = this->_brain->keyJustPressed((int)46);
HXDLIN(  29)		if (_hx_tmp) {
HXLINE(  30)			Bool _hx_tmp1 = this->_brain->keyPressed((int)16);
HXDLIN(  30)			this->doDeletion(_hx_tmp1);
            		}
            	}


void Eraser_obj::activate(){
            	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","activate",0x9778b3fe,"flixel.system.debug.interaction.tools.Eraser.activate","flixel/system/debug/interaction/tools/Eraser.hx",34,0xa546bf98)
            	HX_STACK_THIS(this)
HXLINE(  35)		Bool _hx_tmp = this->_brain->keyPressed((int)16);
HXDLIN(  35)		this->doDeletion(_hx_tmp);
HXLINE(  38)		this->_brain->setActiveTool(null());
            	}


void Eraser_obj::doDeletion(Bool remove){
            	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","doDeletion",0x007d62c4,"flixel.system.debug.interaction.tools.Eraser.doDeletion","flixel/system/debug/interaction/tools/Eraser.hx",42,0xa546bf98)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(remove,"remove")
HXLINE(  43)		HX_VARI(  ::flixel::group::FlxTypedGroup,selectedItems) = this->_brain->selectedItems;
HXLINE(  44)		Bool _hx_tmp = hx::IsNotNull( selectedItems );
HXDLIN(  44)		if (_hx_tmp) {
HXLINE(  46)			this->findAndDelete(selectedItems,remove);
HXLINE(  47)			selectedItems->clear();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Eraser_obj,doDeletion,(void))

void Eraser_obj::findAndDelete( ::flixel::group::FlxTypedGroup items,hx::Null< Bool >  __o_remove){
Bool remove = __o_remove.Default(false);
            	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","findAndDelete",0xc5f7a2be,"flixel.system.debug.interaction.tools.Eraser.findAndDelete","flixel/system/debug/interaction/tools/Eraser.hx",53,0xa546bf98)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(items,"items")
            	HX_STACK_ARG(remove,"remove")
HXLINE(  53)		HX_VARI(  ::flixel::group::FlxTypedGroupIterator,tmp) =  ::flixel::group::FlxTypedGroupIterator_obj::__new(items->members,null());
HXDLIN(  53)		while(true){
HXLINE(  53)			Bool _hx_tmp = !(tmp->hasNext());
HXDLIN(  53)			if (_hx_tmp) {
HXLINE(  53)				goto _hx_goto_0;
            			}
HXDLIN(  53)			HX_VARI(  ::flixel::FlxObject,member) = tmp->next().StaticCast<  ::flixel::FlxObject >();
HXLINE(  55)			Bool _hx_tmp1 = hx::IsNull( member );
HXDLIN(  55)			if (_hx_tmp1) {
HXLINE(  56)				continue;
            			}
HXLINE(  58)			Bool _hx_tmp2 = ::Std_obj::is(member,hx::ClassOf< ::flixel::group::FlxTypedGroup >());
HXDLIN(  58)			if (!(_hx_tmp2)) {
HXLINE(  64)				member->kill();
HXLINE(  65)				if (remove) {
HXLINE(  66)					this->removeFromMemory(member,::flixel::FlxG_obj::game->_state);
            				}
            			}
            		}
            		_hx_goto_0:;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Eraser_obj,findAndDelete,(void))

void Eraser_obj::removeFromMemory( ::flixel::FlxBasic item, ::flixel::group::FlxTypedGroup parentGroup){
            	HX_STACK_FRAME("flixel.system.debug.interaction.tools.Eraser","removeFromMemory",0x828b48ba,"flixel.system.debug.interaction.tools.Eraser.removeFromMemory","flixel/system/debug/interaction/tools/Eraser.hx",73,0xa546bf98)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(item,"item")
            	HX_STACK_ARG(parentGroup,"parentGroup")
HXLINE(  73)		HX_VARI( Int,_g) = (int)0;
HXDLIN(  73)		HX_VARI( ::Array< ::Dynamic>,_g1) = parentGroup->members;
HXDLIN(  73)		while((_g < _g1->length)){
HXLINE(  73)			HX_VARI(  ::flixel::FlxBasic,member) = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN(  73)			++_g;
HXLINE(  75)			Bool _hx_tmp = hx::IsNull( member );
HXDLIN(  75)			if (_hx_tmp) {
HXLINE(  76)				continue;
            			}
HXLINE(  78)			Bool _hx_tmp1 = ::Std_obj::is(member,hx::ClassOf< ::flixel::group::FlxTypedGroup >());
HXDLIN(  78)			if (_hx_tmp1) {
HXLINE(  79)				this->removeFromMemory(item,( ( ::flixel::group::FlxTypedGroup)(member) ));
            			}
            			else {
HXLINE(  80)				if (hx::IsEq( member,item )) {
HXLINE(  81)					parentGroup->remove(member,null()).StaticCast<  ::flixel::FlxBasic >();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Eraser_obj,removeFromMemory,(void))


Eraser_obj::Eraser_obj()
{
}

hx::Val Eraser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return hx::Val( activate_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"doDeletion") ) { return hx::Val( doDeletion_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findAndDelete") ) { return hx::Val( findAndDelete_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeFromMemory") ) { return hx::Val( removeFromMemory_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Eraser_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Eraser_obj_sStaticStorageInfo = 0;
#endif

static ::String Eraser_obj_sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),
	HX_HCSTRING("doDeletion","\xb9","\xe1","\x21","\xd0"),
	HX_HCSTRING("findAndDelete","\xe9","\x2a","\xa7","\x3f"),
	HX_HCSTRING("removeFromMemory","\x6f","\xed","\xac","\x01"),
	::String(null()) };

static void Eraser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Eraser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Eraser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Eraser_obj::__mClass,"__mClass");
};

#endif

hx::Class Eraser_obj::__mClass;

void Eraser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.interaction.tools.Eraser","\x83","\xfd","\x47","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Eraser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Eraser_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Eraser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Eraser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Eraser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Eraser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
