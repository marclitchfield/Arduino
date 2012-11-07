const int POT = 0;
const int LED = 9; // PWM
float x = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float potVal = analogRead(POT);
  float dx = potVal / 2048.0;
  x += dx;
  int val = 127 + 128 * cos(x);
  analogWrite(LED, val);

  Serial.print(potVal);  
  Serial.print(", ");
  Serial.print(dx);
  Serial.print(", ");
  Serial.println(val);
}
