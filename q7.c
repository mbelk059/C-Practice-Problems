#include <stdio.h>

int main() {

	//program to display multiple variables.

	int a = 125, b = 12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.1415927;
	char c = 'W';
	unsigned long ux = 2541567890;

	printf("a + c = %d\n", a+c); // int + char gives int
	printf("x + c = %f\n", x+c); // gives float or double?
	printf("dx + x = %f\n", dx+x); // gives float or double?
	printf("((int) dx) + ax = %ld\n", ((int) dx) + ax); // gives long
	printf("a + x = %f\n", a+x); // int + float gives float
	printf("s + b = %d\n", s+b); // int + short gives int
	printf("s + c = %hd\n", s+c); // short + char gives short int
	//ax + c = long so %ld
	//ax + ux = unsigned long so %lu

	return 0;

}
