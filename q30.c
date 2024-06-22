#include <stdio.h>

int main() {

	int n;

	printf("enter num: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i%2 == 0) {
			int res = i*i;
			printf("%d^2 = %d\n", i, res);
		}
	}

	return 0;

}
