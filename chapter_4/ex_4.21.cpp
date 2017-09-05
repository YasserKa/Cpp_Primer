#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main()
{
	vector<int> v = {1, 2, 3, 4, 5, 6};

	for (auto &n: v)
		n = n%2 == 0 ? n : n*2;

	return 0;
}

