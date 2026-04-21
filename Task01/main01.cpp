//#include "logic.h"
//
//int main() {
//	srand(time(NULL));
//	int size;
//	int array[DEFAULT_SIZE];
//
//	do {
//		cout << "Input size of array: ";
//		cin >> size;
//	} while (size <= 0 || size > DEFAULT_SIZE);
//
//	init(array, size, -9, 9);
//
//	print("Array: " + convert(array, size) + "\n");
//	print("Even: " + to_string(get_even(array, size)) + "\n");
//	print("Odd: " + to_string(get_odd(array, size)) + "\n");
//	print("Positive: " + to_string(get_positive(array, size)) + "\n");
//	print("Negative: " + to_string(get_negative(array, size)) + "\n");
//	print("Null: " + to_string(get_null(array, size)) + "\n");
//
//
//	return 0;
//}