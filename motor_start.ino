void FR_MOTOR()
{
  digitalWrite(FR_EN, HIGH);  
  if(FR_CURRENT_POS<=FR_P_VALUE)
  {
    FR_TEMP = FR_CURRENT_POS - FR_PREV; 
    if(FR_TEMP > 0)
    {
      digitalWrite(FR_DIR, HIGH);
      for(int i = 0; i<=FR_TEMP; i++)
      {
        digitalWrite(FR_STEP, HIGH);
        delayMicroseconds(10000);
        digitalWrite(FR_STEP, LOW);
        delayMicroseconds(10000);
        //Serial.println(i);    
      }
      FR_PREV = FR_CURRENT_POS;
    
    } 
    if(FR_TEMP<0)
    {
      FR_TEMP = abs(FR_CURRENT_POS - FR_PREV);
      digitalWrite(FR_DIR, LOW);
      for(int i = 0; i<=FR_TEMP; i++)
      {
        digitalWrite(FR_STEP, HIGH);
        delayMicroseconds(10000);
        digitalWrite(FR_STEP, LOW);
        delayMicroseconds(10000);
        //Serial.println(i);
      }
      FR_PREV = FR_CURRENT_POS;
    }
    display.clearDisplay();
    display.setCursor(8, 28);
    display.println("FR Position Updated!");
    display.display();     
  }
}

void FL_MOTOR()
{
  digitalWrite(FL_EN, HIGH);  
  if(FL_CURRENT_POS<=FL_P_VALUE)
  {
    FL_TEMP = FL_CURRENT_POS - FL_PREV;
    if(FL_TEMP > 0)
    {
      digitalWrite(FL_DIR, HIGH);
      for(int i = 0; i<=FL_TEMP; i++)
      {
        digitalWrite(FL_STEP, HIGH);
        delayMicroseconds(10000);
        digitalWrite(FL_STEP, LOW);
        delayMicroseconds(10000);
        //Serial.println(i);    
      }
      FL_PREV = FL_CURRENT_POS; 
    } 
    if(FL_TEMP<0)
    {
      FL_TEMP = abs(FL_CURRENT_POS - FL_PREV);
      digitalWrite(FL_DIR, LOW);
      for(int i = 0; i<=FL_TEMP; i++)
      {
        digitalWrite(FL_STEP, HIGH);
        delayMicroseconds(10000);
        digitalWrite(FL_STEP, LOW);
        delayMicroseconds(10000);
        //Serial.println(i);
      }
      FL_PREV = FL_CURRENT_POS;
    }
    display.clearDisplay();
    display.setCursor(8, 28);
    display.println("FL Position Updated!");
    display.display();
  }
}

void RR_MOTOR()
{
  digitalWrite(RR_EN, HIGH);  
  if(RR_CURRENT_POS<=RR_P_VALUE)
  {
    RR_TEMP = RR_CURRENT_POS - RR_PREV;
    if(RR_TEMP > 0)
    {
      digitalWrite(RR_DIR, HIGH);
      for(int i = 0; i<=RR_TEMP; i++)
      {
        digitalWrite(RR_STEP, HIGH);
        delayMicroseconds(10000);
        digitalWrite(RR_STEP, LOW);
        delayMicroseconds(10000);
        //Serial.println(i);    
      }
      RR_PREV = RR_CURRENT_POS;
    } 
    if(RR_TEMP<0)
    {
      RR_TEMP = abs(RR_CURRENT_POS - RR_PREV);
      digitalWrite(RR_DIR, LOW);
      for(int i = 0; i<=RR_TEMP; i++)
      {
        digitalWrite(RR_STEP, HIGH);
        delayMicroseconds(10000);
        digitalWrite(RR_STEP, LOW);
        delayMicroseconds(10000);
        //Serial.println(i);
      }
      RR_PREV = RR_CURRENT_POS;
    }
    display.clearDisplay();
    display.setCursor(8, 28);
    display.println("RR Position Updated!");
    display.display();
  }
}

void RL_MOTOR()
{
  digitalWrite(RL_EN, HIGH);  
  if(RR_CURRENT_POS<=RR_P_VALUE)
  {
    RL_TEMP = RL_CURRENT_POS - RL_PREV;  
    if(RL_TEMP > 0)
    {
      digitalWrite(RL_DIR, HIGH);
      for(int i = 0; i<=RL_TEMP; i++)
      {
        digitalWrite(RL_STEP, HIGH);
        delayMicroseconds(10000);
        digitalWrite(RL_STEP, LOW);
        delayMicroseconds(10000);
        //Serial.println(i);    
      }
      RL_PREV = RL_CURRENT_POS;
    } 
    if(RL_TEMP<0)
    {
      RL_TEMP = abs(RL_CURRENT_POS - RL_PREV);
      digitalWrite(RL_DIR, LOW);
      for(int i = 0; i<=RL_TEMP; i++)
      {
        digitalWrite(RL_STEP, HIGH);
        delayMicroseconds(10000);
        digitalWrite(RL_STEP, LOW);
        delayMicroseconds(10000);
        //Serial.println(i);
      }
      RL_PREV = RL_CURRENT_POS;
    }
    display.clearDisplay();
    display.setCursor(8, 28);
    display.println("RL Position Updated!");
    display.display();
  }
}
