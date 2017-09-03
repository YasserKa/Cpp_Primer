#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;

    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> v1 >> v2;
    /** std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;
        It's illegal since the input operator (<<) doesn't have an ostream as a left operand.
        This can be solved by either removing the semicolons ";" or adding ostreams at the start of each line
    */
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;

    std::cout << "The sum of " << v1
              << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}

