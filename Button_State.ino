void btn_state()
{
  while((digitalRead(UP_BTN)) == LOW && (digitalRead(LEFT_BTN)) == LOW && (digitalRead(DOWN_BTN)) == LOW && (digitalRead(RIGHT_BTN)) == LOW &&(digitalRead(SET_BTN)) == LOW); 
  UP_BTN_STATE = digitalRead(UP_BTN);
  LEFT_BTN_STATE = digitalRead(LEFT_BTN);
  DOWN_BTN_STATE = digitalRead(DOWN_BTN);
  RIGHT_BTN_STATE = digitalRead(RIGHT_BTN);
  SET_BTN_STATE = digitalRead(SET_BTN);
}
