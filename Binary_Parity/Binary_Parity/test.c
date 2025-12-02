#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//打印整数二进制的奇数位和偶数位
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

void Binary_Parity(int n)
{
	//打印偶数位二进制序列
	printf("偶数位：");
	for (int i = 30; i >=0; i -= 2)
	{
		
		if ((n & (1 << i))!=0)
		{
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}
	printf("\n");
	//打印奇数位二进制序列
	printf("奇数位：");
	for (int i =31; i >= 1; i -= 2)
	{
		
		if ((n & (1 << i)) != 0)
		{
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}
	printf("\n");
}
//13
//0 0 0 0 1 1 0 1
//7 6 5 4 3 2 1 0

//偶数位1 1 0 0
//奇数位0 1 0 0 
int main() {
	int n = 0;
	scanf("%d", &n);
	Binary_Parity(n);

	return 0;
}