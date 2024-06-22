//NOT COMPLETED

#include <stdio.h>

int main() {

	//program to read an amount (int) and break the amount
	//into smallest possible number of bank notes

	int amount;

	printf("Input the amount: ");
	scanf("%d", &amount);

//	printf("There are:\n%d Note(s) of %d\n", amount/100);
	amount = amount - (amount/100)*100;

	printf("%d\n", amount);

	return 0;

}
