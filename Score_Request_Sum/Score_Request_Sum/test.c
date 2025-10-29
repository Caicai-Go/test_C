#define _CRT_SECURE_NO_WARNINGS 1
//分数求和
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

#include <stdio.h>
int main() {
	double num = 1.0;
	int i = 0;
	for (i = 2; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			num -= 1.0 / i;
		}
		else {
			num += 1.0 / i;
		}
	}
	printf("%lf\n", num);
	return 0;
}
