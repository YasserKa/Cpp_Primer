#include <iostream>

int main()
{
    int sum = 0, v1 = 0, v2 = 0, tmp = 0;

    std::cout << "Enter 2 numbers that will act as the range" << std::endl;
    std::cin >> v1 >> v2;
    tmp = v1;
    while (tmp <= v2) {
        sum += tmp;
        ++tmp;
    }
    std::cout << "Sum of " << v1 << " to " << v2 << " inclusive is "
              << sum << std::endl;
    return 0;
}

