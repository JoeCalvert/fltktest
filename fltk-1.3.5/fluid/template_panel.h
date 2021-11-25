//
// "$Id$"
//
// FLUID template support for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2017 by Bill Spitzak and others.
//
// This library is free software. Distribution and use rights are outlined in
// the file "COPYING" which should have been included with this file.  If this
// file is missing or damaged, see the license at:
//
//     http://www.fltk.org/COPYING.php
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

// generated by Fast Light User Interface Designer (fluid) version 1.0305

#ifndef template_panel_h
#define template_panel_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
extern Fl_Double_Window *template_panel;
#include <FL/Fl_Browser.H>
extern Fl_Browser *template_browser;
#include <FL/Fl_Box.H>
extern Fl_Box *template_preview;
#include <FL/Fl_Input.H>
extern Fl_Input *template_name;
extern Fl_Input *template_instance;
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
extern Fl_Button *template_delete;
#include <FL/Fl_Return_Button.H>
extern Fl_Return_Button *template_submit;
Fl_Double_Window* make_template_panel();
void template_clear();
void template_delete_cb(Fl_Button *, void *);
void template_load();
#endif

//
// End of "$Id$".
//
