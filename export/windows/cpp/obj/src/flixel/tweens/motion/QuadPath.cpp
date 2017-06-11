// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
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

namespace flixel{
namespace tweens{
namespace motion{

void QuadPath_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","new",0x9e663362,"flixel.tweens.motion.QuadPath.new","flixel/tweens/motion/QuadPath.hx",12,0x562bb60d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Options,"Options")
            	HX_STACK_ARG(manager,"manager")
HXLINE(  22)		this->_updateCurve = true;
HXLINE(  19)		this->_numSegs = (int)0;
HXLINE(  18)		this->_index = (int)0;
HXLINE(  17)		this->_speed = ((Float)0);
HXLINE(  16)		this->_distance = ((Float)0);
HXLINE(  33)		super::__construct(Options,manager);
HXLINE(  35)		this->_points = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  36)		this->_curveT = ::Array_obj< Float >::__new(0);
HXLINE(  37)		this->_curveD = ::Array_obj< Float >::__new(0);
            	}

Dynamic QuadPath_obj::__CreateEmpty() { return new QuadPath_obj; }

hx::ObjectPtr< QuadPath_obj > QuadPath_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager)
{
	hx::ObjectPtr< QuadPath_obj > _hx_result = new QuadPath_obj();
	_hx_result->__construct(Options,manager);
	return _hx_result;
}

Dynamic QuadPath_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< QuadPath_obj > _hx_result = new QuadPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

void QuadPath_obj::destroy(){
            	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","destroy",0x05d338fc,"flixel.tweens.motion.QuadPath.destroy","flixel/tweens/motion/QuadPath.hx",41,0x562bb60d)
            	HX_STACK_THIS(this)
HXLINE(  42)		this->super::destroy();
HXLINE(  44)		{
HXLINE(  44)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  44)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->_points;
HXDLIN(  44)			while((_g < _g1->length)){
HXLINE(  44)				HX_VARI(  ::flixel::math::FlxPoint,point) = _g1->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN(  44)				++_g;
HXLINE(  46)				point = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(point)) );
            			}
            		}
HXLINE(  48)		this->_a = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_a)) );
HXLINE(  49)		this->_b = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_b)) );
HXLINE(  50)		this->_c = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_c)) );
            	}


 ::flixel::tweens::motion::QuadPath QuadPath_obj::setMotion(Float DurationOrSpeed,hx::Null< Bool >  __o_UseDuration){
Bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","setMotion",0xc2ae8bfa,"flixel.tweens.motion.QuadPath.setMotion","flixel/tweens/motion/QuadPath.hx",60,0x562bb60d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
            	HX_STACK_ARG(UseDuration,"UseDuration")
HXLINE(  61)		this->updatePath();
HXLINE(  63)		if (UseDuration) {
HXLINE(  65)			this->duration = DurationOrSpeed;
HXLINE(  66)			this->_speed = ((Float)this->_distance / (Float)DurationOrSpeed);
            		}
            		else {
HXLINE(  70)			this->duration = ((Float)this->_distance / (Float)DurationOrSpeed);
HXLINE(  71)			this->_speed = DurationOrSpeed;
            		}
HXLINE(  74)		this->start();
HXLINE(  75)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(QuadPath_obj,setMotion,return )

 ::flixel::tweens::motion::QuadPath QuadPath_obj::addPoint(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
            	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","addPoint",0x820a502d,"flixel.tweens.motion.QuadPath.addPoint","flixel/tweens/motion/QuadPath.hx",82,0x562bb60d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(  83)		this->_updateCurve = true;
HXLINE(  84)		HX_VARI(  ::flixel::math::FlxPoint,point) = ::flixel::math::FlxPoint_obj::_pool->get()->set(x,y);
HXDLIN(  84)		point->_inPool = false;
HXDLIN(  84)		this->_points->push(point);
HXLINE(  85)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(QuadPath_obj,addPoint,return )

 ::flixel::math::FlxPoint QuadPath_obj::getPoint(hx::Null< Int >  __o_index){
Int index = __o_index.Default(0);
            	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","getPoint",0x68843998,"flixel.tweens.motion.QuadPath.getPoint","flixel/tweens/motion/QuadPath.hx",92,0x562bb60d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
HXLINE(  93)		if ((this->_points->length == (int)0)) {
HXLINE(  95)			HX_STACK_DO_THROW(HX_("No points have been added to the path yet.",c7,a0,28,83));
            		}
HXLINE(  97)		return this->_points->__get(hx::Mod(index,this->_points->length)).StaticCast<  ::flixel::math::FlxPoint >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(QuadPath_obj,getPoint,return )

 ::flixel::tweens::FlxTween QuadPath_obj::start(){
            	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","start",0x95be1be4,"flixel.tweens.motion.QuadPath.start","flixel/tweens/motion/QuadPath.hx",101,0x562bb60d)
            	HX_STACK_THIS(this)
HXLINE( 102)		Int _hx_tmp;
HXDLIN( 102)		if (this->backward) {
HXLINE( 102)			_hx_tmp = (this->_numSegs - (int)1);
            		}
            		else {
HXLINE( 102)			_hx_tmp = (int)0;
            		}
HXDLIN( 102)		this->_index = _hx_tmp;
HXLINE( 103)		this->super::start();
HXLINE( 104)		return hx::ObjectPtr<OBJ_>(this);
            	}


void QuadPath_obj::update(Float elapsed){
            	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","update",0xf1a57047,"flixel.tweens.motion.QuadPath.update","flixel/tweens/motion/QuadPath.hx",108,0x562bb60d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE( 109)		this->super::update(elapsed);
HXLINE( 110)		HX_VAR( Float,td);
HXLINE( 111)		HX_VAR( Float,tt);
HXLINE( 113)		Bool _hx_tmp;
HXDLIN( 113)		if (!(this->backward)) {
HXLINE( 113)			_hx_tmp = hx::IsNotNull( this->_points );
            		}
            		else {
HXLINE( 113)			_hx_tmp = false;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 115)			Bool _hx_tmp1 = (this->_index < (this->_numSegs - (int)1));
HXDLIN( 115)			if (_hx_tmp1) {
HXLINE( 117)				while((this->scale > this->_curveT->__get((this->_index + (int)1)))){
HXLINE( 119)					this->_index++;
HXLINE( 120)					if ((this->_index == (this->_numSegs - (int)1))) {
HXLINE( 122)						goto _hx_goto_1;
            					}
            				}
            				_hx_goto_1:;
            			}
HXLINE( 126)			td = this->_curveT->__get(this->_index);
HXLINE( 127)			tt = (this->_curveT->__get((this->_index + (int)1)) - td);
HXLINE( 128)			Float _hx_tmp2 = (this->scale - td);
HXDLIN( 128)			td = ((Float)_hx_tmp2 / (Float)tt);
HXLINE( 129)			Int _hx_tmp3 = (this->_index * (int)2);
HXDLIN( 129)			this->_a = this->_points->__get(_hx_tmp3).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 130)			Int _hx_tmp4 = ((this->_index * (int)2) + (int)1);
HXDLIN( 130)			this->_b = this->_points->__get(_hx_tmp4).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 131)			Int _hx_tmp5 = ((this->_index * (int)2) + (int)2);
HXDLIN( 131)			this->_c = this->_points->__get(_hx_tmp5).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 133)			Float _hx_tmp6 = (((this->_a->x * ((int)1 - td)) * ((int)1 - td)) + (((this->_b->x * (int)2) * ((int)1 - td)) * td));
HXDLIN( 133)			Float _hx_tmp7 = ((this->_c->x * td) * td);
HXDLIN( 133)			this->x = (_hx_tmp6 + _hx_tmp7);
HXLINE( 134)			Float _hx_tmp8 = (((this->_a->y * ((int)1 - td)) * ((int)1 - td)) + (((this->_b->y * (int)2) * ((int)1 - td)) * td));
HXDLIN( 134)			Float _hx_tmp9 = ((this->_c->y * td) * td);
HXDLIN( 134)			this->y = (_hx_tmp8 + _hx_tmp9);
            		}
            		else {
HXLINE( 136)			Bool _hx_tmp10 = hx::IsNotNull( this->_points );
HXDLIN( 136)			if (_hx_tmp10) {
HXLINE( 138)				Bool _hx_tmp11 = (this->_index > (int)0);
HXDLIN( 138)				if (_hx_tmp11) {
HXLINE( 140)					while((this->scale < this->_curveT->__get(this->_index))){
HXLINE( 142)						this->_index--;
HXLINE( 143)						if ((this->_index == (int)0)) {
HXLINE( 145)							goto _hx_goto_2;
            						}
            					}
            					_hx_goto_2:;
            				}
HXLINE( 150)				td = this->_curveT->__get((this->_index + (int)1));
HXLINE( 151)				tt = (this->_curveT->__get(this->_index) - td);
HXLINE( 152)				Float _hx_tmp12 = (this->scale - td);
HXDLIN( 152)				td = ((Float)_hx_tmp12 / (Float)tt);
HXLINE( 153)				Int _hx_tmp13 = ((this->_index * (int)2) + (int)2);
HXDLIN( 153)				this->_a = this->_points->__get(_hx_tmp13).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 154)				Int _hx_tmp14 = ((this->_index * (int)2) + (int)1);
HXDLIN( 154)				this->_b = this->_points->__get(_hx_tmp14).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 155)				Int _hx_tmp15 = (this->_index * (int)2);
HXDLIN( 155)				this->_c = this->_points->__get(_hx_tmp15).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 157)				Float _hx_tmp16 = (((this->_a->x * ((int)1 - td)) * ((int)1 - td)) + (((this->_b->x * (int)2) * ((int)1 - td)) * td));
HXDLIN( 157)				Float _hx_tmp17 = ((this->_c->x * td) * td);
HXDLIN( 157)				this->x = (_hx_tmp16 + _hx_tmp17);
HXLINE( 158)				Float _hx_tmp18 = (((this->_a->y * ((int)1 - td)) * ((int)1 - td)) + (((this->_b->y * (int)2) * ((int)1 - td)) * td));
HXDLIN( 158)				Float _hx_tmp19 = ((this->_c->y * td) * td);
HXDLIN( 158)				this->y = (_hx_tmp18 + _hx_tmp19);
            			}
            		}
HXLINE( 160)		this->super::postUpdate();
            	}


void QuadPath_obj::updatePath(){
            	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","updatePath",0x1fbbb18c,"flixel.tweens.motion.QuadPath.updatePath","flixel/tweens/motion/QuadPath.hx",165,0x562bb60d)
            	HX_STACK_THIS(this)
HXLINE( 166)		Bool _hx_tmp;
HXDLIN( 166)		if ((hx::Mod((this->_points->length - (int)1),(int)2) == (int)0)) {
HXLINE( 166)			_hx_tmp = (this->_points->length < (int)3);
            		}
            		else {
HXLINE( 166)			_hx_tmp = true;
            		}
HXDLIN( 166)		if (_hx_tmp) {
HXLINE( 168)			HX_STACK_DO_THROW(HX_("A QuadPath must have at least 3 points to operate and number of points must be a odd.",67,e3,16,ba));
            		}
HXLINE( 170)		if (!(this->_updateCurve)) {
HXLINE( 172)			return;
            		}
HXLINE( 174)		this->_updateCurve = false;
HXLINE( 177)		HX_VARI( Int,i) = (int)0;
HXLINE( 178)		HX_VARI( Int,j) = (int)0;
HXLINE( 179)		this->_distance = (int)0;
HXLINE( 180)		Float _hx_tmp1 = ((Float)(this->_points->length - (int)1) / (Float)(int)2);
HXDLIN( 180)		this->_numSegs = ::Std_obj::_hx_int(_hx_tmp1);
HXLINE( 181)		while((i < this->_numSegs)){
HXLINE( 183)			j = (i * (int)2);
HXLINE( 184)			 ::flixel::math::FlxPoint _hx_tmp2 = this->_points->__get(j).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN( 184)			 ::flixel::math::FlxPoint _hx_tmp3 = this->_points->__get((j + (int)1)).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN( 184)			 ::flixel::math::FlxPoint _hx_tmp4 = this->_points->__get((j + (int)2)).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN( 184)			Float _hx_tmp5 = this->getCurveLength(_hx_tmp2,_hx_tmp3,_hx_tmp4);
HXDLIN( 184)			this->_curveD[i] = _hx_tmp5;
HXLINE( 185)			Int _hx_tmp6 = i++;
HXDLIN( 185)			hx::AddEq(this->_distance,this->_curveD->__get(_hx_tmp6));
            		}
HXLINE( 189)		i = (int)0;
HXLINE( 190)		HX_VARI( Float,d) = (int)0;
HXLINE( 191)		while((i < this->_numSegs)){
HXLINE( 193)			hx::AddEq(d,this->_curveD->__get(i));
HXLINE( 194)			Int _hx_tmp7 = i++;
HXDLIN( 194)			Float _hx_tmp8 = ((Float)d / (Float)this->_distance);
HXDLIN( 194)			this->_curveT[_hx_tmp7] = _hx_tmp8;
            		}
HXLINE( 196)		Int _hx_tmp9 = (this->_numSegs - (int)1);
HXDLIN( 196)		this->_curveT[_hx_tmp9] = (int)1;
HXLINE( 197)		this->_curveT->unshift((int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(QuadPath_obj,updatePath,(void))

Float QuadPath_obj::getCurveLength( ::flixel::math::FlxPoint start, ::flixel::math::FlxPoint control, ::flixel::math::FlxPoint finish){
            	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","getCurveLength",0x2a112e3d,"flixel.tweens.motion.QuadPath.getCurveLength","flixel/tweens/motion/QuadPath.hx",201,0x562bb60d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(start,"start")
            	HX_STACK_ARG(control,"control")
            	HX_STACK_ARG(finish,"finish")
HXLINE( 202)		HX_VARI(  ::flixel::math::FlxPoint,point) = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 202)		point->_inPool = false;
HXLINE( 203)		HX_VARI_NAME(  ::flixel::math::FlxPoint,point1,"point") = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 203)		point1->_inPool = false;
HXLINE( 205)		Float _hx_tmp = ((start->x - ((int)2 * control->x)) + finish->x);
HXDLIN( 205)		point->set_x(_hx_tmp);
HXLINE( 206)		Float _hx_tmp1 = ((start->y - ((int)2 * control->y)) + finish->y);
HXDLIN( 206)		point->set_y(_hx_tmp1);
HXLINE( 207)		Float _hx_tmp2 = (((int)2 * control->x) - ((int)2 * start->x));
HXDLIN( 207)		point1->set_x(_hx_tmp2);
HXLINE( 208)		Float _hx_tmp3 = (((int)2 * control->y) - ((int)2 * start->y));
HXDLIN( 208)		point1->set_y(_hx_tmp3);
HXLINE( 209)		HX_VARI( Float,a) = ((int)4 * ((point->x * point->x) + (point->y * point->y)));
HXDLIN( 209)		HX_VARI( Float,b) = ((int)4 * ((point->x * point1->x) + (point->y * point1->y)));
HXDLIN( 209)		HX_VARI( Float,c) = ((point1->x * point1->x) + (point1->y * point1->y));
HXLINE( 212)		Float _hx_tmp4 = ::Math_obj::sqrt(((a + b) + c));
HXLINE( 209)		HX_VARI( Float,abc) = ((int)2 * _hx_tmp4);
HXDLIN( 209)		HX_VARI( Float,a2) = ::Math_obj::sqrt(a);
HXDLIN( 209)		HX_VARI( Float,a32) = (((int)2 * a) * a2);
HXLINE( 215)		Float _hx_tmp5 = ::Math_obj::sqrt(c);
HXLINE( 209)		HX_VARI( Float,c2) = ((int)2 * _hx_tmp5);
HXDLIN( 209)		HX_VARI( Float,ba) = ((Float)b / (Float)a2);
HXLINE( 218)		point->put();
HXLINE( 219)		point1->put();
HXLINE( 221)		Float _hx_tmp6 = ((a32 * abc) + ((a2 * b) * (abc - c2)));
HXDLIN( 221)		Float _hx_tmp7 = ((((int)4 * c) * a) - (b * b));
HXLINE( 222)		Float _hx_tmp8 = ::Math_obj::log(((Float)((((int)2 * a2) + ba) + abc) / (Float)(ba + c2)));
HXLINE( 221)		return ((Float)(_hx_tmp6 + (_hx_tmp7 * _hx_tmp8)) / (Float)((int)4 * a32));
            	}


HX_DEFINE_DYNAMIC_FUNC3(QuadPath_obj,getCurveLength,return )


QuadPath_obj::QuadPath_obj()
{
}

void QuadPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuadPath);
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(_distance,"_distance");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_numSegs,"_numSegs");
	HX_MARK_MEMBER_NAME(_updateCurve,"_updateCurve");
	HX_MARK_MEMBER_NAME(_curveT,"_curveT");
	HX_MARK_MEMBER_NAME(_curveD,"_curveD");
	HX_MARK_MEMBER_NAME(_a,"_a");
	HX_MARK_MEMBER_NAME(_b,"_b");
	HX_MARK_MEMBER_NAME(_c,"_c");
	 ::flixel::tweens::motion::Motion_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QuadPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(_distance,"_distance");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_numSegs,"_numSegs");
	HX_VISIT_MEMBER_NAME(_updateCurve,"_updateCurve");
	HX_VISIT_MEMBER_NAME(_curveT,"_curveT");
	HX_VISIT_MEMBER_NAME(_curveD,"_curveD");
	HX_VISIT_MEMBER_NAME(_a,"_a");
	HX_VISIT_MEMBER_NAME(_b,"_b");
	HX_VISIT_MEMBER_NAME(_c,"_c");
	 ::flixel::tweens::motion::Motion_obj::__Visit(HX_VISIT_ARG);
}

hx::Val QuadPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { return hx::Val( _a); }
		if (HX_FIELD_EQ(inName,"_b") ) { return hx::Val( _b); }
		if (HX_FIELD_EQ(inName,"_c") ) { return hx::Val( _c); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { return hx::Val( _speed); }
		if (HX_FIELD_EQ(inName,"_index") ) { return hx::Val( _index); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { return hx::Val( _points); }
		if (HX_FIELD_EQ(inName,"_curveT") ) { return hx::Val( _curveT); }
		if (HX_FIELD_EQ(inName,"_curveD") ) { return hx::Val( _curveD); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_numSegs") ) { return hx::Val( _numSegs); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return hx::Val( addPoint_dyn()); }
		if (HX_FIELD_EQ(inName,"getPoint") ) { return hx::Val( getPoint_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { return hx::Val( _distance); }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return hx::Val( setMotion_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updatePath") ) { return hx::Val( updatePath_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateCurve") ) { return hx::Val( _updateCurve); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurveLength") ) { return hx::Val( getCurveLength_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val QuadPath_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { _a=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_b") ) { _b=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_c") ) { _c=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< Int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curveT") ) { _curveT=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curveD") ) { _curveD=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_numSegs") ) { _numSegs=inValue.Cast< Int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateCurve") ) { _updateCurve=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_points","\xc2","\x23","\xa5","\x65"));
	outFields->push(HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"));
	outFields->push(HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"));
	outFields->push(HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"));
	outFields->push(HX_HCSTRING("_numSegs","\x25","\x86","\x89","\xd9"));
	outFields->push(HX_HCSTRING("_updateCurve","\xe7","\x63","\xfa","\x99"));
	outFields->push(HX_HCSTRING("_curveT","\x64","\xde","\x61","\xad"));
	outFields->push(HX_HCSTRING("_curveD","\x54","\xde","\x61","\xad"));
	outFields->push(HX_HCSTRING("_a","\x22","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_b","\x23","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_c","\x24","\x53","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo QuadPath_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(QuadPath_obj,_points),HX_HCSTRING("_points","\xc2","\x23","\xa5","\x65")},
	{hx::fsFloat,(int)offsetof(QuadPath_obj,_distance),HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3")},
	{hx::fsFloat,(int)offsetof(QuadPath_obj,_speed),HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d")},
	{hx::fsInt,(int)offsetof(QuadPath_obj,_index),HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9")},
	{hx::fsInt,(int)offsetof(QuadPath_obj,_numSegs),HX_HCSTRING("_numSegs","\x25","\x86","\x89","\xd9")},
	{hx::fsBool,(int)offsetof(QuadPath_obj,_updateCurve),HX_HCSTRING("_updateCurve","\xe7","\x63","\xfa","\x99")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(QuadPath_obj,_curveT),HX_HCSTRING("_curveT","\x64","\xde","\x61","\xad")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(QuadPath_obj,_curveD),HX_HCSTRING("_curveD","\x54","\xde","\x61","\xad")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(QuadPath_obj,_a),HX_HCSTRING("_a","\x22","\x53","\x00","\x00")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(QuadPath_obj,_b),HX_HCSTRING("_b","\x23","\x53","\x00","\x00")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(QuadPath_obj,_c),HX_HCSTRING("_c","\x24","\x53","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *QuadPath_obj_sStaticStorageInfo = 0;
#endif

static ::String QuadPath_obj_sMemberFields[] = {
	HX_HCSTRING("_points","\xc2","\x23","\xa5","\x65"),
	HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"),
	HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"),
	HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"),
	HX_HCSTRING("_numSegs","\x25","\x86","\x89","\xd9"),
	HX_HCSTRING("_updateCurve","\xe7","\x63","\xfa","\x99"),
	HX_HCSTRING("_curveT","\x64","\xde","\x61","\xad"),
	HX_HCSTRING("_curveD","\x54","\xde","\x61","\xad"),
	HX_HCSTRING("_a","\x22","\x53","\x00","\x00"),
	HX_HCSTRING("_b","\x23","\x53","\x00","\x00"),
	HX_HCSTRING("_c","\x24","\x53","\x00","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("addPoint","\x6f","\xda","\xec","\x3f"),
	HX_HCSTRING("getPoint","\xda","\xc3","\x66","\x26"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updatePath","\x4e","\xd0","\x06","\x03"),
	HX_HCSTRING("getCurveLength","\xff","\xd5","\xff","\xc7"),
	::String(null()) };

static void QuadPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void QuadPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadPath_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadPath_obj::__mClass;

void QuadPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.QuadPath","\x70","\x9a","\x74","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = QuadPath_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(QuadPath_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = QuadPath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuadPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuadPath_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
