#include <iostream>

int main()
{
	const int i = 42; // const int
	auto j = i; // int
	const auto &k = i; // const ref to int
   	auto *p = &i; // pointer to const int
	const auto j2 = i, &k2 = i; // constant int, const ref to i
}

