/*
 * ESP32 AI S3 MODULE N16R8
 * 
 * ILI9481 IPS Touch
 * SPI Serial TFT 480x320
 * 
 * Pines de control del TFT Display
 * 
 * CS -> 10
 * SDI(MOSI) -> 11 (FSPID)
 * SCK -> 12 (FSPICLK)
 * SD0(MISO) -> 13 (FSPIQ)
 * 
 * BL -> 3.3V
 * RST -> 8
 * DC -> 3
 * 
 * Configuración del archivo 'User_Setup.h'
 * 
 * #define ILI9481_DRIVER
 * #define TFT_INVERSION_OFF
 * 
 * #define TFT_MISO 13
 * #define TFT_MOSI 11
 * #define TFT_SCLK 12
 * #define TFT_CS   10  // Chip select control pin
 * #define TFT_DC    3  // Data Command control pin
 * #define TFT_RST   8  // Reset pin (could connect to RST pin)
 * 
 * Modificación del archivo 'ILI9481_Init.h'
 * 
 * Comentar #define ILI9481_INIT_1 y 
 * descomentar #define ILI9481_INIT_8 y dentro de la inicialización
 * comentar writedata(0x1E);//1f  17   1C  VRH[3:0]: Sets the factor to generate VREG1OUT from VCILVL
 * y agregar writedata(0x17); eso limpiará el ruido en la pantalla
 * 
 */


#include <TFT_eSPI.h> // Hardware-specific library

// Fuente de texto
#define FONT "HoneyandRaspberries80"

TFT_eSPI    tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);

  if (!SPIFFS.begin()) {
    tft.print("SPIFFS initialisation failed!");
    while (1) yield(); // Stay here twiddling thumbs waiting
  }
  tft.println("\r\nSPIFFS available!");

  bool font_missing = false;
  if (SPIFFS.exists("/HoneyandRaspberries80.vlw")    == false) font_missing = true;

  if (font_missing){
    tft.println("\r\nFont missing in SPIFFS, did you upload it?");
    while(1) yield();
  }
  else tft.println("\r\nNew font added.");
  delay(800);

  tft.fillScreen(TFT_DARKGREEN);

  tft.loadFont(FONT);
  tft.setTextColor(TFT_WHITE, TFT_DARKGREEN);

  String linea1 = "Configuración";
  String linea2 = "Fuentes";
  String linea3 = "\"Suavizadas\"";

  int centro = tft.width()/2;
  
  tft.setCursor(centro - tft.textWidth(linea1)/2, 30);
  tft.print(linea1);

  tft.setCursor(centro - tft.textWidth(linea2)/2, 130);
  tft.print(linea2);

  tft.setCursor(centro - tft.textWidth(linea3)/2, 230);
  tft.print(linea3);
  
}

void loop() {
  delay(1000);
  yield();
}
