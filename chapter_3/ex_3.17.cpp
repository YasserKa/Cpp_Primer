#include <iostream>
#include <vector>
using std::vector;using std::string;using std::cout;using std::cin;using std::endl;

int main()
{
	int count = 1, perline = 8;
	string s;
	vector<string> v;

	while (cin >> s)
		v.push_back(s);

	for (auto &s: v)
		for (auto &c: s)
			c = toupper(c);

	
	for (auto s: v) {
		cout << s;
		if (count%perline == 0)
			cout << endl;
		++count;
	}

	cout << endl;
	return 0;
}

