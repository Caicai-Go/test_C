#define  _CRT_SECURE_NO_WARNINGS 1
//冒泡排序
//实现一个对整形数组的冒泡排序
#include <assert.h>
#include <stdio.h>
void Print(int arr[10], int sz);
void Bubble_Sort(int* str, int sz);
//实现冒泡排序
void Bubble_Sort(int *str, int sz)
{
	assert(str != NULL);
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz-1-i ; j++)
		{
			if (str[j] > str[j+1])
			{
				int tmp = str[j];
				str[j] = str[j+1];
				str[j+1] = tmp;
			}
		}
		////测试冒泡流程
		//Print(str, sz);
	}
}

//打印arr数组函数
void Print(int arr[10], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main() {
	int arr[10]={ 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//交换前:
	Print(arr, sz);
	Bubble_Sort(arr, sz);
	//交换后:
	Print(arr, sz);
	return 0;
}