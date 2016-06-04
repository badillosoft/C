#include <stdio.h>

int main() {
    int contador, suma = 0;
    for (contador = 1; contador <= 100; contador++) {
        if (contador % 2 == 0 || contador % 3 == 0) {
            // Se ejecuta si el contador es multiplo de 2 o multiplo 3
            suma++;
        }
    }
    
    printf("Hay %d multiplos de 2 o 3 del 1 al 100", suma);
    
    return 0;
}