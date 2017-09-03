#include <iostream>

int main()
{
	int sum = 0;
	// 1.9
	for (int i = 50; i <= 100; ++i)
		sum += i;

	// 1.10
	for (int i = 10; i <= 0; --i)
		sum += i;

	// 1.11
	int v1 = 0, v2 = 0;
	std::cin >> v1 >>v2;
	for (int i = v1; i <= v2; ++i)
		sum += i;
}

