#include <stdio.h>

int main() {

	//program that accepts 2 integers from user and finds their sum

	int a, b, sum;

        printf("Input the first integer: ");
	scanf("%d", &a);

	printf("Input the second integer: ");
	scanf("%d", &b);

	sum = a+b;

	printf("Sum of the above two integers = %d\n", sum);

	return 0;

}
