#include <stdio.h>
#include <stdlib.h>

struct Caja {
	int valor;
	struct Caja *siguiente;
};

void imprimir(struct Caja *c) {
	printf("[%d]->", c->valor);
	
	if (c->siguiente == NULL) {
		printf("NULL\n");
		return;
	}
	
	imprimir(c->siguiente);
}

struct Caja* crear(int valor) {
	struct Caja* nueva = (struct Caja*)malloc(sizeof(struct Caja));
	
	nueva->valor = valor;
	nueva->siguiente = NULL;
	
	return nueva;
}

struct Caja* insertar(struct Caja *anterior, int valor) {
	struct Caja* nueva = crear(valor);
	
	anterior->siguiente = nueva;
	
	return nueva;
}

int main() {
	struct Caja c1;
	struct Caja c2;
	struct Caja c3;
	
	c1.valor = 1;
	c2.valor = 2;
	c3.valor = 3;
	
	c1.siguiente = &c2;
	c2.siguiente = &c3;
	c3.siguiente = NULL;
	
	imprimir(&c1);
	
	struct Caja *c4 = insertar(&c3, 4);
	struct Caja *c5 = insertar(c4, 5);
	struct Caja *c10 = insertar(c5, 10);
	struct Caja *c8 = insertar(c10, 8);
	
	imprimir(&c1);
	
	return 0;
}