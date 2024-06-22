#include <stdio.h>

int main() {

	//reads 5 nums and counts num of positive and negative nums

	int a, b, c, d, e, pos = 0, neg = 0, number[5];

	printf("enter first number: ");
	scanf("%d", &number[0]);

	printf("enter second number: ");
        scanf("%d", &number[1]);

	printf("enter third number: ");
        scanf("%d", &number[2]);

	printf("enter fourth number: ");
        scanf("%d", &number[3]);

	printf("enter fifth number: ");
        scanf("%d", &number[4]);

	for (int i = 0; i < 5; i++) {
		if(number[i]>0) {
			pos++;
		}
		else {
			neg++;
		}
	}

	printf("\nNumber of positive numbers: %d", pos);
        printf("\nNumber of negative numbers: %d", neg);
        printf("\n");

	return 0;

}
