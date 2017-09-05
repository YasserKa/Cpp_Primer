#include <iostream>
#include <exception>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n1, n2;

	while (cin >> n1 >> n2)
		try {
			if (n2 == 0)
				throw std::logic_error("Can't devide by 0");
			cout << n1/n2 << endl;
		} catch (std::logic_error err) {
			cout << err.what()
				<< "\nTry again? y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	return 0;
}

