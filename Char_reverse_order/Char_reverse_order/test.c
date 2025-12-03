#define  _CRT_SECURE_NO_WARNINGS 1
//字符串逆序
//写一个函数，可以逆序一个字符串的内容
#include <stdio.h>
#include <string.h>
void Char_reverse_order(char arr[100000], int len)
{
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        char tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}


int main() {
    char arr[100000] = { 0 };
    gets(arr);
    int len = strlen(arr);
    Char_reverse_order(arr, len);
    puts(arr);
    return 0;
}