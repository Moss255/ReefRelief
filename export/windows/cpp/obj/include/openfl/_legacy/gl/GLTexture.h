// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__legacy_gl_GLTexture
#define INCLUDED_openfl__legacy_gl_GLTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLTexture)

namespace openfl{
namespace _legacy{
namespace gl{


class HXCPP_CLASS_ATTRIBUTES GLTexture_obj : public  ::openfl::_legacy::gl::GLObject_obj
{
	public:
		typedef  ::openfl::_legacy::gl::GLObject_obj super;
		typedef GLTexture_obj OBJ_;
		GLTexture_obj();

	public:
		void __construct(Int version, ::Dynamic id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.gl.GLTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._legacy.gl.GLTexture"); }
		static hx::ObjectPtr< GLTexture_obj > __new(Int version, ::Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLTexture_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLTexture","\x36","\xf1","\x1f","\xe8"); }

		::String getType();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl

#endif /* INCLUDED_openfl__legacy_gl_GLTexture */ 
