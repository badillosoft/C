int inc = 0;
const int bluePin = 12;
const int greenPin = 11;

void setup() {
  Serial.begin(9600);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  inc = Serial.read();
  //inc++;
  //Serial.println(inc);

  if (inc == 'H') {
    digitalWrite(greenPin, HIGH);
    Serial.println("Encendido");
  }

  if (inc == 'L') {
    digitalWrite(greenPin, LOW);
    Serial.println("Apagado");
  }

  digitalWrite(bluePin, HIGH);
  delay(200);
  digitalWrite(bluePin, LOW);
  delay(1000);
}
