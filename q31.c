#include <stdio.h>

int main() {

	int n;

	printf("enter num: ");
	scanf("%d", &n);

	if (n>0 && n%2 == 0){
		printf("positive even\n");
	} else if (n<0 && n%2 == 0){
		printf("negative even\n");
	} else if (n>0 && n%2 != 0){
		printf("positive odd\n");
	} else if (n<0 && n%2 != 0){
		printf("negative odd\n");
	} else {
		printf("even\n");
	}

}
