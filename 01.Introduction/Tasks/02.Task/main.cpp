#include <iostream>

int main()
{
	int x = 1;

	for (size_t i = 0; i < 1000; ++i)
	{
		x = x + 1 + i;
	}

	printf("%d\n", sizeof(size_t));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));

	system("pause");

	return 0;
}
