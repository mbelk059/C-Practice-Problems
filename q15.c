#include <stdio.h>
#include <math.h> //when compiling u need to add -lm at the end or else error

int main() {

	//program to calculate distance between 2 points

	int x1, x2, y1, y2;
	float distance;

	printf("Input x1: ");
	scanf("%d", &x1);
	
	printf("Input y1: ");
        scanf("%d", &y1); 
	
	printf("Input x2: ");
	scanf("%d", &x2);
	
	printf("Input y2: ");
	scanf("%d", &y2);

	distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

	printf("Distance is: %.4f\n", sqrt(distance));

	return 0;

}
