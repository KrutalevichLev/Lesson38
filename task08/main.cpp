#include "logic.h"

int main() {
	int number_of_rows;
	char symbol;

	cout << "Enter the height of the pyramid in the number of rows: ";
	cin >> number_of_rows;
	cout << "Enter the symbol to build the pyramid:";
	cin >> symbol;

	string result = build_pyramid(number_of_rows, symbol);

	cout << result;

	return 0;
}