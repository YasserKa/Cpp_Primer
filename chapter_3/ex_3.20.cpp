#include <iostream>
#include <vector>
using std::vector;using std::cout;using std::cin;using std::endl;

int main()
{
	int n, prog = 2;
	vector<int> v;

	while (cin >> n)
		v.push_back(n);

	if (v.empty())
		cout << "No input to process" << endl;
	else if (v.size() == 1)
		cout << v[0] << endl;
	else 
		switch (prog) {
			case 1:
				for (decltype(v.size()) i = 0; i < v.size()-1; ++i)
					cout << v[i] + v[i+1] << endl;
				break;
			case 2:
				for (decltype(v.size()) i = 0; i < v.size()/2; ++i)
					cout << v[i] + v[v.size()-i-1] << endl;
				break;
			default:
				cout << "Program not found" << endl;
				break;
		}

	return 0;
}

