/*
*for循环，计算整数和
*/

#include <iostream>

int  main(int argc, char const *argv[])
{
	int sum = 0;

	for (int i = 0; i <= 10; ++i)
	{
		sum += i;
	}

	std::cout << "Sum of 1 to 10 inclusive is "
			  << sum << std::endl;

	return 0;
}