int sensorPin = 0;
int LEDPin = 11;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  
  if (sensorValue < 100) {
    digitalWrite(LEDPin, HIGH);
  } else {
    digitalWrite(LEDPin, LOW);
  }
  
  delay(250);
}
