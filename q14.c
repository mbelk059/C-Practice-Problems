#include <stdio.h>

int main() {

	//program to calculate a bike's average consumption from the given total
	//distance (int) travelled in km and spent fuel in liters (float)

	int distance;
	float liters;
	float res;

	printf("Input total distance in km: ");
	scanf("%d", &distance);

	printf("Input total fuel spent in liters: ");
	scanf("%f", &liters);

	res = distance/liters;

	printf("Average consumption (km/lt) %.3f\n", res); // to specify decimal points do %.3f for eg for 3 decimal places
	return 0;

}
