#include <iostream>

using namespace std;


int main()
{
	int n;
	cin >> n;

	int inputArray[n];

	for (int i = 0; i < n; i++)
		cin >> inputArray[i];

	int uniqueNumbers[n];
	int uniqueNumbersCounters[n];
	int uniqueNumbersSize = 0;


	for (int i = 0; i < n; i++)
	{
		bool numberWasFound = false;

		for (int j = 0; j < uniqueNumbersSize; j++)
		{
			if (uniqueNumbers[j] == inputArray[i])
			{
				uniqueNumbersCounters[j]++;
				numberWasFound = true;
				break;
			}
		}

		if (numberWasFound == false)
		{
			uniqueNumbersSize++;
			uniqueNumbers[uniqueNumbersSize - 1] = inputArray[i];
			uniqueNumbersCounters[uniqueNumbersSize - 1] = 1;
		}
	}


	int maxCounter = 0;

	for (int i = 0; i < uniqueNumbersSize; i++)
	{
		if (uniqueNumbersCounters[i] > maxCounter)
			maxCounter = uniqueNumbersCounters[i];
	}

	int mostFrequentNumbers[n];
	int mostFrequentNumbersSize = 0;

	for (int i = 0; i < uniqueNumbersSize; i++)
	{
		if (uniqueNumbersCounters[i] == maxCounter)
		{
			mostFrequentNumbersSize++;
			mostFrequentNumbers[mostFrequentNumbersSize - 1] = uniqueNumbers[i];
		}
	}



/*
	В сортировке допущена ошибка. Исправлю ошибку на следующем уроке.

	for (int subArraySize = mostFrequentNumbersSize; subArraySize >= 1; subArraySize--)
	{
		int firstSubArrayIndex = mostFrequentNumbersSize - subArraySize;

		int maxFrequentNumberIndex = mostFrequentNumbers[firstSubArrayIndex];
		for (int i = firstSubArrayIndex; i < mostFrequentNumbersSize; i++)
		{
			if (mostFrequentNumbers[i] > mostFrequentNumbers[maxFrequentNumberIndex])
			{
				maxFrequentNumberIndex = i;
			}
		}

		int temp = mostFrequentNumbers[firstSubArrayIndex];
		mostFrequentNumbers[firstSubArrayIndex] = mostFrequentNumbers[maxFrequentNumberIndex];
		mostFrequentNumbers[maxFrequentNumberIndex] = temp;
	}
*/



	for (int i = 0; i < mostFrequentNumbersSize; i++)
	{
		cout << mostFrequentNumbers[i] << " ";
	}

	cout << endl;

	return 0;
}