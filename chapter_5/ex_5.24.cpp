#include <iostream>
#include <exception>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n1, n2;

	cin >> n1 >> n2;

	if (n2 == 0)
		throw std::logic_error("Can't devide by 0");

	cout << n1/n2 << endl;

	return 0;
}

