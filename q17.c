#include <stdio.h>

int main() {

	//convert integer in seconds to hours, minutes, and seconds

	int total, hours, minutes, seconds;

	printf("Input seconds: ");
	scanf("%d", &total);

	hours = total/3600;
	minutes = (total - (hours*3600))/60;
	seconds = (total - (hours*3600)-(minutes*60));

	printf("There are:\n");
	printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);

}
