#include <stdio.h>

int main () {
    
    double miVariable = 12; // [direccion, nombre, valor, tamaño] 0x?
    
    // Para recuperar la direccion de memoria de una variable
    // debemos anteponer & al nombre de la variable.
    // La direccion de memoria es un numero hexadecimal
    
    printf ("Direccion: %x\n", &miVariable);
    printf("Valor: %lf\n", miVariable);
    printf("Tanio: %d\n\n", sizeof(miVariable));
    
    return 0;
}