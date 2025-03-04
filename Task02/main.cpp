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

	cout << "Local min exist? - " 
		<< (find_local_min(pointer, size) ? "Yes" : "No") 
		<< endl;
	cout << "Local maxexist? - " 
		<< (find_local_max(pointer, size) ? "Yes" : "No")
		<< endl;

	delete[] pointer;

	system("pause");
	return 0;
}