void pos_level()
{
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setCursor(23, 1);
  display.println("Position Level");
  display.setCursor(40, 10); 
  display.println("Settings\n");
  display.print("1. FR        ");display.println(FR_P_VALUE);
  display.print("2. FL        ");display.println(FL_P_VALUE);
  display.print("3. RR        ");display.println(RR_P_VALUE);
  display.print("4. RL        ");display.println(RL_P_VALUE);
  display.display();
}
