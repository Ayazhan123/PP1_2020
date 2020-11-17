#include <iostream>

using namespace std;

int sum()
{
	int sum = 0;
	int n;

	do 
	{
		cin >> n;
		sum += n;

	} while (n != 0);

	return sum;
}

int main()
{
	cout << sum() << endl;	

	return 0;
}