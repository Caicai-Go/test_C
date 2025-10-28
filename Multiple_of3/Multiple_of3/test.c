

//写一个代码打印1-100之间所有3的倍数的数字

#include <stdio.h>
int main() {
	int num = 100;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d是3的倍数!\n", i);
	}
	return 0;
 }
