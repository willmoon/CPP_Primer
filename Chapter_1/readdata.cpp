/*
*从窗口不断读入整数，计算他们的和并输出
*/
#include <iostream>

int main(int argc, char const *argv[])
{
	int sum = 0, value = 0;
	while (std::cin >> value)
	{
		sum += value;
	}

	std::cout << "Sum is :" << sum << std::endl;
 
	return 0;
}