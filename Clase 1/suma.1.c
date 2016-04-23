#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // Declaramos dos variables de tipo (int)
    int a, b;
    
    // Asignamos la variable suma
    a = 279;
    b = 124;
    
    // Imprimimos lo que contiene la variable suma
    // Usamos dentro de printf (%i) 
    // para hacer la sustitución del parámetro
    printf("%i + %i = %i\n", a, b, a + b);
    
    printf("\nPulsa una tecla para salir...");
    
    getchar();
    
    return 0;
}