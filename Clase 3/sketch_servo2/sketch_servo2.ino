#include "robot.h"

int ty = 10;

void setup() {
  Serial.begin(9600);
  start();
}

void loop() {
  cmd = Serial.read();

  if (cmd == 'L') left();
  else if (cmd == 'R') right();
  else if (cmd == 'X') pause();
  else if (cmd == 'F') moveForward();
  else if (cmd == 'B') moveBackward();
  else if (cmd == 'y') moveY(ty);
  else if (cmd == '+') {
    ty++;
    Serial.print("Target Y: ");
    Serial.println(ty);
  }
  else if (cmd == '-') {
    ty--;
    Serial.print("Target Y: ");
    Serial.println(ty);
  }

  if (p == HIGH) pause();
}
