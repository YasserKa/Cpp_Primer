#include <iostream>

int main()
{
    int sum = 0, val = 10, tmp = val;;

    while (tmp >= 1) {
        sum += tmp;
        --tmp;
    }
    std::cout << "Sum of " << val << " to  " << tmp << " inclusive is "
              << sum << std::endl;
    return 0;
}

