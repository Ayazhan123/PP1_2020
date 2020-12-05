#include <iostream>
#include <vector>

using namespace std;


int numOfAvailable(int x, int y, vector<vector<char>>& field, int n)
{
	int available = 0;
	field[y][x] = '-';

	if (0 <= x - 1 && x - 1 < n && 0 <= y && y < n && field[y][x - 1] == '.') // left
		available += 1 + numOfAvailable(x - 1, y, field, n);

	if (0 <= x + 1 && x + 1 < n && 0 <= y && y < n && field[y][x + 1] == '.') // right
		available += 1 + numOfAvailable(x + 1, y, field, n);
	
	if (0 <= x && x < n && 0 <= y - 1 && y - 1 < n && field[y - 1][x] == '.') // top
		available += 1 + numOfAvailable(x, y - 1, field, n);
	
	if (0 <= x && x < n && 0 <= y + 1 && y + 1 < n && field[y + 1][x] == '.') // bottom
		available += 1 + numOfAvailable(x, y + 1, field, n);
	
	return available;
}


int main()
{
	int n;
	cin >> n;

	int x, y;
	cin >> x >> y;

	x--; y--;

	vector<vector<char>> field;

	for (int i = 0; i < n; i++)
	{
		field.push_back({});

		for (int j = 0; j < n; j++)
		{
			char c;
			cin >> c;
			field[i].push_back(c);
		}
	}

	cout << 1 + numOfAvailable(x, y, field, n) << endl;

	return 0;
}