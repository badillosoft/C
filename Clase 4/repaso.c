#include <stdio.h>

int main(int argc, char *arv[]) {
    int a;
    int b = 123;
    float c = 1.1234;
    
    int arr[100];
    
    int i;
    for (i = 0; i < 100; i++) {
        arr[i] = i * i;
    }
    
    int arr2[100];
    for (i = 0; i < 100; i++) {
        arr2[99 - i] = arr[i];
    }
    
    int accum = 0;
    int n;
    do {
        printf("Ingresa un numero positivo");
        scanf("%d", &n);
        
        accum += n;
    } while (n > 0);
}