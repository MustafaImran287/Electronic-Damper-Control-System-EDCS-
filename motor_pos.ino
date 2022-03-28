void motor_pos()
{
  if(UP_BTN_STATE == HIGH)
  {
    while(digitalRead(UP_BTN) == HIGH);
    while(digitalRead(SET_BTN) == LOW)
    {
      display.clearDisplay();
      display.setTextColor(WHITE);
      display.setCursor(23, 1);
      display.println("Position Setting");
      display.setCursor(20, 10);
      display.println("Front Right (FR)\n");
      display.fillTriangle(55,24,60,19,65,24, WHITE);
      display.println();
      display.setCursor(55, 28);
      display.println(FR_P_VALUE);
      //display.setCursor(60, 65);
      display.fillTriangle(55,38,60,43,65,38, WHITE);
      display.setCursor(1,48);
      display.print("Press Set to Confirm");
      display.display();
      btn_state();
      if(digitalRead(UP_BTN) == HIGH)
      {
        while(digitalRead(UP_BTN) == HIGH);
        {
          FR_P_VALUE++;
          display.setCursor(55, 28);
          display.println(FR_P_VALUE);
          delay(50);
        }
      }
      if(digitalRead(DOWN_BTN) == HIGH)
      {
        while(digitalRead(DOWN_BTN) == HIGH);
        {
          FR_P_VALUE--;
          display.setCursor(55, 28);
          display.println(FR_P_VALUE);          
          delay(50);
        }
      }
      if(digitalRead(SET_BTN) == HIGH)
      {
        Serial.println("set");
        while(digitalRead(SET_BTN) == HIGH);
        {
          display.clearDisplay();
          display.setCursor(15, 28);
          display.println("FR Position Saved!");
          display.display();
          delay(1000);
          break;
        }
      }
    }    
  }
  if(LEFT_BTN_STATE == HIGH)
  {
    while(digitalRead(LEFT_BTN) == HIGH);
    while(digitalRead(SET_BTN) == LOW)
    {
      display.clearDisplay();
      display.setTextColor(WHITE);
      display.setCursor(23, 1);
      display.println("Position Setting");
      display.setCursor(20, 10);
      display.println("Front Left (FL)\n");
      display.fillTriangle(55,24,60,19,65,24, WHITE);
      display.println();
      display.setCursor(55, 28);
      display.println(FL_P_VALUE);
      //display.setCursor(60, 65);
      display.fillTriangle(55,38,60,43,65,38, WHITE);
      display.setCursor(1,48);
      display.print("Press Set to Confirm");
      display.display();
      btn_state();
      if(digitalRead(UP_BTN) == HIGH)
      {
        while(digitalRead(UP_BTN) == HIGH);
        {
          FL_P_VALUE++;
          display.setCursor(55, 28);
          display.println(FL_P_VALUE);
          delay(50);
        }
      }
      if(digitalRead(DOWN_BTN) == HIGH)
      {
        while(digitalRead(DOWN_BTN) == HIGH);
        {
          FL_P_VALUE--;
          display.setCursor(55, 28);
          display.println(FL_P_VALUE); 
          delay(50);
        }
      }
      if(digitalRead(SET_BTN) == HIGH)
      {
        while(digitalRead(SET_BTN) == HIGH);
        {
          display.clearDisplay();
          display.setCursor(20, 28);
          display.println("FL Position Saved!");
          display.display();
          delay(1000);
          break;
        }
      }
    }
  }  
  if(DOWN_BTN_STATE == HIGH)
  {
    while(digitalRead(DOWN_BTN) == HIGH);
    while(digitalRead(SET_BTN) == LOW)
    {
      display.clearDisplay();
      display.setTextColor(WHITE);
      display.setCursor(23, 1);
      display.println("Position Setting");
      display.setCursor(20, 10);
      display.println("Rare Right (RR)\n");
      display.fillTriangle(55,24,60,19,65,24, WHITE);
      display.println();
      display.setCursor(55, 28);
      display.println(RR_P_VALUE);
      //display.setCursor(60, 65);
      display.fillTriangle(55,38,60,43,65,38, WHITE);
      display.setCursor(1,48);
      display.print("Press Set to Confirm");
      display.display();
      btn_state();
      if(digitalRead(UP_BTN) == HIGH)
      {
        while(digitalRead(UP_BTN) == HIGH);
        {
          RR_P_VALUE++;
          display.setCursor(55, 28);
          display.println(RR_P_VALUE);
          delay(50);
        }
      }
      if(digitalRead(DOWN_BTN) == HIGH)
      {
        while(digitalRead(DOWN_BTN) == HIGH);
        {
          RR_P_VALUE--;
          display.setCursor(55, 28);
          display.println(RR_P_VALUE);
          delay(50);
        }
      }
      if(digitalRead(SET_BTN) == HIGH)
      {
        while(digitalRead(SET_BTN) == HIGH);
        {
          display.clearDisplay();
          display.setCursor(20, 28);
          display.println("RR Position Saved!");
          display.display();
          delay(1000);
          break;
        }
      }
    }
  }  
  if(RIGHT_BTN_STATE == HIGH)
  {
    while(digitalRead(RIGHT_BTN));
    while(digitalRead(SET_BTN) == LOW)
    {
      display.clearDisplay();
      display.setTextColor(WHITE);
      display.setCursor(23, 1);
      display.println("Position Setting");
      display.setCursor(20, 10);
      display.println("Rare Left (RL)\n");
      display.fillTriangle(55,24,60,19,65,24, WHITE);
      display.println();
      display.setCursor(55, 28);
      display.println(RL_P_VALUE);
      //display.setCursor(60, 65);
      display.fillTriangle(55,38,60,43,65,38, WHITE);
      display.setCursor(1,48);
      display.print("Press Set to Confirm");
      display.display();
      btn_state();
      if(digitalRead(UP_BTN) == HIGH)
      {
        while(digitalRead(UP_BTN) == HIGH);
        {
          RL_P_VALUE++;
          display.setCursor(55, 28);
          display.println(RL_P_VALUE);
          delay(50);
        }
      }
      if(digitalRead(DOWN_BTN) == HIGH)
      {
        while(digitalRead(DOWN_BTN) == HIGH);
        {
          RL_P_VALUE--;
          display.setCursor(55, 28);
          display.println(RL_P_VALUE);
          delay(50);
        }
      }
      if(digitalRead(SET_BTN) == HIGH)
      {
        while(digitalRead(SET_BTN) == HIGH);
        {
          display.clearDisplay();
          display.setCursor(15, 28);
          display.println("RL Position Saved!");
          display.display();
          delay(1000);
          break;
        }
      } 
    }    
  }
  Serial.println("Break Position");
  menu();        
}
