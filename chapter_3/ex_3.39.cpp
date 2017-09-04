#include <iostream>
#include <string>
#include <cstring>
using std::string;using std::cout;using std::cin;using std::endl;
using std::begin; using std::end;

int main()
{
	int prog = 2;
	string s1 = "123", s2 = "123";
	const char s3[] = "123", s4[] = "123";

	switch(prog) {
		case 1:
			if (s1 == s2)
				cout << "Strings are equal" << endl;
			else if (s1 > s2)
				cout << "s1 is bigger" << endl;
			else 
				cout << "s2 is bigger" << endl;
			break;
		case 2:
			{
			int result = strcmp(s3, s4);
			if (result == 0)
				cout << "Strings are equal" << endl;
			else if (result > 0)
				cout << "s3 is bigger" << endl;
			else 
				cout << "s4 is bigger" << endl;
			break;
			}
		default:
			cout << "Invalid program" << endl;
			break;
	}

	return 0;
}

