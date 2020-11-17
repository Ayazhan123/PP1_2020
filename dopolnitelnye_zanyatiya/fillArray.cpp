#include <iostream>


void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << a[i] << " ";

	std::cout << std::endl;
}


void fillArray(int a[], int size, int key)
{
	for (int i = 0; i < size; i++)
		a[i] = key;
}


int main()
{
	int a[10];

	fillArray(a, 10, 456);
	printArray(a, 10);

	return 0;
}