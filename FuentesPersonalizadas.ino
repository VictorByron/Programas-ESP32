#include <M5Core2.h>

#include "font_1.h"
#include "font_2.h"
#include "font_3.h"

#define customFont &BlueberryDays30pt7b
#define customFont2 &QuantumofMechanic50pt7b
#define customFont3 &VolkhovRegular28pt7b

void setup() {
  M5.Lcd.begin();
  M5.Lcd.setRotation(1);
  M5.Lcd.fillScreen(TFT_NAVY);
  
  M5.Lcd.setFreeFont(customFont);
  M5.Lcd.setTextColor(TFT_MAGENTA);
  M5.Lcd.setCursor(5, 70);
  M5.Lcd.print("<Blueberry>");

  M5.Lcd.setFreeFont(customFont2);
  M5.Lcd.setTextColor(TFT_CYAN);
  M5.Lcd.setCursor(25, 25+M5.Lcd.fontHeight());
  M5.Lcd.print("Quantum");

  M5.Lcd.setFreeFont(customFont3);
  M5.Lcd.setTextColor(TFT_YELLOW);
  M5.Lcd.setCursor(10, 120+M5.Lcd.fontHeight());
  M5.Lcd.print("Volkhov");
  
}

void loop() {
  yield();
}
