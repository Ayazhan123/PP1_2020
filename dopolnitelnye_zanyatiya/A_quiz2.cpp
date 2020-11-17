#include <iostream>

using namespace std;


/*
	Limits:
		1 <= numOfStatues <= 50
*/


int main()
{
	int statues[50];

	int numOfStatues;
	cin >> numOfStatues;


	for (int i = 0; i < numOfStatues; i++)
		cin >> statues[i];


	int minHeight = statues[0];
	int maxHeight = statues[0];

	for (int i = 0; i < numOfStatues; i++)
	{
		if (statues[i] < minHeight)
			minHeight = statues[i];

		if (statues[i] > maxHeight)
			maxHeight = statues[i];
	}

	int desiredNumOfStatues = maxHeight - minHeight + 1;

	cout << desiredNumOfStatues - numOfStatues << endl;
	
	return 0;
}