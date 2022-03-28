void save()
{
  // Positions Level
  EEPROM.write(0, FR_P_VALUE);
  EEPROM.write(1, FL_P_VALUE);
  EEPROM.write(2, RR_P_VALUE);
  EEPROM.write(3, RL_P_VALUE);

  // Current Position
  EEPROM.write(4, FR_CURRENT_POS);
  EEPROM.write(5, FL_CURRENT_POS);
  EEPROM.write(6, RR_CURRENT_POS);
  EEPROM.write(7, RL_CURRENT_POS);

  // Motor Angle
  EEPROM.write(8, FR_M_VALUE);
  EEPROM.write(9, FL_M_VALUE);
  EEPROM.write(10, RR_M_VALUE);
  EEPROM.write(11, RL_M_VALUE);

  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setCursor(25, 10);
  display.println("Settings Saved");
  display.setCursor(1, 20); 
  display.println("Calibration in Prgs..");
  display.setCursor(22, 30);
  display.println("Don't Trurn OFF");
  display.display();  
}
