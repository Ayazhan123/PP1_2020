#include <iostream>
#include <iomanip>


void printMatrix(int matrix[1000][1000], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << std::setw(2) << std::setfill(' ') << matrix[i][j] << " ";
		}

		std::cout << std::endl;
	}
}


int main()
{
	int n, m;
	std::cin >> n >> m;

	int matrix[1000][1000];

	int number = 0;

	for (int i = 0; number < n * m; i++)
	{
		int row = 0;
		int col = i;

		do
		{
			if (row < n && col < m)
			{
				matrix[row][col] = number;
				number++;
			}

			row++;
			col--;
		} while (col >= 0);
	}

	printMatrix(matrix, n, m);

	return 0;
}