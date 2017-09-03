#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, currItem, totItems;

	if (std::cin >> currItem) {
		totItems = currItem;
		while (std::cin >> item)
			if (item.isbn() == currItem.isbn())
				totItems += item;
			else
				break;
	}


	std::cout << "Transactions sum: " << totItems << std::endl;
	return 0;
}

