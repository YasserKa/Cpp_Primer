#include <iostream>
#include <string>
#include <cstring>
using std::string;using std::cout;using std::cin;using std::endl;
using std::begin; using std::end;

int main()
{
	char s1[] = "123", s2[] = "123", s3[10];
	strcpy(s3, s1);
	strcat(s3, s2);
	
	cout << s3 << endl;
	return 0;
}

