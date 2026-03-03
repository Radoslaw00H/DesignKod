// i dunno

// libraries
#include <stdio.h>		// I/O library
// program itself

int main(void){			// Program itself
	int a, b, c, x;
	x = 9;
	a = 5;
	b = 3;
	c = a * b;
	if (x != 15) {
		printf("N: %d, %d\n", c, x);
		while(x != 15){
			printf("ADD ONE\n");
			x++;
		}
	}
	else {
		printf("Good: %d\n", c);
	}
	if (x == c) {
		printf("x = c\n");
	}
	return 0;
}