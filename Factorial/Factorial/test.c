#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//求阶乘
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//n= 5  5*4*3*2*1 =120   n = 0     = 1 


////非递归实现
//int Factorial(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else {
//		int i = n - 1;
//		while (i)
//		{
//			n *= i;
//			i--;
//		}
//		return n;
//	}
//}

//递归实现
int Recursion_Factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * Recursion_Factorial(n - 1);
}


int main() {
	int n = 0;
	while (1)
	{
		if (scanf("%d", &n) == 1)
		{
			if (n < 0)
			{
				printf("没有负数的阶乘请重新输入:\n");
			}else {
				break;
			}
		}
		else {
			while (getchar() != '\n');
			printf("输入有误请重新输入:\n");
		}
	}

	////非递归
	//int ret = Factorial(n);

	//递归
	int ret = Recursion_Factorial(n);


	printf("%d的阶乘是:%d\n", n, ret);
	return 0;
}