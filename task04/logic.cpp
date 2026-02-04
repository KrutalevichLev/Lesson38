#include "logic.h"

string get_numerical_sequence(int n, int m) {
	string msg = "";

	if (n > m) {
		for (n; m <= n ; n--) {
			msg += to_string(n) + " ";
		}
	}else {
		for (m; m >= n; n++) {
			msg += to_string(n) + " ";
		}
	}
	return msg;
}