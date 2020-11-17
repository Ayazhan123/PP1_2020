#include <iostream>

using namespace std;


int main()
{
	int n;
	cin >> n;

	int matrix[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}


	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << matrix[j][n - i + j] << " ";
		}

		cout << endl;
	}


	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << matrix[n - i + j][j] << " ";
		}

		cout << endl;
	}


	return 0;
}