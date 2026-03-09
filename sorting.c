// A SORTING ALGORITHM

#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void GenerateAndSort(void) {
	uint8_t zero, a, b, c, d, e, f, g, h, i, j, k;

	zero = 0;
	a = (uint8_t)(rand() % 256);	// 0–255
	b = (uint8_t)(rand() % 256);
	c = (uint8_t)(rand() % 256);
	d = (uint8_t)(rand() % 256);
	e = (uint8_t)(rand() % 256);
	f = (uint8_t)(rand() % 256);
	g = (uint8_t)(rand() % 256);
	h = (uint8_t)(rand() % 256);
	i = (uint8_t)(rand() % 256);
	j = (uint8_t)(rand() % 256);
	k = (uint8_t)(rand() % 256);

	printf("%u\n%u\n%u\n%u\n%u\n%u\n%u\n%u\n%u\n%u\n%u\n", a, b, c, d, e, f, g, h, i, j, k);

	uint8_t numbers[11] = {a, b, c, d, e, f, g, h, i, j, k};
	do {
	
}
}


int main(void) {
	GenerateAndSort();	
	return 0;
}