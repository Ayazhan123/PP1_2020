#include <iostream>

int power(int a, int n)
{
	int result = 1;

	for (int i = 0; i < n; i++)
	{
		result *= a;
	}

	return result;
}

int main()
{
	int a, n;
	std::cin >> a >> n;

	std::cout << power(a, n) << std::endl;
	
	return 0;
}