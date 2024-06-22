#include <stdio.h>
#define MAX 5

int main() {

	int numbers[MAX];

	printf("enter 5 numbers: \n");
	scanf("%d", &numbers[0]);
	scanf("%d", &numbers[1]);
	scanf("%d", &numbers[2]);
	scanf("%d", &numbers[3]);
	scanf("%d", &numbers[4]);

	int max = numbers[0];

	for (int i = 1; i < MAX; i++) {
        	if (numbers[i] > max) {
            		max = numbers[i];
        	}
    	}

	printf("max is %d\n", max);

}
