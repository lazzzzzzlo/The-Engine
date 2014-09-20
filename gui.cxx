// generated by Fast Light User Interface Designer (fluid) version 1.0302

#include "gui.h"

void GUI::cb_DBG_i(Fl_Button*, void*) {
  DBG_cb();
}
void GUI::cb_DBG(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_DBG_i(o,v);
}

void GUI::cb_BrightnessSlider_i(Fl_Value_Slider*, void*) {
  brightness_cb();
}
void GUI::cb_BrightnessSlider(Fl_Value_Slider* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_BrightnessSlider_i(o,v);
}

void GUI::cb_Edge_i(Fl_Button*, void*) {
  detect_edges_cb();
}
void GUI::cb_Edge(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Edge_i(o,v);
}

void GUI::cb_Load_i(Fl_Button*, void*) {
  load_cb();
}
void GUI::cb_Load(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Load_i(o,v);
}

void GUI::cb_Save_i(Fl_Button*, void*) {
  save_cb();
}
void GUI::cb_Save(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Save_i(o,v);
}

void GUI::cb_L_i(Fl_Button*, void*) {
  left_cb();
}
void GUI::cb_L(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_L_i(o,v);
}

void GUI::cb_R_i(Fl_Button*, void*) {
  right_cb();
}
void GUI::cb_R(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_R_i(o,v);
}

void GUI::cb_U_i(Fl_Button*, void*) {
  up_cb();
}
void GUI::cb_U(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_U_i(o,v);
}

void GUI::cb_D_i(Fl_Button*, void*) {
  down_cb();
}
void GUI::cb_D(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_D_i(o,v);
}

void GUI::cb_Tilt_i(Fl_Button*, void*) {
  tilt_cb();
}
void GUI::cb_Tilt(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Tilt_i(o,v);
}

void GUI::cb_Pan_i(Fl_Button*, void*) {
  pan_cb();
}
void GUI::cb_Pan(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Pan_i(o,v);
}

void GUI::cb_Roll_i(Fl_Button*, void*) {
  roll_cb();
}
void GUI::cb_Roll(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Roll_i(o,v);
}

void GUI::cb_Load1_i(Fl_Button*, void*) {
  load_geometry_cb();
}
void GUI::cb_Load1(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Load1_i(o,v);
}

void GUI::cb_ContrastSlider_i(Fl_Value_Slider*, void*) {
  contrast_cb();
}
void GUI::cb_ContrastSlider(Fl_Value_Slider* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_ContrastSlider_i(o,v);
}
#include "scene.h"

GUI::GUI() {
  { uiw = new Fl_Double_Window(461, 225, "GUI");
    uiw->user_data((void*)(this));
    { Fl_Button* o = new Fl_Button(360, 0, 100, 25, "DBG");
      o->selection_color(FL_DARK_RED);
      o->callback((Fl_Callback*)cb_DBG);
    } // Fl_Button* o
    { BrightnessSlider = new Fl_Value_Slider(25, 0, 35, 170, "Brighness %");
      BrightnessSlider->maximum(100);
      BrightnessSlider->step(0.1);
      BrightnessSlider->value(50);
      BrightnessSlider->textsize(14);
      BrightnessSlider->callback((Fl_Callback*)cb_BrightnessSlider);
    } // Fl_Value_Slider* BrightnessSlider
    { Fl_Button* o = new Fl_Button(215, 0, 95, 25, "Edge Detection");
      o->callback((Fl_Callback*)cb_Edge);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(360, 25, 100, 30, "Load image");
      o->callback((Fl_Callback*)cb_Load);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(360, 85, 100, 30, "Save file");
      o->callback((Fl_Callback*)cb_Save);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(200, 50, 20, 20, "L");
      o->callback((Fl_Callback*)cb_L);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(240, 50, 20, 20, "R");
      o->callback((Fl_Callback*)cb_R);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(220, 30, 20, 20, "U");
      o->callback((Fl_Callback*)cb_U);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(220, 70, 20, 20, "D");
      o->callback((Fl_Callback*)cb_D);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(270, 30, 63, 20, "Tilt");
      o->callback((Fl_Callback*)cb_Tilt);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(270, 50, 63, 20, "Pan");
      o->callback((Fl_Callback*)cb_Pan);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(270, 70, 63, 20, "Roll");
      o->callback((Fl_Callback*)cb_Roll);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(360, 55, 100, 30, "Load Geometry");
      o->callback((Fl_Callback*)cb_Load1);
    } // Fl_Button* o
    { ContrastSlider = new Fl_Value_Slider(100, 0, 35, 170, "Contrast");
      ContrastSlider->minimum(1);
      ContrastSlider->maximum(3);
      ContrastSlider->value(1);
      ContrastSlider->textsize(14);
      ContrastSlider->callback((Fl_Callback*)cb_ContrastSlider);
    } // Fl_Value_Slider* ContrastSlider
    uiw->end();
  } // Fl_Double_Window* uiw
}

int main(int argc, char **argv) {
  scene = new Scene;
  return Fl::run();
}

void GUI::show() {
  uiw->show();
}

void GUI::DBG_cb() {
  scene->DBG();
}

void GUI::load_cb() {
  scene->loadImage();
}

void GUI::save_cb() {
  scene->saveImage();
}

void GUI::brightness_cb() {
  scene->changeBrightness();
}

void GUI::detect_edges_cb() {
  scene->detectEdges();
}

void GUI::load_geometry_cb() {
  printf("Hello, World!\n");
}

void GUI::left_cb() {
  printf("Hello, World!\n");
}

void GUI::right_cb() {
  printf("Hello, World!\n");
}

void GUI::down_cb() {
  printf("Hello, World!\n");
}

void GUI::tilt_cb() {
  scene->tiltPPC();
}

void GUI::pan_cb() {
  scene->panPPC();
}

void GUI::roll_cb() {
  scene->rollPPC();
}

void GUI::up_cb() {
  printf("Hello, World!\n");
}

void GUI::contrast_cb() {
  scene->changeContrast();
}
