#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int aCnt = 0, eCnt = 0, iCnt = 0, 
		oCnt = 0, uCnt = 0, tabCnt = 0,
		blankCnt = 0, newlineCnt = 0,
		ffCount = 0, flCount = 0, fiCount = 0;
	std::string s;

	while (getline(cin, s)) {
		int fCount = 0;
		for (auto &ch: s) {
			if (ch == 'f')
				++fCount;

			if (fCount >= 1)
				if (ch == 'l')
					flCount++;
				else if (ch == 'i')
					fiCount++;
			else if (fCount >= 2)
				ffCount++;

			if (ch == 'a')
				++aCnt;
			else if (ch == 'e')
				++eCnt;
			else if (ch == 'i') {
				++iCnt;
			}
			else if (ch == 'o')
				++oCnt;
			else if (ch == 'u')
				++uCnt;
			else if (ch == ' ') 
				++blankCnt;
			else if (ch == '\t')
				++tabCnt;
			if (ch != 'f')
				fCount = 0;
		}
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
	cout << "ff: " << ffCount <<endl;
	cout << "fl: " << flCount <<endl;
	cout << "fi: " << fiCount <<endl;

	return 0;
}

