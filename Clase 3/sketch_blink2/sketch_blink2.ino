
int pinLed = 12;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(pinLed, HIGH);
  delay(1000);
  digitalWrite(pinLed, LOW);
  delay(1000);

  if (pinLed == 12) {
    pinLed = 11;
  } else {
    pinLed = 12;
  }
}
