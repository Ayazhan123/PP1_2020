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

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";

	std::cout << std::endl;
}


int main()
{
	int n;
	std::cin >> n;
	
	int a[n];
	for (int i = 0; i < n; i++)
		std::cin >> a[i];

	selectionSort(a, n);
	std::cout << "Array sorted in ascending order:" << std::endl;
	printArray(a, n);

	selectionSort(a, n, false);
	std::cout << "Array sorted in descending order:" << std::endl;
	printArray(a, n);
	
	return 0;
}