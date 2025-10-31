#define _CRT_SECURE_NO_WARNINGS 1

////打印闰年
////打印1000年到2000年之间的闰年
////不能被100整除可以被被4整除，或者被 400整除就是闰年

#include <stdio.h>

int main() {
	int i = 1000;
	for (i; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
			printf("%5d是闰年!", i);
		}
	}
	return 0;
}