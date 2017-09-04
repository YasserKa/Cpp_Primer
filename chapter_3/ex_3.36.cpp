#include <iostream>
#include <vector>
using std::vector;using std::cout;using std::cin;using std::endl;
using std::begin; using std::end;

int main()
{
	int arr[9] = {0,0,0,0}, arr2[3] = {0, 0, 0}, prog = 2;
	vector<int> v(10, 0), v1(11, 0);


	switch(prog) {
		case 1:
			{
				int *p = begin(arr);
				int *p2 = begin(arr2);
				while(true) {
					if (p == end(arr) || p2 == end(arr2)) {
						if (p == end(arr) && p2 == end(arr2))
							cout << "Arrays are equal" << endl;
						else if (p == end(arr)) 
							cout << "arr2 is bigger" << endl;
						else 
							cout << "arr is bigger" << endl;
						break;
					}
					if (*p != *p2) {
						if (*p > *p2)
							cout << "arr is bigger" << endl;
						else
							cout << "arr2 is bigger" << endl;
						break;
					}
					++p;
					++p2;
				}
			}
		case 2:
			if (v1 == v)
				cout << "Vectors are equal" << endl;
			else if (v1 > v)
				cout << "v1 is bigger" << endl;
			else
				cout << "v is bigger" << endl;
			break;
		default:
			cout << "Invalid program" << endl;
			break;
	}

	return 0;
}

