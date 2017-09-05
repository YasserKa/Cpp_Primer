#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	int dup = 1;
	int freqDup = 1;

	string word, newWord, freqWord;
	cin >> word;

	while (cin >> newWord) {
		if (word == newWord)
			++dup;
		else
			dup = 1;

		if (dup > freqDup) {
			freqDup = dup;
			freqWord = newWord;
		}

		word = newWord;
	}

	if (freqDup == 1)
		cout << "No repeated words were repeated" << endl;
	else 
		cout << "Most successive repeated word is " << freqWord << " that occured "
			<< freqDup << " times" << endl;

	return 0;
}

