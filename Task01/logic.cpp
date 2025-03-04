#include "logic.h"
bool find_local_min(int* array, int size) {
	bool local_min = false;
	for (int i = 1; i < (size - 1); i++) {
		if (array[i] < array[i + 1] 
			&& array[i] < array[i - 1]) {
			local_min = true;
			break;
		}
	}

	if (array[0] < array[1] && size > 1) {
		local_min = true;
	}
	if (array[size - 1] < array[size - 2] && size > 1) {
		local_min = true;
	}

	return local_min;
}

bool find_local_max(int* array, int size) {
	bool local_max = false;
	for (int i = 1; i < (size - 1); i++) {
		if (array[i] > array[i + 1] 
			&& array[i] > array[i - 1]) {
			local_max = true;
			break;
		}
	}

	if (array[0] > array[1] && size > 1) {
		local_max = true;
	}
	if (array[size - 1] > array[size - 2] && size > 1) {
		local_max = true;
	}

	return local_max;
}