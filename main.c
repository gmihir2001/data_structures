#include <stdio.h>

#include "array_manip.h"

int main(void) {

	printf("Data Structures\n");

	int arr_01[5] = {1, 2, 3, 4, 5};

	int calc_sum = array_sum(5, arr_01);

	if ( calc_sum == 15) {
		printf("Correct answer\n");
	} else {
		printf("Incorrect sum\n");
		printf("Expected 15, instead got: %d\n", calc_sum);
	}

	array_print(5, arr_01);
	printf("\n");

	return 0;
}
