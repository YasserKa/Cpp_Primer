#include <iostream>
#include <string>
using std::string;using std::cout;using std::cin;using std::endl;


int main()
{
	string s1;
	int prog = 1;

	switch(prog) {
		case 1: 
			while (getline(cin, s1))
				cout << s1 << endl;
			break;
		case 2:
			while (cin >> s1)
				cout << s1 << endl;
			break;
		default:
			cout << "Program not found" << endl;
			break;
	}

	return 0;
}
