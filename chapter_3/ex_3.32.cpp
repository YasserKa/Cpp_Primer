#include <iostream>
#include <vector>
using std::vector;using std::cout;using std::cin;using std::endl;

int main()
{
	int arr[10], arr2[10], prog = 2;
	vector<int> v(10, 0), v1;


	switch(prog) {
		case 1:
			for (int i = 0; i < 10; ++i)
				arr[i] = i;  
			for (int i = 0; i < 10; ++i)
				arr2[i] = arr[i];  
			break;
		case 2:
			for (auto it = v.begin(); it != v.cend(); it++) 
				*it = (it - v.begin());
			v1 = v;
			break;
		default:
			cout << "Invalid program" << endl;
			break;
	}

	return 0;
}

