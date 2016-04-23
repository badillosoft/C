const int buttonPin = 3;
const int ledPinBlue = 12;
const int ledPinGreen = 11;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(ledPinBlue, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    Serial.write('H');
    digitalWrite(ledPinBlue, HIGH);
  } else {
    Serial.write('L');
    digitalWrite(ledPinBlue, LOW);
  }

  delay(1000);
}
