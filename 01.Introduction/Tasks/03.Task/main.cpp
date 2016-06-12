#include <iostream>

/*
 * Write a program which check if a value is larger or smaller than 10.
 * If it larger the program returns "larger" if smaller return "smaller" if equal returns "beer".
 */
int main()
{
	double number;

	std::cout << "Input number: ";
	std::cin >> number;

	if (number > 10)
		std::cout << "larger\n";
	else if (number < 10)
		std::cout << "smaller\n";
	else
		std::cout << "beer\n";

	system("pause");

	return 0;
}