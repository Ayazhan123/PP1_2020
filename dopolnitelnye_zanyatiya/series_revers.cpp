#include <iostream>


void reverse()
{
	int n;
	std::cin >> n;

	if (n != 0)
		reverse();

	std::cout << n << std::endl;
}

int main()
{
	reverse();

	return 0;
}