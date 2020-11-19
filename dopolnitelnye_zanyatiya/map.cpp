#include <iostream>
#include <map>

using namespace std;


void printMap(const map<string, int>& m)
{
	for (auto it = m.begin(); it != m.end(); it++)
	{
		auto key = (*it).first;
		auto value = (*it).second;

		cout << "[" << key << "] -> (" << value << ")" << endl;
	}
}


int main()
{
	int n;
	cin >> n;

	map<int, int> unique_numbers;

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		unique_numbers[k]++;
	}

	int maxFrequency = 0;
	for (map<int, int>::iterator it = unique_numbers.begin(); it != unique_numbers.end(); it++)
		if (it->second > maxFrequency)
			maxFrequency = it->second;


	for (map<int, int>::reverse_iterator it = unique_numbers.rbegin(); it != unique_numbers.rend(); it++)
		if (it->second == maxFrequency)
			cout << it->first << " "; 

	cout << endl;

	return 0;
}
