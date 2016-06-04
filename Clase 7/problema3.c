#include <stdio.h>

int main() {
    int opcion;
    
    do {
        system("cls");
        printf("1. Calcular la suma de dos numeros\n");
        printf("2. Calcular la multiplicacion de dos numeros\n");
        printf("3. Calcular el mayor de dos numeros\n");
        printf("4. salir\n");
        
        printf(":> ");
        scanf("%d", &opcion);
    } while(opcion != 4);
    
    /*
    do {
        system("cls");
        printf("1. Calcular la suma de dos numeros\n");
        printf("2. Calcular la multiplicacion de dos numeros\n");
        printf("3. Calcular el mayor de dos numeros\n");
        printf("4. salir\n");
        
        printf(":> ");
        scanf("%d", &opcion);
        
        if (opcion ==  4) {
            break;
        }
    } while(1);
    */
    
    return 0;
}