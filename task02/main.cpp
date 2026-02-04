#include "logic.h"

int main() {
	int m, n;

	cout << "Enter your N and M (N < M): ";
	cin >> n >> m;

	string result = get_odd_numbers_sequance(m, n);

	string msg = "The resulting numerical sequence: " + result;

	cout << msg;

	return 0;
}