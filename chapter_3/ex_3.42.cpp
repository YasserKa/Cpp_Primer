#include <iostream>
#include <vector>
using std::vector;using std::cout;using std::cin;using std::endl;
using std::begin; using std::end;

int main()
{
	vector<int> v{1, 2, 3};
	int arr[4];

	for (int i = 0; i < v.size(); i++)
		arr[i] = v[i];
	
	cout << arr[2] << endl;
	return 0;
}

