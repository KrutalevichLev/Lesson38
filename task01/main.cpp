#include "logic.h"

int main() {
	int like, day;
	cout << "Enter likes: ";
	cin >> like;
	cout << "Enter days: ";
	cin >> day;

	string msg = calculet_like(like, day);

	cout << msg;

	return 0;
}