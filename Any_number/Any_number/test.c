#define  _CRT_SECURE_NO_WARNINGS 1
//打印一个数的每一位	
//递归方式实现打印一个整数的每一位

#include <stdio.h>


//递归方式实现打印一个整数的每一位
//1245
void any_number(int n)
{
	if (n < 10)
	{	
		printf("%d ", n);
		return;
	}
	any_number(n / 10);
	printf("%d ", n % 10);

}


int main() {
	int n = 0;
	scanf("%d", &n);
	any_number(n);

	return 0;
}


