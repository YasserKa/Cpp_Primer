#include <iostream>
#include <vector>
using std::vector;using std::string;using std::cout;using std::cin;using std::endl;

int main()
{

	vector<int> v1;  
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout << v1.size()  << endl << v2.size()  << endl << v3.size()  << endl << v4.size()
		  << endl << v5.size()  << endl << v6.size()  << endl << v7.size() << endl;
	for (auto a: v1)
		cout << a << endl;
	for (auto a: v2)
		cout << a << endl;
	for (auto a: v3)
		cout << a << endl;
	for (auto a: v4)
		cout << a << endl;
	for (auto a: v5)
		cout << a << endl;
	for (auto a: v6)
		cout << a << endl;
	for (auto a: v7)
		cout << a << endl;

	return 0;
}

