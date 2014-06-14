/*
*相同书号的书相加
*/

#include <iostream>
#include "Sales_item.h"

int  main(int argc, char const *argv[])
{
	Sales_item item_1, item_2;

	std::cin >> item_1 >> item_2 ;

	if (item_1.isbn() == item_2.isbn())
	{
		std::cout << item_1 + item_2 << std::endl;
		return 0; 
	}
	else
	{
		std::cerr << "Data must refer to same ISBN" 
		          << std::endl;
    	return -1; 
	}

	return 0;
}