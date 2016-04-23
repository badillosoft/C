#include <stdio.h>

int estaEnCaja(int px, int py, int x, int y, int w, int h) {
	return px >= x && px <= x + w && py >= y && py <= y + h;
}

int main(int argc, char *argv[]) {
	
	int t1 = estaEnCaja(4, 6, 6, 4, 8, 8);
	int t2 = estaEnCaja(10, 6, 6, 4, 8, 8);
	
	printf("Test 1: %d\n", t1);
	printf("Test 2: %d\n", t2);
	
	return 0;
}