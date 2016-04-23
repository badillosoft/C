#include <stdio.h>

int X = 0;
int Y = 0;

void bot() {
	printf("%d, %d\n", X, Y);
}

void avanzarX() {
	X++; // X = X + 1
	bot();
}

void retrocederX() {
	X--; // X = X - 1
	bot();
}

void avanzarY() {
	Y++; // Y = Y + 1
	bot();
}

void retrocederY() {
	Y--; // Y = Y - 1
	bot();
}

void irA(int x, int y) {
	while (x != X || y != Y) {
		if (x > X) {
			avanzarX();
		} else if (x < X) {
			retrocederX();
		}
		
		if (y > Y) {
			avanzarY();
		} else if (y < Y) {
			retrocederY();
		}
	}
}

int main(int argc, char *argv[]) {
	
	bot();
	
	//int x, y;
	
	//printf("A donde te quieres mover (x y): ");
	//scanf("%d %d", &x, &y);
	
	irA(10, 5);
	irA(6, 2);
	irA(8, 13);
	irA(0, 0);
	
	return 0;
}