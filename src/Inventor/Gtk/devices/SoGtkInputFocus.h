/**************************************************************************
 *
 *  This file is part of the Coin SoGtk GUI binding library.
 *  Copyright (C) 2000 by Systems in Motion.  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public License
 *  version 2.1 as published by the Free Software Foundation.  See the
 *  file LICENSE.LGPL at the root directory of the distribution for
 *  more details.
 *
 *  If you want to use Coin SoGtk for applications not compatible with the
 *  LGPL, please contact SIM to acquire a Professional Edition License.
 *
 *  Systems in Motion, Prof Brochs gate 6, N-7030 Trondheim, NORWAY
 *  http://www.sim.no/ support@sim.no Voice: +47 22114160 Fax: +47 22207097
 *
 **************************************************************************/

// $Id$

#ifndef SOGTK_INPUTFOCUS_H
#define SOGTK_INPUTFOCUS_H

#include <Inventor/Gtk/devices/SoGtkDevice.h>

// *************************************************************************

class SOGTK_DLL_API SoGtkInputFocus : public SoGtkDevice {
  SOGTK_OBJECT_HEADER(SoGtkInputFocus, SoGtkDevice);

public:
  enum Events {
    ENTER_WINDOW = 0x01,
    LEAVE_WINDOW = 0x02,
    ALL_EVENTS   = 0x03
  };

  SoGtkInputFocus( const Events events = SoGtkInputFocus::ALL_EVENTS );
  virtual ~SoGtkInputFocus(void);

  virtual void enable( GtkWidget * w, SoGtkEventHandler * func, void * data );
  virtual void disable( GtkWidget * w, SoGtkEventHandler * func, void * data );

  virtual const SoEvent * translateEvent( GdkEvent * event );

private:
  Events events;

}; // class SoGtkInputFocus

// *************************************************************************

#endif // ! SOGTK_INPUTFOCUS_H
