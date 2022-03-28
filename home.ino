void main_screen()
{
  display.clearDisplay();
  display.setTextColor(WHITE);
  // FR Position
  display.setCursor(20, 5);
  display.println("FR");
  display.fillTriangle(20,21,25,16,30,21, WHITE);
  display.println();
  display.setCursor(20, 25);
  display.println(FR_CURRENT_POS);
  display.fillTriangle(20,35,25,40,30,35, WHITE);
  
  // FL Position
  display.setCursor(43, 5);
  display.println("FL");
  display.fillTriangle(43,21,48,16,53,21, WHITE);
  display.println();
  display.setCursor(43, 25);
  display.println(FL_CURRENT_POS);
  display.fillTriangle(43,35,48,40,53,35, WHITE);

  // RR Position
  display.setCursor(67, 5);
  display.println("RR");
  display.fillTriangle(67,21,72,16,77,21, WHITE);
  display.println();
  display.setCursor(67, 25);
  display.println(RR_CURRENT_POS);
  display.fillTriangle(67,35,72,40,77,35, WHITE);


  // RL Position
  display.setCursor(90, 5);
  display.println("RL");
  display.fillTriangle(90,21,95,16,100,21, WHITE);
  display.println();
  display.setCursor(90, 25);
  display.println(RL_CURRENT_POS);
  display.fillTriangle(90,35,95,40,100,35, WHITE);
  display.setCursor(1, 47);
  //display.println("1.Select Motor");
  display.println("HOLD SET for Settings");
  display.display();

  motor_current_pos();  
  /*
  display.setCursor(50,1);
  display.println("HOME");
  display.setCursor(1,20);
  display.println("1. Default Values");
  display.println("\n2. Settings");
  display.println("\nPlease Select Option");
  display.display();
  btn_state();
  if(digitalRead(UP_BTN) == HIGH)
  {
    while(digitalRead(UP_BTN) == HIGH);
    default_values();  
  }
  if(digitalRead(LEFT_BTN) == HIGH)
  {
    while(digitalRead(LEFT_BTN) == HIGH);
    menu();  
  }*/
}
