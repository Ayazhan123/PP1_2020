#include <iostream>


void f(int n)
{
	if (n == 0)
		return;

	std::cout << n << " ";

	f(n - 1);

	std::cout << n << " ";
}


int fib(int n)
{
	if (n == 0)
	{
		// std::cout << "function was called" << std::endl;
		return 1;
	}
	else if (n == 1)
	{
		// std::cout << "function was called" << std::endl;
		return 1;
	}

	//std::cout << "function was called" << std::endl;

	return fib(n - 2) + fib(n - 1);
}


int main()
{
	int n;
	std::cin >> n;

	std::cout << fib(n) << std::endl;

	return 0;
}