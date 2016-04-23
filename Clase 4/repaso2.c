#include <stdio.h>

struct Persona {
    char nombre[60];
    int edad;
    char sexo;
}

int main() {
    
    struct Persona leyo;
    
    printf("Hola mundo %d", 123);
    
    sprintf(leyo.nombre, "Alan Badillo %d", 123);
    
    leyo.edad = 27;
    
    leyo.sexo = 'H';
    
    return 0;
}