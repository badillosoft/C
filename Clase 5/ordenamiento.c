#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n = argc - 1;
	
	if (n <= 0) {
		printf("No se han recibido argumentos");
		return 1;
	}
	
	int values[n];
	
	int i;
	
	for (i = 0; i < n; i++) {
		values[i] = atoi(argv[i + 1]);
		printf("%i ", values[i]);
	}
	printf("\n");
	
	int posCajitaRoja = 0;
	int posCajitaVerde = 1;
	
	// Mientras la caja roja este en el arreglo
	while (posCajitaRoja < n) {
		posCajitaVerde = posCajitaRoja + 1;
		
		while (posCajitaVerde < n) {
			int valorCajitaRoja = values[posCajitaRoja];
			int valorCajitaVerde = values[posCajitaVerde];
			
			// Si caja roja mayor a caja verde			
			if (valorCajitaRoja > valorCajitaVerde) {
				// Intercambiar los valores de las cajas
				values[posCajitaRoja] = valorCajitaVerde;
				values[posCajitaVerde] = valorCajitaRoja;
			}
			
			// mueve la caja verde a la derecha
			posCajitaVerde++;
		}
		
		// Mueve la caja roja a la derecha
		posCajitaRoja++;
	}
	
	for (i = 0; i < n; i++) {
		printf("%i ", values[i]);
	}
	printf("\n");
	
	return 0;
}