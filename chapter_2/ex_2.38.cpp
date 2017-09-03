#include <iostream>

int main()
{
	// auto ignores top level const and uses the type of the referenced object
	// unlike dectltype
	const a = 1;
	auto i = a; // not const
	decltype(a) i = 1; // const

	int a, &r = a;
	auto i = r; // int
	decltype(r) i = a; // ref to int
}

