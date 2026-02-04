#include "logic.h"

string calculet_like(int like, int day) {
	string msg = "";
	int n = 1;
	int like_in_day = like;

	if (like < 0 || day < 1) {
		msg = "Error";
	}
	else {
		while (day >= n++) {
			like += like_in_day;
			msg += "Day " + to_string(n) + " : " + to_string(like) + " likes." + '\n';
		}
	}
	return msg;
}