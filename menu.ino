void menu()
{
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setCursor(40, 1);
  display.println("Settings\n");
  display.println("1. Angle Increment");
  display.println("2. Position Levels");
  display.println("3. Save and Calibrate");
  display.println("4. Discard Changes");
  display.println("5. Exit to Home");
  display.display(); 

  btn_state();
  if((digitalRead(UP_BTN))&&!(digitalRead(LEFT_BTN))&&!(digitalRead(DOWN_BTN))&&!(digitalRead(RIGHT_BTN)))
  {
    while((digitalRead(UP_BTN))&&!(digitalRead(LEFT_BTN))&&!(digitalRead(DOWN_BTN))&&!(digitalRead(RIGHT_BTN)));
    angle_inc();
    btn_state();
    motor_angle();
    Serial.print("1. I am here");
  }
  if(!(digitalRead(UP_BTN))&&(digitalRead(LEFT_BTN))&&!(digitalRead(DOWN_BTN))&&!(digitalRead(RIGHT_BTN)))
  {
    while(!(digitalRead(UP_BTN))&&(digitalRead(LEFT_BTN))&&!(digitalRead(DOWN_BTN))&&!(digitalRead(RIGHT_BTN)));
    pos_level();
    btn_state();
    motor_pos();
    Serial.print("2. I am here");
  }
  if(!(digitalRead(UP_BTN))&&!(digitalRead(LEFT_BTN))&&(digitalRead(DOWN_BTN))&&!(digitalRead(RIGHT_BTN)))
  {
    while(!(digitalRead(UP_BTN))&&!(digitalRead(LEFT_BTN))&&(digitalRead(DOWN_BTN))&&!(digitalRead(RIGHT_BTN)));
    save();
    Serial.print("3. I am here");
    delay(1000);
    menu();
  }
  if(!(digitalRead(UP_BTN))&&!(digitalRead(LEFT_BTN))&&!(digitalRead(DOWN_BTN))&&(digitalRead(RIGHT_BTN)))
  {
    while(!(digitalRead(UP_BTN))&&!(digitalRead(LEFT_BTN))&&!(digitalRead(DOWN_BTN))&&(digitalRead(RIGHT_BTN)));
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setCursor(20, 25);
    display.println("Discard Changes");
    display.display();  
    Serial.print("4. I am here");
    delay(1000);
    main_screen();
  }
  if(digitalRead(SET_BTN))
  {
    while(digitalRead(SET_BTN) == HIGH);
    {
      main_screen();
    }
  }
}
