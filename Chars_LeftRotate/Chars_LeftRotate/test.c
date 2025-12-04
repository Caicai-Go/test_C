#define  _CRT_SECURE_NO_WARNINGS 1
//字符串左旋
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//
//ABCD左旋两个字符得到CDAB

#include <stdio.h>
#include <string.h>
//实现字符串左旋N个字符
void Chars_LeftRotate(char arr[20], int n, int  len)
{
	for (int i = 0; i < n; i++)
	{
		char tmp = arr[0];
		int j = 0;
		for ( j = 0; j+1 < len; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[j] = tmp;

	}
}

int main() {
	int n = 0;
	char arr[20] = { 0 };
	printf("请输入左旋几个字符:\n");
	scanf("%d", &n);
	// 清空输入缓冲区中的剩余字符（包括换行符）
	int c;
	while ((c = getchar()) != '\n' && c != EOF);

	printf("请输入一个字符串:\n");
	gets(arr);
	int len = strlen(arr);

	Chars_LeftRotate(arr,n,len);
	puts(arr);
	return 0;
}