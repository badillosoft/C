#include <Servo.h>

Servo servo;
int cmd = 0;
int x = 0;
int y = 0;
int c = 100;
int p = LOW;

void start() {
  servo.attach(9);
  Serial.println("Ready");
}

void pause() {
  p = HIGH;
  servo.write(c):
  delay(15);
  if (c == 100) c = 90;
  else c = 100;
}

void left() {
  p = LOW;
  servo.write(0);
  Serial.println("Left");
}

void right() {
  p = LOW;
  servo.write(180);
  Serial.println("Right");
}

void moveForward() {
  p = LOW;
  servo.write(180);
  delay(1000);
  pause();
  y++;
  Serial.print("y: ");
  Serial.println(y);
}

void moveBackward() {
  p = LOW;
  servo.write(0);
  delay(1000);
  pause();
  y--;
  Serial.print("y: ");
  Serial.println(y);
}

void moveY(int ty) {
  while (y != ty) {
    if (y < ty) moveForward();
    else if (y > ty) moveBackward();
  }
}

