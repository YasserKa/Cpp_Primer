#include <iostream>
#include <string>
using std::string;using std::cout;using std::cin;using std::endl;

int main()
{
	// While loop
	string s1 = "abcdef";
	decltype(s1.size()) i = 0; 

	while (i != s1.size()) {
		s1[i] = 'X';
		++i;
	}
	cout << s1 << endl;

	// For loop
	s1 = "abcdef";

	for (decltype(s1.size()) i = 0; i != s1.size(); ++i)
		s1[i] = 'X';
	cout << s1 << endl;

	/**
	 * I prefer the range for because it's the simplest and easiest form to understand
	 * in a situation where you need to traverse the whole string
	 */
	return 0;
}

