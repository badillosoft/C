#include <stdio.h>
#include "robot.h"

int main() {
    struct Robot floppy;
    struct Robot fluffy;
    
    sprintf(floppy.name, "floppy");
    floppy.x = 10;
    floppy.y = 0;
    
    sprintf(fluffy.name, "fluffy");
    fluffy.x = 10;
    fluffy.y = 20;
    
    return 0;
}