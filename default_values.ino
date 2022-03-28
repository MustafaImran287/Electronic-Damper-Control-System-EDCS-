void default_values()
{
  while(digitalRead(SET_BTN) ==  LOW)
  {
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setCursor(20,1);
    display.println("Default Values\n");
    display.println("MOTORS   ANGLE    POS");
    display.print("1. FR     ");display.print(FR_M_VALUE);display.print("       ");display.println(FR_P_VALUE);
    display.print("2. FL     ");display.print(FL_M_VALUE);display.print("       ");display.println(FL_P_VALUE);
    display.print("3. RR     ");display.print(RR_M_VALUE);display.print("       ");display.println(RR_P_VALUE);
    display.print("4. RL     ");display.print(RL_M_VALUE);display.print("       ");display.println(RL_P_VALUE);
    display.println("For HOME Press SET");   
    display.display();
    if(digitalRead(SET_BTN) == HIGH)
    {
      while(digitalRead(SET_BTN) == HIGH);
      break;
    }
  }
}
