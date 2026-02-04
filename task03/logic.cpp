#include "logic.h"

bool is_power_of_two(int number){
	number = number < 0 ? -number : number;

	while (number >= 1) {
		number /= 2;
		if (number == 1) {
			return true;
		}
	}

	return false;
}