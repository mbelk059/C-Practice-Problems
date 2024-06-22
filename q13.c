#include <stdio.h>

int main() {

	//program that accepts 3 ints and finds max of the 3

	int a, b, c;

	printf("Input the first integer: ");
	scanf("%d", &a);

	printf("Input the second integer: ");
	scanf("%d", &b);

	printf("Input the third integer: ");
	scanf("%d", &c);

	if (a>b && a>c) {
		printf("Max is %d\n", a);
	}
	else if (b>a && b>c) {
		printf("Max is %d\n", b);
	}
	else if (c>a && c>b) {
		printf("Max is %d\n", c);
	}
	else {
		printf("They are equal\n");
	}

	return 0;

}
