#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	int n;
	cin >> n;

	vector<int> nums;

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		nums.push_back(k);
	}

	int a, b;
	cin >> a >> b;

	reverse(nums.begin() + a, nums.begin() + b + 1);

	for (int i = 0; i < n; i++)
		cout << nums[i] << " ";

	cout << endl;

	return 0;
}
