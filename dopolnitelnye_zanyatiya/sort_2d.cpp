#include <iostream>


void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


void selectionSort(int arr[], int n, bool isAscending = true)
{
	for (int i = 0; i < n - 1; i++)
	{
		int selected_idx = i;

		for (int j = i + 1; j < n; j++)
			if (isAscending)
			{
				if (arr[j] < arr[selected_idx])
					selected_idx = j;
			}
			else
			{
				if (arr[j] > arr[selected_idx])
					selected_idx = j;
			}

		swap(arr[selected_idx], arr[i]);
	}
}


void sort2D(int arr[100][100], int height, int width)
{
	int result[10000];

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			result[i * width + j] = arr[i][j];

	selectionSort(result, height * width);


	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			arr[i][j] = result[i * width + j];
}


void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";

	std::cout << std::endl;
}

void print2DArray(int arr[100][100], int height, int width)
{
	for (int i = 0; i < height; i++)
		printArray(arr[i], width);
}


int main()
{
	int m, n;
	std::cin >> m >> n;
	
	int a[100][100];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			std::cin >> a[i][j];

	sort2D(a, m, n);
	std::cout << "Array sorted in ascending order:" << std::endl;
	print2DArray(a, m, n);

	return 0;
}