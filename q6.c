#include <stdio.h>

int main() {

	//program to compute perimeter and area of a circle with a given radius.

	int radius;

	printf("enter radius: ");
	scanf("%d", &radius);

	float perimeter = 2*3.14*radius;
	float area = 3.14*(radius*radius);

	printf("Perimeter of the Circle = %f inches\n", perimeter);
	printf("Area of the Circle = %f square inches\n", area);

	return 0;

}
