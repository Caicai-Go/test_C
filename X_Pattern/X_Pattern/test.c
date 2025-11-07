//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的X形图案。
//输入描述：
//多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//输出描述：
//针对每行输入，输出用“ * ”组成的X形图案。
//示例1
//输入：
//5
//输出：
//*   *
// * *
//  *
// * *
//*   *
//示例2
//输入：
//6
//输出：
//*    *
// *  * 
//  **
//  **
// *  *
//*    *

#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int num[18] = { 0 };
    int i = 0;
    int sz = sizeof(num) / sizeof(num[0]);
    for (i = 0; i < sz; i++) {
        do {
            scanf("%d", &num[i]);
            if (num[i] < 2 || num[i] > 20) {
                printf("输入数值有误，请重新输入!\n");
            }
        } while (num[i] < 2 || num[i] > 20);
    }

    for (i = 0; i < sz; i++) {
        int right = num[i] - 1;
        int left = 0;
        //打印上半部
        while (left < right) {
            int j = 1;
            for (j = 0; j <= num[i] - 1; j++) {
                if (j == left || j == right) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
            left++;
            right--;
        }

        //打印下半部
        while (right >= 0 && left <= num[i] - 1) {
            int j = 0;
            for (j = 0; j <= num[i] - 1; j++) {
                if (j == left || j == right) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
            left++;
            right--;
        }
    }
    return 0;
}