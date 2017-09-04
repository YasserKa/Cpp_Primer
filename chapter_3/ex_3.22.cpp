#include <iostream>
#include <vector>
using std::vector;using std::string;using std::cout;using std::cin;using std::endl;

int main()
{

	vector<string> text {"Hi there", ", I am here", "", "I am not here"};

	for (auto it = text.begin();
	  it != text.end() && !it->empty(); ++it)
		for (auto &c: *it)
			c = toupper(c);

	for (auto it = text.cbegin();
	  it != text.cend() && !it->empty(); ++it)
		cout << *it << endl;

	return 0;
}

