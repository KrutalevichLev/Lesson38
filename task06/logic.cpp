#include "logic.h"

long long get_fibo_number(int index) {
	long long fibonacci_number = 1;
	long long temp = 1;

	if (index <= 0) {
		return -1;
	}

	if (index == 1) {
		return 0;
	}

	for (int i = 3; i < index ; i++)
	{
		long long next = fibonacci_number + temp;
		temp = fibonacci_number;
		fibonacci_number = next;
	}

	return fibonacci_number;
}