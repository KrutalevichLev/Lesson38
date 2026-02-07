#include "logic.h"

string build_pyramid(int number, char symbol) {
	string msg = "";

    for (int i = 1; i <= number; i++) {

        for (int j = 0; j < number - i; j++) {
            msg += ' ';
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            msg += symbol;
        }
            msg += '\n';
    }
	

	return msg;
}