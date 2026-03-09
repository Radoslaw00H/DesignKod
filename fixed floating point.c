// ill try to avoid floating point errors

// no float no double for me from this point on
// i mean im going to test it now anyways but yea

// LIBRARIES
#include <stdio.h>
#include <stdint.h>

void fixedPoint(void) {
	float testOne = 23873.9324;
	float testTwo = 345.523143;
	float testThree = 2837.2343243;
	float testFour = 238.287343;

	double testFive = 3832.604718339482039;
	double testSix = 45767.298374983247297;

	double a, b, c, d, e, f;

	a = testOne + testThree;
	b = testSix + testFive;
	c = testOne * testTwo;
	d = testFive - testFour;
	e = testFive / testSix;
	f = testTwo * 10 + testSix;

	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("c = %f\n", c);
	printf("d = %f\n", d);
	printf("e = %f\n", e);
	printf("f = %f\n", f);	
	
}

int main(void) {
	fixedPoint();
return 0;
}