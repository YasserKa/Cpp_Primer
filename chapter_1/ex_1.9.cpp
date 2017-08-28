#include <iostream>

int main()
{
    int sum = 0, val = 1;

    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 1 to " << val << " inclusive is "
              << sum << std::endl;
    return 0;
}
