#include <iostream>
#include <string>
using std::string;using std::cout;using std::cin;using std::endl;


int main()
{
	string s1, s2;
	int prog = 2;

	cin >> s1 >> s2;
	switch(prog) {
		case 1: 
			if (s1 == s2)
				cout << "The strings are equal" << endl;
			else if (s1 > s2) 
				cout << s1 << " is larger" << endl;
			else
				cout << s2 << " is larger" << endl;
			break;
		case 2:
			{
			int size1 = s1.size(), size2 = s2.size();
			if (size1 == size2)
				cout << "The got some length" << endl;
			else if (size1 > size2) 
				cout << s1 << " is bigger" << endl;
			else
				cout << s2 << " is bigger" << endl;
			break;
			}
		default:
			cout << "Program not found" << endl;
			break;
	}


	return 0;
}
