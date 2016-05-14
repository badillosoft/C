#include <stdio.h>

void obtenerFilaColumna(int posicion, int *fila, int *columna) {
	if (posicion == 0) {
		*fila = 0; *columna = 0;		
	} else if (posicion == 1) {
		*fila = 0; *columna = 1;		
	} else if (posicion == 2) {
		*fila = 0; *columna = 2;		
	} else if (posicion == 3) {
		*fila = 1; *columna = 0;		
	} else if (posicion == 4) {
		*fila = 1; *columna = 1;		
	} else if (posicion == 5) {
		*fila = 1; *columna = 2;		
	} else if (posicion == 6) {
		*fila = 2; *columna = 0;		
	} else if (posicion == 7) {
		*fila = 2; *columna = 1;		
	} else if (posicion == 8) {
		*fila = 2; *columna = 2;
	}
}

int indice(int i, int j) {
	if (i == 0 && j == 0) return 0;
	else if (i == 0 && j == 1) return 1;
	else if (i == 0 && j == 2) return 2;
	else if (i == 1 && j == 0) return 3;
	else if (i == 1 && j == 1) return 4;
	else if (i == 1 && j == 2) return 5;
	else if (i == 2 && j == 0) return 6;
	else if (i == 2 && j == 1) return 7;
	else if (i == 2 && j == 2) return 8;
	
	return -1;
}

imprimirTablero(int tablero[]) {
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%i ", tablero[indice(i, j)]);
		}
		printf("\n");
	}
	
	printf("\n: ");
}

int posicion(int tablero[], int numeroSeleccionado) {
	int i;
	for (i = 0; i < 9; i++) {
		if (tablero[i] == numeroSeleccionado) {
			return i;
		}
	}
	
	return -1;
}

void obtenerVecinos(int tablero[], int vecinos[], int pos) {
	int fila, columna, p = 0;
	
	obtenerFilaColumna(pos, &fila, &columna);
	
	// Checar si tiene vecino izquierdo
	if (columna - 1 >= 0) {
		vecinos[p] = tablero(indice(fila, columna - 1));
		p++;
	}
	
	// Checar si tiene vecino derecho
	if (columna + 1 < 3) {
		vecinos[p] = tablero(indice(fila, columna + 1));
		p++;
	}
	
	// Checar si tiene vecino de arriba
	if (fila - 1 >= 0) {
		vecinos[p] = tablero(indice(fila - 1, columna));
		p++;
	}
	
	// Checar si tiene vecino de abajo
	if (fila + 1 < 3) {
		vecinos[p] = tablero(indice(fila + 1, columna));
		p++;
	}
	
	int i;
	
	for (i = p; i < 4; i++) {
		vecinos[i] = -1;
	}
}

int main(int argc, char *argv[]) {
	
	int tablero[9] = {7, 4, 5, 2, 1, 0, 3, 6, 8};
	int numeroSeleccionado = 0;
	
	// Inicia BLOQUE
	while (1) {
		imprimirTablero(tablero);
		
		scanf("%d", &numeroSeleccionado);
		
		// TODO: Buscar la posicion en el tablero del numero
		int pos = posicion(tablero, numeroSeleccionado);
		
		// TODO: Obtener los vecinos de la posicion en el tablero
		int vecinos[4];
		
		obtenerVecinos(vecinos, pos);
		
		// TODO: Checar si el 0 esta en los vecinos
		
		// TODO: SI si, intercambiar la posicion en el tablero con la del vecino con valor 0
		
		// TODO: Y si no, decir que ño
		
		// TODO: Repetir BLOQUE
	}
	
	return 0;
}