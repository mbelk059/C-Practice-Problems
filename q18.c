#include <stdio.h>

int main() {

	//convert integer in days to years, months, and days assuming
	//all months have 30 days and all years have 365 days

	int total, years, months, days;

	printf("Input days: ");
	scanf("%d", &total);

	years = (int) total/365;
	total = total-(years*365);
	months = (int) total/30;
	days = (int) total-(months*30);

	printf("years: %d\nmonths: %d\ndays: %d\n", years, months, days);

	return 0;

}
