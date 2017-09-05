#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main()
{
	int finalgrade;
	finalgrade = (grade > 90) ? "high pass"
                          : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass";

	if (grade > 90)
		finalgrade = "highpass";
	else if (grade < 60)
		finalgrade = "fail";
	else if (grade < 75)
		finalgrade = "low pass";
	else
		finalgrade = "pass";

	// A one liner filled with conditional operators is not readable so if statements are
	// more appropriate

	return 0;
}

