void motor_current_pos()
{
  unsigned long TIME_CURRENT;
  unsigned long TIME_PREV = 0;
  unsigned long INTERVAL = 1000;
  btn_state();
  if(digitalRead(UP_BTN) == HIGH)
  {
    while(digitalRead(UP_BTN) == HIGH);
    while(digitalRead(SET_BTN) == LOW)
    {
      display.clearDisplay();
      display.setTextColor(WHITE);
      display.setCursor(20, 1);
      display.println("Current Position");
      display.setCursor(20, 10);
      display.println("Front Right (FR)\n");
      display.fillTriangle(55,24,60,19,65,24, WHITE);
      display.println();
      display.setCursor(55, 28);
      display.println(FR_CURRENT_POS);
      display.fillTriangle(55,38,60,43,65,38, WHITE);
      display.setCursor(1,48);
      display.print("Press Set to Confirm");
      display.display();
      if(digitalRead(UP_BTN) == HIGH)
      {
        while(digitalRead(UP_BTN) == HIGH);
        {
          if(FR_CURRENT_POS<FR_P_VALUE);
          {
            FR_CURRENT_POS++;
            display.setCursor(55, 28);
            display.println(FR_CURRENT_POS);
            //display.display();
            delay(50);
          }
        }
      }
      if(digitalRead(DOWN_BTN) == HIGH)
      {
        while(digitalRead(DOWN_BTN) == HIGH);
        {
          if(FR_CURRENT_POS > 0)
          {
            FR_CURRENT_POS--;
            display.setCursor(55, 28);
            display.println(FR_CURRENT_POS);
            //display.display();
            delay(50);
          }
        }
      }
      if(digitalRead(SET_BTN) == HIGH)
      {
        while(digitalRead(SET_BTN) == HIGH);
        {
          FR_MOTOR();
          delay(500);
          break;
        }
      }
    }
  }
  if(digitalRead( LEFT_BTN) == HIGH)
  {
    while(digitalRead(LEFT_BTN) == HIGH);
    while(digitalRead(SET_BTN) == LOW)
    {
      display.clearDisplay();
      display.setTextColor(WHITE);
      display.setCursor(20, 1);
      display.println("Current Position");
      display.setCursor(20, 10);
      display.println("Front Left (FL)\n");
      display.fillTriangle(55,24,60,19,65,24, WHITE);
      display.println();
      display.setCursor(55, 28);
      display.println(FL_CURRENT_POS);
      display.fillTriangle(55,38,60,43,65,38, WHITE);
      display.setCursor(1,48);
      display.print("Press Set to Confirm");
      display.display();
      if(digitalRead(UP_BTN) == HIGH)
      {
        while(digitalRead(UP_BTN) == HIGH);
        {
          if(FL_CURRENT_POS<FL_P_VALUE)
          {
            FL_CURRENT_POS++;
            display.setCursor(55, 28);
            display.println(FL_CURRENT_POS);
            display.display();
            delay(50);
          }
        }
      }
      if(digitalRead(DOWN_BTN) == HIGH)
      {
        while(digitalRead(DOWN_BTN) == HIGH);
        {
          if(FL_CURRENT_POS>0)
          {
            FL_CURRENT_POS--;
            display.setCursor(55, 28);
            display.println(FL_CURRENT_POS);
            display.display();
            delay(50);
          }
        }
      }
      if(digitalRead(SET_BTN) == HIGH)
      {
        while(digitalRead(SET_BTN) == HIGH);
        {
          FL_MOTOR();
          delay(500);
          break;
        }
      }
    }  
  }
  if(digitalRead(DOWN_BTN) == HIGH)
  {
    while(digitalRead(DOWN_BTN) == HIGH);
    while(digitalRead(SET_BTN) == LOW)
    {
      display.clearDisplay();
      display.setTextColor(WHITE);
      display.setCursor(20, 1);
      display.println("Current Position");
      display.setCursor(20, 10);
      display.println("Rear Right (RR)\n");
      display.fillTriangle(55,24,60,19,65,24, WHITE);
      display.println();
      display.setCursor(55, 28);
      display.println(RR_CURRENT_POS);
      display.fillTriangle(55,38,60,43,65,38, WHITE);
      display.setCursor(1,48);
      display.print("Press Set to Confirm");
      display.display();
      if(digitalRead(UP_BTN) == HIGH)
      {
        while(digitalRead(UP_BTN) == HIGH);
        {
          if(RR_CURRENT_POS<=RR_P_VALUE)
          {
            RR_CURRENT_POS++;
            display.setCursor(55, 28);
            display.println(RR_CURRENT_POS);
            display.display();
            delay(50);
          }
        }
      }
      if(digitalRead(DOWN_BTN) == HIGH)
      {
        while(digitalRead(DOWN_BTN) == HIGH);
        {
          if(RR_CURRENT_POS>0)
          {
            RR_CURRENT_POS--;
            display.setCursor(55, 28);
            display.println(RR_CURRENT_POS);
            display.display();
            delay(50);
          }
        }
      }
      if(digitalRead(SET_BTN) == HIGH)
      {
        while(digitalRead(SET_BTN) == HIGH);
        {
          RR_MOTOR();
          delay(500);
          break;
        }
      }
    }  
  }
  if(digitalRead(RIGHT_BTN) == HIGH)
  {
    while(digitalRead(RIGHT_BTN) == HIGH);
    while(digitalRead(SET_BTN) == LOW)
    {
      display.clearDisplay();
      display.setTextColor(WHITE);
      display.setCursor(20, 1);
      display.println("Current Position");
      display.setCursor(20, 10);
      display.println("Rear Left (RL)\n");
      display.fillTriangle(55,24,60,19,65,24, WHITE);
      display.println();
      display.setCursor(55, 28);
      display.println(RL_CURRENT_POS);
      display.fillTriangle(55,38,60,43,65,38, WHITE);
      display.setCursor(1,48);
      display.print("Press Set to Confirm");
      display.display();
      if(digitalRead(UP_BTN) == HIGH)
      {
        while(digitalRead(UP_BTN) == HIGH);
        {
          if(RL_CURRENT_POS<=RL_P_VALUE)
          {
            RL_CURRENT_POS++;
            display.setCursor(55, 28);
            display.println(RL_CURRENT_POS);
            display.display();
            delay(50);
          }
        }
      }
      if(digitalRead(DOWN_BTN) == HIGH)
      {
        while(digitalRead(DOWN_BTN) == HIGH);
        {
          if(RL_CURRENT_POS>0)
          {
            RL_CURRENT_POS--;
            display.setCursor(55, 28);
            display.println(RL_CURRENT_POS);
            display.display();
            delay(50);
          }
        }
      }
      if(digitalRead(SET_BTN) == HIGH)
      {
        while(digitalRead(SET_BTN) == HIGH);
        {
          RL_MOTOR();
          delay(500);
          break;
        }
      }
    }  
  }
  
  if(digitalRead(SET_BTN) == HIGH)
  {
    TIME_CURRENT = millis();
    while(digitalRead(SET_BTN) == HIGH);
    if(TIME_CURRENT - TIME_PREV >= 1500)
    {
      menu();
    }
    /*
    else
    {
      display.clearDisplay();
      display.setCursor(15, 28);
      display.println("Position Saved!");
      display.display();
      delay(1000);
    } */ 
  }
}
