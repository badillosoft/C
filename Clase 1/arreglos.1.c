#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// Creamos un arreglo de 10 enteros llamado datos
	int datos[10], i;

	for (i = 0; i < 10; i = i + 1) {
		datos[i] = 2 * i + 1;
	}
	
	for (i = 0; i < 10; i = i + 1) {
		printf("datos[%i] = %i\n", i, datos[i]);
	}
	
	return 0;
}