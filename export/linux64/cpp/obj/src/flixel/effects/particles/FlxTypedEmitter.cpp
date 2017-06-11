#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitterMode
#include <flixel/effects/particles/FlxEmitterMode.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxPointRangeBounds
#include <flixel/util/helpers/FlxPointRangeBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRangeBounds
#include <flixel/util/helpers/FlxRangeBounds.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxTypedEmitter_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{
HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","new",0x3e1a9dc9,"flixel.effects.particles.FlxTypedEmitter.new","flixel/effects/particles/FlxEmitter.hx",30,0x6dff0520)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Size,"Size")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Size = __o_Size.Default(0);
{
	HX_STACK_LINE(171)
	this->_waitForKill = false;
	struct _Function_1_1{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",167,0x6dff0520)
			{
				HX_STACK_LINE(167)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(167)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(167)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(167)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(167)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(167)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(167)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(167)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(167)
				point->_inPool = false;
				HX_STACK_LINE(167)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(167)
	this->_point = _Function_1_1::Block();
	HX_STACK_LINE(163)
	this->_counter = (int)0;
	HX_STACK_LINE(159)
	this->_timer = ((Float)0);
	HX_STACK_LINE(155)
	this->_explode = true;
	HX_STACK_LINE(151)
	this->_quantity = (int)0;
	HX_STACK_LINE(143)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(139)
	this->autoUpdateHitbox = false;
	HX_STACK_LINE(135)
	this->immovable = false;
	HX_STACK_LINE(131)
	this->elasticity = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,null(),null(),null());
	HX_STACK_LINE(127)
	this->acceleration = ::flixel::util::helpers::FlxPointRangeBounds_obj::__new((int)0,(int)0,null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(123)
	this->drag = ::flixel::util::helpers::FlxPointRangeBounds_obj::__new((int)0,(int)0,null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(119)
	this->color = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)-1,(int)-1,null(),null());
	HX_STACK_LINE(115)
	this->alpha = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)1,null(),null(),null());
	HX_STACK_LINE(111)
	this->scale = ::flixel::util::helpers::FlxPointRangeBounds_obj::__new((int)1,(int)1,null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(107)
	this->lifespan = ::flixel::util::helpers::FlxBounds_obj::__new((int)3,null());
	HX_STACK_LINE(103)
	this->launchAngle = ::flixel::util::helpers::FlxBounds_obj::__new((int)-180,(int)180);
	HX_STACK_LINE(99)
	this->ignoreAngularVelocity = false;
	HX_STACK_LINE(95)
	this->angle = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,null(),null(),null());
	HX_STACK_LINE(91)
	this->angularVelocity = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,(int)0,null(),null());
	HX_STACK_LINE(87)
	this->angularDrag = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,(int)0,null(),null());
	HX_STACK_LINE(83)
	this->angularAcceleration = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,(int)0,null(),null());
	HX_STACK_LINE(79)
	this->speed = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,(int)100,null(),null());
	HX_STACK_LINE(75)
	this->velocity = ::flixel::util::helpers::FlxPointRangeBounds_obj::__new((int)-100,(int)-100,(int)100,(int)100,null(),null(),null(),null());
	HX_STACK_LINE(71)
	this->keepScaleRatio = false;
	HX_STACK_LINE(67)
	this->launchMode = ::flixel::effects::particles::FlxEmitterMode_obj::CIRCLE;
	HX_STACK_LINE(63)
	this->height = ((Float)0);
	HX_STACK_LINE(59)
	this->width = ((Float)0);
	HX_STACK_LINE(55)
	this->y = ((Float)0);
	HX_STACK_LINE(51)
	this->x = ((Float)0);
	HX_STACK_LINE(43)
	this->frequency = ((Float)0.1);
	HX_STACK_LINE(39)
	this->emitting = false;
	HX_STACK_LINE(35)
	this->particleClass = ((::hx::Class)(hx::ClassOf< ::flixel::effects::particles::FlxParticle >()));
	HX_STACK_LINE(183)
	int tmp = Size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	super::__construct(tmp);
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		this->x = X;
		HX_STACK_LINE(185)
		this->y = Y;
	}
	HX_STACK_LINE(186)
	this->set_exists(false);
}
;
	return null();
}

//FlxTypedEmitter_obj::~FlxTypedEmitter_obj() { }

Dynamic FlxTypedEmitter_obj::__CreateEmpty() { return  new FlxTypedEmitter_obj; }
hx::ObjectPtr< FlxTypedEmitter_obj > FlxTypedEmitter_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{  hx::ObjectPtr< FlxTypedEmitter_obj > _result_ = new FlxTypedEmitter_obj();
	_result_->__construct(__o_X,__o_Y,__o_Size);
	return _result_;}

Dynamic FlxTypedEmitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedEmitter_obj > _result_ = new FlxTypedEmitter_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FlxTypedEmitter_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","destroy",0x574a62e3,"flixel.effects.particles.FlxTypedEmitter.destroy","flixel/effects/particles/FlxEmitter.hx",193,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		::flixel::util::helpers::FlxPointRangeBounds tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		::flixel::util::helpers::FlxPointRangeBounds tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		this->velocity = tmp1;
		HX_STACK_LINE(195)
		::flixel::util::helpers::FlxPointRangeBounds tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		::flixel::util::helpers::FlxPointRangeBounds tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		this->scale = tmp3;
		HX_STACK_LINE(196)
		::flixel::util::helpers::FlxPointRangeBounds tmp4 = this->drag;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		::flixel::util::helpers::FlxPointRangeBounds tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		this->drag = tmp5;
		HX_STACK_LINE(197)
		::flixel::util::helpers::FlxPointRangeBounds tmp6 = this->acceleration;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		::flixel::util::helpers::FlxPointRangeBounds tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		this->acceleration = tmp7;
		HX_STACK_LINE(198)
		::flixel::math::FlxPoint tmp8 = this->_point;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		::flixel::math::FlxPoint tmp9 = ::flixel::util::FlxDestroyUtil_obj::put(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(198)
		this->_point = tmp9;
		HX_STACK_LINE(200)
		this->blend = null();
		HX_STACK_LINE(201)
		this->angularAcceleration = null();
		HX_STACK_LINE(202)
		this->angularDrag = null();
		HX_STACK_LINE(203)
		this->angularVelocity = null();
		HX_STACK_LINE(204)
		this->angle = null();
		HX_STACK_LINE(205)
		this->speed = null();
		HX_STACK_LINE(206)
		this->launchAngle = null();
		HX_STACK_LINE(207)
		this->lifespan = null();
		HX_STACK_LINE(208)
		this->alpha = null();
		HX_STACK_LINE(209)
		this->color = null();
		HX_STACK_LINE(210)
		this->elasticity = null();
		HX_STACK_LINE(212)
		this->super::destroy();
	}
return null();
}


::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::loadParticles( Dynamic Graphics,hx::Null< int >  __o_Quantity,hx::Null< int >  __o_bakedRotationAngles,hx::Null< bool >  __o_Multiple,hx::Null< bool >  __o_AutoBuffer){
int Quantity = __o_Quantity.Default(50);
int bakedRotationAngles = __o_bakedRotationAngles.Default(16);
bool Multiple = __o_Multiple.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","loadParticles",0x7d4e1b10,"flixel.effects.particles.FlxTypedEmitter.loadParticles","flixel/effects/particles/FlxEmitter.hx",227,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphics,"Graphics")
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(bakedRotationAngles,"bakedRotationAngles")
	HX_STACK_ARG(Multiple,"Multiple")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
{
		HX_STACK_LINE(228)
		int tmp = Quantity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		this->set_maxSize(tmp);
		HX_STACK_LINE(229)
		int totalFrames = (int)1;		HX_STACK_VAR(totalFrames,"totalFrames");
		HX_STACK_LINE(231)
		bool tmp1 = Multiple;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(233)
			::flixel::FlxSprite tmp2 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			::flixel::FlxSprite sprite = tmp2;		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(234)
			Dynamic tmp3 = Graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(234)
			sprite->loadGraphic(tmp3,true,null(),null(),null(),null());
			HX_STACK_LINE(235)
			totalFrames = sprite->numFrames;
			HX_STACK_LINE(236)
			sprite->destroy();
		}
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(239)
			while((true)){
				HX_STACK_LINE(239)
				bool tmp2 = (_g < Quantity);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(239)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(239)
				if ((tmp3)){
					HX_STACK_LINE(239)
					break;
				}
				HX_STACK_LINE(239)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(239)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(240)
				Dynamic tmp5 = Graphics;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(240)
				int tmp6 = Quantity;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				int tmp7 = bakedRotationAngles;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				bool tmp8 = Multiple;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(240)
				bool tmp9 = AutoBuffer;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(240)
				int tmp10 = totalFrames;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(240)
				Dynamic tmp11 = this->loadParticle(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(240)
				this->add(tmp11);
			}
		}
		HX_STACK_LINE(242)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTypedEmitter_obj,loadParticles,return )

Dynamic FlxTypedEmitter_obj::loadParticle( Dynamic Graphics,int Quantity,int bakedRotationAngles,hx::Null< bool >  __o_Multiple,hx::Null< bool >  __o_AutoBuffer,int totalFrames){
bool Multiple = __o_Multiple.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","loadParticle",0x7ffce803,"flixel.effects.particles.FlxTypedEmitter.loadParticle","flixel/effects/particles/FlxEmitter.hx",247,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphics,"Graphics")
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(bakedRotationAngles,"bakedRotationAngles")
	HX_STACK_ARG(Multiple,"Multiple")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
	HX_STACK_ARG(totalFrames,"totalFrames")
{
		HX_STACK_LINE(248)
		::hx::Class tmp = this->particleClass;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		Dynamic tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		Dynamic particle = tmp1;		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(249)
		bool tmp2 = Multiple;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		if ((tmp2)){
			HX_STACK_LINE(249)
			::flixel::math::FlxRandom tmp4 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			int tmp5 = (totalFrames - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(249)
			tmp3 = tmp4->_int((int)0,tmp5,null());
		}
		else{
			HX_STACK_LINE(249)
			tmp3 = (int)-1;
		}
		HX_STACK_LINE(249)
		int frame = tmp3;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(251)
		bool tmp4 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		if ((tmp4)){
			HX_STACK_LINE(251)
			tmp5 = (bakedRotationAngles > (int)0);
		}
		else{
			HX_STACK_LINE(251)
			tmp5 = false;
		}
		HX_STACK_LINE(251)
		if ((tmp5)){
			HX_STACK_LINE(252)
			Dynamic tmp6 = Graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(252)
			int tmp7 = bakedRotationAngles;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(252)
			int tmp8 = frame;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(252)
			bool tmp9 = AutoBuffer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(252)
			particle->__Field(HX_HCSTRING("loadRotatedGraphic","\xc5","\x14","\x74","\x62"), hx::paccDynamic )(tmp6,tmp7,tmp8,false,tmp9,null());
		}
		else{
			HX_STACK_LINE(254)
			Dynamic tmp6 = Graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(254)
			bool tmp7 = Multiple;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(254)
			particle->__Field(HX_HCSTRING("loadGraphic","\x22","\x19","\xa5","\x44"), hx::paccDynamic )(tmp6,tmp7,null(),null(),null(),null());
		}
		HX_STACK_LINE(256)
		bool tmp6 = Multiple;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(256)
		if ((tmp6)){
			HX_STACK_LINE(257)
			int tmp7 = frame;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(257)
			particle->__Field(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("set_frameIndex","\x62","\x40","\x50","\x37"), hx::paccDynamic )(tmp7);
		}
		HX_STACK_LINE(259)
		Dynamic tmp7 = particle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(259)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxTypedEmitter_obj,loadParticle,return )

::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::makeParticles( hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_Color,hx::Null< int >  __o_Quantity){
int Width = __o_Width.Default(2);
int Height = __o_Height.Default(2);
int Color = __o_Color.Default(-1);
int Quantity = __o_Quantity.Default(50);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","makeParticles",0xf3914248,"flixel.effects.particles.FlxTypedEmitter.makeParticles","flixel/effects/particles/FlxEmitter.hx",272,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Quantity,"Quantity")
{
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(273)
			while((true)){
				HX_STACK_LINE(273)
				bool tmp = (_g < Quantity);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(273)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(273)
				if ((tmp1)){
					HX_STACK_LINE(273)
					break;
				}
				HX_STACK_LINE(273)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(273)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(275)
				::hx::Class tmp3 = this->particleClass;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(275)
				Dynamic tmp4 = ::Type_obj::createInstance(tmp3,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(275)
				Dynamic particle = tmp4;		HX_STACK_VAR(particle,"particle");
				HX_STACK_LINE(276)
				int tmp5 = Width;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(276)
				int tmp6 = Height;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(276)
				int tmp7 = Color;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(276)
				particle->__Field(HX_HCSTRING("makeGraphic","\x5a","\x82","\x11","\xb8"), hx::paccDynamic )(tmp5,tmp6,tmp7,null(),null());
				HX_STACK_LINE(277)
				Dynamic tmp8 = particle;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(277)
				this->add(tmp8);
			}
		}
		HX_STACK_LINE(280)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedEmitter_obj,makeParticles,return )

Void FlxTypedEmitter_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","update",0x6f244040,"flixel.effects.particles.FlxTypedEmitter.update","flixel/effects/particles/FlxEmitter.hx",287,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(288)
		bool tmp = this->emitting;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		if ((tmp)){
			HX_STACK_LINE(290)
			bool tmp1 = this->_explode;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(290)
			if ((tmp1)){
				HX_STACK_LINE(291)
				this->explode();
			}
			else{
				HX_STACK_LINE(293)
				Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(293)
				this->emitContinuously(tmp2);
			}
		}
		else{
			HX_STACK_LINE(295)
			bool tmp1 = this->_waitForKill;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(295)
			if ((tmp1)){
				HX_STACK_LINE(297)
				hx::AddEq(this->_timer,elapsed);
				HX_STACK_LINE(299)
				::flixel::util::helpers::FlxBounds tmp2 = this->lifespan;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(299)
				Float tmp3 = tmp2->max;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(299)
				bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(299)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(299)
				if ((tmp4)){
					HX_STACK_LINE(299)
					Float tmp6 = this->_timer;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(299)
					Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(299)
					::flixel::util::helpers::FlxBounds tmp8 = this->lifespan;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(299)
					::flixel::util::helpers::FlxBounds tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(299)
					Float tmp10 = tmp9->max;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(299)
					tmp5 = (tmp7 > tmp10);
				}
				else{
					HX_STACK_LINE(299)
					tmp5 = false;
				}
				HX_STACK_LINE(299)
				if ((tmp5)){
					HX_STACK_LINE(301)
					this->kill();
					HX_STACK_LINE(302)
					return null();
				}
			}
		}
		HX_STACK_LINE(306)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		this->super::update(tmp1);
	}
return null();
}


Void FlxTypedEmitter_obj::explode( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","explode",0x5a27f1ca,"flixel.effects.particles.FlxTypedEmitter.explode","flixel/effects/particles/FlxEmitter.hx",310,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(311)
		int tmp = this->_quantity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		int amount = tmp;		HX_STACK_VAR(amount,"amount");
		HX_STACK_LINE(312)
		bool tmp1 = (amount <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		if ((tmp2)){
			HX_STACK_LINE(312)
			int tmp4 = amount;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(312)
			int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(312)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(312)
			tmp3 = (tmp4 > tmp6);
		}
		else{
			HX_STACK_LINE(312)
			tmp3 = true;
		}
		HX_STACK_LINE(312)
		if ((tmp3)){
			HX_STACK_LINE(313)
			int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			amount = tmp4;
		}
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(315)
			while((true)){
				HX_STACK_LINE(315)
				bool tmp4 = (_g < amount);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(315)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(315)
				if ((tmp5)){
					HX_STACK_LINE(315)
					break;
				}
				HX_STACK_LINE(315)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(315)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(316)
				this->emitParticle();
			}
		}
		HX_STACK_LINE(318)
		this->onFinished();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,explode,(void))

Void FlxTypedEmitter_obj::emitContinuously( Float elapsed){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","emitContinuously",0xda87e546,"flixel.effects.particles.FlxTypedEmitter.emitContinuously","flixel/effects/particles/FlxEmitter.hx",322,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(324)
		Float tmp = this->frequency;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		if ((tmp1)){
			HX_STACK_LINE(326)
			this->emitParticleContinuously();
		}
		else{
			HX_STACK_LINE(330)
			hx::AddEq(this->_timer,elapsed);
			HX_STACK_LINE(332)
			while((true)){
				HX_STACK_LINE(332)
				Float tmp2 = this->_timer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(332)
				Float tmp3 = this->frequency;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(332)
				bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(332)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(332)
				if ((tmp5)){
					HX_STACK_LINE(332)
					break;
				}
				HX_STACK_LINE(334)
				Float tmp6 = this->frequency;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(334)
				hx::SubEq(this->_timer,tmp6);
				HX_STACK_LINE(335)
				this->emitParticleContinuously();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,emitContinuously,(void))

Void FlxTypedEmitter_obj::emitParticleContinuously( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","emitParticleContinuously",0xf1d3baac,"flixel.effects.particles.FlxTypedEmitter.emitParticleContinuously","flixel/effects/particles/FlxEmitter.hx",341,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(342)
		this->emitParticle();
		HX_STACK_LINE(343)
		(this->_counter)++;
		HX_STACK_LINE(345)
		int tmp = this->_quantity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(345)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		if ((tmp1)){
			HX_STACK_LINE(345)
			int tmp3 = this->_counter;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			int tmp5 = this->_quantity;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(345)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(345)
			tmp2 = (tmp4 >= tmp6);
		}
		else{
			HX_STACK_LINE(345)
			tmp2 = false;
		}
		HX_STACK_LINE(345)
		if ((tmp2)){
			HX_STACK_LINE(346)
			this->onFinished();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,emitParticleContinuously,(void))

Void FlxTypedEmitter_obj::onFinished( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","onFinished",0xf4d30968,"flixel.effects.particles.FlxTypedEmitter.onFinished","flixel/effects/particles/FlxEmitter.hx",350,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(351)
		this->emitting = false;
		HX_STACK_LINE(352)
		this->_waitForKill = true;
		HX_STACK_LINE(353)
		this->_quantity = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,onFinished,(void))

Void FlxTypedEmitter_obj::kill( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","kill",0x1736ce15,"flixel.effects.particles.FlxTypedEmitter.kill","flixel/effects/particles/FlxEmitter.hx",360,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(361)
		this->emitting = false;
		HX_STACK_LINE(362)
		this->_waitForKill = false;
		HX_STACK_LINE(364)
		this->super::kill();
	}
return null();
}


::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::start( hx::Null< bool >  __o_Explode,hx::Null< Float >  __o_Frequency,hx::Null< int >  __o_Quantity){
bool Explode = __o_Explode.Default(true);
Float Frequency = __o_Frequency.Default(((Float)0.1));
int Quantity = __o_Quantity.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","start",0xdb2f2e0b,"flixel.effects.particles.FlxTypedEmitter.start","flixel/effects/particles/FlxEmitter.hx",376,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Explode,"Explode")
	HX_STACK_ARG(Frequency,"Frequency")
	HX_STACK_ARG(Quantity,"Quantity")
{
		HX_STACK_LINE(377)
		this->set_exists(true);
		HX_STACK_LINE(378)
		this->set_visible(true);
		HX_STACK_LINE(379)
		this->emitting = true;
		HX_STACK_LINE(381)
		this->_explode = Explode;
		HX_STACK_LINE(382)
		this->frequency = Frequency;
		HX_STACK_LINE(383)
		hx::AddEq(this->_quantity,Quantity);
		HX_STACK_LINE(385)
		this->_counter = (int)0;
		HX_STACK_LINE(386)
		this->_timer = (int)0;
		HX_STACK_LINE(388)
		this->_waitForKill = false;
		HX_STACK_LINE(390)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedEmitter_obj,start,return )

Dynamic FlxTypedEmitter_obj::emitParticle( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","emitParticle",0xe36e6130,"flixel.effects.particles.FlxTypedEmitter.emitParticle","flixel/effects/particles/FlxEmitter.hx",397,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_LINE(398)
	::hx::Class tmp = this->particleClass;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(398)
	::hx::Class tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(398)
	Dynamic tmp2 = this->recycle(tmp1,null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(398)
	Dynamic particle = tmp2;		HX_STACK_VAR(particle,"particle");
	HX_STACK_LINE(400)
	particle->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )((int)0,(int)0);
	HX_STACK_LINE(402)
	::openfl::_legacy::display::BlendMode tmp3 = this->blend;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(402)
	particle->__Field(HX_HCSTRING("set_blend","\xb4","\x30","\xef","\xdb"), hx::paccDynamic )(tmp3);
	HX_STACK_LINE(403)
	bool tmp4 = this->immovable;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(403)
	particle->__Field(HX_HCSTRING("set_immovable","\xed","\xdc","\xd9","\x2d"), hx::paccDynamic )(tmp4);
	HX_STACK_LINE(404)
	int tmp5 = this->allowCollisions;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(404)
	int tmp6 = (int(tmp5) & int((int)4369));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(404)
	bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(404)
	particle->__Field(HX_HCSTRING("set_solid","\x8e","\xfc","\xbf","\xa7"), hx::paccDynamic )(tmp7);
	HX_STACK_LINE(405)
	int tmp8 = this->allowCollisions;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(405)
	particle->__Field(HX_HCSTRING("set_allowCollisions","\xcd","\x8b","\x81","\x21"), hx::paccDynamic )(tmp8);
	HX_STACK_LINE(406)
	bool tmp9 = this->autoUpdateHitbox;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(406)
	particle->__FieldRef(HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24")) = tmp9;
	HX_STACK_LINE(408)
	::flixel::util::helpers::FlxPointRangeBounds tmp10 = this->velocity;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(408)
	bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(408)
	if ((tmp11)){
		HX_STACK_LINE(411)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(411)
		{
			HX_STACK_LINE(411)
			::flixel::math::FlxPoint tmp13 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(411)
			::flixel::math::FlxPoint _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(411)
			::flixel::math::FlxPoint tmp14 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(411)
			::flixel::math::FlxPoint point = tmp14;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(411)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(411)
				Float tmp16 = (_this->x - point->x);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(411)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(411)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(411)
				Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(411)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(411)
				Float tmp21 = aDiff;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(411)
				tmp15 = (tmp20 <= tmp21);
			}
			HX_STACK_LINE(411)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(411)
			if ((tmp15)){
				HX_STACK_LINE(411)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(411)
				Float tmp17 = (_this->y - point->y);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(411)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(411)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(411)
				Float tmp20 = ::Math_obj::abs(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(411)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(411)
				Float tmp22 = aDiff;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(411)
				tmp16 = (tmp21 <= tmp22);
			}
			else{
				HX_STACK_LINE(411)
				tmp16 = false;
			}
			HX_STACK_LINE(411)
			bool result = tmp16;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				bool tmp17 = point->_weak;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(411)
				if ((tmp17)){
					HX_STACK_LINE(411)
					point->put();
				}
			}
			HX_STACK_LINE(411)
			tmp12 = result;
		}
		HX_STACK_LINE(411)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(411)
		particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp13;
		HX_STACK_LINE(413)
		::flixel::effects::particles::FlxEmitterMode tmp14 = this->launchMode;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(413)
		bool tmp15 = (tmp14 == ::flixel::effects::particles::FlxEmitterMode_obj::CIRCLE);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(413)
		if ((tmp15)){
			HX_STACK_LINE(415)
			Float particleAngle = (int)0;		HX_STACK_VAR(particleAngle,"particleAngle");
			HX_STACK_LINE(416)
			::flixel::util::helpers::FlxBounds tmp16 = this->launchAngle;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(416)
			bool tmp17 = tmp16->active;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(416)
			if ((tmp17)){
				HX_STACK_LINE(417)
				::flixel::math::FlxRandom tmp18 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(417)
				::flixel::util::helpers::FlxBounds tmp19 = this->launchAngle;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(417)
				Float tmp20 = tmp19->min;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(417)
				::flixel::util::helpers::FlxBounds tmp21 = this->launchAngle;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(417)
				Float tmp22 = tmp21->max;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(417)
				Float tmp23 = tmp18->_float(tmp20,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(417)
				particleAngle = tmp23;
			}
			HX_STACK_LINE(420)
			::flixel::math::FlxPoint tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(420)
			{
				HX_STACK_LINE(420)
				::flixel::math::FlxRandom tmp19 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(420)
				::flixel::util::helpers::FlxRangeBounds tmp20 = this->speed;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(420)
				Float tmp21 = tmp20->start->min;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(420)
				::flixel::util::helpers::FlxRangeBounds tmp22 = this->speed;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(420)
				Float tmp23 = tmp22->start->max;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(420)
				Float tmp24 = tmp19->_float(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(420)
				Float Speed = tmp24;		HX_STACK_VAR(Speed,"Speed");
				HX_STACK_LINE(420)
				Float tmp25 = particleAngle;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(420)
				Float tmp26 = ::Math_obj::PI;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(420)
				Float tmp27 = (Float(tmp26) / Float((int)180));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(420)
				Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(420)
				Float a = tmp28;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(420)
				{
					HX_STACK_LINE(420)
					Float tmp29 = a;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(420)
					Float tmp30 = ::Math_obj::cos(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(420)
					Float tmp31 = Speed;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(420)
					Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(420)
					Float X = tmp32;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(420)
					Float tmp33 = a;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(420)
					Float tmp34 = ::Math_obj::sin(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(420)
					Float tmp35 = Speed;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(420)
					Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(420)
					Float Y = tmp36;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(420)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp37 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(420)
					::flixel::math::FlxPoint tmp38 = tmp37->get();		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(420)
					Float tmp39 = X;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(420)
					Float tmp40 = Y;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(420)
					::flixel::math::FlxPoint tmp41 = tmp38->set(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(420)
					::flixel::math::FlxPoint point = tmp41;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(420)
					point->_inPool = false;
					HX_STACK_LINE(420)
					tmp18 = point;
				}
			}
			HX_STACK_LINE(420)
			this->_point = tmp18;
			HX_STACK_LINE(421)
			::flixel::math::FlxPoint tmp19 = this->_point;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(421)
			Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(421)
			particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp20);
			HX_STACK_LINE(422)
			::flixel::math::FlxPoint tmp21 = this->_point;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(422)
			Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(422)
			particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp22);
			HX_STACK_LINE(423)
			::flixel::math::FlxPoint tmp23 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(423)
			::flixel::math::FlxPoint tmp24 = this->_point;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(423)
			Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(423)
			::flixel::math::FlxPoint tmp26 = this->_point;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(423)
			Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(423)
			tmp23->set(tmp25,tmp27);
			HX_STACK_LINE(426)
			::flixel::math::FlxPoint tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(426)
			{
				HX_STACK_LINE(426)
				::flixel::math::FlxRandom tmp29 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(426)
				::flixel::util::helpers::FlxRangeBounds tmp30 = this->speed;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(426)
				Float tmp31 = tmp30->end->min;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(426)
				::flixel::util::helpers::FlxRangeBounds tmp32 = this->speed;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(426)
				Float tmp33 = tmp32->end->max;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(426)
				Float tmp34 = tmp29->_float(tmp31,tmp33,null());		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(426)
				Float Speed = tmp34;		HX_STACK_VAR(Speed,"Speed");
				HX_STACK_LINE(426)
				Float tmp35 = particleAngle;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(426)
				Float tmp36 = ::Math_obj::PI;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(426)
				Float tmp37 = (Float(tmp36) / Float((int)180));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(426)
				Float tmp38 = (tmp35 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(426)
				Float a = tmp38;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(426)
					Float tmp39 = a;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(426)
					Float tmp40 = ::Math_obj::cos(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(426)
					Float tmp41 = Speed;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(426)
					Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(426)
					Float X = tmp42;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(426)
					Float tmp43 = a;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(426)
					Float tmp44 = ::Math_obj::sin(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(426)
					Float tmp45 = Speed;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(426)
					Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(426)
					Float Y = tmp46;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(426)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp47 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(426)
					::flixel::math::FlxPoint tmp48 = tmp47->get();		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(426)
					Float tmp49 = X;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(426)
					Float tmp50 = Y;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(426)
					::flixel::math::FlxPoint tmp51 = tmp48->set(tmp49,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(426)
					::flixel::math::FlxPoint point = tmp51;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(426)
					point->_inPool = false;
					HX_STACK_LINE(426)
					tmp28 = point;
				}
			}
			HX_STACK_LINE(426)
			this->_point = tmp28;
			HX_STACK_LINE(427)
			::flixel::math::FlxPoint tmp29 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(427)
			::flixel::math::FlxPoint tmp30 = this->_point;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(427)
			Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(427)
			::flixel::math::FlxPoint tmp32 = this->_point;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(427)
			Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(427)
			tmp29->set(tmp31,tmp33);
		}
		else{
			HX_STACK_LINE(431)
			::flixel::math::FlxPoint tmp16 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(431)
			::flixel::math::FlxRandom tmp17 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(431)
			::flixel::util::helpers::FlxPointRangeBounds tmp18 = this->velocity;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(431)
			::flixel::math::FlxPoint tmp19 = tmp18->start->min;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(431)
			Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(431)
			::flixel::util::helpers::FlxPointRangeBounds tmp21 = this->velocity;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(431)
			::flixel::math::FlxPoint tmp22 = tmp21->start->max;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(431)
			Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(431)
			Float tmp24 = tmp17->_float(tmp20,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(431)
			tmp16->set_x(tmp24);
			HX_STACK_LINE(432)
			::flixel::math::FlxPoint tmp25 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(432)
			::flixel::math::FlxRandom tmp26 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(432)
			::flixel::util::helpers::FlxPointRangeBounds tmp27 = this->velocity;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(432)
			::flixel::math::FlxPoint tmp28 = tmp27->start->min;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(432)
			Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(432)
			::flixel::util::helpers::FlxPointRangeBounds tmp30 = this->velocity;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(432)
			::flixel::math::FlxPoint tmp31 = tmp30->start->max;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(432)
			Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(432)
			Float tmp33 = tmp26->_float(tmp29,tmp32,null());		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(432)
			tmp25->set_y(tmp33);
			HX_STACK_LINE(433)
			::flixel::math::FlxPoint tmp34 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(433)
			::flixel::math::FlxRandom tmp35 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(433)
			::flixel::util::helpers::FlxPointRangeBounds tmp36 = this->velocity;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(433)
			::flixel::math::FlxPoint tmp37 = tmp36->end->min;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(433)
			Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(433)
			::flixel::util::helpers::FlxPointRangeBounds tmp39 = this->velocity;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(433)
			::flixel::math::FlxPoint tmp40 = tmp39->end->max;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(433)
			Float tmp41 = tmp40->x;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(433)
			Float tmp42 = tmp35->_float(tmp38,tmp41,null());		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(433)
			tmp34->set_x(tmp42);
			HX_STACK_LINE(434)
			::flixel::math::FlxPoint tmp43 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(434)
			::flixel::math::FlxRandom tmp44 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(434)
			::flixel::util::helpers::FlxPointRangeBounds tmp45 = this->velocity;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(434)
			::flixel::math::FlxPoint tmp46 = tmp45->end->min;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(434)
			Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(434)
			::flixel::util::helpers::FlxPointRangeBounds tmp48 = this->velocity;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(434)
			::flixel::math::FlxPoint tmp49 = tmp48->end->max;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(434)
			Float tmp50 = tmp49->y;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(434)
			Float tmp51 = tmp44->_float(tmp47,tmp50,null());		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(434)
			tmp43->set_y(tmp51);
			HX_STACK_LINE(435)
			::flixel::math::FlxPoint tmp52 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(435)
			Float tmp53 = tmp52->x;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(435)
			particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp53);
			HX_STACK_LINE(436)
			::flixel::math::FlxPoint tmp54 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(436)
			Float tmp55 = tmp54->y;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(436)
			particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp55);
		}
	}
	else{
		HX_STACK_LINE(440)
		particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = false;
	}
	HX_STACK_LINE(443)
	::flixel::util::helpers::FlxRangeBounds tmp12 = this->angularVelocity;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(443)
	::flixel::util::helpers::FlxBounds tmp13 = tmp12->start;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(443)
	::flixel::util::helpers::FlxRangeBounds tmp14 = this->angularVelocity;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(443)
	::flixel::util::helpers::FlxBounds tmp15 = tmp14->end;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(443)
	bool tmp16 = (tmp13 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(443)
	particle->__Field(HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp16;
	HX_STACK_LINE(445)
	bool tmp17 = this->ignoreAngularVelocity;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(445)
	bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(445)
	if ((tmp18)){
		HX_STACK_LINE(447)
		::flixel::util::helpers::FlxRangeBounds tmp19 = this->angularAcceleration;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(447)
		bool tmp20 = tmp19->active;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(447)
		if ((tmp20)){
			HX_STACK_LINE(448)
			::flixel::math::FlxRandom tmp21 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(448)
			::flixel::util::helpers::FlxRangeBounds tmp22 = this->angularAcceleration;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(448)
			Float tmp23 = tmp22->start->min;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(448)
			::flixel::util::helpers::FlxRangeBounds tmp24 = this->angularAcceleration;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(448)
			Float tmp25 = tmp24->start->max;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(448)
			Float tmp26 = tmp21->_float(tmp23,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(448)
			particle->__FieldRef(HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a")) = tmp26;
		}
		HX_STACK_LINE(450)
		::flixel::util::helpers::FlxRangeBounds tmp21 = this->angularVelocity;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(450)
		bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(450)
		if ((tmp22)){
			HX_STACK_LINE(452)
			::flixel::math::FlxRandom tmp23 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(452)
			::flixel::util::helpers::FlxRangeBounds tmp24 = this->angularVelocity;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(452)
			Float tmp25 = tmp24->start->min;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(452)
			::flixel::util::helpers::FlxRangeBounds tmp26 = this->angularVelocity;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(452)
			Float tmp27 = tmp26->start->max;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(452)
			Float tmp28 = tmp23->_float(tmp25,tmp27,null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(452)
			particle->__Field(HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = tmp28;
			HX_STACK_LINE(453)
			::flixel::math::FlxRandom tmp29 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(453)
			::flixel::util::helpers::FlxRangeBounds tmp30 = this->angularVelocity;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(453)
			Float tmp31 = tmp30->end->min;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(453)
			::flixel::util::helpers::FlxRangeBounds tmp32 = this->angularVelocity;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(453)
			Float tmp33 = tmp32->end->max;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(453)
			Float tmp34 = tmp29->_float(tmp31,tmp33,null());		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(453)
			particle->__Field(HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")) = tmp34;
			HX_STACK_LINE(454)
			Float tmp35 = particle->__Field(HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(454)
			particle->__FieldRef(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")) = tmp35;
		}
		HX_STACK_LINE(457)
		::flixel::util::helpers::FlxRangeBounds tmp23 = this->angularDrag;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(457)
		bool tmp24 = tmp23->active;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(457)
		if ((tmp24)){
			HX_STACK_LINE(458)
			::flixel::math::FlxRandom tmp25 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(458)
			::flixel::util::helpers::FlxRangeBounds tmp26 = this->angularDrag;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(458)
			Float tmp27 = tmp26->start->min;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(458)
			::flixel::util::helpers::FlxRangeBounds tmp28 = this->angularDrag;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(458)
			Float tmp29 = tmp28->start->max;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(458)
			Float tmp30 = tmp25->_float(tmp27,tmp29,null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(458)
			particle->__FieldRef(HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c")) = tmp30;
		}
	}
	else{
		HX_STACK_LINE(460)
		::flixel::util::helpers::FlxRangeBounds tmp19 = this->angularVelocity;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(460)
		bool tmp20 = tmp19->active;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(460)
		if ((tmp20)){
			HX_STACK_LINE(462)
			::flixel::math::FlxRandom tmp21 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(462)
			::flixel::util::helpers::FlxRangeBounds tmp22 = this->angle;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(462)
			Float tmp23 = tmp22->end->min;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(462)
			::flixel::util::helpers::FlxRangeBounds tmp24 = this->angle;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(462)
			Float tmp25 = tmp24->end->max;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(462)
			Float tmp26 = tmp21->_float(tmp23,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(462)
			::flixel::math::FlxRandom tmp27 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(462)
			::flixel::util::helpers::FlxRangeBounds tmp28 = this->angle;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(462)
			Float tmp29 = tmp28->start->min;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(462)
			::flixel::util::helpers::FlxRangeBounds tmp30 = this->angle;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(462)
			Float tmp31 = tmp30->start->max;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(462)
			Float tmp32 = tmp27->_float(tmp29,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(462)
			Float tmp33 = (tmp26 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(462)
			::flixel::math::FlxRandom tmp34 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(462)
			::flixel::util::helpers::FlxBounds tmp35 = this->lifespan;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(462)
			Float tmp36 = tmp35->min;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(462)
			::flixel::util::helpers::FlxBounds tmp37 = this->lifespan;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(462)
			Float tmp38 = tmp37->max;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(462)
			Float tmp39 = tmp34->_float(tmp36,tmp38,null());		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(462)
			Float tmp40 = (Float(tmp33) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(462)
			particle->__FieldRef(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")) = tmp40;
			HX_STACK_LINE(463)
			particle->__Field(HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = false;
		}
	}
	HX_STACK_LINE(467)
	::flixel::util::helpers::FlxRangeBounds tmp19 = this->angle;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(467)
	bool tmp20 = tmp19->active;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(467)
	if ((tmp20)){
		HX_STACK_LINE(468)
		::flixel::math::FlxRandom tmp21 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(468)
		::flixel::util::helpers::FlxRangeBounds tmp22 = this->angle;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(468)
		Float tmp23 = tmp22->start->min;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(468)
		::flixel::util::helpers::FlxRangeBounds tmp24 = this->angle;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(468)
		Float tmp25 = tmp24->start->max;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(468)
		Float tmp26 = tmp21->_float(tmp23,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(468)
		particle->__Field(HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"), hx::paccDynamic )(tmp26);
	}
	HX_STACK_LINE(471)
	::flixel::util::helpers::FlxBounds tmp21 = this->lifespan;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(471)
	bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(471)
	if ((tmp22)){
		HX_STACK_LINE(472)
		::flixel::math::FlxRandom tmp23 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(472)
		::flixel::util::helpers::FlxBounds tmp24 = this->lifespan;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(472)
		Float tmp25 = tmp24->min;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(472)
		::flixel::util::helpers::FlxBounds tmp26 = this->lifespan;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(472)
		Float tmp27 = tmp26->max;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(472)
		Float tmp28 = tmp23->_float(tmp25,tmp27,null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(472)
		particle->__FieldRef(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")) = tmp28;
	}
	HX_STACK_LINE(475)
	::flixel::util::helpers::FlxPointRangeBounds tmp23 = this->scale;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(475)
	bool tmp24 = tmp23->active;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(475)
	if ((tmp24)){
		HX_STACK_LINE(477)
		::flixel::math::FlxPoint tmp25 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(477)
		::flixel::math::FlxRandom tmp26 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(477)
		::flixel::util::helpers::FlxPointRangeBounds tmp27 = this->scale;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(477)
		::flixel::math::FlxPoint tmp28 = tmp27->start->min;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(477)
		Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(477)
		::flixel::util::helpers::FlxPointRangeBounds tmp30 = this->scale;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(477)
		::flixel::math::FlxPoint tmp31 = tmp30->start->max;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(477)
		Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(477)
		Float tmp33 = tmp26->_float(tmp29,tmp32,null());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(477)
		tmp25->set_x(tmp33);
		HX_STACK_LINE(478)
		::flixel::math::FlxPoint tmp34 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(478)
		bool tmp35 = this->keepScaleRatio;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(478)
		Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(478)
		if ((tmp35)){
			HX_STACK_LINE(478)
			::flixel::math::FlxPoint tmp37 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(478)
			tmp36 = tmp37->x;
		}
		else{
			HX_STACK_LINE(478)
			::flixel::math::FlxRandom tmp37 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(478)
			::flixel::util::helpers::FlxPointRangeBounds tmp38 = this->scale;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(478)
			::flixel::math::FlxPoint tmp39 = tmp38->start->min;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(478)
			Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(478)
			::flixel::util::helpers::FlxPointRangeBounds tmp41 = this->scale;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(478)
			::flixel::math::FlxPoint tmp42 = tmp41->start->max;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(478)
			Float tmp43 = tmp42->y;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(478)
			tmp36 = tmp37->_float(tmp40,tmp43,null());
		}
		HX_STACK_LINE(478)
		tmp34->set_y(tmp36);
		HX_STACK_LINE(479)
		::flixel::math::FlxPoint tmp37 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(479)
		::flixel::math::FlxRandom tmp38 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(479)
		::flixel::util::helpers::FlxPointRangeBounds tmp39 = this->scale;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(479)
		::flixel::math::FlxPoint tmp40 = tmp39->end->min;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(479)
		Float tmp41 = tmp40->x;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(479)
		::flixel::util::helpers::FlxPointRangeBounds tmp42 = this->scale;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(479)
		::flixel::math::FlxPoint tmp43 = tmp42->end->max;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(479)
		Float tmp44 = tmp43->x;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(479)
		Float tmp45 = tmp38->_float(tmp41,tmp44,null());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(479)
		tmp37->set_x(tmp45);
		HX_STACK_LINE(480)
		::flixel::math::FlxPoint tmp46 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(480)
		bool tmp47 = this->keepScaleRatio;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(480)
		Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(480)
		if ((tmp47)){
			HX_STACK_LINE(480)
			::flixel::math::FlxPoint tmp49 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(480)
			tmp48 = tmp49->x;
		}
		else{
			HX_STACK_LINE(480)
			::flixel::math::FlxRandom tmp49 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(480)
			::flixel::util::helpers::FlxPointRangeBounds tmp50 = this->scale;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(480)
			::flixel::math::FlxPoint tmp51 = tmp50->end->min;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(480)
			Float tmp52 = tmp51->y;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(480)
			::flixel::util::helpers::FlxPointRangeBounds tmp53 = this->scale;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(480)
			::flixel::math::FlxPoint tmp54 = tmp53->end->max;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(480)
			Float tmp55 = tmp54->y;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(480)
			tmp48 = tmp49->_float(tmp52,tmp55,null());
		}
		HX_STACK_LINE(480)
		tmp46->set_y(tmp48);
		HX_STACK_LINE(481)
		bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(481)
		{
			HX_STACK_LINE(481)
			::flixel::math::FlxPoint tmp50 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(481)
			::flixel::math::FlxPoint _this = tmp50;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(481)
			::flixel::math::FlxPoint tmp51 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(481)
			::flixel::math::FlxPoint point = tmp51;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(481)
			bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(481)
				Float tmp53 = (_this->x - point->x);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(481)
				Float tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(481)
				Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(481)
				Float tmp56 = ::Math_obj::abs(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(481)
				Float tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(481)
				Float tmp58 = aDiff;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(481)
				tmp52 = (tmp57 <= tmp58);
			}
			HX_STACK_LINE(481)
			bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(481)
			if ((tmp52)){
				HX_STACK_LINE(481)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(481)
				Float tmp54 = (_this->y - point->y);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(481)
				Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(481)
				Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(481)
				Float tmp57 = ::Math_obj::abs(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(481)
				Float tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(481)
				Float tmp59 = aDiff;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(481)
				tmp53 = (tmp58 <= tmp59);
			}
			else{
				HX_STACK_LINE(481)
				tmp53 = false;
			}
			HX_STACK_LINE(481)
			bool result = tmp53;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				bool tmp54 = point->_weak;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(481)
				if ((tmp54)){
					HX_STACK_LINE(481)
					point->put();
				}
			}
			HX_STACK_LINE(481)
			tmp49 = result;
		}
		HX_STACK_LINE(481)
		bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(481)
		particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp50;
		HX_STACK_LINE(482)
		::flixel::math::FlxPoint tmp51 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(482)
		Float tmp52 = tmp51->x;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(482)
		particle->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp52);
		HX_STACK_LINE(483)
		::flixel::math::FlxPoint tmp53 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(483)
		Float tmp54 = tmp53->y;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(483)
		particle->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp54);
		HX_STACK_LINE(484)
		bool tmp55 = particle->__Field(HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24"), hx::paccDynamic );		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(484)
		if ((tmp55)){
			HX_STACK_LINE(485)
			particle->__Field(HX_HCSTRING("updateHitbox","\x81","\x94","\xeb","\x56"), hx::paccDynamic )();
		}
	}
	else{
		HX_STACK_LINE(488)
		particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = false;
	}
	HX_STACK_LINE(491)
	::flixel::util::helpers::FlxRangeBounds tmp25 = this->alpha;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(491)
	bool tmp26 = tmp25->active;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(491)
	if ((tmp26)){
		HX_STACK_LINE(493)
		::flixel::math::FlxRandom tmp27 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(493)
		::flixel::util::helpers::FlxRangeBounds tmp28 = this->alpha;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(493)
		Float tmp29 = tmp28->start->min;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(493)
		::flixel::util::helpers::FlxRangeBounds tmp30 = this->alpha;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(493)
		Float tmp31 = tmp30->start->max;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(493)
		Float tmp32 = tmp27->_float(tmp29,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(493)
		particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = tmp32;
		HX_STACK_LINE(494)
		::flixel::math::FlxRandom tmp33 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(494)
		::flixel::util::helpers::FlxRangeBounds tmp34 = this->alpha;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(494)
		Float tmp35 = tmp34->end->min;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(494)
		::flixel::util::helpers::FlxRangeBounds tmp36 = this->alpha;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(494)
		Float tmp37 = tmp36->end->max;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(494)
		Float tmp38 = tmp33->_float(tmp35,tmp37,null());		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(494)
		particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")) = tmp38;
		HX_STACK_LINE(495)
		Float tmp39 = particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(495)
		Float tmp40 = particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(495)
		bool tmp41 = (tmp39 != tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(495)
		particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp41;
		HX_STACK_LINE(496)
		Float tmp42 = particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(496)
		particle->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(tmp42);
	}
	else{
		HX_STACK_LINE(499)
		particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = false;
	}
	HX_STACK_LINE(502)
	::flixel::util::helpers::FlxRangeBounds tmp27 = this->color;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(502)
	bool tmp28 = tmp27->active;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(502)
	if ((tmp28)){
		HX_STACK_LINE(504)
		::flixel::math::FlxRandom tmp29 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(504)
		::flixel::util::helpers::FlxRangeBounds tmp30 = this->color;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(504)
		int tmp31 = tmp30->start->min;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(504)
		::flixel::util::helpers::FlxRangeBounds tmp32 = this->color;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(504)
		int tmp33 = tmp32->start->max;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(504)
		int tmp34 = tmp29->color(tmp31,tmp33,null(),null());		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(504)
		particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = tmp34;
		HX_STACK_LINE(505)
		::flixel::math::FlxRandom tmp35 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(505)
		::flixel::util::helpers::FlxRangeBounds tmp36 = this->color;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(505)
		int tmp37 = tmp36->end->min;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(505)
		::flixel::util::helpers::FlxRangeBounds tmp38 = this->color;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(505)
		int tmp39 = tmp38->end->max;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(505)
		int tmp40 = tmp35->color(tmp37,tmp39,null(),null());		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(505)
		particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")) = tmp40;
		HX_STACK_LINE(506)
		int tmp41 = particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(506)
		int tmp42 = particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(506)
		bool tmp43 = (tmp41 != tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(506)
		particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp43;
		HX_STACK_LINE(507)
		int tmp44 = particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(507)
		particle->__Field(HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"), hx::paccDynamic )(tmp44);
	}
	else{
		HX_STACK_LINE(510)
		particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = false;
	}
	HX_STACK_LINE(513)
	::flixel::util::helpers::FlxPointRangeBounds tmp29 = this->drag;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(513)
	bool tmp30 = tmp29->active;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(513)
	if ((tmp30)){
		HX_STACK_LINE(515)
		::flixel::math::FlxPoint tmp31 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(515)
		::flixel::math::FlxRandom tmp32 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(515)
		::flixel::util::helpers::FlxPointRangeBounds tmp33 = this->drag;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(515)
		::flixel::math::FlxPoint tmp34 = tmp33->start->min;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(515)
		Float tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(515)
		::flixel::util::helpers::FlxPointRangeBounds tmp36 = this->drag;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(515)
		::flixel::math::FlxPoint tmp37 = tmp36->start->max;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(515)
		Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(515)
		Float tmp39 = tmp32->_float(tmp35,tmp38,null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(515)
		tmp31->set_x(tmp39);
		HX_STACK_LINE(516)
		::flixel::math::FlxPoint tmp40 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(516)
		::flixel::math::FlxRandom tmp41 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(516)
		::flixel::util::helpers::FlxPointRangeBounds tmp42 = this->drag;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(516)
		::flixel::math::FlxPoint tmp43 = tmp42->start->min;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(516)
		Float tmp44 = tmp43->y;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(516)
		::flixel::util::helpers::FlxPointRangeBounds tmp45 = this->drag;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(516)
		::flixel::math::FlxPoint tmp46 = tmp45->start->max;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(516)
		Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(516)
		Float tmp48 = tmp41->_float(tmp44,tmp47,null());		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(516)
		tmp40->set_y(tmp48);
		HX_STACK_LINE(517)
		::flixel::math::FlxPoint tmp49 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(517)
		::flixel::math::FlxRandom tmp50 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(517)
		::flixel::util::helpers::FlxPointRangeBounds tmp51 = this->drag;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(517)
		::flixel::math::FlxPoint tmp52 = tmp51->end->min;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(517)
		Float tmp53 = tmp52->x;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(517)
		::flixel::util::helpers::FlxPointRangeBounds tmp54 = this->drag;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(517)
		::flixel::math::FlxPoint tmp55 = tmp54->end->max;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(517)
		Float tmp56 = tmp55->x;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(517)
		Float tmp57 = tmp50->_float(tmp53,tmp56,null());		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(517)
		tmp49->set_x(tmp57);
		HX_STACK_LINE(518)
		::flixel::math::FlxPoint tmp58 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(518)
		::flixel::math::FlxRandom tmp59 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(518)
		::flixel::util::helpers::FlxPointRangeBounds tmp60 = this->drag;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(518)
		::flixel::math::FlxPoint tmp61 = tmp60->end->min;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(518)
		Float tmp62 = tmp61->y;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(518)
		::flixel::util::helpers::FlxPointRangeBounds tmp63 = this->drag;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(518)
		::flixel::math::FlxPoint tmp64 = tmp63->end->max;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(518)
		Float tmp65 = tmp64->y;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(518)
		Float tmp66 = tmp59->_float(tmp62,tmp65,null());		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(518)
		tmp58->set_y(tmp66);
		HX_STACK_LINE(519)
		bool tmp67;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(519)
		{
			HX_STACK_LINE(519)
			::flixel::math::FlxPoint tmp68 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(519)
			::flixel::math::FlxPoint _this = tmp68;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(519)
			::flixel::math::FlxPoint tmp69 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(519)
			::flixel::math::FlxPoint point = tmp69;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(519)
			bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(519)
			{
				HX_STACK_LINE(519)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(519)
				Float tmp71 = (_this->x - point->x);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(519)
				Float tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(519)
				Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(519)
				Float tmp74 = ::Math_obj::abs(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(519)
				Float tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(519)
				Float tmp76 = aDiff;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(519)
				tmp70 = (tmp75 <= tmp76);
			}
			HX_STACK_LINE(519)
			bool tmp71;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(519)
			if ((tmp70)){
				HX_STACK_LINE(519)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(519)
				Float tmp72 = (_this->y - point->y);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(519)
				Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(519)
				Float tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(519)
				Float tmp75 = ::Math_obj::abs(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(519)
				Float tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(519)
				Float tmp77 = aDiff;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(519)
				tmp71 = (tmp76 <= tmp77);
			}
			else{
				HX_STACK_LINE(519)
				tmp71 = false;
			}
			HX_STACK_LINE(519)
			bool result = tmp71;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(519)
			{
				HX_STACK_LINE(519)
				bool tmp72 = point->_weak;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(519)
				if ((tmp72)){
					HX_STACK_LINE(519)
					point->put();
				}
			}
			HX_STACK_LINE(519)
			tmp67 = result;
		}
		HX_STACK_LINE(519)
		bool tmp68 = !(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(519)
		particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp68;
		HX_STACK_LINE(520)
		::flixel::math::FlxPoint tmp69 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(520)
		Float tmp70 = tmp69->x;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(520)
		particle->__Field(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp70);
		HX_STACK_LINE(521)
		::flixel::math::FlxPoint tmp71 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(521)
		Float tmp72 = tmp71->y;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(521)
		particle->__Field(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp72);
	}
	else{
		HX_STACK_LINE(524)
		particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = false;
	}
	HX_STACK_LINE(527)
	::flixel::util::helpers::FlxPointRangeBounds tmp31 = this->acceleration;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(527)
	bool tmp32 = tmp31->active;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(527)
	if ((tmp32)){
		HX_STACK_LINE(529)
		::flixel::math::FlxPoint tmp33 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(529)
		::flixel::math::FlxRandom tmp34 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(529)
		::flixel::util::helpers::FlxPointRangeBounds tmp35 = this->acceleration;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(529)
		::flixel::math::FlxPoint tmp36 = tmp35->start->min;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(529)
		Float tmp37 = tmp36->x;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(529)
		::flixel::util::helpers::FlxPointRangeBounds tmp38 = this->acceleration;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(529)
		::flixel::math::FlxPoint tmp39 = tmp38->start->max;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(529)
		Float tmp40 = tmp39->x;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(529)
		Float tmp41 = tmp34->_float(tmp37,tmp40,null());		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(529)
		tmp33->set_x(tmp41);
		HX_STACK_LINE(530)
		::flixel::math::FlxPoint tmp42 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(530)
		::flixel::math::FlxRandom tmp43 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(530)
		::flixel::util::helpers::FlxPointRangeBounds tmp44 = this->acceleration;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(530)
		::flixel::math::FlxPoint tmp45 = tmp44->start->min;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(530)
		Float tmp46 = tmp45->y;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(530)
		::flixel::util::helpers::FlxPointRangeBounds tmp47 = this->acceleration;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(530)
		::flixel::math::FlxPoint tmp48 = tmp47->start->max;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(530)
		Float tmp49 = tmp48->y;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(530)
		Float tmp50 = tmp43->_float(tmp46,tmp49,null());		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(530)
		tmp42->set_y(tmp50);
		HX_STACK_LINE(531)
		::flixel::math::FlxPoint tmp51 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(531)
		::flixel::math::FlxRandom tmp52 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(531)
		::flixel::util::helpers::FlxPointRangeBounds tmp53 = this->acceleration;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(531)
		::flixel::math::FlxPoint tmp54 = tmp53->end->min;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(531)
		Float tmp55 = tmp54->x;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(531)
		::flixel::util::helpers::FlxPointRangeBounds tmp56 = this->acceleration;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(531)
		::flixel::math::FlxPoint tmp57 = tmp56->end->max;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(531)
		Float tmp58 = tmp57->x;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(531)
		Float tmp59 = tmp52->_float(tmp55,tmp58,null());		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(531)
		tmp51->set_x(tmp59);
		HX_STACK_LINE(532)
		::flixel::math::FlxPoint tmp60 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(532)
		::flixel::math::FlxRandom tmp61 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(532)
		::flixel::util::helpers::FlxPointRangeBounds tmp62 = this->acceleration;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(532)
		::flixel::math::FlxPoint tmp63 = tmp62->end->min;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(532)
		Float tmp64 = tmp63->y;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(532)
		::flixel::util::helpers::FlxPointRangeBounds tmp65 = this->acceleration;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(532)
		::flixel::math::FlxPoint tmp66 = tmp65->end->max;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(532)
		Float tmp67 = tmp66->y;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(532)
		Float tmp68 = tmp61->_float(tmp64,tmp67,null());		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(532)
		tmp60->set_y(tmp68);
		HX_STACK_LINE(533)
		bool tmp69;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(533)
		{
			HX_STACK_LINE(533)
			::flixel::math::FlxPoint tmp70 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(533)
			::flixel::math::FlxPoint _this = tmp70;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(533)
			::flixel::math::FlxPoint tmp71 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(533)
			::flixel::math::FlxPoint point = tmp71;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(533)
			bool tmp72;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(533)
			{
				HX_STACK_LINE(533)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(533)
				Float tmp73 = (_this->x - point->x);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(533)
				Float tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(533)
				Float tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(533)
				Float tmp76 = ::Math_obj::abs(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(533)
				Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(533)
				Float tmp78 = aDiff;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(533)
				tmp72 = (tmp77 <= tmp78);
			}
			HX_STACK_LINE(533)
			bool tmp73;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(533)
			if ((tmp72)){
				HX_STACK_LINE(533)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(533)
				Float tmp74 = (_this->y - point->y);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(533)
				Float tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(533)
				Float tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(533)
				Float tmp77 = ::Math_obj::abs(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(533)
				Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(533)
				Float tmp79 = aDiff;		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(533)
				tmp73 = (tmp78 <= tmp79);
			}
			else{
				HX_STACK_LINE(533)
				tmp73 = false;
			}
			HX_STACK_LINE(533)
			bool result = tmp73;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(533)
			{
				HX_STACK_LINE(533)
				bool tmp74 = point->_weak;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(533)
				if ((tmp74)){
					HX_STACK_LINE(533)
					point->put();
				}
			}
			HX_STACK_LINE(533)
			tmp69 = result;
		}
		HX_STACK_LINE(533)
		bool tmp70 = !(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(533)
		particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp70;
		HX_STACK_LINE(534)
		::flixel::math::FlxPoint tmp71 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(534)
		Float tmp72 = tmp71->x;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(534)
		particle->__Field(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp72);
		HX_STACK_LINE(535)
		::flixel::math::FlxPoint tmp73 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(535)
		Float tmp74 = tmp73->y;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(535)
		particle->__Field(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp74);
	}
	else{
		HX_STACK_LINE(538)
		particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = false;
	}
	HX_STACK_LINE(541)
	::flixel::util::helpers::FlxRangeBounds tmp33 = this->elasticity;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(541)
	bool tmp34 = tmp33->active;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(541)
	if ((tmp34)){
		HX_STACK_LINE(543)
		::flixel::math::FlxRandom tmp35 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(543)
		::flixel::util::helpers::FlxRangeBounds tmp36 = this->elasticity;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(543)
		Float tmp37 = tmp36->start->min;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(543)
		::flixel::util::helpers::FlxRangeBounds tmp38 = this->elasticity;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(543)
		Float tmp39 = tmp38->start->max;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(543)
		Float tmp40 = tmp35->_float(tmp37,tmp39,null());		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(543)
		particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = tmp40;
		HX_STACK_LINE(544)
		::flixel::math::FlxRandom tmp41 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(544)
		::flixel::util::helpers::FlxRangeBounds tmp42 = this->elasticity;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(544)
		Float tmp43 = tmp42->end->min;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(544)
		::flixel::util::helpers::FlxRangeBounds tmp44 = this->elasticity;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(544)
		Float tmp45 = tmp44->end->max;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(544)
		Float tmp46 = tmp41->_float(tmp43,tmp45,null());		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(544)
		particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")) = tmp46;
		HX_STACK_LINE(545)
		Float tmp47 = particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(545)
		Float tmp48 = particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(545)
		bool tmp49 = (tmp47 != tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(545)
		particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp49;
		HX_STACK_LINE(546)
		Float tmp50 = particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(546)
		particle->__FieldRef(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")) = tmp50;
	}
	else{
		HX_STACK_LINE(549)
		particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = false;
	}
	HX_STACK_LINE(552)
	::flixel::math::FlxRandom tmp35 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(552)
	Float tmp36 = this->x;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(552)
	Float tmp37 = this->x;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(552)
	Float tmp38 = this->width;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(552)
	Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(552)
	Float tmp40 = tmp35->_float(tmp36,tmp39,null());		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(552)
	Float tmp41 = particle->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(552)
	Float tmp42 = (Float(tmp41) / Float((int)2));		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(552)
	Float tmp43 = (tmp40 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(552)
	particle->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp43);
	HX_STACK_LINE(553)
	::flixel::math::FlxRandom tmp44 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(553)
	Float tmp45 = this->y;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(553)
	Float tmp46 = this->y;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(553)
	Float tmp47 = this->height;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(553)
	Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(553)
	Float tmp49 = tmp44->_float(tmp45,tmp48,null());		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(553)
	Float tmp50 = particle->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(553)
	Float tmp51 = (Float(tmp50) / Float((int)2));		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(553)
	Float tmp52 = (tmp49 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(553)
	particle->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp52);
	HX_STACK_LINE(556)
	::flixel::animation::FlxAnimation tmp53 = particle->__Field(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("_curAnim","\x32","\x51","\x3f","\xe5"), hx::paccDynamic );		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(556)
	bool tmp54 = (tmp53 != null());		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(556)
	if ((tmp54)){
		HX_STACK_LINE(557)
		::flixel::animation::FlxAnimation tmp55 = particle->__Field(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("_curAnim","\x32","\x51","\x3f","\xe5"), hx::paccDynamic );		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(557)
		tmp55->restart();
	}
	HX_STACK_LINE(559)
	particle->__Field(HX_HCSTRING("onEmit","\x12","\xa7","\x9f","\xe5"), hx::paccDynamic )();
	HX_STACK_LINE(561)
	Dynamic tmp55 = particle;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(561)
	return tmp55;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,emitParticle,return )

Void FlxTypedEmitter_obj::focusOn( ::flixel::FlxObject Object){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","focusOn",0x74478100,"flixel.effects.particles.FlxTypedEmitter.focusOn","flixel/effects/particles/FlxEmitter.hx",570,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_LINE(571)
		::flixel::math::FlxPoint tmp = this->_point;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(571)
		Object->getMidpoint(tmp);
		HX_STACK_LINE(573)
		::flixel::math::FlxPoint tmp1 = this->_point;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(573)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(573)
		Float tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(573)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(573)
		int tmp5 = (int(tmp4) >> int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(573)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(573)
		this->x = tmp6;
		HX_STACK_LINE(574)
		::flixel::math::FlxPoint tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(574)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(574)
		Float tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(574)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(574)
		int tmp11 = (int(tmp10) >> int((int)1));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(574)
		Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(574)
		this->y = tmp12;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,focusOn,(void))

Void FlxTypedEmitter_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setPosition",0x453b48d4,"flixel.effects.particles.FlxTypedEmitter.setPosition","flixel/effects/particles/FlxEmitter.hx",581,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(582)
		this->x = X;
		HX_STACK_LINE(583)
		this->y = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setPosition,(void))

Void FlxTypedEmitter_obj::setSize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setSize",0x449c176c,"flixel.effects.particles.FlxTypedEmitter.setSize","flixel/effects/particles/FlxEmitter.hx",587,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(588)
		this->width = Width;
		HX_STACK_LINE(589)
		this->height = Height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setSize,(void))

bool FlxTypedEmitter_obj::get_solid( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_solid",0x591b52ab,"flixel.effects.particles.FlxTypedEmitter.get_solid","flixel/effects/particles/FlxEmitter.hx",593,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_LINE(594)
	int tmp = this->allowCollisions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(594)
	int tmp1 = (int(tmp) & int((int)4369));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(594)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(594)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_solid,return )

bool FlxTypedEmitter_obj::set_solid( bool Solid){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_solid",0x3c6c3eb7,"flixel.effects.particles.FlxTypedEmitter.set_solid","flixel/effects/particles/FlxEmitter.hx",598,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Solid,"Solid")
	HX_STACK_LINE(599)
	bool tmp = Solid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(599)
	if ((tmp)){
		HX_STACK_LINE(601)
		this->allowCollisions = (int)4369;
	}
	else{
		HX_STACK_LINE(605)
		this->allowCollisions = (int)0;
	}
	HX_STACK_LINE(607)
	bool tmp1 = Solid;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(607)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_solid,return )


FlxTypedEmitter_obj::FlxTypedEmitter_obj()
{
}

void FlxTypedEmitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedEmitter);
	HX_MARK_MEMBER_NAME(particleClass,"particleClass");
	HX_MARK_MEMBER_NAME(emitting,"emitting");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(launchMode,"launchMode");
	HX_MARK_MEMBER_NAME(keepScaleRatio,"keepScaleRatio");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(ignoreAngularVelocity,"ignoreAngularVelocity");
	HX_MARK_MEMBER_NAME(launchAngle,"launchAngle");
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(_quantity,"_quantity");
	HX_MARK_MEMBER_NAME(_explode,"_explode");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_counter,"_counter");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_waitForKill,"_waitForKill");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedEmitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(particleClass,"particleClass");
	HX_VISIT_MEMBER_NAME(emitting,"emitting");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(launchMode,"launchMode");
	HX_VISIT_MEMBER_NAME(keepScaleRatio,"keepScaleRatio");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(ignoreAngularVelocity,"ignoreAngularVelocity");
	HX_VISIT_MEMBER_NAME(launchAngle,"launchAngle");
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(_quantity,"_quantity");
	HX_VISIT_MEMBER_NAME(_explode,"_explode");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_counter,"_counter");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_waitForKill,"_waitForKill");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedEmitter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == hx::paccAlways) return get_solid(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"explode") ) { return explode_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitting") ) { return emitting; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		if (HX_FIELD_EQ(inName,"_explode") ) { return _explode; }
		if (HX_FIELD_EQ(inName,"_counter") ) { return _counter; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return frequency; }
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		if (HX_FIELD_EQ(inName,"_quantity") ) { return _quantity; }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return get_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"launchMode") ) { return launchMode; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"onFinished") ) { return onFinished_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"launchAngle") ) { return launchAngle; }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { return _waitForKill; }
		if (HX_FIELD_EQ(inName,"loadParticle") ) { return loadParticle_dyn(); }
		if (HX_FIELD_EQ(inName,"emitParticle") ) { return emitParticle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleClass") ) { return particleClass; }
		if (HX_FIELD_EQ(inName,"loadParticles") ) { return loadParticles_dyn(); }
		if (HX_FIELD_EQ(inName,"makeParticles") ) { return makeParticles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keepScaleRatio") ) { return keepScaleRatio; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { return autoUpdateHitbox; }
		if (HX_FIELD_EQ(inName,"emitContinuously") ) { return emitContinuously_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ignoreAngularVelocity") ) { return ignoreAngularVelocity; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"emitParticleContinuously") ) { return emitParticleContinuously_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedEmitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::openfl::_legacy::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == hx::paccAlways) return set_solid(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitting") ) { emitting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explode") ) { _explode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_counter") ) { _counter=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immovable") ) { immovable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_quantity") ) { _quantity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"launchMode") ) { launchMode=inValue.Cast< ::flixel::effects::particles::FlxEmitterMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"launchAngle") ) { launchAngle=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { _waitForKill=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleClass") ) { particleClass=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keepScaleRatio") ) { keepScaleRatio=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { allowCollisions=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { autoUpdateHitbox=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ignoreAngularVelocity") ) { ignoreAngularVelocity=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("particleClass","\x12","\x2c","\xaf","\x5e"));
	outFields->push(HX_HCSTRING("emitting","\xc1","\x90","\x7b","\x58"));
	outFields->push(HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("launchMode","\x36","\x97","\x65","\xb9"));
	outFields->push(HX_HCSTRING("keepScaleRatio","\x06","\x6f","\x41","\x31"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a"));
	outFields->push(HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"));
	outFields->push(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("ignoreAngularVelocity","\x2d","\x72","\xdc","\x56"));
	outFields->push(HX_HCSTRING("launchAngle","\xa0","\xd8","\x08","\x96"));
	outFields->push(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"));
	outFields->push(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"));
	outFields->push(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"));
	outFields->push(HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"));
	outFields->push(HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24"));
	outFields->push(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"));
	outFields->push(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80"));
	outFields->push(HX_HCSTRING("_quantity","\xea","\x3e","\xd8","\xf3"));
	outFields->push(HX_HCSTRING("_explode","\x62","\x15","\x1c","\x61"));
	outFields->push(HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"));
	outFields->push(HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_waitForKill","\x53","\x6f","\x91","\x2f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxTypedEmitter_obj,particleClass),HX_HCSTRING("particleClass","\x12","\x2c","\xaf","\x5e")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,emitting),HX_HCSTRING("emitting","\xc1","\x90","\x7b","\x58")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,frequency),HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb")},
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(int)offsetof(FlxTypedEmitter_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::flixel::effects::particles::FlxEmitterMode*/ ,(int)offsetof(FlxTypedEmitter_obj,launchMode),HX_HCSTRING("launchMode","\x36","\x97","\x65","\xb9")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,keepScaleRatio),HX_HCSTRING("keepScaleRatio","\x06","\x6f","\x41","\x31")},
	{hx::fsObject /*::flixel::util::helpers::FlxPointRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,velocity),HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,angularAcceleration),HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,angularDrag),HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,angularVelocity),HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,ignoreAngularVelocity),HX_HCSTRING("ignoreAngularVelocity","\x2d","\x72","\xdc","\x56")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,launchAngle),HX_HCSTRING("launchAngle","\xa0","\xd8","\x08","\x96")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,lifespan),HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")},
	{hx::fsObject /*::flixel::util::helpers::FlxPointRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::flixel::util::helpers::FlxPointRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,drag),HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42")},
	{hx::fsObject /*::flixel::util::helpers::FlxPointRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,acceleration),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,elasticity),HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,immovable),HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,autoUpdateHitbox),HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,allowCollisions),HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,_quantity),HX_HCSTRING("_quantity","\xea","\x3e","\xd8","\xf3")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,_explode),HX_HCSTRING("_explode","\x62","\x15","\x1c","\x61")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,_timer),HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,_counter),HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTypedEmitter_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,_waitForKill),HX_HCSTRING("_waitForKill","\x53","\x6f","\x91","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("particleClass","\x12","\x2c","\xaf","\x5e"),
	HX_HCSTRING("emitting","\xc1","\x90","\x7b","\x58"),
	HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("launchMode","\x36","\x97","\x65","\xb9"),
	HX_HCSTRING("keepScaleRatio","\x06","\x6f","\x41","\x31"),
	HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a"),
	HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"),
	HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("ignoreAngularVelocity","\x2d","\x72","\xdc","\x56"),
	HX_HCSTRING("launchAngle","\xa0","\xd8","\x08","\x96"),
	HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"),
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"),
	HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"),
	HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24"),
	HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"),
	HX_HCSTRING("_quantity","\xea","\x3e","\xd8","\xf3"),
	HX_HCSTRING("_explode","\x62","\x15","\x1c","\x61"),
	HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"),
	HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_waitForKill","\x53","\x6f","\x91","\x2f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("loadParticles","\x67","\x10","\xeb","\x14"),
	HX_HCSTRING("loadParticle","\x8c","\x2a","\xfa","\x25"),
	HX_HCSTRING("makeParticles","\x9f","\x37","\x2e","\x8b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("explode","\xe1","\xbb","\x63","\x27"),
	HX_HCSTRING("emitContinuously","\x4f","\xa0","\x33","\x17"),
	HX_HCSTRING("emitParticleContinuously","\xb5","\x26","\xaf","\x13"),
	HX_HCSTRING("onFinished","\xb1","\x67","\xc5","\x72"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("emitParticle","\xb9","\xa3","\x6b","\x89"),
	HX_HCSTRING("focusOn","\x17","\x4b","\x83","\x41"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("get_solid","\x82","\x10","\x6f","\xc4"),
	HX_HCSTRING("set_solid","\x8e","\xfc","\xbf","\xa7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedEmitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedEmitter_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTypedEmitter_obj::__mClass;

void FlxTypedEmitter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.particles.FlxTypedEmitter","\x57","\x05","\x9c","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedEmitter_obj >;
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

} // end namespace flixel
} // end namespace effects
} // end namespace particles
