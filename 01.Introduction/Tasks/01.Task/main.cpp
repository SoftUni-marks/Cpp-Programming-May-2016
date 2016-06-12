#include <iostream>

int main()
{
	std::cout << "Hello Gosho!" << std::endl;

	float floatNumber = 3.141592141592f;
	double doubleNumber = 3.141592141592;

	printf("%0.15f\n", floatNumber);
	printf("%0.15lf\n", doubleNumber);

	system("pause");

	return 0;
}
