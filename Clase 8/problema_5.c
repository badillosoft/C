#include <stdio.h>

int* crear_arreglo(int n) {
	return (int *) malloc (n * sizeof(int) );
}

int *slice(int* arreglo, int s, int e) {
	// Crear un arreglo de tamaño e - s + 1
	int n = e - s + 1;
	int* sub_arreglo = crear_arreglo(n);
	
	// Necesitamos que
	// sub_arreglo[0] = arreglo[s]
	// sub_arreglo[1] = arreglo[s + 1]
	// sub_arreglo[2] = arreglo[s + 2]
	// ...
	// sub_arreglo[n - 1] = arreglo[s + n - 1]
	
	int i;
	for (i = 0; i < n; i++) {
		sub_arreglo[i] = arreglo[s + i];
	}
	
	return sub_arreglo;
}

int main() {
	int numeros[] = {1, 3, 5, 7, 9, 11, 13, 15};
	
	int* sub = slice(numeros, 2, 6);
	
	foo(sub, 6 - 2 + 1);
	
	return 0;
}