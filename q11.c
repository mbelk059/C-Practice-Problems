#include <stdio.h>

int main() {

	//program that accepts 2 item's weight and number of purchases (floating 
	//point values) and calculates their average value.

	float no_item1, no_item2, weight1, weight2, average;

	printf("Weight - Item1: ");
	scanf("%f", &weight1);

	printf("No. of item1: ");
	scanf("%f", &no_item1);

	printf("Weight - Item2: ");
        scanf("%f", &weight2);

        printf("No. of item2: ");
        scanf("%f", &no_item2);

	average = ((weight1 * no_item1) + (weight2 * no_item2)) / (no_item1 + no_item2);

	printf("Average Value = %f\n", average);

	return 0;

}
