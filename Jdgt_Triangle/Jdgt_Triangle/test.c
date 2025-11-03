//判断三角形
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
	//windosw中按ctrl+z 三次 每一次按enter一次程序就会结束
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a + b > c && b + c > a && a + c > b)
        {
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if (a == b || a == c || b == c)
            {
                printf("Isosceles triangle!\n");
            }
            else {
                printf("Ordinary triangle!\n");
            }
        }
        else {
            printf("Not a triangle!\n");
        }
    }
    return 0;
}