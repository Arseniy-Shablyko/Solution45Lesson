#include "logic.h"
int counter_local_min(int* array, int size) {
	int count = 0;

	if (size > 1 && array[0] < array[1]) {
		count++;
	}

	if (size > 1 && array[size - 1] < array[size -2]) {
		count++;
	}

	for (int i = 1; i < size - 1; i++) {
		if (array[i] < array[i - 1] && array[i] < array[i + 1]) {
			count++;
		}
	}

	return count;
}

int* get_indexs_local_min(int* array, int size, int* counter) {
	*counter = counter_local_min(array, size);
	int* indeces = new int[*counter];
	int j = 0;

	if (size > 1 && array[0] < array[1]) {
		indeces[j] = 0;
		j++;
	}

	for (int i = 1; i < size - 1; i++) {
		if (array[i] < array[i - 1] && array[i] < array[i + 1]) {
			indeces[j] = i;
			j++;
		}
	}

	if (size > 1 && array[size - 1] < array[size - 2]) {
		indeces[j] = size - 1;
		j++;
	}

	return indeces;
}

int counter_local_max(int* array, int size) {
	int count = 0;

	if (size > 1 && array[0] > array[1]) {
		count++;
	}

	if (size > 1 && array[size - 1] > array[size - 2]) {
		count++;
	}

	for (int i = 1; i < size - 1; i++) {
		if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
			count++;
		}
	}

	return count;
}

int* get_indexs_local_max(int* array, int size, int* counter) {
	*counter = counter_local_min(array, size);
	int* indeces = new int[*counter];
	int j = 0;

	if (size > 1 && array[0] < array[1]) {
		indeces[j] = 0;
		j++;
	}

	for (int i = 1; i < size - 1; i++) {
		if (array[i] < array[i - 1] && array[i] < array[i + 1]) {
			indeces[j] = i;
			j++;
		}
	}

	if (size > 1 && array[size - 1] < array[size - 2]) {
		indeces[j] = size - 1;
		j++;
	}

	return indeces;
}