unsigned int sensor;

void setup() {
 pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(19200);
  
    Serial.write(128);
    delay(300);

}
void loop() {

  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);    

    sensor = analogRead(A0);
    delay(100);

    if(sensor > 80){
      Serial.write(130);
    delay(300);
        
    Serial.write(137);
    delay(300);
    
    Serial.write(0);
    delay(300);
    
    Serial.write(-50);
    delay(300);

    Serial.write(0);
    delay(300);
    
    Serial.write(0);
    delay(300);
    
    }else{
 
    Serial.write(130);
    delay(300);
        
    Serial.write(137);
    delay(300);
    
    Serial.write(0);
    delay(300);
    
    Serial.write(0);
    delay(300);

    Serial.write(0);
    delay(300);
    
    Serial.write(0);
    delay(300);
    }
}

// 128, 132, 137 (0, 65, 0 , 65)
