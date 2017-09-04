#include <iostream>
#include <vector>
using std::vector;using std::cout;using std::cin;using std::endl;
using std::begin; using std::end;

int main()
{
	int arr[] = {1, 2, 3};
	vector<int> v(begin(arr), end(arr));
	
	cout << v[1] << endl;
	return 0;
}

