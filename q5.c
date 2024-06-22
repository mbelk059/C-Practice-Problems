#include <stdio.h>

int main() {

	//compute perimeter and area of rectange with height of 7 inches
	//and width of 5 inches.

	int height = 7;
	int width = 5;

	int perimeter = (height*2) + (width*2);
	int area = height*width;

	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	printf("Area of the rectangle = %d square inches\n", area);

	return 0;

}
