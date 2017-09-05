#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> v1 {0, 1, 1, 2}, v2 {0, 1, 1, 2, 3, 5, 8}, v3;
	bool pref = true;

	if (v1.size() > v2.size()) {
		v3 = v2;
		v2 = v1;
		v1 = v3;
	}
	


	for (decltype(v1.size()) i = 0; i < v1.size(); ++i)
		if (v1[i] == v2[i])
			continue;
		else 
			pref = false;

	cout << pref << endl;

	return 0;
}

