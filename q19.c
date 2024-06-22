#include <stdio.h>

int main() {

	//program that accepts 4 integers p q r s where q, r, and s are
	//positive and p is even. if q is greater than r and s is greater
	//than p and if the sum of r and s is greater than the sum of p and q
	// print "correct values", else print "wrong values"

	int p, q, r, s;

	printf("Input the first integer: ");
        scanf("%d", &p);

	printf("Input the second integer: ");
	scanf("%d", &q);

	printf("Input the third integer: ");
        scanf("%d", &r);

	printf("Input the fourth integer: ");
        scanf("%d", &s);

	if (q>0 && r>0 && s>0 && p%2 == 0 && q > r && s > p && r+s > p+q) {
		printf("Correct values\n");
	}
	else {
		printf("Wrong values\n");
	}

	return 0;

}
