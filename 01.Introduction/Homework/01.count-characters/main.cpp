#include <iostream>
#include <string>

using namespace std;

/*
 * Make a program that reads line from the keyboard and checks how many upper and
 * lower case letters and other characters are available in the string.
 */
int main()
{
	char ch;
	string line;

	int countUpper = 0;
	int countLower = 0;
	int countOther = 0;

	getline(cin, line);

	int i = 0;
	while ((ch = line[i++]) != 0)
	{
		if ('A' <= ch && ch <= 'Z')
			countUpper++;
		else if ('a' <= ch && ch <= 'z')
			countLower++;
		else
			countOther++;
	}

	cout << "\nupper case letters: " << countUpper << endl;
	cout << "lower case letters: " << countLower << endl;
	cout << "  other characters: " << countOther << endl << endl;

	// pause
	system("pause");

	return 0;
}