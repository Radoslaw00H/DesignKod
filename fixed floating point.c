// ill try to avoid floating point errors

// no float no double for me from this point on
// i mean im going to test it now anyways but yea

// LIBRARIES
#include <stdio.h>
#include <stdint.h>

/*void fixedPoint(void) {
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
	
}*/

void NowItWillBeGood(void) {
	int64_t cc, cents, L1, L2, L3, L4, L5, g, h, i, j, k;
	
	cents = 1000;
	cc = cents;

	L1 = 2387449832 * cc;
	L2 = 3209488 * cc;
	L3 = 9874358347 * cc;
	L4 = 2389 * cc;
	L5 = 48229337283329 * cc;

	g = L3 * L1;
	h = L5 + L2;
	i = L4 - L5;
	j = L3 + L5 + L5 + L5 + L5 + L5;
	k = L2 - L1;

	printf("g = %lld\n", g);
	printf("h = %lld\n", h);
	printf("i = %lld\n", i);
	printf("j = %lld\n", j);
	printf("k = %lld\n", k);	
}

int main(void) {
	// fixedPoint();
	NowItWillBeGood();
return 0;
}