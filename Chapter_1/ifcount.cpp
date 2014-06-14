/*
*从窗口读入整数，计算整数出现的次数（相同数必须出现在一起。。。。）
*/

#include <iostream>

int main(int argc, char const *argv[])
{
	//currval是正在统计的数；新读入的值将存放在val
	int currval = 0, val = 0;

	//读取第一个数
	if (std::cin >> currval)
	{
		int cnt = 1;					//记录当前值得个数
		while (std::cin >> val)			//读取剩余的数
		{
			if (val == currval)
			{
				++ cnt;
			}
			else
			{
				std::cout << currval << " occurs " 
						  << cnt << " times " <<std:: endl;

				currval = val;			//重新记值
				cnt = 1;
			}
		}


		//打印最后一个值的个数
		std::cout << currval << " occurs " <<
				  cnt << " times " << std::endl;
	}

	return 0;
}