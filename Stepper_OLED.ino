#include<EEPROM.h>
#include <Wire.h>
#include<SoftwareSerial.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSerif9pt7b.h>

#define FR_STEP 27
#define FR_DIR 28
#define FR_EN 29

#define FL_STEP 30
#define FL_DIR 31
#define FL_EN 32

#define RR_STEP 33
#define RR_DIR 34
#define RR_EN 35

#define RL_STEP 36
#define RL_DIR 37
#define RL_EN 38

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
  const int UP_BTN = 22;
  const int LEFT_BTN = 23;
  const int DOWN_BTN = 24;
  const int RIGHT_BTN = 25;
  const int SET_BTN = 26;

  int UP_BTN_STATE = 0;
  int LEFT_BTN_STATE = 0;
  int DOWN_BTN_STATE = 0;
  int RIGHT_BTN_STATE = 0;
  int SET_BTN_STATE = 0;

  int FR_M_VALUE = EEPROM.read(8);
  int FL_M_VALUE = EEPROM.read(9);
  int RR_M_VALUE = EEPROM.read(10);
  int RL_M_VALUE = EEPROM.read(11);

  int FR_P_VALUE = EEPROM.read(0);
  int FL_P_VALUE = EEPROM.read(1);
  int RR_P_VALUE = EEPROM.read(2);
  int RL_P_VALUE = EEPROM.read(3);  

  int FR_CURRENT_POS = EEPROM.read(4);
  int FL_CURRENT_POS = EEPROM.read(5);
  int RR_CURRENT_POS = EEPROM.read(6);
  int RL_CURRENT_POS = EEPROM.read(7);

  int FR_POS, FR_TEMP; //FR_PREV;
  int FL_POS, FL_TEMP; //FL_PREV;
  int RR_POS, RR_TEMP; //RR_PREV;
  int RL_POS, RL_TEMP; //RL_PREV;
  
  int FR_PREV = 0;
  int FL_PREV = 0;
  int RR_PREV = 0;
  int RL_PREV = 0;

void setup() 
{
  
  Serial.begin(9600);

  pinMode(UP_BTN, INPUT_PULLUP);
  pinMode(LEFT_BTN, INPUT_PULLUP);
  pinMode(DOWN_BTN, INPUT_PULLUP);
  pinMode(RIGHT_BTN, INPUT_PULLUP);
  pinMode(SET_BTN, INPUT_PULLUP);  

  pinMode(FR_STEP, OUTPUT);
  pinMode(FR_DIR, OUTPUT);
  pinMode(FR_EN, OUTPUT);

  pinMode(FL_STEP, OUTPUT);
  pinMode(FL_DIR, OUTPUT);
  pinMode(FL_EN, OUTPUT);

  pinMode(RR_STEP, OUTPUT);
  pinMode(RR_DIR, OUTPUT);
  pinMode(RR_EN, OUTPUT);

  pinMode(RL_STEP, OUTPUT);
  pinMode(RL_DIR, OUTPUT);
  pinMode(RL_EN, OUTPUT); 

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) 
  { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(500);
  
  display.clearDisplay();
  display.setFont();
  display.setTextColor(WHITE);
  display.setCursor(40, 25);
  // Display static text
  display.println("WELCOME!");
  display.display();
  delay(500);
}
void loop() 
{
  main_screen();
}
