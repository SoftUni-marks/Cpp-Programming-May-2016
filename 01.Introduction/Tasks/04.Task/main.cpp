#include <iostream>
#include <string>

bool containsGivenChar(std::string, char);

/*
 * Write a simple loop that checks if a given string contains the character 'o'.
 * If yes print "YES", else print "NO".
 */
int main()
{
	std::string str;

	std::cout << "Input string: ";
	std::getline(std::cin, str);

	if (containsGivenChar(str, 'o'))
		std::cout << "YES\n";
	else
		std::cout << "NO\n";

	system("pause");

	return 0;
}

bool containsGivenChar(std::string str, char ch)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == 'o')
		{
			return true;
		}
	}

	return false;
}