// generated by Fast Light User Interface Designer (fluid) version 1.0302

#include "gui.h"

void GUI::cb_Play_i(Fl_Button*, void*) {
  DBG_cb();
}
void GUI::cb_Play(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Play_i(o,v);
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

void GUI::cb_TiltU_i(Fl_Button*, void*) {
  tiltU_cb();
}
void GUI::cb_TiltU(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_TiltU_i(o,v);
}

void GUI::cb_PanL_i(Fl_Button*, void*) {
  panL_cb();
}
void GUI::cb_PanL(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_PanL_i(o,v);
}

void GUI::cb_RollL_i(Fl_Button*, void*) {
  rollL_cb();
}
void GUI::cb_RollL(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_RollL_i(o,v);
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

void GUI::cb_F_i(Fl_Button*, void*) {
  f_cb();
}
void GUI::cb_F(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_F_i(o,v);
}

void GUI::cb_B_i(Fl_Button*, void*) {
  b_cb();
}
void GUI::cb_B(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_B_i(o,v);
}

void GUI::cb_PanR_i(Fl_Button*, void*) {
  panR_cb();
}
void GUI::cb_PanR(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_PanR_i(o,v);
}

void GUI::cb_RollR_i(Fl_Button*, void*) {
  rollR_cb();
}
void GUI::cb_RollR(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_RollR_i(o,v);
}

void GUI::cb_TiltD_i(Fl_Button*, void*) {
  tiltD_cb();
}
void GUI::cb_TiltD(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_TiltD_i(o,v);
}

void GUI::cb_Load2_i(Fl_Button*, void*) {
  load_camera_cb();
}
void GUI::cb_Load2(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Load2_i(o,v);
}

void GUI::cb_Save1_i(Fl_Button*, void*) {
  save_camera_cb();
}
void GUI::cb_Save1(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Save1_i(o,v);
}

void GUI::cb_Z_i(Fl_Button*, void*) {
  zoom_in_cb();
}
void GUI::cb_Z(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Z_i(o,v);
}

void GUI::cb_Z1_i(Fl_Button*, void*) {
  zoom_out_cb();
}
void GUI::cb_Z1(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_Z1_i(o,v);
}

void GUI::cb_StepSlider_i(Fl_Value_Slider*, void*) {
  step_cb();
}
void GUI::cb_StepSlider(Fl_Value_Slider* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_StepSlider_i(o,v);
}

void GUI::cb_AmbientFactor_i(Fl_Value_Input*, void*) {
  ambient_cb();
}
void GUI::cb_AmbientFactor(Fl_Value_Input* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_AmbientFactor_i(o,v);
}

void GUI::cb_SpecularExponent_i(Fl_Value_Input*, void*) {
  specular_cb();
}
void GUI::cb_SpecularExponent(Fl_Value_Input* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_SpecularExponent_i(o,v);
}

void GUI::cb_L1_i(Fl_Button*, void*) {
  leftl_cb();
}
void GUI::cb_L1(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_L1_i(o,v);
}

void GUI::cb_R1_i(Fl_Button*, void*) {
  rightl_cb();
}
void GUI::cb_R1(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_R1_i(o,v);
}

void GUI::cb_U1_i(Fl_Button*, void*) {
  upl_cb();
}
void GUI::cb_U1(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_U1_i(o,v);
}

void GUI::cb_D1_i(Fl_Button*, void*) {
  downl_cb();
}
void GUI::cb_D1(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_D1_i(o,v);
}

void GUI::cb_SM1_i(Fl_Button*, void*) {
  sm1_cb();
}
void GUI::cb_SM1(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_SM1_i(o,v);
}

void GUI::cb_SM2_i(Fl_Button*, void*) {
  sm2_cb();
}
void GUI::cb_SM2(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_SM2_i(o,v);
}

void GUI::cb_SM3_i(Fl_Button*, void*) {
  sm3_cb();
}
void GUI::cb_SM3(Fl_Button* o, void* v) {
  ((GUI*)(o->parent()->user_data()))->cb_SM3_i(o,v);
}
#include "scene.h"

GUI::GUI() {
  { uiw = new Fl_Double_Window(617, 288, "GUI");
    uiw->user_data((void*)(this));
    { Fl_Button* o = new Fl_Button(515, 0, 100, 25, "Play");
      o->selection_color(FL_DARK_RED);
      o->callback((Fl_Callback*)cb_Play);
    } // Fl_Button* o
    { BrightnessSlider = new Fl_Value_Slider(25, 0, 35, 170, "Brighness %");
      BrightnessSlider->maximum(100);
      BrightnessSlider->step(0.1);
      BrightnessSlider->value(50);
      BrightnessSlider->textsize(14);
      BrightnessSlider->callback((Fl_Callback*)cb_BrightnessSlider);
    } // Fl_Value_Slider* BrightnessSlider
    { Fl_Button* o = new Fl_Button(5, 250, 115, 25, "Edge Detection");
      o->callback((Fl_Callback*)cb_Edge);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(515, 25, 100, 30, "Load image");
      o->callback((Fl_Callback*)cb_Load);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(515, 115, 100, 30, "Save file");
      o->callback((Fl_Callback*)cb_Save);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(235, 45, 20, 40, "L");
      o->callback((Fl_Callback*)cb_L);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(280, 45, 20, 40, "R");
      o->callback((Fl_Callback*)cb_R);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(255, 25, 25, 20, "U");
      o->callback((Fl_Callback*)cb_U);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(255, 85, 25, 25, "D");
      o->callback((Fl_Callback*)cb_D);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(315, 25, 40, 20, "TiltU");
      o->callback((Fl_Callback*)cb_TiltU);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(315, 45, 40, 20, "PanL");
      o->callback((Fl_Callback*)cb_PanL);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(315, 65, 40, 20, "RollL");
      o->callback((Fl_Callback*)cb_RollL);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(515, 85, 100, 30, "Load Geometry");
      o->callback((Fl_Callback*)cb_Load1);
    } // Fl_Button* o
    { ContrastSlider = new Fl_Value_Slider(95, 0, 35, 170, "Contrast");
      ContrastSlider->minimum(1);
      ContrastSlider->maximum(3);
      ContrastSlider->value(1);
      ContrastSlider->textsize(14);
      ContrastSlider->callback((Fl_Callback*)cb_ContrastSlider);
    } // Fl_Value_Slider* ContrastSlider
    { Fl_Button* o = new Fl_Button(255, 45, 25, 20, "F");
      o->callback((Fl_Callback*)cb_F);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(255, 65, 25, 20, "B");
      o->callback((Fl_Callback*)cb_B);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(355, 45, 45, 20, "PanR");
      o->callback((Fl_Callback*)cb_PanR);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(355, 65, 45, 20, "RollR");
      o->callback((Fl_Callback*)cb_RollR);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(355, 25, 45, 20, "TiltD");
      o->callback((Fl_Callback*)cb_TiltD);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(515, 55, 100, 30, "Load Camera");
      o->callback((Fl_Callback*)cb_Load2);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(515, 145, 100, 30, "Save Camera");
      o->callback((Fl_Callback*)cb_Save1);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(315, 85, 40, 20, "Z In");
      o->callback((Fl_Callback*)cb_Z);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(355, 85, 45, 20, "Z Out");
      o->callback((Fl_Callback*)cb_Z1);
    } // Fl_Button* o
    { StepSlider = new Fl_Value_Slider(190, 0, 35, 170, "Move Step");
      StepSlider->maximum(100);
      StepSlider->step(0.1);
      StepSlider->value(10);
      StepSlider->textsize(14);
      StepSlider->callback((Fl_Callback*)cb_StepSlider);
    } // Fl_Value_Slider* StepSlider
    { AmbientFactor = new Fl_Value_Input(110, 197, 25, 19, "Ambient Factor");
      AmbientFactor->maximum(10);
      AmbientFactor->step(0.1);
      AmbientFactor->callback((Fl_Callback*)cb_AmbientFactor);
    } // Fl_Value_Input* AmbientFactor
    { SpecularExponent = new Fl_Value_Input(130, 227, 25, 18, "Specular Exponent");
      SpecularExponent->minimum(1);
      SpecularExponent->maximum(10);
      SpecularExponent->step(0.1);
      SpecularExponent->callback((Fl_Callback*)cb_SpecularExponent);
    } // Fl_Value_Input* SpecularExponent
    { Fl_Button* o = new Fl_Button(245, 0, 150, 20, "Camera");
      o->box(FL_FLAT_BOX);
      o->labeltype(FL_ENGRAVED_LABEL);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(245, 125, 150, 20, "Light Source");
      o->box(FL_FLAT_BOX);
      o->labeltype(FL_ENGRAVED_LABEL);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(285, 155, 20, 30, "L");
      o->callback((Fl_Callback*)cb_L1);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(330, 155, 20, 30, "R");
      o->callback((Fl_Callback*)cb_R1);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(305, 150, 25, 20, "U");
      o->callback((Fl_Callback*)cb_U1);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(305, 170, 25, 25, "D");
      o->callback((Fl_Callback*)cb_D1);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(480, 200, 45, 25, "SM1");
      o->callback((Fl_Callback*)cb_SM1);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(525, 200, 45, 25, "SM2");
      o->callback((Fl_Callback*)cb_SM2);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(570, 200, 45, 25, "SM3");
      o->callback((Fl_Callback*)cb_SM3);
    } // Fl_Button* o
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
  scene->Play();
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
  scene->loadGeometry();
}

void GUI::left_cb() {
  scene->translateLeft();
}

void GUI::right_cb() {
  scene->translateRight();
}

void GUI::down_cb() {
  scene->translateDown();
}

void GUI::tiltU_cb() {
  scene->tiltUp();
}

void GUI::panL_cb() {
  scene->panLeft();
}

void GUI::rollL_cb() {
  scene->rollLeft();
}

void GUI::up_cb() {
  scene->translateUp();
}

void GUI::contrast_cb() {
  scene->changeContrast();
}

void GUI::f_cb() {
  scene->translateFront();
}

void GUI::b_cb() {
  scene->translateBack();
}

void GUI::tiltD_cb() {
  scene->tiltDown();
}

void GUI::panR_cb() {
  scene->panRight();
}

void GUI::rollR_cb() {
  scene->rollRight();
}

void GUI::load_camera_cb() {
  scene->LoadCamera();
}

void GUI::save_camera_cb() {
  scene->SaveCamera();
}

void GUI::zoom_in_cb() {
  scene->ZoomIn();
}

void GUI::zoom_out_cb() {
  scene->ZoomOut();
}

void GUI::step_cb() {
  scene->adjustStep();
}

void GUI::ambient_cb() {
  scene->adjustAmbient();
}

void GUI::specular_cb() {
  scene->adjustSpecular();
}

void GUI::upl_cb() {
  scene->lightSourceUp();
}

void GUI::downl_cb() {
  scene->lightSourceDown();
}

void GUI::leftl_cb() {
  scene->lightSourceLeft();
}

void GUI::rightl_cb() {
  scene->lightSourceRight();
}

void GUI::sm1_cb() {
  scene->sm1();
}

void GUI::sm2_cb() {
  scene->sm2();
}

void GUI::sm3_cb() {
  scene->sm3();
}
