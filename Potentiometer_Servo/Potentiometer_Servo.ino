#include <Servo.h>
Servo servo;

const int POT = 0;
const int SERVO = 9; // PWM

void setup() {
  servo.attach(SERVO);
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(POT);
  int angle = map(val, 0, 1023, 0, 180);
  servo.write(angle);
  
  Serial.print(val);
  Serial.print(",");
  Serial.println(angle);
  
  delay(10);
}
