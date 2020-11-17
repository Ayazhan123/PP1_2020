#include <iostream>

// negative
// a =  3, b = -4
// a =  2, b = -3
// a =  1, b = -2
// a =  0, b = -1
// a = -1, b =  0


// positive
// a =  3, b = 4
// a =  4, b = 3
// a =  5, b = 2
// a =  6, b = 1
// a =  7, b = 0

int sum(int a, int b)
{
	while (b != 0)
	{
		if (b < 0)
		{
			a = a - 1;
			b = b + 1;
		}
		else
		{
			a = a + 1;
			b = b - 1;
		}
	}

	return a;
}


int main()
{
	int a, b;
	std::cin >> a >> b;

	std::cout << sum(a, b) << std::endl;

	return 0;
}