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
	for (auto i = v1.cbegin(); i != v1.end(); ++i)
		cout << *i << endl;
	for (auto i = v2.cbegin(); i != v2.end(); ++i)
		cout << *i << endl;
	for (auto i = v3.cbegin(); i != v3.end(); ++i)
		cout << *i << endl;
	for (auto i = v4.cbegin(); i != v4.end(); ++i)
		cout << *i << endl;
	for (auto i = v5.cbegin(); i != v5.end(); ++i)
		cout << *i << endl;
	for (auto i = v6.cbegin(); i != v6.end(); ++i)
		cout << *i << endl;
	for (auto i = v7.cbegin(); i != v7.end(); ++i)
		cout << *i << endl;

	return 0;
}

