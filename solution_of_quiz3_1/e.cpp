#include <iostream>
#include <set>

using namespace std;


int main()
{
	int n;
	cin >> n;

	set<int> nums;

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		nums.insert(k);
	}

	cout << (nums.size() == n ? "YES" : "NO") << endl;

	return 0;
}