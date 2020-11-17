#include <iostream>

// 1  2  3  4  5  6   7   8   9  10  11   12
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

int fib(int n)
{
	if (n <= 0)
		return -1;
	
	if (n == 1 || n == 2)
		return 1;

	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n;
	std::cin >> n;

	std::cout << fib(n) << std::endl;

	return 0;
}