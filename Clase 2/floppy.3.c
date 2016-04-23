#include <stdio.h>
#include "floppy.h"

int main(int argc, char *argv[]) {
	
	printf("%d %d 2\n", CX, CY);
	printf("%d %d 2\n", CX + CW, CY);
	printf("%d %d 2\n", CX + CW, CY + CH);
	printf("%d %d 2\n", CX, CY + CH);
	printf("%d %d 2\n\n", CX, CY);
	
	bot();
	
	irA(10, 5);
	irA(6, 2);
	irA(8, 13);
	irA(0, 0);
	
	return 0;
}