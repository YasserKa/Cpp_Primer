#include <iostream>
#include <string>
using std::string;using std::cout;using std::cin;using std::endl;


int main()
{
	string s1 = "abcdef";
	cout << s1 << endl;
	for (auto &c : s1)
		c = 'X';
	cout << s1 << endl;

	return 0;
}
