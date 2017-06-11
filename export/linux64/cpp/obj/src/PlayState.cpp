#include <hxcpp.h>

#ifndef INCLUDED_Debris
#include <Debris.h>
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_LoseState
#include <LoseState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_Pickup
#include <Pickup.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_WinState
#include <WinState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",13,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(31)
	this->_crateTotal = (int)0;
	HX_STACK_LINE(30)
	this->_score = (int)0;
	HX_STACK_LINE(13)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",37,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::create();
		HX_STACK_LINE(40)
		::flixel::input::mouse::FlxMouse tmp = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		tmp->set_visible(false);
		HX_STACK_LINE(42)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		tmp1->_state->set_bgColor((int)-16246183);
		HX_STACK_LINE(46)
		::flixel::math::FlxRandom tmp2 = ::flixel::math::FlxRandom_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		this->_random = tmp2;
		HX_STACK_LINE(48)
		this->_pickup = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(50)
		this->_debris = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(54)
		::Pickup tmp3 = ::Pickup_obj::__new((int)32,(int)148);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		this->_pickup->insert((int)0,tmp3);
		HX_STACK_LINE(55)
		::Pickup tmp4 = ::Pickup_obj::__new((int)84,(int)372);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		this->_pickup->insert((int)1,tmp4);
		HX_STACK_LINE(56)
		::Pickup tmp5 = ::Pickup_obj::__new((int)168,(int)436);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		this->_pickup->insert((int)2,tmp5);
		HX_STACK_LINE(57)
		::Pickup tmp6 = ::Pickup_obj::__new((int)532,(int)276);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		this->_pickup->insert((int)3,tmp6);
		HX_STACK_LINE(58)
		::Pickup tmp7 = ::Pickup_obj::__new((int)416,(int)180);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		this->_pickup->insert((int)4,tmp7);
		HX_STACK_LINE(59)
		::Pickup tmp8 = ::Pickup_obj::__new((int)544,(int)180);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		this->_pickup->insert((int)5,tmp8);
		HX_STACK_LINE(60)
		::Pickup tmp9 = ::Pickup_obj::__new((int)596,(int)372);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(60)
		this->_pickup->insert((int)6,tmp9);
		HX_STACK_LINE(61)
		::Pickup tmp10 = ::Pickup_obj::__new((int)388,(int)308);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		this->_pickup->insert((int)7,tmp10);
		HX_STACK_LINE(62)
		::Pickup tmp11 = ::Pickup_obj::__new((int)255,(int)281);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(62)
		this->_pickup->insert((int)8,tmp11);
		HX_STACK_LINE(63)
		::Pickup tmp12 = ::Pickup_obj::__new((int)180,(int)180);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(63)
		this->_pickup->insert((int)9,tmp12);
		HX_STACK_LINE(67)
		::flixel::math::FlxRandom tmp13 = this->_random;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(67)
		int tmp14 = tmp13->_int((int)5,(int)9,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(67)
		this->_crateTotal = tmp14;
		HX_STACK_LINE(70)
		this->xNumbers = Array_obj< int >::__new();
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(73)
			int tmp15 = this->_crateTotal;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(73)
			int _g = tmp15;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(73)
			while((true)){
				HX_STACK_LINE(73)
				bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(73)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(73)
				if ((tmp17)){
					HX_STACK_LINE(73)
					break;
				}
				HX_STACK_LINE(73)
				int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(73)
				int i = tmp18;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(75)
				::flixel::math::FlxRandom tmp19 = this->_random;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(75)
				int tmp20 = tmp19->_int((int)0,(int)9,this->xNumbers);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(75)
				this->xNumbers->push(tmp20);
				HX_STACK_LINE(76)
				int tmp21 = this->xNumbers->__get(i);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(76)
				::Pickup tmp22 = this->_pickup->__get(tmp21).StaticCast< ::Pickup >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(76)
				this->add(tmp22);
			}
		}
		HX_STACK_LINE(80)
		::Player tmp15 = ::Player_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(80)
		this->_player = tmp15;
		HX_STACK_LINE(81)
		::Player tmp16 = this->_player;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(81)
		this->add(tmp16);
		HX_STACK_LINE(84)
		::flixel::tile::FlxTilemap tmp17 = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(84)
		this->_level = tmp17;
		HX_STACK_LINE(85)
		::flixel::tile::FlxTilemap tmp18 = this->_level;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(85)
		::openfl::_legacy::display::BitmapData tmp19 = ::openfl::_legacy::Assets_obj::getBitmapData(HX_HCSTRING("assets/images/map.png","\x8c","\x89","\xcd","\x0a"),null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(85)
		::String tmp20 = ::flixel::util::FlxStringUtil_obj::bitmapToCSV(tmp19,false,(int)4,null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(85)
		tmp18->loadMapFromCSV(tmp20,HX_HCSTRING("assets/images/tiles.png","\x35","\xbc","\xd1","\xf5"),(int)8,(int)8,::flixel::tile::FlxTilemapAutoTiling_obj::ALT,null(),null(),null());
		HX_STACK_LINE(86)
		::flixel::tile::FlxTilemap tmp21 = this->_level;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(86)
		tmp21->follow(null(),null(),null());
		HX_STACK_LINE(87)
		::flixel::tile::FlxTilemap tmp22 = this->_level;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(87)
		this->add(tmp22);
		HX_STACK_LINE(90)
		int tmp23 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(90)
		int tmp24 = this->_score;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(90)
		::String tmp25 = (HX_HCSTRING("Number of Crates: ","\x88","\x59","\xfd","\x90") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(90)
		::flixel::text::FlxText tmp26 = ::flixel::text::FlxText_obj::__new((int)10,(int)10,tmp23,tmp25,null(),null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(90)
		this->_scoreText = tmp26;
		HX_STACK_LINE(91)
		::flixel::text::FlxText tmp27 = this->_scoreText;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(91)
		tmp27->setFormat(HX_HCSTRING("assets/fonts/Oswald-Regular.ttf","\xe4","\xc6","\xd9","\x7e"),(int)16,(int)-1,HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,null(),null());
		HX_STACK_LINE(92)
		::flixel::text::FlxText tmp28 = this->_scoreText;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(92)
		this->add(tmp28);
		HX_STACK_LINE(94)
		int tmp29 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(94)
		::Player tmp30 = this->_player;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(94)
		int tmp31 = tmp30->getLives();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(94)
		::String tmp32 = (HX_HCSTRING("Lives: ","\x4d","\x9a","\x3a","\x88") + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(94)
		::flixel::text::FlxText tmp33 = ::flixel::text::FlxText_obj::__new((int)300,(int)10,tmp29,tmp32,null(),null());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(94)
		this->_livesText = tmp33;
		HX_STACK_LINE(95)
		::flixel::text::FlxText tmp34 = this->_livesText;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(95)
		tmp34->setFormat(HX_HCSTRING("assets/fonts/Oswald-Regular.ttf","\xe4","\xc6","\xd9","\x7e"),(int)16,(int)-1,HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,null(),null());
		HX_STACK_LINE(96)
		::flixel::text::FlxText tmp35 = this->_livesText;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(96)
		this->add(tmp35);
		HX_STACK_LINE(98)
		int tmp36 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(98)
		::flixel::text::FlxText tmp37 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,tmp36,HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(98)
		this->_popupText = tmp37;
		HX_STACK_LINE(99)
		::flixel::text::FlxText tmp38 = this->_popupText;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(99)
		this->add(tmp38);
		HX_STACK_LINE(101)
		this->_enemy = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				bool tmp39 = (_g < (int)40);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(104)
				bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(104)
				if ((tmp40)){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				int tmp41 = (_g)++;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(104)
				int i = tmp41;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(106)
				::flixel::math::FlxRandom tmp42 = this->_random;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(106)
				int tmp43 = tmp42->_int((int)32,(int)596,null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(106)
				::flixel::math::FlxRandom tmp44 = this->_random;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(106)
				int tmp45 = tmp44->_int((int)96,(int)436,null());		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(106)
				::Enemy tmp46 = ::Enemy_obj::__new(tmp43,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(106)
				this->_enemy->push(tmp46);
				HX_STACK_LINE(107)
				::Enemy tmp47 = this->_enemy->__get(i).StaticCast< ::Enemy >();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(107)
				this->add(tmp47);
			}
		}
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(111)
			while((true)){
				HX_STACK_LINE(111)
				bool tmp39 = (_g < (int)40);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(111)
				bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(111)
				if ((tmp40)){
					HX_STACK_LINE(111)
					break;
				}
				HX_STACK_LINE(111)
				int tmp41 = (_g)++;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(111)
				int i = tmp41;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(113)
				::flixel::math::FlxRandom tmp42 = this->_random;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(113)
				int tmp43 = tmp42->_int((int)32,(int)596,null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(113)
				::flixel::math::FlxRandom tmp44 = this->_random;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(113)
				int tmp45 = tmp44->_int((int)96,(int)436,null());		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(113)
				::Debris tmp46 = ::Debris_obj::__new(tmp43,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(113)
				this->_debris->push(tmp46);
				HX_STACK_LINE(114)
				::Debris tmp47 = this->_debris->__get(i).StaticCast< ::Debris >();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(114)
				this->add(tmp47);
			}
		}
	}
return null();
}


Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",119,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(121)
		::Player tmp = this->_player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		::flixel::tile::FlxTilemap tmp1 = this->_level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		Dynamic tmp2 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		::flixel::FlxG_obj::overlap(tmp,tmp1,null(),tmp2);
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(124)
			int tmp3 = this->_pickup->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(124)
			while((true)){
				HX_STACK_LINE(124)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(124)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(124)
				if ((tmp5)){
					HX_STACK_LINE(124)
					break;
				}
				HX_STACK_LINE(124)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(124)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(126)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(126)
				int tmp8 = this->xNumbers->indexOf(tmp7,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(126)
				bool tmp9 = (tmp8 > (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(126)
				if ((tmp9)){
					HX_STACK_LINE(128)
					::Pickup tmp10 = this->_pickup->__get(i).StaticCast< ::Pickup >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(128)
					::Player tmp11 = this->_player;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(128)
					bool tmp12 = tmp10->isCollided(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(128)
					if ((tmp12)){
						HX_STACK_LINE(130)
						::flixel::text::FlxText tmp13 = this->_popupText;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(130)
						::Player tmp14 = this->_player;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(130)
						Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(130)
						tmp13->set_x(tmp15);
						HX_STACK_LINE(131)
						::flixel::text::FlxText tmp16 = this->_popupText;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(131)
						::Player tmp17 = this->_player;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(131)
						Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(131)
						tmp16->set_y(tmp18);
						HX_STACK_LINE(132)
						::Pickup tmp19 = this->_pickup->__get(i).StaticCast< ::Pickup >();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(132)
						tmp19->destroy();
						HX_STACK_LINE(133)
						int tmp20 = i;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(133)
						this->xNumbers->remove(tmp20);
						HX_STACK_LINE(134)
						hx::AddEq(this->_score,(int)1);
						HX_STACK_LINE(135)
						::flixel::text::FlxText tmp21 = this->_popupText;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(135)
						int tmp22 = this->_score;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(135)
						::String tmp23 = (tmp22 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(135)
						int tmp24 = this->_crateTotal;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(135)
						::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(135)
						tmp21->set_text(tmp25);
					}
				}
			}
		}
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(139)
			int tmp3 = this->_debris->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(139)
			while((true)){
				HX_STACK_LINE(139)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(139)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(139)
				if ((tmp5)){
					HX_STACK_LINE(139)
					break;
				}
				HX_STACK_LINE(139)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(141)
				::Player tmp7 = this->_player;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(141)
				::Debris tmp8 = this->_debris->__get(i).StaticCast< ::Debris >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(141)
				Dynamic tmp9 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(141)
				::flixel::FlxG_obj::overlap(tmp7,tmp8,null(),tmp9);
				HX_STACK_LINE(142)
				::flixel::tile::FlxTilemap tmp10 = this->_level;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(142)
				::Debris tmp11 = this->_debris->__get(i).StaticCast< ::Debris >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(142)
				Dynamic tmp12 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(142)
				::flixel::FlxG_obj::overlap(tmp10,tmp11,null(),tmp12);
				HX_STACK_LINE(143)
				::Debris tmp13 = this->_debris->__get(i).StaticCast< ::Debris >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(143)
				::Enemy tmp14 = this->_enemy->__get(i).StaticCast< ::Enemy >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(143)
				tmp13->destroyEnemy(tmp14);
			}
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(147)
			int tmp3 = this->_enemy->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(147)
			while((true)){
				HX_STACK_LINE(147)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(147)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(147)
				if ((tmp5)){
					HX_STACK_LINE(147)
					break;
				}
				HX_STACK_LINE(147)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(147)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(149)
				::Enemy tmp7 = this->_enemy->__get(i).StaticCast< ::Enemy >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(149)
				::Player tmp8 = this->_player;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(149)
				tmp7->attack(tmp8);
			}
		}
		HX_STACK_LINE(153)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			::flixel::input::keyboard::FlxKeyboard tmp4 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(153)
			::flixel::input::keyboard::FlxKeyList _this = tmp4->pressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(153)
			int tmp5 = _this->status;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			tmp3 = _this->keyManager->checkStatus((int)27,tmp5);
		}
		HX_STACK_LINE(153)
		if ((tmp3)){
			HX_STACK_LINE(155)
			::MenuState tmp4 = ::MenuState_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			::flixel::FlxState nextState = tmp4;		HX_STACK_VAR(nextState,"nextState");
			HX_STACK_LINE(155)
			::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			::flixel::FlxState tmp6 = nextState;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(155)
			bool tmp7 = tmp5->_state->switchTo(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(155)
			if ((tmp7)){
				HX_STACK_LINE(155)
				::flixel::FlxGame tmp8 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(155)
				tmp8->_requestedState = nextState;
			}
		}
		HX_STACK_LINE(158)
		::flixel::text::FlxText tmp4 = this->_scoreText;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		int tmp5 = this->_score;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(158)
		::String tmp6 = (HX_HCSTRING("Number of Crates: ","\x88","\x59","\xfd","\x90") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		tmp4->set_text(tmp6);
		HX_STACK_LINE(160)
		::flixel::text::FlxText tmp7 = this->_livesText;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(160)
		::Player tmp8 = this->_player;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(160)
		int tmp9 = tmp8->getLives();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(160)
		::String tmp10 = (HX_HCSTRING("Lives: ","\x4d","\x9a","\x3a","\x88") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(160)
		tmp7->set_text(tmp10);
		HX_STACK_LINE(162)
		int tmp11 = this->_score;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(162)
		int tmp12 = this->_crateTotal;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(162)
		bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(162)
		if ((tmp13)){
			HX_STACK_LINE(164)
			::WinState tmp14 = ::WinState_obj::__new(null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(164)
			::flixel::FlxState nextState = tmp14;		HX_STACK_VAR(nextState,"nextState");
			HX_STACK_LINE(164)
			::flixel::FlxGame tmp15 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(164)
			::flixel::FlxState tmp16 = nextState;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(164)
			bool tmp17 = tmp15->_state->switchTo(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(164)
			if ((tmp17)){
				HX_STACK_LINE(164)
				::flixel::FlxGame tmp18 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(164)
				tmp18->_requestedState = nextState;
			}
		}
		HX_STACK_LINE(167)
		::Player tmp14 = this->_player;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(167)
		int tmp15 = tmp14->getLives();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(167)
		bool tmp16 = (tmp15 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(167)
		if ((tmp16)){
			HX_STACK_LINE(169)
			::LoseState tmp17 = ::LoseState_obj::__new(null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(169)
			::flixel::FlxState nextState = tmp17;		HX_STACK_VAR(nextState,"nextState");
			HX_STACK_LINE(169)
			::flixel::FlxGame tmp18 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(169)
			::flixel::FlxState tmp19 = nextState;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(169)
			bool tmp20 = tmp18->_state->switchTo(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(169)
			if ((tmp20)){
				HX_STACK_LINE(169)
				::flixel::FlxGame tmp21 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(169)
				tmp21->_requestedState = nextState;
			}
		}
		HX_STACK_LINE(173)
		Float tmp17 = elapsed;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(173)
		this->super::update(tmp17);
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_level,"_level");
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_scoreText,"_scoreText");
	HX_MARK_MEMBER_NAME(_popupText,"_popupText");
	HX_MARK_MEMBER_NAME(_livesText,"_livesText");
	HX_MARK_MEMBER_NAME(_pickup,"_pickup");
	HX_MARK_MEMBER_NAME(_debris,"_debris");
	HX_MARK_MEMBER_NAME(_enemy,"_enemy");
	HX_MARK_MEMBER_NAME(_score,"_score");
	HX_MARK_MEMBER_NAME(_crateTotal,"_crateTotal");
	HX_MARK_MEMBER_NAME(_random,"_random");
	HX_MARK_MEMBER_NAME(xNumbers,"xNumbers");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_level,"_level");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_scoreText,"_scoreText");
	HX_VISIT_MEMBER_NAME(_popupText,"_popupText");
	HX_VISIT_MEMBER_NAME(_livesText,"_livesText");
	HX_VISIT_MEMBER_NAME(_pickup,"_pickup");
	HX_VISIT_MEMBER_NAME(_debris,"_debris");
	HX_VISIT_MEMBER_NAME(_enemy,"_enemy");
	HX_VISIT_MEMBER_NAME(_score,"_score");
	HX_VISIT_MEMBER_NAME(_crateTotal,"_crateTotal");
	HX_VISIT_MEMBER_NAME(_random,"_random");
	HX_VISIT_MEMBER_NAME(xNumbers,"xNumbers");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_level") ) { return _level; }
		if (HX_FIELD_EQ(inName,"_enemy") ) { return _enemy; }
		if (HX_FIELD_EQ(inName,"_score") ) { return _score; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		if (HX_FIELD_EQ(inName,"_pickup") ) { return _pickup; }
		if (HX_FIELD_EQ(inName,"_debris") ) { return _debris; }
		if (HX_FIELD_EQ(inName,"_random") ) { return _random; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xNumbers") ) { return xNumbers; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_scoreText") ) { return _scoreText; }
		if (HX_FIELD_EQ(inName,"_popupText") ) { return _popupText; }
		if (HX_FIELD_EQ(inName,"_livesText") ) { return _livesText; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_crateTotal") ) { return _crateTotal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_level") ) { _level=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enemy") ) { _enemy=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_score") ) { _score=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pickup") ) { _pickup=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debris") ) { _debris=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_random") ) { _random=inValue.Cast< ::flixel::math::FlxRandom >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xNumbers") ) { xNumbers=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_scoreText") ) { _scoreText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_popupText") ) { _popupText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_livesText") ) { _livesText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_crateTotal") ) { _crateTotal=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_level","\xc5","\x5c","\x4a","\x6e"));
	outFields->push(HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6"));
	outFields->push(HX_HCSTRING("_scoreText","\xe0","\xf8","\x5f","\x38"));
	outFields->push(HX_HCSTRING("_popupText","\xba","\x04","\xf9","\x1f"));
	outFields->push(HX_HCSTRING("_livesText","\x15","\x74","\x03","\xcb"));
	outFields->push(HX_HCSTRING("_pickup","\x1b","\x1b","\x44","\xed"));
	outFields->push(HX_HCSTRING("_debris","\x5a","\x83","\xbd","\xd2"));
	outFields->push(HX_HCSTRING("_enemy","\x89","\x59","\x62","\x6c"));
	outFields->push(HX_HCSTRING("_score","\x93","\xba","\xc0","\x74"));
	outFields->push(HX_HCSTRING("_crateTotal","\x20","\x2d","\x19","\xac"));
	outFields->push(HX_HCSTRING("_random","\xa2","\x33","\x06","\x26"));
	outFields->push(HX_HCSTRING("xNumbers","\xf2","\x0f","\xb2","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(PlayState_obj,_level),HX_HCSTRING("_level","\xc5","\x5c","\x4a","\x6e")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,_player),HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_scoreText),HX_HCSTRING("_scoreText","\xe0","\xf8","\x5f","\x38")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_popupText),HX_HCSTRING("_popupText","\xba","\x04","\xf9","\x1f")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_livesText),HX_HCSTRING("_livesText","\x15","\x74","\x03","\xcb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayState_obj,_pickup),HX_HCSTRING("_pickup","\x1b","\x1b","\x44","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayState_obj,_debris),HX_HCSTRING("_debris","\x5a","\x83","\xbd","\xd2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayState_obj,_enemy),HX_HCSTRING("_enemy","\x89","\x59","\x62","\x6c")},
	{hx::fsInt,(int)offsetof(PlayState_obj,_score),HX_HCSTRING("_score","\x93","\xba","\xc0","\x74")},
	{hx::fsInt,(int)offsetof(PlayState_obj,_crateTotal),HX_HCSTRING("_crateTotal","\x20","\x2d","\x19","\xac")},
	{hx::fsObject /*::flixel::math::FlxRandom*/ ,(int)offsetof(PlayState_obj,_random),HX_HCSTRING("_random","\xa2","\x33","\x06","\x26")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(PlayState_obj,xNumbers),HX_HCSTRING("xNumbers","\xf2","\x0f","\xb2","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_level","\xc5","\x5c","\x4a","\x6e"),
	HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6"),
	HX_HCSTRING("_scoreText","\xe0","\xf8","\x5f","\x38"),
	HX_HCSTRING("_popupText","\xba","\x04","\xf9","\x1f"),
	HX_HCSTRING("_livesText","\x15","\x74","\x03","\xcb"),
	HX_HCSTRING("_pickup","\x1b","\x1b","\x44","\xed"),
	HX_HCSTRING("_debris","\x5a","\x83","\xbd","\xd2"),
	HX_HCSTRING("_enemy","\x89","\x59","\x62","\x6c"),
	HX_HCSTRING("_score","\x93","\xba","\xc0","\x74"),
	HX_HCSTRING("_crateTotal","\x20","\x2d","\x19","\xac"),
	HX_HCSTRING("_random","\xa2","\x33","\x06","\x26"),
	HX_HCSTRING("xNumbers","\xf2","\x0f","\xb2","\x46"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

