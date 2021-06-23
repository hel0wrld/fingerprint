#include<Servo.h>
 
int Laser = 13;
 char Incoming_value = 0;

Servo servo;  

int angle = 0;

void setup() {
    Serial.begin(9600);        
    pinMode(Laser, OUTPUT);
    servo.attach(8);
    servo.write(0);
}

void loop() {

     
 if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
           
    if(Incoming_value == 1)
    { digitalWrite(Laser,HIGH);
         delay(200);
         digitalWrite(Laser,LOW);
         delay(200);
         digitalWrite(Laser,HIGH);
         delay(100);
         digitalWrite(Laser,LOW);
         delay(100);
         digitalWrite(Laser,HIGH);
         delay(50);
         digitalWrite(Laser,LOW);
         
       servo.write( 90 );
 delay(5000);
  servo.write( 0 );

  }
 else if(Incoming_value == 0)      
    digitalWrite(Laser,HIGH);
    delay(100);
    digitalWrite(Laser,LOW);

  }
}
