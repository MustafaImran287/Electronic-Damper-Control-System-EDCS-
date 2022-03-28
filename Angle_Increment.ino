void angle_inc()
{
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setCursor(23, 1);
  display.println("Angle Increment");
  display.setCursor(40, 10); 
  display.println("Settings\n");
  display.print("1. FR        ");display.println(FR_M_VALUE);
  display.print("2. FL        ");display.println(FL_M_VALUE);
  display.print("3. RR        ");display.println(RR_M_VALUE);
  display.print("4. RL        ");display.println(RL_M_VALUE);
  display.display();  
  
}
  
