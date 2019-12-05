#include <Servo.h>

Servo servoLeft;
Servo servoRight;

int wholeNumber;
int serialMonitorValue = (1494);


void setup() {
  
  Serial.begin(9600);
  Serial.setTimeout(10);
  
  servoLeft.attach (11);
  servoRight.attach(10);
}

void loop () {
  
  while (Serial.available() == 0 ) {}
  
  serialMonitorValue = Serial.parseInt();
  
  Serial.print("input =");
  Serial.println(serialMonitorValue);
  
  servoLeft.writeMicroseconds(serialMonitorValue);
  servoRight.writeMicroseconds(serialMonitorValue);
}

