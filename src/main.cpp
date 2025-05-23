#include <Arduino.h>
#include <Arduino_GigaDisplayTouch.h>
#include <Arduino_H7_Video.h>
#include <lvgl.h>
#include "ui.h"

Arduino_H7_Video Display(800,480,GigaDisplayShield);
Arduino_GigaDisplayTouch touchDetector;

void setup() {
  delay(1000);
  // put your setup code here, to run once:
  Serial.begin(9600);

  Display.begin();
  touchDetector.begin();

  ui_init();

}

void loop() {
  // put your main code here, to run repeatedly:
  lv_timer_handler();
}
