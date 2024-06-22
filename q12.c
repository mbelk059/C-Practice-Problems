#include <stdio.h>

int main() {

	//program that accepts employee's ID, total worked hours in a month and the
	//hours in a month and the amount he received per hour. Print the ID and 
	//salary (with 2 decimal places) of the employee for a particular month.

	double salary;
	char id[10];
	int hours, amount_per_hour;

	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%s", id); //%s doesnt need & apparently

	printf("Input the working hrs: ");
	scanf("%d", &hours);

	printf("Salary amount/hr: ");
	scanf("%d", &amount_per_hour);

	salary = amount_per_hour*hours;

	printf("Employees ID = %s\n", id);
	printf("Salary = U$ %.2lf\n", salary);

	return 0;

}
