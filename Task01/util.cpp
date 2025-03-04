#include "util.h"
void init(int* array, int size, int b, int a) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % (b - a + 1) + a;
	}
}
string convert(int* array, int size) {
	string array_string = to_string(array[0]);
	for (int i = 1; i < size; i++) {
		array_string += to_string(array[i]) + " ";
	}

	return array_string;
}