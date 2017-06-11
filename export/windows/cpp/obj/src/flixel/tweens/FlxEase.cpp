// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif

namespace flixel{
namespace tweens{

void FlxEase_obj::__construct() { }

Dynamic FlxEase_obj::__CreateEmpty() { return new FlxEase_obj; }

hx::ObjectPtr< FlxEase_obj > FlxEase_obj::__new()
{
	hx::ObjectPtr< FlxEase_obj > _hx_result = new FlxEase_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FlxEase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxEase_obj > _hx_result = new FlxEase_obj();
	_hx_result->__construct();
	return _hx_result;
}

Float FlxEase_obj::PI2;

Float FlxEase_obj::EL;

Float FlxEase_obj::B1;

Float FlxEase_obj::B2;

Float FlxEase_obj::B3;

Float FlxEase_obj::B4;

Float FlxEase_obj::B5;

Float FlxEase_obj::B6;

Float FlxEase_obj::ELASTIC_AMPLITUDE;

Float FlxEase_obj::ELASTIC_PERIOD;

Float FlxEase_obj::quadIn(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","quadIn",0xcb7d584e,"flixel.tweens.FlxEase.quadIn","flixel/tweens/FlxEase.hx",33,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  33)		return (t * t);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadIn,return )

Float FlxEase_obj::quadOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","quadOut",0x42348005,"flixel.tweens.FlxEase.quadOut","flixel/tweens/FlxEase.hx",38,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  38)		return (-(t) * (t - (int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadOut,return )

Float FlxEase_obj::quadInOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","quadInOut",0x1f34a4e0,"flixel.tweens.FlxEase.quadInOut","flixel/tweens/FlxEase.hx",43,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  43)		Bool _hx_tmp = (t <= ((Float).5));
HXDLIN(  43)		if (_hx_tmp) {
HXLINE(  43)			return ((t * t) * (int)2);
            		}
            		else {
HXLINE(  43)			Float _hx_tmp1 = --t;
HXDLIN(  43)			return ((int)1 - ((_hx_tmp1 * t) * (int)2));
            		}
HXDLIN(  43)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadInOut,return )

Float FlxEase_obj::cubeIn(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","cubeIn",0x332843fc,"flixel.tweens.FlxEase.cubeIn","flixel/tweens/FlxEase.hx",48,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  48)		return ((t * t) * t);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeIn,return )

Float FlxEase_obj::cubeOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","cubeOut",0x9017cc97,"flixel.tweens.FlxEase.cubeOut","flixel/tweens/FlxEase.hx",53,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  53)		Float _hx_tmp = --t;
HXDLIN(  53)		return ((int)1 + ((_hx_tmp * t) * t));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeOut,return )

Float FlxEase_obj::cubeInOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","cubeInOut",0x25f1b9f2,"flixel.tweens.FlxEase.cubeInOut","flixel/tweens/FlxEase.hx",58,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  58)		Bool _hx_tmp = (t <= ((Float).5));
HXDLIN(  58)		if (_hx_tmp) {
HXLINE(  58)			return (((t * t) * t) * (int)4);
            		}
            		else {
HXLINE(  58)			Float _hx_tmp1 = --t;
HXDLIN(  58)			return ((int)1 + (((_hx_tmp1 * t) * t) * (int)4));
            		}
HXDLIN(  58)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeInOut,return )

Float FlxEase_obj::quartIn(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","quartIn",0x4b9169c2,"flixel.tweens.FlxEase.quartIn","flixel/tweens/FlxEase.hx",63,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  63)		return (((t * t) * t) * t);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartIn,return )

Float FlxEase_obj::quartOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","quartOut",0xd3afb411,"flixel.tweens.FlxEase.quartOut","flixel/tweens/FlxEase.hx",68,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  68)		Float _hx_tmp = --t;
HXDLIN(  68)		return ((int)1 - (((_hx_tmp * t) * t) * t));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartOut,return )

Float FlxEase_obj::quartInOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","quartInOut",0x6cedf3ec,"flixel.tweens.FlxEase.quartInOut","flixel/tweens/FlxEase.hx",73,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  73)		Bool _hx_tmp = (t <= ((Float).5));
HXDLIN(  73)		if (_hx_tmp) {
HXLINE(  73)			return ((((t * t) * t) * t) * (int)8);
            		}
            		else {
HXLINE(  73)			Float _hx_tmp1 = (t * (int)2);
HXDLIN(  73)			t = (_hx_tmp1 - (int)2);
HXDLIN(  73)			return (((Float)((int)1 - (((t * t) * t) * t)) / (Float)(int)2) + ((Float).5));
            		}
HXDLIN(  73)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartInOut,return )

Float FlxEase_obj::quintIn(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","quintIn",0xe421334e,"flixel.tweens.FlxEase.quintIn","flixel/tweens/FlxEase.hx",78,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  78)		return ((((t * t) * t) * t) * t);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quintIn,return )

Float FlxEase_obj::quintOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","quintOut",0xb8f04505,"flixel.tweens.FlxEase.quintOut","flixel/tweens/FlxEase.hx",83,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  83)		Float _hx_tmp = --t;
HXDLIN(  83)		return (((((_hx_tmp * t) * t) * t) * t) + (int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quintOut,return )

Float FlxEase_obj::quintInOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","quintInOut",0x902ba9e0,"flixel.tweens.FlxEase.quintInOut","flixel/tweens/FlxEase.hx",88,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  88)		hx::MultEq(t,(int)2);
HXDLIN(  88)		Bool _hx_tmp = (t < (int)1);
HXDLIN(  88)		if (_hx_tmp) {
HXLINE(  88)			return ((Float)((((t * t) * t) * t) * t) / (Float)(int)2);
            		}
            		else {
HXLINE(  88)			hx::SubEq(t,(int)2);
HXDLIN(  88)			return ((Float)(((((t * t) * t) * t) * t) + (int)2) / (Float)(int)2);
            		}
HXDLIN(  88)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quintInOut,return )

Float FlxEase_obj::sineIn(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","sineIn",0xb7fda354,"flixel.tweens.FlxEase.sineIn","flixel/tweens/FlxEase.hx",93,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  93)		Float _hx_tmp = (::flixel::tweens::FlxEase_obj::PI2 * t);
HXDLIN(  93)		return (-(::Math_obj::cos(_hx_tmp)) + (int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,sineIn,return )

Float FlxEase_obj::sineOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","sineOut",0x45f5da3f,"flixel.tweens.FlxEase.sineOut","flixel/tweens/FlxEase.hx",98,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE(  98)		Float _hx_tmp = (::flixel::tweens::FlxEase_obj::PI2 * t);
HXDLIN(  98)		return ::Math_obj::sin(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,sineOut,return )

Float FlxEase_obj::sineInOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","sineInOut",0x99ac819a,"flixel.tweens.FlxEase.sineInOut","flixel/tweens/FlxEase.hx",103,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 103)		Float _hx_tmp = (::Math_obj::PI * t);
HXDLIN( 103)		Float _hx_tmp1 = ((Float)-(::Math_obj::cos(_hx_tmp)) / (Float)(int)2);
HXDLIN( 103)		return (_hx_tmp1 + ((Float).5));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,sineInOut,return )

Float FlxEase_obj::bounceIn(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","bounceIn",0x26970bcf,"flixel.tweens.FlxEase.bounceIn","flixel/tweens/FlxEase.hx",107,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 108)		t = ((int)1 - t);
HXLINE( 109)		if ((t < ::flixel::tweens::FlxEase_obj::B1)) {
HXLINE( 109)			return ((int)1 - ((((Float)7.5625) * t) * t));
            		}
HXLINE( 110)		if ((t < ::flixel::tweens::FlxEase_obj::B2)) {
HXLINE( 110)			return ((int)1 - (((((Float)7.5625) * (t - ::flixel::tweens::FlxEase_obj::B3)) * (t - ::flixel::tweens::FlxEase_obj::B3)) + ((Float).75)));
            		}
HXLINE( 111)		if ((t < ::flixel::tweens::FlxEase_obj::B4)) {
HXLINE( 111)			return ((int)1 - (((((Float)7.5625) * (t - ::flixel::tweens::FlxEase_obj::B5)) * (t - ::flixel::tweens::FlxEase_obj::B5)) + ((Float).9375)));
            		}
HXLINE( 112)		return ((int)1 - (((((Float)7.5625) * (t - ::flixel::tweens::FlxEase_obj::B6)) * (t - ::flixel::tweens::FlxEase_obj::B6)) + ((Float).984375)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,bounceIn,return )

Float FlxEase_obj::bounceOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","bounceOut",0x9d97dd64,"flixel.tweens.FlxEase.bounceOut","flixel/tweens/FlxEase.hx",116,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 117)		if ((t < ::flixel::tweens::FlxEase_obj::B1)) {
HXLINE( 117)			return ((((Float)7.5625) * t) * t);
            		}
HXLINE( 118)		if ((t < ::flixel::tweens::FlxEase_obj::B2)) {
HXLINE( 118)			return (((((Float)7.5625) * (t - ::flixel::tweens::FlxEase_obj::B3)) * (t - ::flixel::tweens::FlxEase_obj::B3)) + ((Float).75));
            		}
HXLINE( 119)		if ((t < ::flixel::tweens::FlxEase_obj::B4)) {
HXLINE( 119)			return (((((Float)7.5625) * (t - ::flixel::tweens::FlxEase_obj::B5)) * (t - ::flixel::tweens::FlxEase_obj::B5)) + ((Float).9375));
            		}
HXLINE( 120)		return (((((Float)7.5625) * (t - ::flixel::tweens::FlxEase_obj::B6)) * (t - ::flixel::tweens::FlxEase_obj::B6)) + ((Float).984375));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,bounceOut,return )

Float FlxEase_obj::bounceInOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","bounceInOut",0xa03157ff,"flixel.tweens.FlxEase.bounceInOut","flixel/tweens/FlxEase.hx",124,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 125)		Bool _hx_tmp = (t < ((Float).5));
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 127)			Float _hx_tmp1 = (t * (int)2);
HXDLIN( 127)			t = ((int)1 - _hx_tmp1);
HXLINE( 128)			if ((t < ::flixel::tweens::FlxEase_obj::B1)) {
HXLINE( 128)				return ((Float)((int)1 - ((((Float)7.5625) * t) * t)) / (Float)(int)2);
            			}
HXLINE( 129)			if ((t < ::flixel::tweens::FlxEase_obj::B2)) {
HXLINE( 129)				return ((Float)((int)1 - (((((Float)7.5625) * (t - ::flixel::tweens::FlxEase_obj::B3)) * (t - ::flixel::tweens::FlxEase_obj::B3)) + ((Float).75))) / (Float)(int)2);
            			}
HXLINE( 130)			if ((t < ::flixel::tweens::FlxEase_obj::B4)) {
HXLINE( 130)				return ((Float)((int)1 - (((((Float)7.5625) * (t - ::flixel::tweens::FlxEase_obj::B5)) * (t - ::flixel::tweens::FlxEase_obj::B5)) + ((Float).9375))) / (Float)(int)2);
            			}
HXLINE( 131)			return ((Float)((int)1 - (((((Float)7.5625) * (t - ::flixel::tweens::FlxEase_obj::B6)) * (t - ::flixel::tweens::FlxEase_obj::B6)) + ((Float).984375))) / (Float)(int)2);
            		}
HXLINE( 133)		Float _hx_tmp2 = (t * (int)2);
HXDLIN( 133)		t = (_hx_tmp2 - (int)1);
HXLINE( 134)		if ((t < ::flixel::tweens::FlxEase_obj::B1)) {
HXLINE( 134)			return (((Float)((((Float)7.5625) * t) * t) / (Float)(int)2) + ((Float).5));
            		}
HXLINE( 135)		if ((t < ::flixel::tweens::FlxEase_obj::B2)) {
HXLINE( 135)			return (((Float)(((((Float)7.5625) * (t - ::flixel::tweens::FlxEase_obj::B3)) * (t - ::flixel::tweens::FlxEase_obj::B3)) + ((Float).75)) / (Float)(int)2) + ((Float).5));
            		}
HXLINE( 136)		if ((t < ::flixel::tweens::FlxEase_obj::B4)) {
HXLINE( 136)			return (((Float)(((((Float)7.5625) * (t - ::flixel::tweens::FlxEase_obj::B5)) * (t - ::flixel::tweens::FlxEase_obj::B5)) + ((Float).9375)) / (Float)(int)2) + ((Float).5));
            		}
HXLINE( 137)		return (((Float)(((((Float)7.5625) * (t - ::flixel::tweens::FlxEase_obj::B6)) * (t - ::flixel::tweens::FlxEase_obj::B6)) + ((Float).984375)) / (Float)(int)2) + ((Float).5));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,bounceInOut,return )

Float FlxEase_obj::circIn(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","circIn",0x54eb335e,"flixel.tweens.FlxEase.circIn","flixel/tweens/FlxEase.hx",142,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 142)		Float _hx_tmp = ::Math_obj::sqrt(((int)1 - (t * t)));
HXDLIN( 142)		return -((_hx_tmp - (int)1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circIn,return )

Float FlxEase_obj::circOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","circOut",0xf8e652f5,"flixel.tweens.FlxEase.circOut","flixel/tweens/FlxEase.hx",147,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 147)		return ::Math_obj::sqrt(((int)1 - ((t - (int)1) * (t - (int)1))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circOut,return )

Float FlxEase_obj::circInOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","circInOut",0x443513d0,"flixel.tweens.FlxEase.circInOut","flixel/tweens/FlxEase.hx",152,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 152)		if ((t <= ((Float).5))) {
HXLINE( 152)			Float _hx_tmp = ::Math_obj::sqrt(((int)1 - ((t * t) * (int)4)));
HXDLIN( 152)			return ((Float)(_hx_tmp - (int)1) / (Float)(int)-2);
            		}
            		else {
HXLINE( 152)			Float _hx_tmp1 = ::Math_obj::sqrt(((int)1 - (((t * (int)2) - (int)2) * ((t * (int)2) - (int)2))));
HXDLIN( 152)			return ((Float)(_hx_tmp1 + (int)1) / (Float)(int)2);
            		}
HXDLIN( 152)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circInOut,return )

Float FlxEase_obj::expoIn(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","expoIn",0xc35b4d79,"flixel.tweens.FlxEase.expoIn","flixel/tweens/FlxEase.hx",157,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 157)		return ::Math_obj::pow((int)2,((int)10 * (t - (int)1)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoIn,return )

Float FlxEase_obj::expoOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","expoOut",0x2c8d107a,"flixel.tweens.FlxEase.expoOut","flixel/tweens/FlxEase.hx",162,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 162)		return (-(::Math_obj::pow((int)2,((int)-10 * t))) + (int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoOut,return )

Float FlxEase_obj::expoInOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","expoInOut",0xbd29fc95,"flixel.tweens.FlxEase.expoInOut","flixel/tweens/FlxEase.hx",167,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 167)		if ((t < ((Float).5))) {
HXLINE( 167)			Float _hx_tmp = ::Math_obj::pow((int)2,((int)10 * ((t * (int)2) - (int)1)));
HXDLIN( 167)			return ((Float)_hx_tmp / (Float)(int)2);
            		}
            		else {
HXLINE( 167)			Float _hx_tmp1 = (-(::Math_obj::pow((int)2,((int)-10 * ((t * (int)2) - (int)1)))) + (int)2);
HXDLIN( 167)			return ((Float)_hx_tmp1 / (Float)(int)2);
            		}
HXDLIN( 167)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoInOut,return )

Float FlxEase_obj::backIn(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","backIn",0x497711ae,"flixel.tweens.FlxEase.backIn","flixel/tweens/FlxEase.hx",172,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 172)		return ((t * t) * ((((Float)2.70158) * t) - ((Float)1.70158)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,backIn,return )

Float FlxEase_obj::backOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","backOut",0xfebcfaa5,"flixel.tweens.FlxEase.backOut","flixel/tweens/FlxEase.hx",177,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 177)		Float _hx_tmp = --t;
HXDLIN( 177)		return ((int)1 - ((_hx_tmp * t) * ((((Float)-2.70158) * t) - ((Float)1.70158))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,backOut,return )

Float FlxEase_obj::backInOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","backInOut",0x6ac90780,"flixel.tweens.FlxEase.backInOut","flixel/tweens/FlxEase.hx",181,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 182)		hx::MultEq(t,(int)2);
HXLINE( 183)		if ((t < (int)1)) {
HXLINE( 183)			return ((Float)((t * t) * ((((Float)2.70158) * t) - ((Float)1.70158))) / (Float)(int)2);
            		}
HXLINE( 184)		--t;
HXLINE( 185)		Float _hx_tmp = --t;
HXDLIN( 185)		return (((Float)((int)1 - ((_hx_tmp * t) * ((((Float)-2.70158) * t) - ((Float)1.70158)))) / (Float)(int)2) + ((Float).5));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,backInOut,return )

Float FlxEase_obj::elasticIn(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","elasticIn",0xf7740698,"flixel.tweens.FlxEase.elasticIn","flixel/tweens/FlxEase.hx",190,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 190)		Float _hx_tmp = ::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE;
HXDLIN( 190)		Float _hx_tmp1 = --t;
HXDLIN( 190)		Float _hx_tmp2 = ::Math_obj::pow((int)2,((int)10 * _hx_tmp1));
HXDLIN( 190)		Float _hx_tmp3 = (_hx_tmp * _hx_tmp2);
HXDLIN( 190)		Float _hx_tmp4 = ((Float)::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD / (Float)((int)2 * ::Math_obj::PI));
HXDLIN( 190)		Float _hx_tmp5 = ((Float)(int)1 / (Float)::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE);
HXDLIN( 190)		Float _hx_tmp6 = ::Math_obj::asin(_hx_tmp5);
HXDLIN( 190)		Float _hx_tmp7 = ((Float)((t - (_hx_tmp4 * _hx_tmp6)) * ((int)2 * ::Math_obj::PI)) / (Float)::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD);
HXDLIN( 190)		Float _hx_tmp8 = ::Math_obj::sin(_hx_tmp7);
HXDLIN( 190)		return -((_hx_tmp3 * _hx_tmp8));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticIn,return )

Float FlxEase_obj::elasticOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","elasticOut",0x8e16527b,"flixel.tweens.FlxEase.elasticOut","flixel/tweens/FlxEase.hx",195,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 195)		Float _hx_tmp = ::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE;
HXDLIN( 195)		Float _hx_tmp1 = ::Math_obj::pow((int)2,((int)-10 * t));
HXDLIN( 195)		Float _hx_tmp2 = (_hx_tmp * _hx_tmp1);
HXDLIN( 195)		Float _hx_tmp3 = ((Float)::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD / (Float)((int)2 * ::Math_obj::PI));
HXDLIN( 195)		Float _hx_tmp4 = ((Float)(int)1 / (Float)::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE);
HXDLIN( 195)		Float _hx_tmp5 = ::Math_obj::asin(_hx_tmp4);
HXDLIN( 195)		Float _hx_tmp6 = ((Float)((t - (_hx_tmp3 * _hx_tmp5)) * ((int)2 * ::Math_obj::PI)) / (Float)::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD);
HXDLIN( 195)		Float _hx_tmp7 = ::Math_obj::sin(_hx_tmp6);
HXDLIN( 195)		return ((_hx_tmp2 * _hx_tmp7) + (int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticOut,return )

Float FlxEase_obj::elasticInOut(Float t){
            	HX_STACK_FRAME("flixel.tweens.FlxEase","elasticInOut",0x850880d6,"flixel.tweens.FlxEase.elasticInOut","flixel/tweens/FlxEase.hx",199,0x71810bf2)
            	HX_STACK_ARG(t,"t")
HXLINE( 200)		if ((t < ((Float)0.5))) {
HXLINE( 202)			hx::SubEq(t,((Float)0.5));
HXDLIN( 202)			Float _hx_tmp = ::Math_obj::pow((int)2,((int)10 * t));
HXDLIN( 202)			Float _hx_tmp1 = ((Float)((t - ((Float)::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD / (Float)(int)4)) * ((int)2 * ::Math_obj::PI)) / (Float)::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD);
HXDLIN( 202)			Float _hx_tmp2 = ::Math_obj::sin(_hx_tmp1);
HXDLIN( 202)			return (((Float)-0.5) * (_hx_tmp * _hx_tmp2));
            		}
HXLINE( 204)		hx::SubEq(t,((Float)0.5));
HXDLIN( 204)		Float _hx_tmp3 = ::Math_obj::pow((int)2,((int)-10 * t));
HXDLIN( 204)		Float _hx_tmp4 = ((Float)((t - ((Float)::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD / (Float)(int)4)) * ((int)2 * ::Math_obj::PI)) / (Float)::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD);
HXDLIN( 204)		Float _hx_tmp5 = ::Math_obj::sin(_hx_tmp4);
HXDLIN( 204)		return (((_hx_tmp3 * _hx_tmp5) * ((Float)0.5)) + (int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticInOut,return )


FlxEase_obj::FlxEase_obj()
{
}

bool FlxEase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"EL") ) { outValue = EL; return true; }
		if (HX_FIELD_EQ(inName,"B1") ) { outValue = B1; return true; }
		if (HX_FIELD_EQ(inName,"B2") ) { outValue = B2; return true; }
		if (HX_FIELD_EQ(inName,"B3") ) { outValue = B3; return true; }
		if (HX_FIELD_EQ(inName,"B4") ) { outValue = B4; return true; }
		if (HX_FIELD_EQ(inName,"B5") ) { outValue = B5; return true; }
		if (HX_FIELD_EQ(inName,"B6") ) { outValue = B6; return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"PI2") ) { outValue = PI2; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"quadIn") ) { outValue = quadIn_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cubeIn") ) { outValue = cubeIn_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sineIn") ) { outValue = sineIn_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"circIn") ) { outValue = circIn_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"expoIn") ) { outValue = expoIn_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"backIn") ) { outValue = backIn_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quadOut") ) { outValue = quadOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cubeOut") ) { outValue = cubeOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"quartIn") ) { outValue = quartIn_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"quintIn") ) { outValue = quintIn_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sineOut") ) { outValue = sineOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"circOut") ) { outValue = circOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"expoOut") ) { outValue = expoOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"backOut") ) { outValue = backOut_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quartOut") ) { outValue = quartOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"quintOut") ) { outValue = quintOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bounceIn") ) { outValue = bounceIn_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"quadInOut") ) { outValue = quadInOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cubeInOut") ) { outValue = cubeInOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sineInOut") ) { outValue = sineInOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bounceOut") ) { outValue = bounceOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"circInOut") ) { outValue = circInOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"expoInOut") ) { outValue = expoInOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"backInOut") ) { outValue = backInOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"elasticIn") ) { outValue = elasticIn_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quartInOut") ) { outValue = quartInOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"quintInOut") ) { outValue = quintInOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"elasticOut") ) { outValue = elasticOut_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounceInOut") ) { outValue = bounceInOut_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elasticInOut") ) { outValue = elasticInOut_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ELASTIC_PERIOD") ) { outValue = ELASTIC_PERIOD; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ELASTIC_AMPLITUDE") ) { outValue = ELASTIC_AMPLITUDE; return true; }
	}
	return false;
}

bool FlxEase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"EL") ) { EL=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"B1") ) { B1=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"B2") ) { B2=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"B3") ) { B3=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"B4") ) { B4=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"B5") ) { B5=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"B6") ) { B6=ioValue.Cast< Float >(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"PI2") ) { PI2=ioValue.Cast< Float >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ELASTIC_PERIOD") ) { ELASTIC_PERIOD=ioValue.Cast< Float >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ELASTIC_AMPLITUDE") ) { ELASTIC_AMPLITUDE=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxEase_obj_sMemberStorageInfo = 0;
static hx::StaticInfo FlxEase_obj_sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &FlxEase_obj::PI2,HX_HCSTRING("PI2","\x19","\xf4","\x3c","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::EL,HX_HCSTRING("EL","\x67","\x3c","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::B1,HX_HCSTRING("B1","\xaf","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::B2,HX_HCSTRING("B2","\xb0","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::B3,HX_HCSTRING("B3","\xb1","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::B4,HX_HCSTRING("B4","\xb2","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::B5,HX_HCSTRING("B5","\xb3","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::B6,HX_HCSTRING("B6","\xb4","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::ELASTIC_AMPLITUDE,HX_HCSTRING("ELASTIC_AMPLITUDE","\xd9","\xea","\x04","\x7e")},
	{hx::fsFloat,(void *) &FlxEase_obj::ELASTIC_PERIOD,HX_HCSTRING("ELASTIC_PERIOD","\x8b","\x99","\x23","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FlxEase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxEase_obj::PI2,"PI2");
	HX_MARK_MEMBER_NAME(FlxEase_obj::EL,"EL");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B1,"B1");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B2,"B2");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B3,"B3");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B4,"B4");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B5,"B5");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B6,"B6");
	HX_MARK_MEMBER_NAME(FlxEase_obj::ELASTIC_AMPLITUDE,"ELASTIC_AMPLITUDE");
	HX_MARK_MEMBER_NAME(FlxEase_obj::ELASTIC_PERIOD,"ELASTIC_PERIOD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxEase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::PI2,"PI2");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::EL,"EL");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B1,"B1");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B2,"B2");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B3,"B3");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B4,"B4");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B5,"B5");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B6,"B6");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::ELASTIC_AMPLITUDE,"ELASTIC_AMPLITUDE");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::ELASTIC_PERIOD,"ELASTIC_PERIOD");
};

#endif

hx::Class FlxEase_obj::__mClass;

static ::String FlxEase_obj_sStaticFields[] = {
	HX_HCSTRING("PI2","\x19","\xf4","\x3c","\x00"),
	HX_HCSTRING("EL","\x67","\x3c","\x00","\x00"),
	HX_HCSTRING("B1","\xaf","\x39","\x00","\x00"),
	HX_HCSTRING("B2","\xb0","\x39","\x00","\x00"),
	HX_HCSTRING("B3","\xb1","\x39","\x00","\x00"),
	HX_HCSTRING("B4","\xb2","\x39","\x00","\x00"),
	HX_HCSTRING("B5","\xb3","\x39","\x00","\x00"),
	HX_HCSTRING("B6","\xb4","\x39","\x00","\x00"),
	HX_HCSTRING("ELASTIC_AMPLITUDE","\xd9","\xea","\x04","\x7e"),
	HX_HCSTRING("ELASTIC_PERIOD","\x8b","\x99","\x23","\x3b"),
	HX_HCSTRING("quadIn","\x8c","\x78","\x9f","\xcc"),
	HX_HCSTRING("quadOut","\x07","\x96","\xee","\x3e"),
	HX_HCSTRING("quadInOut","\x62","\xbf","\x21","\x4f"),
	HX_HCSTRING("cubeIn","\x3a","\x64","\x4a","\x34"),
	HX_HCSTRING("cubeOut","\x99","\xe2","\xd1","\x8c"),
	HX_HCSTRING("cubeInOut","\x74","\xd4","\xde","\x55"),
	HX_HCSTRING("quartIn","\xc4","\x7f","\x4b","\x48"),
	HX_HCSTRING("quartOut","\xcf","\xdf","\xc8","\xf9"),
	HX_HCSTRING("quartInOut","\x2a","\x0b","\x78","\x2c"),
	HX_HCSTRING("quintIn","\x50","\x49","\xdb","\xe0"),
	HX_HCSTRING("quintOut","\xc3","\x70","\x09","\xdf"),
	HX_HCSTRING("quintInOut","\x1e","\xc1","\xb5","\x4f"),
	HX_HCSTRING("sineIn","\x92","\xc3","\x1f","\xb9"),
	HX_HCSTRING("sineOut","\x41","\xf0","\xaf","\x42"),
	HX_HCSTRING("sineInOut","\x1c","\x9c","\x99","\xc9"),
	HX_HCSTRING("bounceIn","\x8d","\x37","\xb0","\x4c"),
	HX_HCSTRING("bounceOut","\xe6","\xf7","\x84","\xcd"),
	HX_HCSTRING("bounceInOut","\x01","\x97","\x7b","\x79"),
	HX_HCSTRING("circIn","\x9c","\x53","\x0d","\x56"),
	HX_HCSTRING("circOut","\xf7","\x68","\xa0","\xf5"),
	HX_HCSTRING("circInOut","\x52","\x2e","\x22","\x74"),
	HX_HCSTRING("expoIn","\xb7","\x6d","\x7d","\xc4"),
	HX_HCSTRING("expoOut","\x7c","\x26","\x47","\x29"),
	HX_HCSTRING("expoInOut","\x17","\x17","\x17","\xed"),
	HX_HCSTRING("backIn","\xec","\x31","\x99","\x4a"),
	HX_HCSTRING("backOut","\xa7","\x10","\x77","\xfb"),
	HX_HCSTRING("backInOut","\x02","\x22","\xb6","\x9a"),
	HX_HCSTRING("elasticIn","\x1a","\x21","\x61","\x27"),
	HX_HCSTRING("elasticOut","\xb9","\x69","\xa0","\x4d"),
	HX_HCSTRING("elasticInOut","\x94","\x63","\xb5","\xcc"),
	::String(null())
};

void FlxEase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.FlxEase","\x6c","\x1c","\xe1","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxEase_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxEase_obj::__SetStatic;
	__mClass->mMarkFunc = FlxEase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxEase_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxEase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxEase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxEase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxEase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxEase_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.tweens.FlxEase","boot",0xecae8f74,"flixel.tweens.FlxEase.boot","flixel/tweens/FlxEase.hx",20,0x71810bf2)
HXLINE(  20)		PI2 = ((Float)::Math_obj::PI / (Float)(int)2);
            	}
{
            	HX_STACK_FRAME("flixel.tweens.FlxEase","boot",0xecae8f74,"flixel.tweens.FlxEase.boot","flixel/tweens/FlxEase.hx",21,0x71810bf2)
HXLINE(  21)		EL = ((Float)((int)2 * ::Math_obj::PI) / (Float)((Float).45));
            	}
{
            	HX_STACK_FRAME("flixel.tweens.FlxEase","boot",0xecae8f74,"flixel.tweens.FlxEase.boot","flixel/tweens/FlxEase.hx",22,0x71810bf2)
HXLINE(  22)		B1 = ((Float)0.36363636363636365);
            	}
{
            	HX_STACK_FRAME("flixel.tweens.FlxEase","boot",0xecae8f74,"flixel.tweens.FlxEase.boot","flixel/tweens/FlxEase.hx",23,0x71810bf2)
HXLINE(  23)		B2 = ((Float)0.72727272727272729);
            	}
{
            	HX_STACK_FRAME("flixel.tweens.FlxEase","boot",0xecae8f74,"flixel.tweens.FlxEase.boot","flixel/tweens/FlxEase.hx",24,0x71810bf2)
HXLINE(  24)		B3 = ((Float)0.54545454545454541);
            	}
{
            	HX_STACK_FRAME("flixel.tweens.FlxEase","boot",0xecae8f74,"flixel.tweens.FlxEase.boot","flixel/tweens/FlxEase.hx",25,0x71810bf2)
HXLINE(  25)		B4 = ((Float)0.90909090909090906);
            	}
{
            	HX_STACK_FRAME("flixel.tweens.FlxEase","boot",0xecae8f74,"flixel.tweens.FlxEase.boot","flixel/tweens/FlxEase.hx",26,0x71810bf2)
HXLINE(  26)		B5 = ((Float)0.81818181818181823);
            	}
{
            	HX_STACK_FRAME("flixel.tweens.FlxEase","boot",0xecae8f74,"flixel.tweens.FlxEase.boot","flixel/tweens/FlxEase.hx",27,0x71810bf2)
HXLINE(  27)		B6 = ((Float)0.95454545454545459);
            	}
{
            	HX_STACK_FRAME("flixel.tweens.FlxEase","boot",0xecae8f74,"flixel.tweens.FlxEase.boot","flixel/tweens/FlxEase.hx",28,0x71810bf2)
HXLINE(  28)		ELASTIC_AMPLITUDE = ((Float)1);
            	}
{
            	HX_STACK_FRAME("flixel.tweens.FlxEase","boot",0xecae8f74,"flixel.tweens.FlxEase.boot","flixel/tweens/FlxEase.hx",29,0x71810bf2)
HXLINE(  29)		ELASTIC_PERIOD = ((Float)0.4);
            	}
}

} // end namespace flixel
} // end namespace tweens
