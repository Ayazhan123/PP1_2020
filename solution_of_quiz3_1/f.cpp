#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(int number)
{
	for (int j = 2; j <= sqrt(number); j++)
		if (number % j == 0)
			return false;

	return true;
}

void printPrimeFactors(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (isPrime(i))
			while (n % i == 0 && n > 1)
			{
				cout << i << " ";
				n /= i; 
			}

		if (n == 1)
			break;
	}

	if (n > 2)
		cout << n;
}

int main()
{
	int n;
	cin >> n;

	printPrimeFactors(n);

	cout << endl;

	return 0;
}