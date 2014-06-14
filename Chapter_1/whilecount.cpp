/*
*while循环，计算整数和
*/

#include <iostream>

int main(int argc, char const *argv[])
{
	int sum = 0, val = 1;

	while (val <= 10)
	{
		sum += val;
		++ val;
	}
	std::cout << "Sum of 1 to 10 inclusive is "
			  << sum << std::endl;

	return 0;
}