#define _CRT_SECURE_NO_WARNINGS 1

////��ӡ����
////��ӡ1000�굽2000��֮�������
////���ܱ�100�������Ա���4���������߱� 400������������

#include <stdio.h>

int main() {
	int i = 1000;
	for (i; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
			printf("%5d������!", i);
		}
	}
	return 0;
}