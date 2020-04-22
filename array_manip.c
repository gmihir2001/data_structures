#include <stdio.h>
#include "array_manip.h"

void array_print(int size, int array[]) {
	for(int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
}
