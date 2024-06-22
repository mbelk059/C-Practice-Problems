#include <stdio.h>

int main() {

	int numbers[5];
	int pos = 0;
	int avg = 0;

	printf("enter first num: ");
	scanf("%d", &numbers[0]);

	printf("enter second num: ");
        scanf("%d", &numbers[1]);

	printf("enter third num: ");
        scanf("%d", &numbers[2]);

	printf("enter fourth num: ");
        scanf("%d", &numbers[3]);

	printf("enter fifth num: ");
        scanf("%d", &numbers[4]);

	for (int i = 0; i < 5; i++) {
		if (numbers[i] >= 0) {
			avg+=numbers[i];
			pos++;
		}
	}

	avg = avg/pos;
	printf("number of positive numbers: %d\n", pos);
	printf("avg of numbers: %d\n", avg);
}
