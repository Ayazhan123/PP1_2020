#include <iostream>
#include <string>


int main()
{
	std::string s1;
	std::string s2;

	std::cin >> s1;
	std::cin >> s2;

	s1.append(s2);

	std::cout << "s1 = " << s1 << "; s2 = " << s2 << std::endl;

	s1.insert(0, s2);

	std::cout << "s1 = " << s1 << "; s2 = " << s2 << std::endl;

	return 0;
}