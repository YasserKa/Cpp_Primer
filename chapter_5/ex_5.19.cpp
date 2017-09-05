#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string s1, s2;
	do {
		if (cin >> s1 >> s2)
			;
		else 
			break;
		if (s1 > s2)
			cout << s2 << " is less than " << s1;
		else if (s2 > s1)
			cout << s1 << " is less than " << s2;
		else
			cout << "equal strings"; 

		cout << endl;
	} while (true);
}

