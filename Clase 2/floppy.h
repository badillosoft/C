#define FLOPPY_H

int X = 0;
int Y = 0;

int CX = 4;
int CY = 1;
int CW = 3;
int CH = 5;

int estaEnCaja(int px, int py, int x, int y, int w, int h) {
	return px >= x && px <= x + w && py >= y && py <= y + h;
}

void bot() {
	printf("%d %d ", X, Y);
	
	int test = estaEnCaja(X, Y, CX, CY, CW, CH);
	
	if (test) {
		printf("0\n");
	} else {
		printf("1\n");
	}
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