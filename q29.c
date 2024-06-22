#include <stdio.h>

int main() {

	int numbers[5];
	int sum = 0;
	int odd = 0;

	printf("enter number1: ");
	scanf("%d", &numbers[0]);

	printf("enter number2: ");
        scanf("%d", &numbers[1]);

	printf("enter number3: ");
        scanf("%d", &numbers[2]);

	printf("enter number4: ");
        scanf("%d", &numbers[3]);

	printf("enter number5: ");
        scanf("%d", &numbers[4]);

	for (int i = 0; i < 5; i++) {
		if (numbers[i]%2 != 0) {
			sum+=numbers[i];
		}
	}

	printf("sum of all odds is: %d\n", sum);

	return 0;

}
