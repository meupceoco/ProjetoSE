int um = 0;
int dois = 0;
void setup() {

  Serial.begin(19200);

}
void loop() {


    Serial.write(128);
    delay(1000);
 
    Serial.write(130);
    delay(1000);
        
    Serial.write(132);
    delay(1000);

    Serial.write(130);
    delay(1000);
        
    Serial.write(137);
    delay(1000);
    
    Serial.write(200);
    delay(1000);
    
    Serial.write(65);
    delay(1000);

    Serial.write(200);
    delay(1000);
    
    Serial.write(65);
    delay(1000);
}

// 128, 132, 137 (0, 65, 0 , 65)
