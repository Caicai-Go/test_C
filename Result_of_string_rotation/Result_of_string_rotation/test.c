#define  _CRT_SECURE_NO_WARNINGS 1
//字符串旋转结果
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#define LEN 100
#include <stdio.h>
#include <string.h>
//实现判断字符串旋转结果
int Result_of_string_rotation(char s1[LEN], char s2[LEN])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	//判断如果两个字符串都不一样长就肯定不是旋转得到的直接返回0
	if (len1 != len2)return 0;

	//用来存储s1和s2
	char s3[LEN*2] = { 0 };
	strcpy(s3, s1);//复制s1到s3
	strcat(s3, s1);//在拼接一次 s1到s3中
	
	//如果s2是s1旋转的字符串，s2肯定是s3的子串
	return strstr(s3, s2) != NULL;
}

int main() {
	char arr1[LEN] = { 0 };
	char arr2[LEN] = { 0 };

	printf("输入第一个字符串:\n");
	fgets(arr1,LEN,stdin);
	arr1[strcspn(arr1, "\n")] = '\0';

	printf("输入第二个字符串:\n");
	fgets(arr2, LEN, stdin);
	arr2[strcspn(arr2, "\n")] = '\0';
	
	
	if (Result_of_string_rotation(arr1, arr2))
	{
		printf("字符串2是字符串1旋转得来的!\n");
	}
	else {
		printf("字符串2不是字符串1旋转得来的!\n");
	}
	return 0;
}