#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// Creamos un arreglo de 10 enteros llamado datos
	int datos[10], i, sum = 0;
	float prom;

	for (i = 0; i < 10; i = i + 1) {
		datos[i] = 2 * i + 1;
	}
	
	for (i = 0; i < 10; i = i + 1) {
		// TODO: acumular los valores de datos[i]
		sum = sum + datos[i];
	}
	
	prom = sum / 10.0f;
	
	printf("Promedio: %f", prom);
	
	return 0;
}