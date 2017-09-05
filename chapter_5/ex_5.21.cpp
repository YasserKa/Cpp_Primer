#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string word, newWord;
	bool dupFound = false;
	cin >> word;

	while (cin >> newWord) {
		if (isupper(newWord[0]) && word == newWord) {
			dupFound = true;
			break;
		}
		word = newWord;
	}
	if (dupFound)
		cout << newWord << " occured twice in succession";
	else 
		cout << "No word was repeated";

	cout << endl;

	return 0;
}

