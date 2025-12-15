#define  _CRT_SECURE_NO_WARNINGS 1
//模拟实现库函数strlen
#include <stdio.h>
#include <assert.h>
//实现strlen函数
size_t my_strlen(const char * str)
{
	assert(str);
	size_t count = 0;
	while (*str++)
		count++;
	return count;
}
int main() {
	char arr[20] = { 0 };
	gets(arr);
	size_t len = my_strlen(arr);
	printf("%s字符串数组长度为%zu\n", arr, len);
	return 0;
}