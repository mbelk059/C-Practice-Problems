#include <stdio.h>

int main() {

	//program that reads integer and returns its range
	//prints error if number is negative or more than 80

	int num;

	printf("enter number: ");
	scanf("%d", &num);

	if (num > 80 || num < 0) {
		printf("outside range\n");
	} else if (num >= 0 && num <= 20) {
		printf("range [0, 20]\n");
	} else if (num >= 21 && num <= 40) {
		printf("range [21, 40]\n");
	} else if (num >= 41 && num <= 60) {
		printf("range [41, 60]\n");
	} else {
		printf("range [61, 80]\n");
	}

	return 0;

}
