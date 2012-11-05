const int LED = 13;
const int BUTTON = 10;
int ledState = LOW;
boolean resetFlag = false;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void printStatus(boolean pressed) {
  Serial.print(pressed ? "BUTTON LOW: " : "BUTTON HIGH: ");
  Serial.print("LED is ");
  Serial.print(ledState);
  Serial.print("\n");
}

void loop() {
  int buttonState = digitalRead(BUTTON);

  if (buttonState == LOW && resetFlag == false) {
    resetFlag = true;
    ledState = 1 - ledState;
    digitalWrite(LED, ledState);    
    printStatus(true);
    delay(50);
  } else if (buttonState == HIGH && resetFlag == true) {
    resetFlag = false;
    printStatus(false);
  }
}
