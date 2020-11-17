#include <iostream>
#include <string>

using namespace std;


string reverse(string s)
{
	if (s.length() == 0 || s.length() == 1)
		return s;

	string middle = s.substr(1, s.length() - 2);

	string result = "";
	
	result += s[s.length() - 1];
	result += reverse(middle);
	result += s[0];

	return result;
}

int main()
{
	string s;
	cin >> s;

	cout << reverse(s) << std::endl;

	return 0;
}