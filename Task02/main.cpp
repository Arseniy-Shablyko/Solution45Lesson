#include "util.h"
#include "logic.h"

int main() {
	int* pointer;
	int size;

	cout << "Input size of array: ";
	cin >> size;

	pointer = new int[size];

	init(pointer, size, 20, -20);
	cout << "Array: " << convert(pointer, size) << endl;

	int count;
	int* indeces_min = get_indexs_local_min(pointer, size, &count);

	cout << "Indeces of local min: " << convert(indeces_min, count) << endl;

	int* indeces_max = get_indexs_local_max(pointer, size, &count);

	cout << "Indeces of local max: " << convert(indeces_max, count) << endl;

	delete[] pointer;

	system("pause");
	return 0;
}