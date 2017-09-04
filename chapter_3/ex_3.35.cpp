#include <iostream>
#include <string>
using std::string;using std::cout;using std::cin;using std::endl;
using std::begin; using std::end;

int main()
{
	int arr[10], *p;
	
	for (p = begin(arr); p < end(arr) ; ++p)
		*p = 0;
	cout << arr[3];

	return 0;
}

