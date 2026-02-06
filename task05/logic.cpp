#include "logic.h"

bool is_digits_count_even(long long number) {
	int number_of_digits = 0;

	if (number == 0) {
		return 0;
	}

	number = number < 0 ? -number : number;

	while (number > 0) {
		number_of_digits++;
		number /= 10;
	 }

	return (number_of_digits % 2 == 0 ? true : false);
}