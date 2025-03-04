#include "util.h"

#define SIZE 10

int main() {
	int array[SIZE];
	init(array, SIZE, 20, -20);

	string array_string = convert(array, SIZE);
	cout << "Array: " << array_string << endl;

	system("pause");
	return 0;
}