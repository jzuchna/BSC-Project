/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard. Please do not make 
* any modifications of this file! The modifications are lost when the file is
* generated again by Embedded Wizard!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 8.20
* Profile  : RasPi
* Platform : RaspberryPi.OpenGL.RGBA8888
*
*******************************************************************************/

#ifndef _ApplicationControllMenu_H
#define _ApplicationControllMenu_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x00080014
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x00080014
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_ApplicationClock.h"
#include "_ApplicationNumKeyboard.h"
#include "_ApplicationSampleController.h"
#include "_ApplicationTemperature.h"
#include "_CoreGroup.h"
#include "_CorePropertyObserver.h"
#include "_CoreSystemEventHandler.h"
#include "_FlatActionButton.h"
#include "_ViewsRectangle.h"
#include "_ViewsWarpImage.h"

/* Forward declaration of the class Application::Config */
#ifndef _ApplicationConfig_
  EW_DECLARE_CLASS( ApplicationConfig )
#define _ApplicationConfig_
#endif

/* Forward declaration of the class Application::ControllMenu */
#ifndef _ApplicationControllMenu_
  EW_DECLARE_CLASS( ApplicationControllMenu )
#define _ApplicationControllMenu_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif


/* Deklaration of class : 'Application::ControllMenu' */
EW_DEFINE_FIELDS( ApplicationControllMenu, CoreGroup )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( SCA,             ApplicationSampleController )
  EW_OBJECT  ( SCA1,            ApplicationSampleController )
  EW_OBJECT  ( SCA2,            ApplicationSampleController )
  EW_OBJECT  ( SCA3,            ApplicationSampleController )
  EW_OBJECT  ( SCA4,            ApplicationSampleController )
  EW_OBJECT  ( SCA5,            ApplicationSampleController )
  EW_OBJECT  ( Clock,           ApplicationClock )
  EW_OBJECT  ( Logo,            ViewsWarpImage )
  EW_OBJECT  ( NumKeyboard,     ApplicationNumKeyboard )
  EW_OBJECT  ( Temperature,     ApplicationTemperature )
  EW_OBJECT  ( NuOfCircuitsObserver, CorePropertyObserver )
  EW_ARRAY   ( SampleController, ApplicationSampleController, [6])
  EW_OBJECT  ( Btn_Config,      FlatActionButton )
  EW_OBJECT  ( Btn_NewWell,     FlatActionButton )
  EW_PROPERTY( Config,          ApplicationConfig )
  EW_OBJECT  ( Btn_StopAll,     FlatActionButton )
  EW_OBJECT  ( RemainingTime,   CoreSystemEventHandler )
EW_END_OF_FIELDS( ApplicationControllMenu )

/* Virtual Method Table (VMT) for the class : 'Application::ControllMenu' */
EW_DEFINE_METHODS( ApplicationControllMenu, CoreGroup )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateLayout,      void )( ApplicationControllMenu _this, XPoint aSize )
  EW_METHOD( UpdateViewState,   void )( ApplicationControllMenu _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ApplicationControllMenu )

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationControllMenu_UpdateLayout( ApplicationControllMenu _this, XPoint 
  aSize );

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationControllMenu_UpdateViewState( ApplicationControllMenu _this, XSet 
  aState );

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationControllMenu_onNuOfCircuits( ApplicationControllMenu _this, XObject 
  sender );

/* 'C' function for method : 'Application::ControllMenu.onBtn_Config()' */
void ApplicationControllMenu_onBtn_Config( ApplicationControllMenu _this, XObject 
  sender );

/* 'C' function for method : 'Application::ControllMenu.onBtn_NewWell()' */
void ApplicationControllMenu_onBtn_NewWell( ApplicationControllMenu _this, XObject 
  sender );

/* 'C' function for method : 'Application::ControllMenu.OnSetConfig()' */
void ApplicationControllMenu_OnSetConfig( ApplicationControllMenu _this, ApplicationConfig 
  value );

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void ApplicationControllMenu_onRemainingTime( ApplicationControllMenu _this, XObject 
  sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationControllMenu_H */

/* Embedded Wizard */