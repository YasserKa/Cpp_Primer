#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int aCnt = 0, eCnt = 0, iCnt = 0, 
		oCnt = 0, uCnt = 0, tabCnt = 0,
		blankCnt = 0, newlineCnt = 0;
	std::string s;

	while (getline(cin, s)) {
		for (auto &ch: s)
			if (ch == 'a')
				++aCnt;
			else if (ch == 'e')
				++eCnt;
			else if (ch == 'i')
				++iCnt;
			else if (ch == 'o')
				++oCnt;
			else if (ch == 'u')
				++uCnt;
			else if (ch == ' ') 
				++blankCnt;
			else if (ch == '\t')
				++tabCnt;
		++newlineCnt;
	}

	cout << "a: " << aCnt <<endl;
	cout << "e: " << eCnt <<endl;
	cout << "i: " << iCnt <<endl;
	cout << "o: " << oCnt <<endl;
	cout << "u: " << uCnt <<endl;
	cout << "blanks: " << blankCnt <<endl;
	cout << "tabs: " << tabCnt <<endl;
	cout << "new lines: " << newlineCnt <<endl;

	return 0;
}

