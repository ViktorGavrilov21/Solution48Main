#include "logic.h"

int get_even(int array[], int size) {
	int even = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] % 2 == 0 && array[i] != 0) {
			even++;
		}
	}
	return even;
}
int get_odd(int array[], int size) {
	int odd = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] % 2 != 0) {
			odd++;
		}
	}
	return odd;
}
int get_positive(int array[], int size) {
	int positive = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] > 0) {
			positive++;
		}
	}
	return positive;
}
int get_negative(int array[], int size) {
	int negative = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] < 0) {
			negative++;
		}
	}
	return negative;
}
int get_null(int array[], int size) {
	int null = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] == 0) {
			null++;
		}
	}
	return null;
}