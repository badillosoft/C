#include <stdio.h>

int main (int argc, char *argv[]) {
	
	char c = 'A';
	int i = 123;
	float f = 1.234f;
	double d =  1.234;
	
	char str[] = {'H', 'o', 'l', 'a', 0};
	
	printf("La cadena str es: %s\n", str);
	
	char buff[128];
	
	sprintf (buff, "Hola soy yo %i\n", 20 * 3);
	
	printf ("El buffer vale: %s\n", buff);
	
	printf ("Hola mundo %i\n", 1 + 2);
	
	return 0;
}