#include "logic.h"

int main() {
	int n, m;

	cout << "Enter your two numbers N and M: ";
	cin >> n >> m;

	string msg = get_numerical_sequence(n, m);

	cout << msg;

	return 0;
}