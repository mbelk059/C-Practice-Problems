#include <stdio.h>

int main() {

	//reads an int between 1 and 12 and prints the month of the year

	int num;

	printf("enter number between 1-12: ");
	scanf("%d", &num);

	switch (num) {
		case 1:
			printf("january");
			break;
		case 2:
                        printf("february");
                        break;
		case 3:
                        printf("march");
                        break;
		case 4:
                        printf("april");
                        break;
		case 5:
                        printf("may");
                        break;
		case 6:
                        printf("june");
                        break;
		case 7:
                        printf("july");
                        break;
		case 8:
                        printf("august");
                        break;
		case 9:
                        printf("september");
                        break;
		case 10:
                        printf("october");
                        break;
		case 11:
                        printf("november");
                        break;
		case 12:
                        printf("december");
                        break;

	}

	printf("\n");

	return 0;

}