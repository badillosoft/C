#include <stdio.h>

struct Punto {
    int x;
    int y;
};

struct Robot {
    Servo servoVertical;
    Servo servoHorizontal;
    int x;
    int y;
    int c;
    int p;
}

void moveForward(struct Robot robot) {
    moveServoRight(robot.servoHorizontal);
    robot.y++;
}

int main(int argc, char *argv[]) {
    struct Punto p;
    
    p.x = 10;
    p.y = 15;
    
    printf("(%d, %d)", p.x, p.y);
    
    return 0;
}