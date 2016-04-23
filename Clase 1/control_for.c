#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i;
	
	for (i = 3; i < 128; i = i + 8) {
		printf("%i ", i);
	}
	
	return 0;
}