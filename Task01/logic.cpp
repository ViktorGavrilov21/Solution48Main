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
int count_elements_less_than_n(int array[], int size, int n) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		count += array[i] < n ? 1 : 0;
	}
	return count;
}
int count_elements_equal_n(int array[], int size, int n) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		count += array[i] == n ? 1 : 0;
	}
	return count;
}
int count_elements_nut_equal_n(int array[], int size, int n) {
	return size - count_elements_equal_n(array, size, n);
}
int count_elements_multiple_n(int array[], int size, int n) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] % n == 0) {
			count++;
		}
	}
	return count;
}
int count_elements_not_multiple_n(int array[], int size, int n) {
	return size - count_elements_multiple_n(array, size, n);
}
int count_elements_modulo_more_than_n(int array[], int size, int n) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		int abs_element = array[i] < 0 ? -array[i] : array[i];
		count += abs_element > n ? 1 : 0;
	}
	return count;
}
int count_elements_modulo_equal_n(int array[], int size, int n) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		int abs_element = array[i] < 0 ? -array[i] : array[i];
		count += abs_element == n ? 1 : 0;
	}
	return count;
}
int count_elements_modulo_less_than_n(int array[], int size, int n) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		int abs_element = array[i] < 0 ? -array[i] : array[i];
		count += abs_element < n ? 1 : 0;
	}
	return count;
}