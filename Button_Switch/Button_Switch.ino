const int LED = 13;
const int BUTTON = 10;
int buttonPresses = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(BUTTON) == LOW) {
    buttonPresses++;
    Serial.print("You pressed it ");
    Serial.print(buttonPresses);
    Serial.print(" time(s)\n");
    for(int i=0; i<5; i++) {
      digitalWrite(LED, HIGH);
      delay(100);
      digitalWrite(LED, LOW);
      delay(100);    
    }
  }
}
