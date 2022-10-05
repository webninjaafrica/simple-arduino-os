#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h>
#include <SPI.h>

//Written By Kelvin Magochi
//Simple arduino OS for Arduino Nano , and S7735 TFT

#define TFT_CS        10
 #define TFT_RST        -1
#define TFT_DC         9
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);
void setup() {
  Serial.begin(9600);
  tft.initR(INITR_BLACKTAB);

  tft.fillScreen(ST77XX_BLACK);
  tft.setRotation(0);
  //draw_appframe();
  startup();
  delay(300);
draw_desktop();  
}

void loop() { 
  
  String st="Magochi Os..";
  
  tft.setCursor(9,45);
  tft.setTextColor(ST77XX_BLACK);
  tft.setTextSize(4);
  tft.print(millis() / 1000);
  delay(1000);
  whitespace();
  
  

}



void draw_desktop(){

  tft.drawRect(0, 0, 150, 28, ST77XX_GREEN);
  tft.fillRect(0, 0, 150, 28, ST77XX_GREEN);
  tft.setCursor(3,10);
  tft.setTextColor(ST77XX_BLACK);
  tft.print("MAGOCHI-OS");

  tft.drawRect(0, 130, 150, 28, ST77XX_BLUE);
  tft.fillRect(0, 130, 150, 28, ST77XX_BLUE);
  tft.setCursor(10, 135);
  tft.setTextColor(ST77XX_WHITE);
  tft.print("Tasks| 2022-10-05");

  tft.drawRect(0, 30, 150, 100, ST77XX_WHITE);
  tft.fillRect(0, 30, 150, 100, ST77XX_WHITE);
  tft.setCursor(10, 65);
  tft.setTextColor(ST77XX_BLACK);
  tft.print("");
  

}

void draw_appframe(){
  tft.drawRect(4, 35, 120, 68, ST77XX_GREEN);
  tft.fillRect(4, 35, 120, 68, ST77XX_BLACK);
  tft.setCursor(9,45);
  tft.setTextColor(ST77XX_GREEN);
  tft.print("cmd > |");
}

void whitespace(){
  tft.drawRect(4, 35, 120, 68, ST77XX_WHITE);
  tft.fillRect(4, 35, 120, 68, ST77XX_WHITE);
}

void startup(){
  tft.drawRect(4, 35, 120, 68, ST77XX_BLACK);
  tft.fillRect(4, 35, 120, 68, ST77XX_BLACK);
  tft.setCursor(40,45);
  tft.setTextColor(ST77XX_GREEN);
  tft.print("MAGOCHI OS");
  delay(700);
  tft.setCursor(15,55);
  tft.setTextColor(ST77XX_GREEN);
  tft.print("by");
  delay(1000);
  tft.setCursor(40,65);
  tft.setTextColor(ST77XX_GREEN);
  tft.print("Kelvin Magochi..");
  delay(1000);
  tft.setCursor(40,75);
  tft.setTextColor(ST77XX_GREEN);
  tft.print("0111560417");
  delay(4000);
  tft.fillScreen(ST77XX_BLACK);
  tft.setCursor(40,95);
  tft.setTextColor(ST77XX_GREEN);
  tft.print("Logging in..");
  delay(4000);
  tft.fillScreen(ST77XX_BLACK);
}
