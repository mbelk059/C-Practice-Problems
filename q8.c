#include <stdio.h>

int main() {

	//program to convert specified days into years, weeks, and days

	int days;

	printf("Number of days: ");
	scanf("%d", &days);

	int years = days/365;
	int weeks = (days%365)/7;

	printf("Years: %d\n", years);
	printf("Weeks: %d\n", weeks);
	
	return 0;

}
