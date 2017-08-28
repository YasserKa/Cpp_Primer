#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2; // read a pair of transactions
    if (item1.isbn() == item2.isbn())
        std::cout << item1 + item2; // print their sum
    else
        std::cout << "The books don't have the same isbn";
    std::cout << std::endl;
    return 0;
}
