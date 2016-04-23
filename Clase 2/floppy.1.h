#define FLOPPY_H

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