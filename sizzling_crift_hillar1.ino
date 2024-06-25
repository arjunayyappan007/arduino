
const int buzzer = 10; 

void setup(){
}

void loop(){
  tone(buzzer, 1000); 
  delay(1000);       
  noTone(buzzer);     
  delay(1000);        
}