#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int datos[10], i;
	
	for (i = 0; i < 10; i = i + 1) {
		printf("Dame el valor %d: ", i + 1);
		scanf("%d", &datos[i]);
	}
	
	for (i = 0; i < 10; i = i + 1) {
		printf("El dato %d es %d\n", i + 1, datos[i]);
	}
	
	return 0;
}