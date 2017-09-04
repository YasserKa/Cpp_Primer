#include <iostream>
#include <string>
using std::string;using std::cout;using std::cin;using std::endl;


int main()
{
	string s1, result;
	int prog = 2;

	switch(prog) {
		case 1: 
			while (cin >> s1)
				result += s1;
			cout << result << endl;
			break;
		case 2:
			while (cin >> s1)
				result += s1 + " ";
			cout << result << endl;
			break;
		default:
			cout << "Program not found" << endl;
			break;
	}


	return 0;
}

