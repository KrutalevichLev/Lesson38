#include "logic.h"

string get_prime_numbers(int number) {
	string msg = "";
	int last_number = 0;
	bool is_prime_number = true;

	if (number <= 1) {
		return "Error.";
	}

	for (int i = 2; i <= number; i++) {
		for (int n = 2; n < i; n++) {
			if (i % n == 0) {
				is_prime_number = false;
				break;
			}
		}
		if (is_prime_number) {
			if (msg != "") {
				msg += " ";
			}
			msg += to_string(i);
		}
		is_prime_number = true;
	}

	return msg;
}