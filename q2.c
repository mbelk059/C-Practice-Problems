#include <stdio.h>

int main() {

	//check for c standard version
	if (__STDC_VERSION__ >= 201710L) {
		printf("We are using C18!\n");
	}
	//#endif
	else if (__STDC_VERSION__ >= 201112L) {
		printf("We are using C11!\n");
	}
	else if (__STDC_VERSION__ >= 199901L) {
		printf("We are using C99!\n");
	}
	else {
		printf("We are using C89/C90!\n");
	}
	return 0;

}
