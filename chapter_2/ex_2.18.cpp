#include <iostream>

int main()
{
	int v = 0, v1 = 1, *p = &v;
	//change value of pointer
	p = &v1;
	//change value to which the pointer points
	*p = v;
	return 0;
}

