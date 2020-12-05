#include <iostream>
#include <string>

using namespace std;


bool areSameCharacters(char c1, char c2)
{
	c1 = tolower(c1);
	c2 = tolower(c2);

	if (c1 == c2)
		return true;

	if (c1 == 'b' && c2 == 'p' || c1 == 'p' && c2 == 'b')
		return true;

	if (c1 == 'e' && c2 == 'i' || c1 == 'i' && c2 == 'e')
		return true;

	return false;
}

bool areSameStrings(string s1, string s2)
{
	if (s1.size() != s2.size())
		return false;

	for (int i = 0; i < s1.size(); i++)
		if (!areSameCharacters(s1[i], s2[i]))
			return false;

	return true;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;

		cout << (areSameStrings(s1, s2) ? "Yes" : "No") << endl;
	}


	return 0;
}