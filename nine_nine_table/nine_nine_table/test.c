#define _CRT_SECURE_NO_WARNINGS 1

//99³Ë·¨±í
#include <stdio.h>

int main() {
	int i = 1;
	int j = 1;
	while (i<=9)
	{
		i = 1;
		
		while(j >= i)
		{
			printf("%3d * %d =%2d", i, j, i * j);
			i++;
		}
		j++;
		printf("\n");
	}
	return 0;
}