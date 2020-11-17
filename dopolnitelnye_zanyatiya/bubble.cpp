#include <iostream> 
  

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
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

	bubbleSort(a, n);

	std::cout << "Sorted array:" << std::endl;
	
	printArray(a, n);
	
	return 0;
}