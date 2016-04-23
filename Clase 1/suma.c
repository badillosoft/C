#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // Declaramos una variable llamada suma de tipo (int)
    int suma;
    
    // Asignamos la variable suma
    suma = 5 + 6;
    
    // Imprimimos lo que contiene la variable suma
    // Usamos dentro de printf (%i) 
    // para hacer la sustitución del parámetro
    printf("5 + 6 = %i\n", suma);
    
    printf("\nPulsa una tecla para salir...");
    
    getchar();
    
    return 0;
}