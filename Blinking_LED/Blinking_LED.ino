const int LED = 13;

void setup() {
  pinMode(LED, OUTPUT);
}

void pulse(int count) {
 for(int i=0; i<count; i++) {
    digitalWrite(LED, HIGH);
    delay(25);
    digitalWrite(LED, LOW);
    delay(25); 
  }
}

void blink(int count) {
 for(int i=0; i<count; i++) {
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(250); 
  }
}

void loop() {
  pulse(25);
  delay(250);
  blink(5);
  delay(250);
  pulse(25);
  delay(2000);
}
