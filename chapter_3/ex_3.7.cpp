#include <iostream>
#include <string>
using std::string;using std::cout;using std::cin;using std::endl;

/**
 * Since it's not a reference to the string the characters won't change, since it'
 * just a copy of the characters instead of the real thing
 */
int main()
{
	string s1 = "abcdef";
	cout << s1 << endl;
	for (char c : s1)
		c = 'X';
	cout << s1 << endl;

	return 0;
}

