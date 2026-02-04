#include "logic.h"

string get_odd_numbers_sequance(int m, int n) {
	string msg = "";

	if (n > m) {
		return "Error";
	}
	for (n; n <= m; n++) {
		msg += n % 2 != 0 ? to_string(n) + " " : "";

	}

	return msg;
}