#include <stdio.h>

int main() {

	//prints all even numbers betwwen 1 and 50 inclusive

	for (int i = 1; i <= 50; i++) {
		if (i%2==0) {
			printf("%d ", i);
		}
	}

	printf("\n");

	return 0;

}
