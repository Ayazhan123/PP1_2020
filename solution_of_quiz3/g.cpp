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
	if (n == 1)
		return;

	if (isPrime(n))
		cout << n << " ";

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (isPrime(i) && n % i == 0)
		{
			cout << i << " ";
			printPrimeFactors(n / i);
			break;
		}
	}
}

int main()
{
	int n;
	cin >> n;

	printPrimeFactors(n);

	cout << endl;

	return 0;
}