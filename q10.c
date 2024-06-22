#include <stdio.h>

int main() {

	//program that accepts 2 ints from user and calculates their product

	int a, b, product;

	printf("Input the first integer: ");
	scanf("%d", &a);

	printf("Input the second integer: ");
	scanf("%d", &b);

	product = a*b;

	printf("Product of the above two integers = %d\n", product);

	return 0;
}
