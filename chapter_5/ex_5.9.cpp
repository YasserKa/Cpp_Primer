#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	//std::string ch;
	char ch;

	while (cin >> ch)
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

	cout << "a: " << aCnt <<endl;
	cout << "e: " << eCnt <<endl;
	cout << "i: " << iCnt <<endl;
	cout << "o: " << oCnt <<endl;
	cout << "u: " << uCnt <<endl;

	return 0;
}
