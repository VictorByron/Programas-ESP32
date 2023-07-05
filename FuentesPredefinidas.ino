#include <M5Core2.h>

#define FONT1 &FreeMono12pt7b
#define FONT2 &FreeMonoBold12pt7b
#define FONT3 &FreeMonoOblique12pt7b
#define FONT4 &FreeMonoBoldOblique12pt7b
#define FONT5 &FreeSans12pt7b
#define FONT6 &FreeSansBold12pt7b
#define FONT7 &FreeSansOblique12pt7b
#define FONT8 &FreeSansBoldOblique12pt7b

void setup() {
  M5.begin();
  M5.Lcd.setRotation(1);
}

void loop() {
  
  M5.Lcd.fillScreen(TFT_BLACK);
  M5.Lcd.setFreeFont(NULL);
  M5.Lcd.setTextSize(2);
  M5.Lcd.setTextColor(TFT_WHITE, TFT_BLUE);
  M5.Lcd.setCursor(0, 0);
  M5.Lcd.print("Fuentes predeterminadas");
  
  M5.Lcd.setCursor(0, M5.Lcd.fontHeight() + 20);
  M5.Lcd.setTextSize(1);
  M5.Lcd.setTextColor(TFT_YELLOW, TFT_BLACK);

  M5.Lcd.println();
  //M5.Lcd.setFreeFont(&FreeMono12pt7b);
  M5.Lcd.setFreeFont(FONT1);
  M5.Lcd.println("Free Mono 12pt");

  M5.Lcd.setFreeFont(FONT2);
  M5.Lcd.println("Free Mono Bold 12pt");
  M5.Lcd.setFreeFont(FONT3);
  M5.Lcd.println("Free Mono Oblique 12pt");
  M5.Lcd.setFreeFont(FONT4);
  M5.Lcd.println("Free Mono Blod Oblique 12pt");
  M5.Lcd.setFreeFont(FONT5);
  M5.Lcd.println("Free Sans 12pt");
  M5.Lcd.setFreeFont(FONT6);
  M5.Lcd.println("Free Sans Bold 12pt");
  M5.Lcd.setFreeFont(FONT7);
  M5.Lcd.println("Free Sans Oblique 12pt");
  M5.Lcd.setFreeFont(FONT8);
  M5.Lcd.println("Free Sans Bold Oblique 12pt");

  delay(3000);

  M5.Lcd.fillScreen(TFT_BLACK);
  M5.Lcd.setFreeFont(NULL);
  M5.Lcd.setTextSize(2);
  M5.Lcd.setTextColor(TFT_WHITE, TFT_BLUE);
  M5.Lcd.setCursor(0, 0);
  M5.Lcd.print("usando \"drawString()\" y datum");
  M5.Lcd.setTextSize(1);

  M5.Lcd.setTextColor(TFT_WHITE, TFT_RED);
  M5.Lcd.setTextDatum(MR_DATUM);
  int xpos = M5.Lcd.width() / 2;
  int ypos = 50;

  M5.Lcd.setFreeFont(FONT1);
  M5.Lcd.drawString("Free Mono 12pt", xpos, ypos);
  ypos += M5.Lcd.fontHeight();
  M5.Lcd.setFreeFont(FONT2);
  M5.Lcd.drawString("Free Mono Bold 12pt", xpos, ypos);
  ypos += M5.Lcd.fontHeight();
  M5.Lcd.setFreeFont(FONT3);
  M5.Lcd.drawString("Free Mono Oblique 12pt", xpos, ypos);
  ypos += M5.Lcd.fontHeight();
  M5.Lcd.setFreeFont(FONT4);
  M5.Lcd.drawString("Free Mono Blod Oblique 12pt", xpos, ypos);
  ypos += M5.Lcd.fontHeight();
  M5.Lcd.setFreeFont(FONT5);
  M5.Lcd.drawString("Free Sans 12pt", xpos, ypos);
  ypos += M5.Lcd.fontHeight();
  M5.Lcd.setFreeFont(FONT6);
  M5.Lcd.drawString("Free Sans Bold 12pt", xpos, ypos);
  ypos += M5.Lcd.fontHeight();
  M5.Lcd.setFreeFont(FONT7);
  M5.Lcd.drawString("Free Sans Oblique 12pt", xpos, ypos);
  ypos += M5.Lcd.fontHeight();
  M5.Lcd.setFreeFont(FONT8);
  M5.Lcd.drawString("Free Sans Bold Oblique 12pt", xpos, ypos);

  delay(3000);
  
}
