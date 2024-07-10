#include <stdio.h>

void tim_max(int *arr, int size) {
	int *max = arr;
	for (int i = 1; i < size; i++) {
		if (*(arr + i) > *max) {
			max = arr + i;
		}
	}
	printf("Phan tu lon nhat: %d, dia chi: %p\n", *max, (void*)max);
}