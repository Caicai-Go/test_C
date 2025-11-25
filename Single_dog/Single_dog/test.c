#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//单身狗1
//在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，请找出那个只出现一次的数字。
//例如：
//数组中有：1 2 3 4  2 3 5 4 1，只有5出现一次，其他数字都出现2次，找出5


//这是答案：
//int Single_dog(int arr[], int sz)
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];  // 关键：使用异或运算
//	}
//	return ret;
//}



//找出只出现一次数的下标
int Single_dog(int a[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		int j = sz-1;
		while (j>=0)
		{
			if (i != j)
			{
				if (a[i] == a[j])
				{
					break;
				}
				else {
					j--;
				}
			}
			else {
				j--;
				continue;
			}
		}
		if (j < 0)
		{
			return i;
		}
	}
}


int main() {
	int arr[9] = { 3,2,5,4,2,3,1,4,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = Single_dog(arr,sz);

	printf("只出现一次的数字下标是%d\n",ret);
	return 0;
}


