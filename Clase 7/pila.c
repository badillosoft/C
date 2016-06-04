#include <stdio.h>

struct Caja {
    int valor;
    struct Caja *siguiente;
};

struct Caja* insertar_caja(struct Caja *ultima, int valor) {
    struct Caja nueva;
    
    nueva.valor = valor;
    nueva.siguiente = NULL;
    
    ultima->siguiente = &nueva; // (*ultima).siguiente
    
    return &nueva;
}

void imprimir_caja(struct Caja *caja) {
    if (caja == NULL) {
        printf ("NULL\n");
        return;
    }
    
    printf ("[%d]->", caja->valor);
    
    imprimir_caja(caja->siguiente);
}

int main() {
    struct Caja cabeza;
    
    cabeza.valor = 1;
    cabeza.siguiente = NULL;
    
    imprimir_caja(&cabeza);
    
    struct Caja *ultima = &cabeza;
    
    ultima = insertar_caja(ultima, 3);
    ultima = insertar_caja(ultima, 5);
    ultima = insertar_caja(ultima, 7);
    
    imprimir_caja(&cabeza);
    
    ultima = insertar_caja(ultima, 2);
    ultima = insertar_caja(ultima, 4);
    ultima = insertar_caja(ultima, 6);
    
    imprimir_caja(&cabeza);
    
    return 0;
}

// [1]->NULL
// [1]->[3]->[5]->[7]->NULL
// [1]->[3]->[5]->[7]->[2]->[4]->[6]->NULL