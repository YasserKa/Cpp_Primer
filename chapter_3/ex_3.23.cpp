#include <iostream>
#include <vector>
using std::vector;using std::string;using std::cout;using std::cin;using std::endl;

int main()
{

	vector<int> v(10, 2);

	for (auto it = v.begin(); it != v.end(); ++it)
			*it = *it * 2;

	for (auto it = v.cbegin(); it != v.cend(); ++it)
		cout << *it << endl;

	return 0;
}

