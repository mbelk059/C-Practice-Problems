#include <stdio.h>

int main() {

	//reads 5 numbers and sums all odd values between them

	int a, b, c, d, e, sum = 0;

	printf("enter first number: ");
	scanf("%d", &a);

	printf("enter second number: ");
        scanf("%d", &b);

	printf("enter third number: ");
        scanf("%d", &c);

	printf("enter fourth number: ");
        scanf("%d", &d);

	printf("enter fifth number: ");
        scanf("%d", &e);

	int numbers[] = {a,b,c,d,e};
	int size = sizeof(numbers)/sizeof(numbers[0]);

	for (int i = 0; i < size; i++) {
		if (numbers[i]%2 != 0) {
			sum+=numbers[i];
		}
	}

	printf("sum is: %d\n", sum);

	return 0;

}
