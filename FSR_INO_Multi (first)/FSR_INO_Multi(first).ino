float analogPins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int numAnalogPins = 11;

void setup(){
  Serial.begin(9600);
}

void loop() {
  
  for (int i = 0; i < numAnalogPins; i++) {
    int val = analogRead(analogPins[i]); 

      if (val > 124) {
        Serial.print(i + 10);
        Serial.print(val -24);
       }
        
      else {
        Serial.print(i + 10);
        Serial.print(0);
        Serial.print(0);
        Serial.print(0);
       }
      }
  
  Serial.println();
  delay(10);
}
