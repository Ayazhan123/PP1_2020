#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s , int i , int j)
{
	if (s.length() == 0 || s.length() == 1)
		return true ;

	if (s[i] == s[j])
	    return true;
		else return false ;
		
	string middle = s.substr(1, s.length() - 2);

return isPalindrome(middle) ;
}


int main()
{
	string s;
	cin >> s;

	cout << (isPalindrome(s) ? "True" : "False") << endl;


	return 0;
}