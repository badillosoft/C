#include <stdio.h>

int main() {
    int opcion, a, b;
    
    do {
        system("cls");
        printf("1. Calcular la suma de dos numeros\n");
        printf("2. Calcular la multiplicacion de dos numeros\n");
        printf("3. Calcular el mayor de dos numeros\n");
        printf("4. salir\n");
        
        printf(":> ");
        scanf("%d", &opcion);
        
        if (opcion == 1) {
            printf("Ingresa el primer numero:> ");
            scanf("%d", &a);
            printf("Ingresa el segundo numero:> ");
            scanf("%d", &b);
            
            printf("La suma es: %d", a + b);
            getch();
        } else if (opcion == 2) {
            printf("Ingresa el primer numero:> ");
            scanf("%d", &a);
            printf("Ingresa el segundo numero:> ");
            scanf("%d", &b);
            
            printf("La multiplicacion es: %d", a * b);
            getch();
        } else if (opcion == 3) {
            printf("Ingresa el primer numero:> ");
            scanf("%d", &a);
            printf("Ingresa el segundo numero:> ");
            scanf("%d", &b);
            
            if (a > b) {
                printf("El mayor es: %d", a);
            } else {
                printf("El mayor es: %d", b);
            }
            
            //printf("El mayor es: %d", a > b ? a : b);
            // Operador condicional
            // resultado = condicion ? exprV : exprF;
            
            getch();
        }
    } while(opcion != 4);
    
    return 0;
}