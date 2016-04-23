#include <stdio.h>

int x = 0;
int y = 0;

void bot() {
	printf("%d, %d\n", x, y);
}

void avanzarX() {
	x++; // x = x + 1
	bot();
}

void retrocederX() {
	x--; // x = x - 1
	bot();
}

void avanzarY() {
	y++; // y = y + 1
	bot();
}

void retrocederY() {
	y--; // y = y - 1
	bot();
}

int main(int argc, char *argv[]) {
	
	bot();
	avanzarX();
	avanzarY();
	retrocederX();
	retrocederY();
	
	return 0;
}