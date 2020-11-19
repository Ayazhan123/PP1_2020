#include <iostream>
#include <string>

using namespace std;


bool checkIfPalindrome(const string& s)
{
	if (s.size() == 0 || s.length() == 1)
		return true;

	if (s[0] != s[s.length() - 1])
		return false;
	else
		return checkIfPalindrome(s.substr(1, s.length() - 2));
}

int main()
{
	// Tests:

	// std::cout << (checkIfPalindrome("") ? "True" : "False") << std::endl;
	// std::cout << (checkIfPalindrome("a") ? "True" : "False") << std::endl;
	// std::cout << (checkIfPalindrome("aa") ? "True" : "False") << std::endl;
	// std::cout << (checkIfPalindrome("aba") ? "True" : "False") << std::endl;
	// std::cout << (checkIfPalindrome("abba") ? "True" : "False") << std::endl;
	// std::cout << (checkIfPalindrome("abcba") ? "True" : "False") << std::endl;
	// std::cout << (checkIfPalindrome("abccba") ? "True" : "False") << std::endl;

	// std::cout << std::endl;

	// std::cout << (checkIfPalindrome("ab") ? "True" : "False") << std::endl;
	// std::cout << (checkIfPalindrome("abc") ? "True" : "False") << std::endl;
	// std::cout << (checkIfPalindrome("abca") ? "True" : "False") << std::endl;
	// std::cout << (checkIfPalindrome("accba") ? "True" : "False") << std::endl;
	// std::cout << (checkIfPalindrome("abcdba") ? "True" : "False") << std::endl;
	// std::cout << (checkIfPalindrome("abcddba") ? "True" : "False") << std::endl;

	std::string s;
	std::cin >> s;

	std::cout << (checkIfPalindrome(s) ? "Yes" : "No") << std::endl;

	return 0;
}