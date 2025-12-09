#define  _CRT_SECURE_NO_WARNINGS 1
//计算斐波那契数
//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//斐波那契数列是一个数字序列，其中每个数字是前两个数字的总和，但前两个数字分别为0和1。
//0 1 1 2 3 5 8 13 21 34 55

#include <stdio.h>

////非递归
//long long NoRecursion(long long num)
//{
//	long long number1 = 0;
//	long long number2 = 1;
//	if (num == 0)
//	{
//		return number1;
//	}else if (num == 1)
//	{
//		return number2;
//	}
//	else {
//		int i = 0;
//		for (i = 2; i <= num; i++)
//		{
//			long long  tmp = number1 + number2;
//			number1 = number2;
//			number2 = tmp;
//		}
//		return number2;
//	}
//}


//0 1 1 2 3 5 8 13 21 34 55
//递归
long long  Recursion(long long num )
{
	if (num <= 1)
	{
		return num;
	}
	return Recursion(num-1)+ Recursion(num-2);
}


int main() {
	long long num = 0;

	while (1)
	{
		if (scanf("%lld", &num) == 1)
		{
			if (num <0)
			{
				printf("输入有误不能是负数请重新输入!\n");
				
			}
			else {
				break;
			}
			
		}
		else {
			while (getchar() != '\n');  // 一直读取字符，直到遇到换行符 '\n'
			printf("输入有误请重新输入!\n");
		}
	}

	////非递归
	//long long ret = NoRecursion(num);
	
	//递归
	long long ret = Recursion(num);


	printf("第%lld个斐波那契数是%lld!\n", num, ret);
	return 0;
}