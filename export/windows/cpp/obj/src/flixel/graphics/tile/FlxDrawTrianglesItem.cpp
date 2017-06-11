// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem
#include <flixel/graphics/tile/FlxDrawTrianglesItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_TriangleCulling
#include <openfl/_legacy/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif

namespace flixel{
namespace graphics{
namespace tile{

void FlxDrawTrianglesItem_obj::__construct(){
            	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","new",0x8669d929,"flixel.graphics.tile.FlxDrawTrianglesItem.new","flixel/graphics/tile/FlxDrawTrianglesItem.hx",24,0x6492a666)
            	HX_STACK_THIS(this)
HXLINE(  38)		Float X = (int)0;
HXDLIN(  38)		Float Y = (int)0;
HXDLIN(  38)		Float Width = (int)0;
HXDLIN(  38)		Float Height = (int)0;
HXDLIN(  38)		HX_VARI(  ::flixel::math::FlxRect,_this) = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  38)		_this->x = X;
HXDLIN(  38)		_this->y = Y;
HXDLIN(  38)		_this->width = Width;
HXDLIN(  38)		_this->height = Height;
HXDLIN(  38)		_this->_inPool = false;
HXDLIN(  38)		this->bounds = _this;
HXLINE(  36)		this->colorsPosition = (int)0;
HXLINE(  35)		this->indicesPosition = (int)0;
HXLINE(  34)		this->verticesPosition = (int)0;
HXLINE(  32)		this->colors = ::Array_obj< Int >::__new();
HXLINE(  31)		this->uvtData = ::Array_obj< Float >::__new();
HXLINE(  30)		this->indices = ::Array_obj< Int >::__new();
HXLINE(  29)		this->vertices = ::Array_obj< Float >::__new();
HXLINE(  42)		super::__construct();
HXLINE(  43)		this->type = ::flixel::graphics::tile::FlxDrawItemType_obj::TRIANGLES_dyn();
            	}

Dynamic FlxDrawTrianglesItem_obj::__CreateEmpty() { return new FlxDrawTrianglesItem_obj; }

hx::ObjectPtr< FlxDrawTrianglesItem_obj > FlxDrawTrianglesItem_obj::__new()
{
	hx::ObjectPtr< FlxDrawTrianglesItem_obj > _hx_result = new FlxDrawTrianglesItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FlxDrawTrianglesItem_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxDrawTrianglesItem_obj > _hx_result = new FlxDrawTrianglesItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

void FlxDrawTrianglesItem_obj::render( ::flixel::FlxCamera camera){
            	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","render",0xbf64462d,"flixel.graphics.tile.FlxDrawTrianglesItem.render","flixel/graphics/tile/FlxDrawTrianglesItem.hx",47,0x6492a666)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(camera,"camera")
HXLINE(  48)		if (!(::flixel::FlxG_obj::renderTile)) {
HXLINE(  49)			return;
            		}
HXLINE(  51)		Int _hx_tmp = this->get_numTriangles();
HXDLIN(  51)		if ((_hx_tmp <= (int)0)) {
HXLINE(  52)			return;
            		}
HXLINE(  54)		Bool _hx_tmp1;
HXDLIN(  54)		if (!(camera->antialiasing)) {
HXLINE(  54)			_hx_tmp1 = this->antialiasing;
            		}
            		else {
HXLINE(  54)			_hx_tmp1 = true;
            		}
HXDLIN(  54)		camera->canvas->get_graphics()->beginBitmapFill(this->graphics->bitmap,null(),true,_hx_tmp1);
HXLINE(  58)		::Array< Int > _hx_tmp2;
HXDLIN(  58)		if (this->colored) {
HXLINE(  58)			_hx_tmp2 = this->colors;
            		}
            		else {
HXLINE(  58)			_hx_tmp2 = null();
            		}
HXDLIN(  58)		camera->canvas->get_graphics()->drawTriangles(this->vertices,this->indices,this->uvtData,::openfl::_legacy::display::TriangleCulling_obj::NONE_dyn(),_hx_tmp2,this->blending);
HXLINE(  60)		camera->canvas->get_graphics()->endFill();
HXLINE(  62)		Bool _hx_tmp3 = ::flixel::FlxG_obj::debugger->drawDebug;
HXDLIN(  62)		if (_hx_tmp3) {
HXLINE(  64)			HX_VARI(  ::openfl::_legacy::display::Graphics,gfx) = camera->debugLayer->get_graphics();
HXLINE(  65)			gfx->lineStyle((int)1,(int)-16776961,((Float)0.5),null(),null(),null(),null(),null());
HXLINE(  66)			gfx->drawTriangles(this->vertices,this->indices,null(),null(),null(),null());
            		}
HXLINE(  70)		::flixel::graphics::tile::FlxTilesheet_obj::_DRAWCALLS++;
            	}


void FlxDrawTrianglesItem_obj::reset(){
            	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","reset",0xa508d6d8,"flixel.graphics.tile.FlxDrawTrianglesItem.reset","flixel/graphics/tile/FlxDrawTrianglesItem.hx",74,0x6492a666)
            	HX_STACK_THIS(this)
HXLINE(  75)		this->super::reset();
HXLINE(  76)		this->vertices->removeRange((int)0,this->vertices->length);
HXLINE(  77)		this->indices->removeRange((int)0,this->indices->length);
HXLINE(  78)		this->uvtData->removeRange((int)0,this->uvtData->length);
HXLINE(  79)		this->colors->removeRange((int)0,this->colors->length);
HXLINE(  81)		this->verticesPosition = (int)0;
HXLINE(  82)		this->indicesPosition = (int)0;
HXLINE(  83)		this->colorsPosition = (int)0;
            	}


void FlxDrawTrianglesItem_obj::dispose(){
            	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","dispose",0xf49121e8,"flixel.graphics.tile.FlxDrawTrianglesItem.dispose","flixel/graphics/tile/FlxDrawTrianglesItem.hx",87,0x6492a666)
            	HX_STACK_THIS(this)
HXLINE(  88)		this->super::dispose();
HXLINE(  90)		this->vertices = null();
HXLINE(  91)		this->indices = null();
HXLINE(  92)		this->uvtData = null();
HXLINE(  93)		this->colors = null();
HXLINE(  94)		this->bounds = null();
            	}


void FlxDrawTrianglesItem_obj::addTriangles(::Array< Float > vertices,::Array< Int > indices,::Array< Float > uvtData,::Array< Int > colors, ::flixel::math::FlxPoint position, ::flixel::math::FlxRect cameraBounds){
            	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","addTriangles",0xd3f66861,"flixel.graphics.tile.FlxDrawTrianglesItem.addTriangles","flixel/graphics/tile/FlxDrawTrianglesItem.hx",98,0x6492a666)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(vertices,"vertices")
            	HX_STACK_ARG(indices,"indices")
            	HX_STACK_ARG(uvtData,"uvtData")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(position,"position")
            	HX_STACK_ARG(cameraBounds,"cameraBounds")
HXLINE(  99)		Bool _hx_tmp = hx::IsNull( position );
HXDLIN(  99)		if (_hx_tmp) {
HXLINE( 100)			position = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::point->set(null(),null());
            		}
HXLINE( 102)		Bool _hx_tmp1 = hx::IsNull( cameraBounds );
HXDLIN( 102)		if (_hx_tmp1) {
HXLINE( 103)			HX_VARI(  ::flixel::math::FlxRect,_this) = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::rect;
HXDLIN( 103)			Float Width = ::flixel::FlxG_obj::width;
HXDLIN( 103)			Float Height = ::flixel::FlxG_obj::height;
HXDLIN( 103)			_this->x = (int)0;
HXDLIN( 103)			_this->y = (int)0;
HXDLIN( 103)			_this->width = Width;
HXDLIN( 103)			_this->height = Height;
HXDLIN( 103)			cameraBounds = _this;
            		}
HXLINE( 105)		HX_VARI( Int,verticesLength) = vertices->length;
HXLINE( 106)		HX_VARI( Int,prevVerticesLength) = this->vertices->length;
HXLINE( 107)		HX_VARI( Int,numberOfVertices) = ::Std_obj::_hx_int(((Float)verticesLength / (Float)(int)2));
HXLINE( 108)		HX_VARI( Int,prevIndicesLength) = this->indices->length;
HXLINE( 109)		HX_VARI( Int,prevUVTDataLength) = this->uvtData->length;
HXLINE( 110)		HX_VARI( Int,prevColorsLength) = this->colors->length;
HXLINE( 111)		HX_VARI( Int,prevNumberOfVertices) = this->get_numVertices();
HXLINE( 113)		HX_VAR( Float,tempX);
HXDLIN( 113)		HX_VAR( Float,tempY);
HXLINE( 114)		HX_VARI( Int,i) = (int)0;
HXLINE( 115)		HX_VARI( Int,currentVertexPosition) = prevVerticesLength;
HXLINE( 117)		while((i < verticesLength)){
HXLINE( 119)			tempX = (position->x + vertices->__get(i));
HXLINE( 120)			tempY = (position->y + vertices->__get((i + (int)1)));
HXLINE( 122)			Int _hx_tmp2 = currentVertexPosition++;
HXDLIN( 122)			this->vertices[_hx_tmp2] = tempX;
HXLINE( 123)			Int _hx_tmp3 = currentVertexPosition++;
HXDLIN( 123)			this->vertices[_hx_tmp3] = tempY;
HXLINE( 125)			if ((i == (int)0)) {
HXLINE( 127)				HX_VARI_NAME(  ::flixel::math::FlxRect,_this1,"_this") = this->bounds;
HXDLIN( 127)				_this1->x = tempX;
HXDLIN( 127)				_this1->y = tempY;
HXDLIN( 127)				_this1->width = (int)0;
HXDLIN( 127)				_this1->height = (int)0;
            			}
            			else {
HXLINE( 131)				HX_VARI(  ::flixel::math::FlxRect,bounds) = this->bounds;
HXDLIN( 131)				Bool _hx_tmp4 = (tempX < bounds->x);
HXDLIN( 131)				if (_hx_tmp4) {
HXLINE( 131)					hx::AddEq(bounds->width,(bounds->x - tempX));
HXDLIN( 131)					bounds->x = tempX;
            				}
HXDLIN( 131)				Bool _hx_tmp5 = (tempY < bounds->y);
HXDLIN( 131)				if (_hx_tmp5) {
HXLINE( 131)					hx::AddEq(bounds->height,(bounds->y - tempY));
HXDLIN( 131)					bounds->y = tempY;
            				}
HXDLIN( 131)				Bool _hx_tmp6 = (tempX > (bounds->x + bounds->width));
HXDLIN( 131)				if (_hx_tmp6) {
HXLINE( 131)					bounds->width = (tempX - bounds->x);
            				}
HXDLIN( 131)				Bool _hx_tmp7 = (tempY > (bounds->y + bounds->height));
HXDLIN( 131)				if (_hx_tmp7) {
HXLINE( 131)					bounds->height = (tempY - bounds->y);
            				}
            			}
HXLINE( 134)			hx::AddEq(i,(int)2);
            		}
HXLINE( 137)		HX_VARI(  ::flixel::math::FlxRect,Rect) = this->bounds;
HXDLIN( 137)		HX_VAR( Bool,result);
HXDLIN( 137)		Bool _hx_tmp8;
HXDLIN( 137)		Bool _hx_tmp9;
HXDLIN( 137)		if (((Rect->x + Rect->width) > cameraBounds->x)) {
HXLINE( 137)			_hx_tmp9 = (Rect->x < (cameraBounds->x + cameraBounds->width));
            		}
            		else {
HXLINE( 137)			_hx_tmp9 = false;
            		}
HXDLIN( 137)		if (_hx_tmp9) {
HXLINE( 137)			_hx_tmp8 = ((Rect->y + Rect->height) > cameraBounds->y);
            		}
            		else {
HXLINE( 137)			_hx_tmp8 = false;
            		}
HXDLIN( 137)		if (_hx_tmp8) {
HXLINE( 137)			result = (Rect->y < (cameraBounds->y + cameraBounds->height));
            		}
            		else {
HXLINE( 137)			result = false;
            		}
HXDLIN( 137)		Bool _hx_tmp10 = Rect->_weak;
HXDLIN( 137)		if (_hx_tmp10) {
HXLINE( 137)			Bool _hx_tmp11 = !(Rect->_inPool);
HXDLIN( 137)			if (_hx_tmp11) {
HXLINE( 137)				Rect->_inPool = true;
HXDLIN( 137)				Rect->_weak = false;
HXDLIN( 137)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXDLIN( 137)		if (!(result)) {
HXLINE( 139)			Int _hx_tmp12 = (this->vertices->length - verticesLength);
HXDLIN( 139)			this->vertices->removeRange(_hx_tmp12,verticesLength);
            		}
            		else {
HXLINE( 143)			HX_VARI( Int,uvtDataLength) = uvtData->length;
HXLINE( 144)			{
HXLINE( 144)				HX_VARI( Int,_g1) = (int)0;
HXDLIN( 144)				while((_g1 < uvtDataLength)){
HXLINE( 144)					HX_VARI_NAME( Int,i1,"i") = _g1++;
HXLINE( 146)					Int _hx_tmp13 = (prevUVTDataLength + i1);
HXDLIN( 146)					Float _hx_tmp14 = uvtData->__get(i1);
HXDLIN( 146)					this->uvtData[_hx_tmp13] = _hx_tmp14;
            				}
            			}
HXLINE( 149)			HX_VARI( Int,indicesLength) = indices->length;
HXLINE( 150)			{
HXLINE( 150)				HX_VARI_NAME( Int,_g11,"_g1") = (int)0;
HXDLIN( 150)				while((_g11 < indicesLength)){
HXLINE( 150)					HX_VARI_NAME( Int,i2,"i") = _g11++;
HXLINE( 152)					Int _hx_tmp15 = (prevIndicesLength + i2);
HXDLIN( 152)					Int _hx_tmp16 = (indices->__get(i2) + prevNumberOfVertices);
HXDLIN( 152)					this->indices[_hx_tmp15] = _hx_tmp16;
            				}
            			}
HXLINE( 155)			Bool _hx_tmp17 = this->colored;
HXDLIN( 155)			if (_hx_tmp17) {
HXLINE( 157)				{
HXLINE( 157)					HX_VARI_NAME( Int,_g12,"_g1") = (int)0;
HXDLIN( 157)					while((_g12 < numberOfVertices)){
HXLINE( 157)						HX_VARI_NAME( Int,i3,"i") = _g12++;
HXLINE( 159)						Int _hx_tmp18 = (prevColorsLength + i3);
HXDLIN( 159)						Int _hx_tmp19 = colors->__get(i3);
HXDLIN( 159)						this->colors[_hx_tmp18] = _hx_tmp19;
            					}
            				}
HXLINE( 162)				hx::AddEq(this->colorsPosition,numberOfVertices);
            			}
HXLINE( 165)			hx::AddEq(this->verticesPosition,verticesLength);
HXLINE( 166)			hx::AddEq(this->indicesPosition,indicesLength);
            		}
HXLINE( 169)		Bool _hx_tmp20 = position->_weak;
HXDLIN( 169)		if (_hx_tmp20) {
HXLINE( 169)			position->put();
            		}
HXLINE( 170)		Bool _hx_tmp21 = cameraBounds->_weak;
HXDLIN( 170)		if (_hx_tmp21) {
HXLINE( 170)			Bool _hx_tmp22 = !(cameraBounds->_inPool);
HXDLIN( 170)			if (_hx_tmp22) {
HXLINE( 170)				cameraBounds->_inPool = true;
HXDLIN( 170)				cameraBounds->_weak = false;
HXDLIN( 170)				::flixel::math::FlxRect_obj::_pool->putUnsafe(cameraBounds);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxDrawTrianglesItem_obj,addTriangles,(void))

void FlxDrawTrianglesItem_obj::addQuad( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxMatrix matrix, ::openfl::_legacy::geom::ColorTransform transform){
            	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","addQuad",0xc08c1cd1,"flixel.graphics.tile.FlxDrawTrianglesItem.addQuad","flixel/graphics/tile/FlxDrawTrianglesItem.hx",201,0x6492a666)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(frame,"frame")
            	HX_STACK_ARG(matrix,"matrix")
            	HX_STACK_ARG(transform,"transform")
HXLINE( 202)		HX_VARI( Int,prevVerticesPos) = this->verticesPosition;
HXLINE( 203)		HX_VARI( Int,prevIndicesPos) = this->indicesPosition;
HXLINE( 204)		HX_VARI( Int,prevColorsPos) = this->colorsPosition;
HXLINE( 205)		HX_VARI( Int,prevNumberOfVertices) = this->get_numVertices();
HXLINE( 207)		HX_VARI(  ::flixel::math::FlxPoint,point) = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN( 207)		point->_inPool = false;
HXLINE( 208)		{
HXLINE( 208)			HX_VARI( Float,x1) = (((point->x * matrix->a) + (point->y * matrix->c)) + matrix->tx);
HXDLIN( 208)			HX_VARI( Float,y1) = (((point->x * matrix->b) + (point->y * matrix->d)) + matrix->ty);
HXDLIN( 208)			point->set(x1,y1);
            		}
HXLINE( 210)		this->vertices[prevVerticesPos] = point->x;
HXLINE( 211)		this->vertices[(prevVerticesPos + (int)1)] = point->y;
HXLINE( 213)		this->uvtData[prevVerticesPos] = frame->uv->x;
HXLINE( 214)		this->uvtData[(prevVerticesPos + (int)1)] = frame->uv->y;
HXLINE( 216)		point->set(frame->frame->width,(int)0);
HXLINE( 217)		{
HXLINE( 217)			HX_VARI_NAME( Float,x11,"x1") = (((point->x * matrix->a) + (point->y * matrix->c)) + matrix->tx);
HXDLIN( 217)			HX_VARI_NAME( Float,y11,"y1") = (((point->x * matrix->b) + (point->y * matrix->d)) + matrix->ty);
HXDLIN( 217)			point->set(x11,y11);
            		}
HXLINE( 219)		this->vertices[(prevVerticesPos + (int)2)] = point->x;
HXLINE( 220)		this->vertices[(prevVerticesPos + (int)3)] = point->y;
HXLINE( 222)		this->uvtData[(prevVerticesPos + (int)2)] = frame->uv->width;
HXLINE( 223)		this->uvtData[(prevVerticesPos + (int)3)] = frame->uv->y;
HXLINE( 225)		point->set(frame->frame->width,frame->frame->height);
HXLINE( 226)		{
HXLINE( 226)			HX_VARI_NAME( Float,x12,"x1") = (((point->x * matrix->a) + (point->y * matrix->c)) + matrix->tx);
HXDLIN( 226)			HX_VARI_NAME( Float,y12,"y1") = (((point->x * matrix->b) + (point->y * matrix->d)) + matrix->ty);
HXDLIN( 226)			point->set(x12,y12);
            		}
HXLINE( 228)		this->vertices[(prevVerticesPos + (int)4)] = point->x;
HXLINE( 229)		this->vertices[(prevVerticesPos + (int)5)] = point->y;
HXLINE( 231)		this->uvtData[(prevVerticesPos + (int)4)] = frame->uv->width;
HXLINE( 232)		this->uvtData[(prevVerticesPos + (int)5)] = frame->uv->height;
HXLINE( 234)		point->set((int)0,frame->frame->height);
HXLINE( 235)		{
HXLINE( 235)			HX_VARI_NAME( Float,x13,"x1") = (((point->x * matrix->a) + (point->y * matrix->c)) + matrix->tx);
HXDLIN( 235)			HX_VARI_NAME( Float,y13,"y1") = (((point->x * matrix->b) + (point->y * matrix->d)) + matrix->ty);
HXDLIN( 235)			point->set(x13,y13);
            		}
HXLINE( 237)		this->vertices[(prevVerticesPos + (int)6)] = point->x;
HXLINE( 238)		this->vertices[(prevVerticesPos + (int)7)] = point->y;
HXLINE( 240)		point->put();
HXLINE( 242)		this->uvtData[(prevVerticesPos + (int)6)] = frame->uv->x;
HXLINE( 243)		this->uvtData[(prevVerticesPos + (int)7)] = frame->uv->height;
HXLINE( 245)		this->indices[prevIndicesPos] = prevNumberOfVertices;
HXLINE( 246)		this->indices[(prevIndicesPos + (int)1)] = (prevNumberOfVertices + (int)1);
HXLINE( 247)		this->indices[(prevIndicesPos + (int)2)] = (prevNumberOfVertices + (int)2);
HXLINE( 248)		this->indices[(prevIndicesPos + (int)3)] = (prevNumberOfVertices + (int)2);
HXLINE( 249)		this->indices[(prevIndicesPos + (int)4)] = (prevNumberOfVertices + (int)3);
HXLINE( 250)		this->indices[(prevIndicesPos + (int)5)] = prevNumberOfVertices;
HXLINE( 252)		Bool _hx_tmp = this->colored;
HXDLIN( 252)		if (_hx_tmp) {
HXLINE( 254)			HX_VARI( Float,red) = ((Float)1.0);
HXLINE( 255)			HX_VARI( Float,green) = ((Float)1.0);
HXLINE( 256)			HX_VARI( Float,blue) = ((Float)1.0);
HXLINE( 257)			HX_VARI( Float,alpha) = ((Float)1.0);
HXLINE( 259)			Bool _hx_tmp1 = hx::IsNotNull( transform );
HXDLIN( 259)			if (_hx_tmp1) {
HXLINE( 261)				red = transform->redMultiplier;
HXLINE( 262)				green = transform->greenMultiplier;
HXLINE( 263)				blue = transform->blueMultiplier;
HXLINE( 266)				alpha = transform->alphaMultiplier;
            			}
HXLINE( 270)			HX_VARI( Int,color) = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 270)			{
HXLINE( 270)				HX_VARI( Int,Value) = ::Math_obj::round((red * (int)255));
HXDLIN( 270)				hx::AndEq(color,(int)-16711681);
HXDLIN( 270)				Int _hx_tmp2;
HXDLIN( 270)				if ((Value > (int)255)) {
HXLINE( 270)					_hx_tmp2 = (int)255;
            				}
            				else {
HXLINE( 270)					if ((Value < (int)0)) {
HXLINE( 270)						_hx_tmp2 = (int)0;
            					}
            					else {
HXLINE( 270)						_hx_tmp2 = Value;
            					}
            				}
HXDLIN( 270)				hx::OrEq(color,((int)_hx_tmp2 << (int)(int)16));
            			}
HXDLIN( 270)			{
HXLINE( 270)				HX_VARI_NAME( Int,Value1,"Value") = ::Math_obj::round((green * (int)255));
HXDLIN( 270)				hx::AndEq(color,(int)-65281);
HXDLIN( 270)				Int _hx_tmp3;
HXDLIN( 270)				if ((Value1 > (int)255)) {
HXLINE( 270)					_hx_tmp3 = (int)255;
            				}
            				else {
HXLINE( 270)					if ((Value1 < (int)0)) {
HXLINE( 270)						_hx_tmp3 = (int)0;
            					}
            					else {
HXLINE( 270)						_hx_tmp3 = Value1;
            					}
            				}
HXDLIN( 270)				hx::OrEq(color,((int)_hx_tmp3 << (int)(int)8));
            			}
HXDLIN( 270)			{
HXLINE( 270)				HX_VARI_NAME( Int,Value2,"Value") = ::Math_obj::round((blue * (int)255));
HXDLIN( 270)				hx::AndEq(color,(int)-256);
HXDLIN( 270)				Int _hx_tmp4;
HXDLIN( 270)				if ((Value2 > (int)255)) {
HXLINE( 270)					_hx_tmp4 = (int)255;
            				}
            				else {
HXLINE( 270)					if ((Value2 < (int)0)) {
HXLINE( 270)						_hx_tmp4 = (int)0;
            					}
            					else {
HXLINE( 270)						_hx_tmp4 = Value2;
            					}
            				}
HXDLIN( 270)				hx::OrEq(color,_hx_tmp4);
            			}
HXDLIN( 270)			{
HXLINE( 270)				HX_VARI_NAME( Int,Value3,"Value") = ::Math_obj::round((alpha * (int)255));
HXDLIN( 270)				hx::AndEq(color,(int)16777215);
HXDLIN( 270)				Int _hx_tmp5;
HXDLIN( 270)				if ((Value3 > (int)255)) {
HXLINE( 270)					_hx_tmp5 = (int)255;
            				}
            				else {
HXLINE( 270)					if ((Value3 < (int)0)) {
HXLINE( 270)						_hx_tmp5 = (int)0;
            					}
            					else {
HXLINE( 270)						_hx_tmp5 = Value3;
            					}
            				}
HXDLIN( 270)				hx::OrEq(color,((int)_hx_tmp5 << (int)(int)24));
            			}
HXDLIN( 270)			HX_VARI_NAME( Int,color1,"color") = color;
HXLINE( 272)			this->colors[prevColorsPos] = color1;
HXLINE( 273)			this->colors[(prevColorsPos + (int)1)] = color1;
HXLINE( 274)			this->colors[(prevColorsPos + (int)2)] = color1;
HXLINE( 275)			this->colors[(prevColorsPos + (int)3)] = color1;
HXLINE( 277)			hx::AddEq(this->colorsPosition,(int)4);
            		}
HXLINE( 280)		hx::AddEq(this->verticesPosition,(int)8);
HXLINE( 281)		hx::AddEq(this->indicesPosition,(int)6);
            	}


Int FlxDrawTrianglesItem_obj::get_numVertices(){
            	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","get_numVertices",0x2e325a3f,"flixel.graphics.tile.FlxDrawTrianglesItem.get_numVertices","flixel/graphics/tile/FlxDrawTrianglesItem.hx",286,0x6492a666)
            	HX_STACK_THIS(this)
HXLINE( 286)		Float _hx_tmp = ((Float)this->vertices->length / (Float)(int)2);
HXDLIN( 286)		return ::Std_obj::_hx_int(_hx_tmp);
            	}


Int FlxDrawTrianglesItem_obj::get_numTriangles(){
            	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","get_numTriangles",0x542b93a5,"flixel.graphics.tile.FlxDrawTrianglesItem.get_numTriangles","flixel/graphics/tile/FlxDrawTrianglesItem.hx",291,0x6492a666)
            	HX_STACK_THIS(this)
HXLINE( 291)		Float _hx_tmp = ((Float)this->indices->length / (Float)(int)3);
HXDLIN( 291)		return ::Std_obj::_hx_int(_hx_tmp);
            	}


 ::flixel::math::FlxPoint FlxDrawTrianglesItem_obj::point;

 ::flixel::math::FlxRect FlxDrawTrianglesItem_obj::rect;

 ::flixel::math::FlxRect FlxDrawTrianglesItem_obj::inflateBounds( ::flixel::math::FlxRect bounds,Float x,Float y){
            	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","inflateBounds",0x8ece7465,"flixel.graphics.tile.FlxDrawTrianglesItem.inflateBounds","flixel/graphics/tile/FlxDrawTrianglesItem.hx",174,0x6492a666)
            	HX_STACK_ARG(bounds,"bounds")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE( 175)		Bool _hx_tmp = (x < bounds->x);
HXDLIN( 175)		if (_hx_tmp) {
HXLINE( 177)			hx::AddEq(bounds->width,(bounds->x - x));
HXLINE( 178)			bounds->x = x;
            		}
HXLINE( 181)		Bool _hx_tmp1 = (y < bounds->y);
HXDLIN( 181)		if (_hx_tmp1) {
HXLINE( 183)			hx::AddEq(bounds->height,(bounds->y - y));
HXLINE( 184)			bounds->y = y;
            		}
HXLINE( 187)		Bool _hx_tmp2 = (x > (bounds->x + bounds->width));
HXDLIN( 187)		if (_hx_tmp2) {
HXLINE( 189)			bounds->width = (x - bounds->x);
            		}
HXLINE( 192)		Bool _hx_tmp3 = (y > (bounds->y + bounds->height));
HXDLIN( 192)		if (_hx_tmp3) {
HXLINE( 194)			bounds->height = (y - bounds->y);
            		}
HXLINE( 197)		return bounds;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxDrawTrianglesItem_obj,inflateBounds,return )


FlxDrawTrianglesItem_obj::FlxDrawTrianglesItem_obj()
{
}

void FlxDrawTrianglesItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawTrianglesItem);
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(uvtData,"uvtData");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(verticesPosition,"verticesPosition");
	HX_MARK_MEMBER_NAME(indicesPosition,"indicesPosition");
	HX_MARK_MEMBER_NAME(colorsPosition,"colorsPosition");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	 ::flixel::graphics::tile::FlxDrawBaseItem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDrawTrianglesItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(uvtData,"uvtData");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(verticesPosition,"verticesPosition");
	HX_VISIT_MEMBER_NAME(indicesPosition,"indicesPosition");
	HX_VISIT_MEMBER_NAME(colorsPosition,"colorsPosition");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	 ::flixel::graphics::tile::FlxDrawBaseItem_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxDrawTrianglesItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { return hx::Val( colors); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return hx::Val( bounds); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return hx::Val( indices); }
		if (HX_FIELD_EQ(inName,"uvtData") ) { return hx::Val( uvtData); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn()); }
		if (HX_FIELD_EQ(inName,"addQuad") ) { return hx::Val( addQuad_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return hx::Val( vertices); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addTriangles") ) { return hx::Val( addTriangles_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorsPosition") ) { return hx::Val( colorsPosition); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indicesPosition") ) { return hx::Val( indicesPosition); }
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return hx::Val( get_numVertices_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"verticesPosition") ) { return hx::Val( verticesPosition); }
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return hx::Val( get_numTriangles_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxDrawTrianglesItem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { outValue = rect; return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { outValue = point; return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inflateBounds") ) { outValue = inflateBounds_dyn(); return true; }
	}
	return false;
}

hx::Val FlxDrawTrianglesItem_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::Array< Int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< ::Array< Int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvtData") ) { uvtData=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorsPosition") ) { colorsPosition=inValue.Cast< Int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indicesPosition") ) { indicesPosition=inValue.Cast< Int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"verticesPosition") ) { verticesPosition=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxDrawTrianglesItem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
	}
	return false;
}

void FlxDrawTrianglesItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("uvtData","\xbd","\xa6","\x23","\x27"));
	outFields->push(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("verticesPosition","\xc2","\x3d","\xe8","\xf5"));
	outFields->push(HX_HCSTRING("indicesPosition","\xf0","\xa2","\xe6","\x12"));
	outFields->push(HX_HCSTRING("colorsPosition","\x79","\x52","\xf8","\x2c"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxDrawTrianglesItem_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,vertices),HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,uvtData),HX_HCSTRING("uvtData","\xbd","\xa6","\x23","\x27")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,colors),HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")},
	{hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,verticesPosition),HX_HCSTRING("verticesPosition","\xc2","\x3d","\xe8","\xf5")},
	{hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,indicesPosition),HX_HCSTRING("indicesPosition","\xf0","\xa2","\xe6","\x12")},
	{hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,colorsPosition),HX_HCSTRING("colorsPosition","\x79","\x52","\xf8","\x2c")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxDrawTrianglesItem_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxDrawTrianglesItem_obj::point,HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxDrawTrianglesItem_obj::rect,HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxDrawTrianglesItem_obj_sMemberFields[] = {
	HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"),
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("uvtData","\xbd","\xa6","\x23","\x27"),
	HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"),
	HX_HCSTRING("verticesPosition","\xc2","\x3d","\xe8","\xf5"),
	HX_HCSTRING("indicesPosition","\xf0","\xa2","\xe6","\x12"),
	HX_HCSTRING("colorsPosition","\x79","\x52","\xf8","\x2c"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("addTriangles","\x4a","\x52","\x95","\x7e"),
	HX_HCSTRING("addQuad","\x88","\x7b","\x47","\x87"),
	HX_HCSTRING("get_numVertices","\xf6","\xc7","\x0d","\x17"),
	HX_HCSTRING("get_numTriangles","\x0e","\x26","\x50","\x2b"),
	::String(null()) };

static void FlxDrawTrianglesItem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::point,"point");
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::rect,"rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDrawTrianglesItem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::point,"point");
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::rect,"rect");
};

#endif

hx::Class FlxDrawTrianglesItem_obj::__mClass;

static ::String FlxDrawTrianglesItem_obj_sStaticFields[] = {
	HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("inflateBounds","\x5c","\x36","\x3c","\x2f"),
	::String(null())
};

void FlxDrawTrianglesItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.tile.FlxDrawTrianglesItem","\xb7","\x10","\x12","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDrawTrianglesItem_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxDrawTrianglesItem_obj::__SetStatic;
	__mClass->mMarkFunc = FlxDrawTrianglesItem_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxDrawTrianglesItem_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxDrawTrianglesItem_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxDrawTrianglesItem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDrawTrianglesItem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDrawTrianglesItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDrawTrianglesItem_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxDrawTrianglesItem_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","boot",0x0e4d2b49,"flixel.graphics.tile.FlxDrawTrianglesItem.boot","flixel/graphics/tile/FlxDrawTrianglesItem.hx",26,0x6492a666)
HXLINE(  26)		HX_VARI(  ::flixel::math::FlxPoint,point) = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  26)		point->_inPool = false;
HXDLIN(  26)		point = point;
            	}
{
            	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","boot",0x0e4d2b49,"flixel.graphics.tile.FlxDrawTrianglesItem.boot","flixel/graphics/tile/FlxDrawTrianglesItem.hx",27,0x6492a666)
HXLINE(  27)		Float X = (int)0;
HXDLIN(  27)		Float Y = (int)0;
HXDLIN(  27)		Float Width = (int)0;
HXDLIN(  27)		Float Height = (int)0;
HXDLIN(  27)		HX_VARI(  ::flixel::math::FlxRect,_this) = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  27)		_this->x = X;
HXDLIN(  27)		_this->y = Y;
HXDLIN(  27)		_this->width = Width;
HXDLIN(  27)		_this->height = Height;
HXDLIN(  27)		_this->_inPool = false;
HXDLIN(  27)		rect = _this;
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
