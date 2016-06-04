#include <stdio.h>

int main() {
	int arreglo[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

	printf ("%d\n", *arreglo);
	printf ("%d\n", *(arreglo + 1));
	printf ("%d\n", *(arreglo + 2));
	printf ("%d\n", *(arreglo + 3));
	printf ("%d\n", *(arreglo + 4));

	printf ("---------------------\n");

	int* p = arreglo;

	printf ("%d\n", p[0]);
	printf ("%d\n", p[1]);
	printf ("%d\n", p[2]);
	printf ("%d\n", p[3]);
	printf ("%d\n", p[4]);

	return 0;
}
