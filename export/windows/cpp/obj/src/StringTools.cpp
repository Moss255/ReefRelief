// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "cpp/Pointer.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

static const Int _hx_array_data_11[] = {
	(Int)32,(Int)40,(Int)41,(Int)37,(Int)33,(Int)94,(Int)34,(Int)60,(Int)62,(Int)38,(Int)124,(Int)10,(Int)13,
};

void StringTools_obj::__construct() { }

Dynamic StringTools_obj::__CreateEmpty() { return new StringTools_obj; }

hx::ObjectPtr< StringTools_obj > StringTools_obj::__new()
{
	hx::ObjectPtr< StringTools_obj > _hx_result = new StringTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringTools_obj > _hx_result = new StringTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

::String StringTools_obj::urlEncode(::String s){
            	HX_STACK_FRAME("StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",45,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
HXLINE(  45)		return ( (::String)(s.__URLEncode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::urlDecode(::String s){
            	HX_STACK_FRAME("StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",115,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
HXLINE( 115)		return ( (::String)(s.__URLDecode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

::String StringTools_obj::htmlEscape(::String s, ::Dynamic quotes){
            	HX_STACK_FRAME("StringTools","htmlEscape",0x0e1a5dd0,"StringTools.htmlEscape","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",153,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(quotes,"quotes")
HXLINE( 154)		s = s.split(HX_("&",26,00,00,00))->join(HX_("&amp;",dd,d4,aa,21)).split(HX_("<",3c,00,00,00))->join(HX_("&lt;",4d,74,70,19)).split(HX_(">",3e,00,00,00))->join(HX_("&gt;",08,a9,6c,19));
HXLINE( 155)		if (quotes) {
HXLINE( 155)			return s.split(HX_("\"",22,00,00,00))->join(HX_("&quot;",2c,d9,81,8f)).split(HX_("'",27,00,00,00))->join(HX_("&#039;",62,26,77,78));
            		}
            		else {
HXLINE( 155)			return s;
            		}
HXDLIN( 155)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,htmlEscape,return )

::String StringTools_obj::htmlUnescape(::String s){
            	HX_STACK_FRAME("StringTools","htmlUnescape",0x7457fea9,"StringTools.htmlUnescape","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",173,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
HXLINE( 173)		return s.split(HX_("&gt;",08,a9,6c,19))->join(HX_(">",3e,00,00,00)).split(HX_("&lt;",4d,74,70,19))->join(HX_("<",3c,00,00,00)).split(HX_("&quot;",2c,d9,81,8f))->join(HX_("\"",22,00,00,00)).split(HX_("&#039;",62,26,77,78))->join(HX_("'",27,00,00,00)).split(HX_("&amp;",dd,d4,aa,21))->join(HX_("&",26,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,htmlUnescape,return )

Bool StringTools_obj::startsWith(::String s,::String start){
            	HX_STACK_FRAME("StringTools","startsWith",0x5f4e6efb,"StringTools.startsWith","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",183,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(start,"start")
HXLINE( 189)		if ((s.length < start.length)) {
HXLINE( 190)			return false;
            		}
HXLINE( 191)		HX_VARI( ::cpp::Pointer< char >,p0) = ::cpp::Pointer_obj::fromPointer(s.__s);
HXLINE( 192)		HX_VARI( ::cpp::Pointer< char >,p1) = ::cpp::Pointer_obj::fromPointer(start.__s);
HXLINE( 193)		{
HXLINE( 193)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 193)			HX_VARI( Int,_g) = start.length;
HXDLIN( 193)			while((_g1 < _g)){
HXLINE( 193)				HX_VARI( Int,i) = _g1++;
HXLINE( 194)				char & _hx_tmp = p0->at(i);
HXDLIN( 194)				char & _hx_tmp1 = p1->at(i);
HXDLIN( 194)				if (hx::IsNotEq( _hx_tmp,_hx_tmp1 )) {
HXLINE( 195)					return false;
            				}
            			}
            		}
HXLINE( 196)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,startsWith,return )

Bool StringTools_obj::endsWith(::String s,::String end){
            	HX_STACK_FRAME("StringTools","endsWith",0x0eb5bfe2,"StringTools.endsWith","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",211,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(end,"end")
HXLINE( 217)		if ((s.length < end.length)) {
HXLINE( 218)			return false;
            		}
HXLINE( 219)		::cpp::Pointer< char > _hx_tmp = ::cpp::Pointer_obj::fromPointer(s.__s);
HXDLIN( 219)		Int _hx_tmp1 = (s.length - end.length);
HXDLIN( 219)		HX_VARI( ::cpp::Pointer< char >,p0) = _hx_tmp->add(_hx_tmp1);
HXLINE( 220)		HX_VARI( ::cpp::Pointer< char >,p1) = ::cpp::Pointer_obj::fromPointer(end.__s);
HXLINE( 221)		{
HXLINE( 221)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 221)			HX_VARI( Int,_g) = end.length;
HXDLIN( 221)			while((_g1 < _g)){
HXLINE( 221)				HX_VARI( Int,i) = _g1++;
HXLINE( 222)				char & _hx_tmp2 = p0->at(i);
HXDLIN( 222)				char & _hx_tmp3 = p1->at(i);
HXDLIN( 222)				if (hx::IsNotEq( _hx_tmp2,_hx_tmp3 )) {
HXLINE( 223)					return false;
            				}
            			}
            		}
HXLINE( 224)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,endsWith,return )

Bool StringTools_obj::isSpace(::String s,Int pos){
            	HX_STACK_FRAME("StringTools","isSpace",0xe0290778,"StringTools.isSpace","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",245,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(pos,"pos")
HXLINE( 249)		HX_VARI(  ::Dynamic,c) = s.charCodeAt(pos);
HXLINE( 250)		Bool _hx_tmp;
HXDLIN( 250)		if (hx::IsGreater( c,(int)8 )) {
HXLINE( 250)			_hx_tmp = hx::IsLess( c,(int)14 );
            		}
            		else {
HXLINE( 250)			_hx_tmp = false;
            		}
HXDLIN( 250)		if (!(_hx_tmp)) {
HXLINE( 250)			return hx::IsEq( c,(int)32 );
            		}
            		else {
HXLINE( 250)			return true;
            		}
HXDLIN( 250)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim(::String s){
            	HX_STACK_FRAME("StringTools","ltrim",0x24d2234a,"StringTools.ltrim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",262,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
HXLINE( 266)		HX_VARI( Int,l) = s.length;
HXLINE( 267)		HX_VARI( Int,r) = (int)0;
HXLINE( 268)		while(true){
HXLINE( 268)			Bool _hx_tmp;
HXDLIN( 268)			if ((r < l)) {
HXLINE( 268)				_hx_tmp = ::StringTools_obj::isSpace(s,r);
            			}
            			else {
HXLINE( 268)				_hx_tmp = false;
            			}
HXDLIN( 268)			if (!(_hx_tmp)) {
HXLINE( 268)				goto _hx_goto_2;
            			}
HXLINE( 269)			++r;
            		}
            		_hx_goto_2:;
HXLINE( 271)		if ((r > (int)0)) {
HXLINE( 272)			return s.substr(r,(l - r));
            		}
            		else {
HXLINE( 274)			return s;
            		}
HXLINE( 271)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim(::String s){
            	HX_STACK_FRAME("StringTools","rtrim",0x99399e50,"StringTools.rtrim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",287,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
HXLINE( 291)		HX_VARI( Int,l) = s.length;
HXLINE( 292)		HX_VARI( Int,r) = (int)0;
HXLINE( 293)		while(true){
HXLINE( 293)			Bool _hx_tmp;
HXDLIN( 293)			if ((r < l)) {
HXLINE( 293)				_hx_tmp = ::StringTools_obj::isSpace(s,((l - r) - (int)1));
            			}
            			else {
HXLINE( 293)				_hx_tmp = false;
            			}
HXDLIN( 293)			if (!(_hx_tmp)) {
HXLINE( 293)				goto _hx_goto_3;
            			}
HXLINE( 294)			++r;
            		}
            		_hx_goto_3:;
HXLINE( 296)		if ((r > (int)0)) {
HXLINE( 297)			return s.substr((int)0,(l - r));
            		}
            		else {
HXLINE( 299)			return s;
            		}
HXLINE( 296)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::trim(::String s){
            	HX_STACK_FRAME("StringTools","trim",0x2908d066,"StringTools.trim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",315,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
HXLINE( 315)		::String _hx_tmp = ::StringTools_obj::rtrim(s);
HXDLIN( 315)		return ::StringTools_obj::ltrim(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,trim,return )

::String StringTools_obj::lpad(::String s,::String c,Int l){
            	HX_STACK_FRAME("StringTools","lpad",0x23bd8feb,"StringTools.lpad","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",331,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(l,"l")
HXLINE( 332)		if ((c.length <= (int)0)) {
HXLINE( 333)			return s;
            		}
HXLINE( 335)		while((s.length < l)){
HXLINE( 336)			s = (c + s);
            		}
HXLINE( 338)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,lpad,return )

::String StringTools_obj::rpad(::String s,::String c,Int l){
            	HX_STACK_FRAME("StringTools","rpad",0x27b4d7a5,"StringTools.rpad","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",353,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(l,"l")
HXLINE( 354)		if ((c.length <= (int)0)) {
HXLINE( 355)			return s;
            		}
HXLINE( 357)		while((s.length < l)){
HXLINE( 358)			hx::AddEq(s,c);
            		}
HXLINE( 360)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,rpad,return )

::String StringTools_obj::replace(::String s,::String sub,::String by){
            	HX_STACK_FRAME("StringTools","replace",0x6d651f30,"StringTools.replace","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",386,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(sub,"sub")
            	HX_STACK_ARG(by,"by")
HXLINE( 386)		return s.split(sub)->join(by);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,replace,return )

::String StringTools_obj::hex(Int n, ::Dynamic digits){
            	HX_STACK_FRAME("StringTools","hex",0xd91debd7,"StringTools.hex","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",396,0xb9dbeb2d)
            	HX_STACK_ARG(n,"n")
            	HX_STACK_ARG(digits,"digits")
HXLINE( 402)		HX_VARI( ::String,s) = HX_("",00,00,00,00);
HXLINE( 404)		while(true){
HXLINE( 405)			::String _hx_tmp = HX_("0123456789ABCDEF",68,2a,58,a2).charAt(((int)n & (int)(int)15));
HXDLIN( 405)			s = (_hx_tmp + s);
HXLINE( 406)			hx::UShrEq(n,(int)4);
HXLINE( 404)			if (!((n > (int)0))) {
HXLINE( 404)				goto _hx_goto_6;
            			}
            		}
            		_hx_goto_6:;
HXLINE( 417)		Bool _hx_tmp1 = hx::IsNotNull( digits );
HXDLIN( 417)		if (_hx_tmp1) {
HXLINE( 418)			while(hx::IsLess( s.length,digits )){
HXLINE( 419)				s = (HX_("0",30,00,00,00) + s);
            			}
            		}
HXLINE( 421)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,hex,return )

Int StringTools_obj::fastCodeAt(::String s,Int index){
            	HX_STACK_FRAME("StringTools","fastCodeAt",0x6fd011c0,"StringTools.fastCodeAt","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",442,0xb9dbeb2d)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(index,"index")
HXLINE( 442)		return s.cca(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,fastCodeAt,return )

Bool StringTools_obj::isEof(Int c){
            	HX_STACK_FRAME("StringTools","isEof",0x69d30eee,"StringTools.isEof","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",467,0xb9dbeb2d)
            	HX_STACK_ARG(c,"c")
HXLINE( 467)		return (c == (int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,isEof,return )

::String StringTools_obj::quoteUnixArg(::String argument){
            	HX_STACK_FRAME("StringTools","quoteUnixArg",0xc59dac56,"StringTools.quoteUnixArg","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",488,0xb9dbeb2d)
            	HX_STACK_ARG(argument,"argument")
HXLINE( 492)		if ((argument == HX_("",00,00,00,00))) {
HXLINE( 493)			return HX_("''",20,22,00,00);
            		}
HXLINE( 495)		Bool _hx_tmp = !( ::EReg_obj::__new(HX_("[^a-zA-Z0-9_@%+=:,./-]",80,28,a0,8d),HX_("",00,00,00,00))->match(argument));
HXDLIN( 495)		if (_hx_tmp) {
HXLINE( 496)			return argument;
            		}
HXLINE( 500)		::String _hx_tmp1 = ::StringTools_obj::replace(argument,HX_("'",27,00,00,00),HX_("'\"'\"'",71,96,37,8b));
HXDLIN( 500)		return ((HX_("'",27,00,00,00) + _hx_tmp1) + HX_("'",27,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,quoteUnixArg,return )

::Array< Int > StringTools_obj::winMetaCharacters;

::String StringTools_obj::quoteWinArg(::String argument,Bool escapeMetaCharacters){
            	HX_STACK_FRAME("StringTools","quoteWinArg",0x7e16b8f2,"StringTools.quoteWinArg","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",521,0xb9dbeb2d)
            	HX_STACK_ARG(argument,"argument")
            	HX_STACK_ARG(escapeMetaCharacters,"escapeMetaCharacters")
HXLINE( 523)		Bool _hx_tmp = !( ::EReg_obj::__new(HX_("^[^ \t\\\\\"]+$",fe,85,ca,95),HX_("",00,00,00,00))->match(argument));
HXDLIN( 523)		if (_hx_tmp) {
HXLINE( 528)			HX_VARI(  ::StringBuf,result) =  ::StringBuf_obj::__new();
HXLINE( 529)			HX_VAR( Bool,needquote);
HXDLIN( 529)			Bool _hx_tmp1;
HXDLIN( 529)			Int _hx_tmp2 = argument.indexOf(HX_(" ",20,00,00,00),null());
HXDLIN( 529)			if ((_hx_tmp2 == (int)-1)) {
HXLINE( 529)				Int _hx_tmp3 = argument.indexOf(HX_("\t",09,00,00,00),null());
HXDLIN( 529)				_hx_tmp1 = (_hx_tmp3 != (int)-1);
            			}
            			else {
HXLINE( 529)				_hx_tmp1 = true;
            			}
HXDLIN( 529)			if (!(_hx_tmp1)) {
HXLINE( 529)				needquote = (argument == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 529)				needquote = true;
            			}
HXLINE( 531)			if (needquote) {
HXLINE( 532)				Bool _hx_tmp4 = hx::IsNotNull( result->charBuf );
HXDLIN( 532)				if (_hx_tmp4) {
HXLINE( 532)					result->flush();
            				}
HXDLIN( 532)				result->b->push(HX_("\"",22,00,00,00));
            			}
HXLINE( 534)			HX_VARI(  ::StringBuf,bs_buf) =  ::StringBuf_obj::__new();
HXLINE( 535)			{
HXLINE( 535)				HX_VARI( Int,_g1) = (int)0;
HXDLIN( 535)				HX_VARI( Int,_g) = argument.length;
HXDLIN( 535)				while((_g1 < _g)){
HXLINE( 535)					HX_VARI( Int,i) = _g1++;
HXLINE( 536)					{
HXLINE( 536)						HX_VARI(  ::Dynamic,_g2) = argument.charCodeAt(i);
HXDLIN( 536)						Bool _hx_tmp5 = hx::IsNull( _g2 );
HXDLIN( 536)						if (_hx_tmp5) {
HXLINE( 549)							Int _hx_tmp6 = bs_buf->get_length();
HXDLIN( 549)							if ((_hx_tmp6 > (int)0)) {
HXLINE( 550)								{
HXLINE( 550)									Bool _hx_tmp7 = hx::IsNotNull( bs_buf->charBuf );
HXDLIN( 550)									if (_hx_tmp7) {
HXLINE( 550)										bs_buf->flush();
            									}
HXDLIN( 550)									::String x = bs_buf->b->join(HX_("",00,00,00,00));
HXDLIN( 550)									Bool _hx_tmp8 = hx::IsNotNull( result->charBuf );
HXDLIN( 550)									if (_hx_tmp8) {
HXLINE( 550)										result->flush();
            									}
HXDLIN( 550)									::String _hx_tmp9 = ::Std_obj::string(x);
HXDLIN( 550)									result->b->push(_hx_tmp9);
            								}
HXLINE( 551)								bs_buf =  ::StringBuf_obj::__new();
            							}
HXLINE( 553)							{
HXLINE( 553)								Int c = _g2;
HXDLIN( 553)								Bool _hx_tmp10 = hx::IsNull( result->charBuf );
HXDLIN( 553)								if (_hx_tmp10) {
HXLINE( 553)									result->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 553)								result->charBuf->push(c);
            							}
            						}
            						else {
HXLINE( 536)							 ::Dynamic _hx_switch_0 = _g2;
            							if (  (_hx_switch_0==(int)34) ){
HXLINE( 542)								Bool _hx_tmp11 = hx::IsNotNull( bs_buf->charBuf );
HXDLIN( 542)								if (_hx_tmp11) {
HXLINE( 542)									bs_buf->flush();
            								}
HXDLIN( 542)								HX_VARI( ::String,bs) = bs_buf->b->join(HX_("",00,00,00,00));
HXLINE( 543)								{
HXLINE( 543)									Bool _hx_tmp12 = hx::IsNotNull( result->charBuf );
HXDLIN( 543)									if (_hx_tmp12) {
HXLINE( 543)										result->flush();
            									}
HXDLIN( 543)									::String _hx_tmp13 = ::Std_obj::string(bs);
HXDLIN( 543)									result->b->push(_hx_tmp13);
            								}
HXLINE( 544)								{
HXLINE( 544)									Bool _hx_tmp14 = hx::IsNotNull( result->charBuf );
HXDLIN( 544)									if (_hx_tmp14) {
HXLINE( 544)										result->flush();
            									}
HXDLIN( 544)									::String _hx_tmp15 = ::Std_obj::string(bs);
HXDLIN( 544)									result->b->push(_hx_tmp15);
            								}
HXLINE( 545)								bs_buf =  ::StringBuf_obj::__new();
HXLINE( 546)								{
HXLINE( 546)									Bool _hx_tmp16 = hx::IsNotNull( result->charBuf );
HXDLIN( 546)									if (_hx_tmp16) {
HXLINE( 546)										result->flush();
            									}
HXDLIN( 546)									result->b->push(HX_("\\\"",46,50,00,00));
            								}
HXLINE( 540)								goto _hx_goto_9;
            							}
            							if (  (_hx_switch_0==(int)92) ){
HXLINE( 539)								Bool _hx_tmp17 = hx::IsNotNull( bs_buf->charBuf );
HXDLIN( 539)								if (_hx_tmp17) {
HXLINE( 539)									bs_buf->flush();
            								}
HXDLIN( 539)								bs_buf->b->push(HX_("\\",5c,00,00,00));
HXDLIN( 539)								goto _hx_goto_9;
            							}
            							/* default */{
HXLINE( 549)								Int _hx_tmp18 = bs_buf->get_length();
HXDLIN( 549)								if ((_hx_tmp18 > (int)0)) {
HXLINE( 550)									{
HXLINE( 550)										Bool _hx_tmp19 = hx::IsNotNull( bs_buf->charBuf );
HXDLIN( 550)										if (_hx_tmp19) {
HXLINE( 550)											bs_buf->flush();
            										}
HXDLIN( 550)										::String x1 = bs_buf->b->join(HX_("",00,00,00,00));
HXDLIN( 550)										Bool _hx_tmp20 = hx::IsNotNull( result->charBuf );
HXDLIN( 550)										if (_hx_tmp20) {
HXLINE( 550)											result->flush();
            										}
HXDLIN( 550)										::String _hx_tmp21 = ::Std_obj::string(x1);
HXDLIN( 550)										result->b->push(_hx_tmp21);
            									}
HXLINE( 551)									bs_buf =  ::StringBuf_obj::__new();
            								}
HXLINE( 553)								{
HXLINE( 553)									Int c1 = _g2;
HXDLIN( 553)									Bool _hx_tmp22 = hx::IsNull( result->charBuf );
HXDLIN( 553)									if (_hx_tmp22) {
HXLINE( 553)										result->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 553)									result->charBuf->push(c1);
            								}
            							}
            							_hx_goto_9:;
            						}
            					}
            				}
            			}
HXLINE( 558)			{
HXLINE( 558)				Bool _hx_tmp23 = hx::IsNotNull( bs_buf->charBuf );
HXDLIN( 558)				if (_hx_tmp23) {
HXLINE( 558)					bs_buf->flush();
            				}
HXDLIN( 558)				::String x2 = bs_buf->b->join(HX_("",00,00,00,00));
HXDLIN( 558)				Bool _hx_tmp24 = hx::IsNotNull( result->charBuf );
HXDLIN( 558)				if (_hx_tmp24) {
HXLINE( 558)					result->flush();
            				}
HXDLIN( 558)				::String _hx_tmp25 = ::Std_obj::string(x2);
HXDLIN( 558)				result->b->push(_hx_tmp25);
            			}
HXLINE( 560)			if (needquote) {
HXLINE( 561)				{
HXLINE( 561)					Bool _hx_tmp26 = hx::IsNotNull( bs_buf->charBuf );
HXDLIN( 561)					if (_hx_tmp26) {
HXLINE( 561)						bs_buf->flush();
            					}
HXDLIN( 561)					::String x3 = bs_buf->b->join(HX_("",00,00,00,00));
HXDLIN( 561)					Bool _hx_tmp27 = hx::IsNotNull( result->charBuf );
HXDLIN( 561)					if (_hx_tmp27) {
HXLINE( 561)						result->flush();
            					}
HXDLIN( 561)					::String _hx_tmp28 = ::Std_obj::string(x3);
HXDLIN( 561)					result->b->push(_hx_tmp28);
            				}
HXLINE( 562)				{
HXLINE( 562)					Bool _hx_tmp29 = hx::IsNotNull( result->charBuf );
HXDLIN( 562)					if (_hx_tmp29) {
HXLINE( 562)						result->flush();
            					}
HXDLIN( 562)					result->b->push(HX_("\"",22,00,00,00));
            				}
            			}
HXLINE( 565)			Bool _hx_tmp30 = hx::IsNotNull( result->charBuf );
HXDLIN( 565)			if (_hx_tmp30) {
HXLINE( 565)				result->flush();
            			}
HXDLIN( 565)			argument = result->b->join(HX_("",00,00,00,00));
            		}
HXLINE( 568)		if (escapeMetaCharacters) {
HXLINE( 569)			HX_VARI_NAME(  ::StringBuf,result1,"result") =  ::StringBuf_obj::__new();
HXLINE( 570)			{
HXLINE( 570)				HX_VARI_NAME( Int,_g11,"_g1") = (int)0;
HXDLIN( 570)				HX_VARI_NAME( Int,_g3,"_g") = argument.length;
HXDLIN( 570)				while((_g11 < _g3)){
HXLINE( 570)					HX_VARI_NAME( Int,i1,"i") = _g11++;
HXLINE( 571)					HX_VARI_NAME(  ::Dynamic,c2,"c") = argument.charCodeAt(i1);
HXLINE( 572)					Int _hx_tmp31 = ::StringTools_obj::winMetaCharacters->indexOf(c2,null());
HXDLIN( 572)					if ((_hx_tmp31 >= (int)0)) {
HXLINE( 573)						Bool _hx_tmp32 = hx::IsNull( result1->charBuf );
HXDLIN( 573)						if (_hx_tmp32) {
HXLINE( 573)							result1->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 573)						result1->charBuf->push((int)94);
            					}
HXLINE( 575)					{
HXLINE( 575)						Int c3 = c2;
HXDLIN( 575)						Bool _hx_tmp33 = hx::IsNull( result1->charBuf );
HXDLIN( 575)						if (_hx_tmp33) {
HXLINE( 575)							result1->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 575)						result1->charBuf->push(c3);
            					}
            				}
            			}
HXLINE( 577)			Bool _hx_tmp34 = hx::IsNotNull( result1->charBuf );
HXDLIN( 577)			if (_hx_tmp34) {
HXLINE( 577)				result1->flush();
            			}
HXDLIN( 577)			return result1->b->join(HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 579)			return argument;
            		}
HXLINE( 568)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,quoteWinArg,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { outValue = hex_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lpad") ) { outValue = lpad_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rpad") ) { outValue = rpad_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { outValue = ltrim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rtrim") ) { outValue = rtrim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isEof") ) { outValue = isEof_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { outValue = isSpace_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"replace") ) { outValue = replace_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { outValue = endsWith_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { outValue = urlEncode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"urlDecode") ) { outValue = urlDecode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"htmlEscape") ) { outValue = htmlEscape_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"startsWith") ) { outValue = startsWith_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fastCodeAt") ) { outValue = fastCodeAt_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"quoteWinArg") ) { outValue = quoteWinArg_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"htmlUnescape") ) { outValue = htmlUnescape_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"quoteUnixArg") ) { outValue = quoteUnixArg_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"winMetaCharacters") ) { outValue = winMetaCharacters; return true; }
	}
	return false;
}

bool StringTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"winMetaCharacters") ) { winMetaCharacters=ioValue.Cast< ::Array< Int > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StringTools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo StringTools_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(void *) &StringTools_obj::winMetaCharacters,HX_HCSTRING("winMetaCharacters","\x0b","\x65","\xcd","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void StringTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StringTools_obj::winMetaCharacters,"winMetaCharacters");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StringTools_obj::winMetaCharacters,"winMetaCharacters");
};

#endif

hx::Class StringTools_obj::__mClass;

static ::String StringTools_obj_sStaticFields[] = {
	HX_HCSTRING("urlEncode","\xe5","\x4e","\x52","\x9a"),
	HX_HCSTRING("urlDecode","\xfd","\xb9","\x5b","\x05"),
	HX_HCSTRING("htmlEscape","\x4c","\xaf","\x9b","\xa8"),
	HX_HCSTRING("htmlUnescape","\x25","\xa7","\xed","\xae"),
	HX_HCSTRING("startsWith","\x77","\xc0","\xcf","\xf9"),
	HX_HCSTRING("endsWith","\x5e","\x7a","\xb6","\xdb"),
	HX_HCSTRING("isSpace","\x7c","\x30","\xec","\x1d"),
	HX_HCSTRING("ltrim","\x4e","\x43","\x4a","\x7c"),
	HX_HCSTRING("rtrim","\x54","\xbe","\xb1","\xf0"),
	HX_HCSTRING("trim","\xe2","\x9c","\x03","\x4d"),
	HX_HCSTRING("lpad","\x67","\x5c","\xb8","\x47"),
	HX_HCSTRING("rpad","\x21","\xa4","\xaf","\x4b"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"),
	HX_HCSTRING("fastCodeAt","\x3c","\x63","\x51","\x0a"),
	HX_HCSTRING("isEof","\xf2","\x2e","\x4b","\xc1"),
	HX_HCSTRING("quoteUnixArg","\xd2","\x54","\x33","\x00"),
	HX_HCSTRING("winMetaCharacters","\x0b","\x65","\xcd","\x94"),
	HX_HCSTRING("quoteWinArg","\xf6","\xb3","\xbc","\x14"),
	::String(null())
};

void StringTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StringTools","\x6a","\xdb","\x63","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &StringTools_obj::__SetStatic;
	__mClass->mMarkFunc = StringTools_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StringTools_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringTools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StringTools_obj::__boot()
{
{
            	HX_STACK_FRAME("StringTools","boot",0x1d20b7b6,"StringTools.boot","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",506,0xb9dbeb2d)
HXLINE( 506)		winMetaCharacters = ::Array_obj< Int >::fromData( _hx_array_data_11,13);
            	}
}

