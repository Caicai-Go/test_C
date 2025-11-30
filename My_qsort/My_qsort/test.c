#define  _CRT_SECURE_NO_WARNINGS 1
//用冒泡排序模拟实现库函数：qsort
//qsort库函数就是可以接受任意类型的数据并继续排序
//qsort库函数：void qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
//首先第一个传的参数是要排序的数组地址，qsort用void*接收
//第二个传的参数是要排序数组的大小，qsort用size_t接收
//第三个传的参数是一个排序类型的大小，qsort用size_t接收
//第四个传的参数是一个用户自己写的判断大小的函数，函数返回类型是int 函数参数类型是(const void*,const void*)

#include <stdio.h>
#include <string.h>

int my_cmp(const void*, const void*);
void my_qsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*));
void _swap(void* p1, void* p2, int size);

//交换函数
void _swap(void* p1, void* p2,int size)
{
	int i, j;
	i = j = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1+i);
		*((char*)p1+i) = *((char*)p2+i);
		*((char*)p2+i) = tmp;
	}
}


//实现qsort库函数
void my_qsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*))
{
	//冒泡排序
	for (int i = 0; i < num-1; i++)
	{
		for (int j = 0; j < num - 1 -i;j++)
		{
			//如果返回的数大于0就交换
			if (my_cmp((char*)base + j * size, (char*)base + (j+1) * size) > 0)
			{
				_swap((char*)base + j * size, (char*)base + (j +1)* size, size);
			}
		}
	}
}

//用户自己定义判断大小的函数(int类型)
int my_cmp(const void* p1, const void*p2)
{
	return *(int*)p1 - *(int*)p2;
}


//////用户自己定义判断大小的函数(字符串类型)
//int my_cmp(const void* p1, const void*p2)
//{
//	return strcmp((char*)p1,(char*)p2);
//}

////用户自己定义判断大小的函数(浮点数类型)
//int my_cmp(const void* p1, const void*p2)
//{
//	double a = *(const double*)p1;
//	double b = *(const double*)p2;
//
//	if (a < b) return -1;
//	if (a > b) return 1;
//	return 0;
//}

int main() {
	//整形数据交换
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), my_cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}


	////字符串交换
	//char arr2[10] = "ihgfedcba";
	//my_qsort(arr2, strlen(arr2), sizeof(char), my_cmp);
	//puts(arr2);

	////浮点数交换
	//double arr3[10] = { 1.9,1.8,1.7,1.6,1.5,1.4,1.3,1.2,1.1,1.0 };
	//qsort(arr3, sizeof(arr3) / sizeof(arr3[0]), sizeof(double), my_cmp);
	//for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
	//{
	//	printf("%lf\n", arr3[i]);
	//}
	return 0;
}