#define  _CRT_SECURE_NO_WARNINGS 1
//找单身狗2
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//例如：
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.

#include <stdio.h>
#define SZ 10

//找数
void Find_Singledog(int *np)
{
	//先把所以数异或
	int tmp = 0;
	int i = 0;
	for ( i = 0; i < SZ; i++)
	{
		tmp ^= np[i];
	}

	//查找只出现一次的数这两个数异或后二进制上从右往左数的第一个1
	int bit  = 0;
	for (bit = 0; bit < 32; i++)
	{
		if ((tmp >> bit) & 1)
		{
			break;
		}
	}
	//找出只出现一次的数
	int singledog1 = 0;
	int singledog2 = 0;
	int j = 0;
	for (j = 0; j < SZ; j++)
	{
		//7 0111
		//9 1001
		if ((np[j]>>bit) & 1)
		{
			singledog1 ^= np[j];
		}
		else {
			singledog2 ^= np[j];
		}
	}
	printf("只出现一次的数分别是:%d %d\n", singledog1, singledog2);
}

int main() {
	int num[SZ] = { 1,2,3,4,5,1,2,3,4,6 };
	Find_Singledog(num);


	return 0;
}