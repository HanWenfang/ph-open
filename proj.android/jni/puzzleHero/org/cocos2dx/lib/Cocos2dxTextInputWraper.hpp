/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.cocos2dx.lib.Cocos2dxTextInputWraper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_COCOS2DX_LIB_COCOS2DXTEXTINPUTWRAPER_HPP_DECL
#define J2CPP_ORG_COCOS2DX_LIB_COCOS2DXTEXTINPUTWRAPER_HPP_DECL


namespace j2cpp { namespace android { namespace text { class TextWatcher; } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace text { class NoCopySpan; } } }
namespace j2cpp { namespace android { namespace widget { namespace TextView_ { class OnEditorActionListener; } } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace org { namespace cocos2dx { namespace lib { class Cocos2dxGLSurfaceView; } } } }


#include <android/text/Editable.hpp>
#include <android/text/NoCopySpan.hpp>
#include <android/text/TextWatcher.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/cocos2dx/lib/Cocos2dxGLSurfaceView.hpp>


namespace j2cpp {

namespace org { namespace cocos2dx { namespace lib {

	class Cocos2dxTextInputWraper;
	class Cocos2dxTextInputWraper
		: public object<Cocos2dxTextInputWraper>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit Cocos2dxTextInputWraper(jobject jobj)
		: object<Cocos2dxTextInputWraper>(jobj)
		{
		}

		operator local_ref<android::text::TextWatcher>() const;
		operator local_ref<android::text::NoCopySpan>() const;
		operator local_ref<android::widget::TextView_::OnEditorActionListener>() const;
		operator local_ref<java::lang::Object>() const;


		Cocos2dxTextInputWraper(local_ref< org::cocos2dx::lib::Cocos2dxGLSurfaceView > const&);
		void setOriginText(local_ref< java::lang::String >  const&);
		void afterTextChanged(local_ref< android::text::Editable >  const&);
		void beforeTextChanged(local_ref< java::lang::CharSequence >  const&, jint, jint, jint);
		void onTextChanged(local_ref< java::lang::CharSequence >  const&, jint, jint, jint);
		jboolean onEditorAction(local_ref< android::widget::TextView >  const&, jint, local_ref< android::view::KeyEvent >  const&);

	}; //class Cocos2dxTextInputWraper

} //namespace lib
} //namespace cocos2dx
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_COCOS2DX_LIB_COCOS2DXTEXTINPUTWRAPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_COCOS2DX_LIB_COCOS2DXTEXTINPUTWRAPER_HPP_IMPL
#define J2CPP_ORG_COCOS2DX_LIB_COCOS2DXTEXTINPUTWRAPER_HPP_IMPL

namespace j2cpp {



org::cocos2dx::lib::Cocos2dxTextInputWraper::operator local_ref<android::text::TextWatcher>() const
{
	return local_ref<android::text::TextWatcher>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxTextInputWraper::operator local_ref<android::text::NoCopySpan>() const
{
	return local_ref<android::text::NoCopySpan>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxTextInputWraper::operator local_ref<android::widget::TextView_::OnEditorActionListener>() const
{
	return local_ref<android::widget::TextView_::OnEditorActionListener>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxTextInputWraper::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::cocos2dx::lib::Cocos2dxTextInputWraper::Cocos2dxTextInputWraper(local_ref< org::cocos2dx::lib::Cocos2dxGLSurfaceView > const &a0)
: object<org::cocos2dx::lib::Cocos2dxTextInputWraper>(
	call_new_object<
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_METHOD_NAME(0),
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



void org::cocos2dx::lib::Cocos2dxTextInputWraper::setOriginText(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_METHOD_NAME(2),
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void org::cocos2dx::lib::Cocos2dxTextInputWraper::afterTextChanged(local_ref< android::text::Editable > const &a0)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_METHOD_NAME(3),
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void org::cocos2dx::lib::Cocos2dxTextInputWraper::beforeTextChanged(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_METHOD_NAME(4),
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void org::cocos2dx::lib::Cocos2dxTextInputWraper::onTextChanged(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_METHOD_NAME(5),
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

jboolean org::cocos2dx::lib::Cocos2dxTextInputWraper::onEditorAction(local_ref< android::widget::TextView > const &a0, jint a1, local_ref< android::view::KeyEvent > const &a2)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_METHOD_NAME(6),
		org::cocos2dx::lib::Cocos2dxTextInputWraper::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}




J2CPP_DEFINE_CLASS(org::cocos2dx::lib::Cocos2dxTextInputWraper,"org/cocos2dx/lib/Cocos2dxTextInputWraper")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxTextInputWraper,0,"<init>","(Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxTextInputWraper,1,"isFullScreenEdit","()Z")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxTextInputWraper,2,"setOriginText","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxTextInputWraper,3,"afterTextChanged","(Landroid/text/Editable;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxTextInputWraper,4,"beforeTextChanged","(Ljava/lang/CharSequence;III)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxTextInputWraper,5,"onTextChanged","(Ljava/lang/CharSequence;III)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxTextInputWraper,6,"onEditorAction","(Landroid/widget/TextView;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxTextInputWraper,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxTextInputWraper,0,"TAG","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxTextInputWraper,1,"mCocos2dxGLSurfaceView","Lorg/cocos2dx/lib/Cocos2dxGLSurfaceView;")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxTextInputWraper,2,"mText","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxTextInputWraper,3,"mOriginText","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_COCOS2DX_LIB_COCOS2DXTEXTINPUTWRAPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
