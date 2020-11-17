#include <iostream>


int sum(int a, int b)
{
	if (b == 0)
		return a;

	if (b < 0)
		return sum(a - 1, b + 1);
	
	return sum(a + 1, b - 1);
}


int main()
{
	int a, b;
	std::cin >> a >> b;

	std::cout << sum(a, b) << std::endl;

	return 0;
}