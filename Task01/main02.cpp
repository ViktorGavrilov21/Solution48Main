#include "logic.h"

int main() {
	srand(time(NULL));
	int array[DEFAULT_SIZE];
	int size;
	int n;

	do {
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0 || size > DEFAULT_SIZE);
	cout << "Input your number: ";
	cin >> n;

	init(array, size, -20, 20);

	print("Array: " + convert(array, size) + "\n");
	print("Elements less than n: " 
		+ to_string(count_elements_less_than_n(array, size, n)) + "\n");
	print("Elements equal n: " 
		+ to_string(count_elements_equal_n(array, size, n)) + "\n");
	print("Elements not equal n: " 
		+ to_string(count_elements_nut_equal_n(array, size, n)) + "\n");
	print("Elements multiple n: " 
		+ to_string(count_elements_multiple_n(array, size, n)) + "\n");
	print("Elements not multiple n: " 
		+ to_string(count_elements_not_multiple_n(array, size, n)) + "\n");
	print("Elements modulo more than n: " 
		+ to_string(count_elements_modulo_more_than_n(array, size, n)) + "\n");
	print("Elements modulo less than n: " 
		+ to_string(count_elements_modulo_less_than_n(array, size, n)) + "\n");
	print("Elements equal n: " 
		+ to_string(count_elements_modulo_equal_n(array, size, n)) + "\n");


	return 0;
}