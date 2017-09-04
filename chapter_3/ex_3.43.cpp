#include <iostream>
#include <vector>
using std::vector;using std::cout;using std::cin;using std::endl;
using std::begin; using std::end;

int main()
{
	int arr[4] = {1, 2, 3, 4};;

	for (int n: arr)
		cout << n << endl;
	for (int i = 0; i < 4; ++i)
		cout << arr[i] << endl;
	for (int *p = begin(arr); p != end(arr); ++p)
		cout << *p << endl;

	return 0;
}

