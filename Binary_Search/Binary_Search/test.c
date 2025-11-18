#define  _CRT_SECURE_NO_WARNINGS 1

//二分查找 - 函数实现
//写一个二分查找函数
//功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.
#include <stdio.h>
int bin_search(int arr[], int left, int right, int key)
{

	while (left<right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid-1;
		}
		else if (arr[mid] < key)
		{
			left = mid+1;
		}
		else {
			return mid;
		}
	}
	return -1;
}

int main() {
	int add[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("输入你要查找的数值:\n");
	int key = 0;
	scanf("%d", &key);
	//数组的左下标
	int left = 0;

	//数组右下标
	int right = 10 - 1;

	int sub = bin_search(add,left,right,key );
	if (sub == -1)
	{
		printf("找不到!\n");
	}
	else {
		printf("找到了下标为:%d\n", sub);
	}
	return 0;
}