#include <Servo.h>

Servo gira;
int giro = 0;
unsigned int sonar;
unsigned int sonar2;
void setup() {
  
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  
  gira.attach(9);
}

void loop() {

  //Sensor de Ultrassom

  sonar = analogRead(A0);
  
  sonar2 = analogRead(A1);
  // sonar *= 3;
  Serial.print("distância: "); Serial.print(sonar, DEC); Serial.println("mm");
  delay(50);

  if (sonar > 40) {
    noTone(7);
    digitalWrite(7, HIGH);
    Serial.println("desligado");
  } else {
    tone(7, 2000);
    digitalWrite(7, LOW);
    Serial.println("ligado");
  }
  if(sonar2 > 40){
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }

    //Servomotor

    for(giro = 0; giro <= 200; giro++){
      gira.write(giro);
      delay(15);
      
   // Serial.println(giro);
    }

    for(giro = 200; giro >= 0; giro--){
      gira.write(giro);
      //Serial.println(giro);
    }

}

  
