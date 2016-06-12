#include <iostream>
#include <string>

using namespace std;

uint64_t factorial(const uint32_t);
uint64_t fibonacci(const uint32_t);

int main()
{
	uint32_t number;

	cout << "Enter number [0, 20] to find its Factorial: ";
	cin >> number;

	uint64_t result = factorial(number);
	cout << "factorial(" << number << ") = " << result << endl << endl;

	cout << "Enter index [0, 93] of Fibonacci number you want to find: ";
	cin >> number;

	result = fibonacci(number);
	cout << "fibonacci_" << number << " = " << result << endl << endl;

	// pause
	system("pause");

	return 0;
}

uint64_t factorial(const uint32_t number)
{
	if (number == 0)
		return 1;
	else if (number == 1)
		return 1;

	uint64_t factNum = 1;

	for (uint32_t i = 2; i <= number; i++)
	{
		factNum *= i;
	}

	return factNum;
}

/*
 * Fibonacci Numbers
 *
 * f0 = 0, f1 = 1, f2 = 1, f3 = 2, f4 = 3, ...
 *
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
 */
uint64_t fibonacci(const uint32_t number)
{
	if (number == 0)
		return 0;
	else if (number == 1)
		return 1;
	else if (number == 2)
		return 1;

	uint64_t Fn_minus_2 = 1; // f1 = 1
	uint64_t Fn_minus_1 = 1; // f2 = 1
	uint64_t Fn = 2;         // f3 = f2 + f1 = 1 + 1 = 2

	for (uint32_t i = 4; i <= number; i++)
	{
		Fn_minus_2 = Fn_minus_1;
		Fn_minus_1 = Fn;
		Fn = Fn_minus_1 + Fn_minus_2;
	}

	return Fn;
}