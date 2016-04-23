#include <Servo.h>

Servo servo;
int cmd = 0;
int stat = LOW;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (stat == LOW) {
    servo.attach(9);
    stat = HIGH;
    Serial.println("Ready");
  }

  cmd = Serial.read();

  if (cmd == 'L') {
    servo.write(0);
    Serial.println("Left");
  } else if (cmd == 'R') {
    servo.write(180);
    Serial.println("Right");
  } else if (cmd == 'X') {
    servo.write(90):
    delay(4000);
    servo.detach();
    delay(1000);
    stat = LOW;
    Serial.println("Stop");
  }
}
