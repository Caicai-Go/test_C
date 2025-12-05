#define  _CRT_SECURE_NO_WARNINGS 1
//描述
//该任务是打印用“* ”组成的“空心”正方形图案。
//输入描述：
//多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“ * ”的数量。
//输出描述：
//针对每行输入，输出用“ * ”组成的“空心”正方形，每个“ * ”后面有一个空格。
//示例1
//输入：
//4
//输出：
//* * * *
//*     *
//*     *
//* * * *
//示例2
//输入：
//5
//输出：
//* * * * *
//*       *
//*       *
//*       *
//* * * * * 

#include <stdio.h>
int main() {
    int num[18] = { 0 };
    int i = 0;
    int sz = sizeof(num) / sizeof(num[0]);
    for (i = 0; i < sz; i++) {
        do {
            scanf("%d", &num[i]);
            if (num[i] < 3 || num[i] > 20) {
                printf("输入有误请重新输入!\n");
            }
        } while (num[i] < 3 || num[i] > 20);

        for (int x = 0; x < num[i]; x++) {
            int y = 0;
            for (y = 0; y < num[i]; y++) {
                if (x == 0 || x == num[i] - 1) {
                    printf("* ");
                }
                else {
                    if (y == 0 || y == num[i] - 1) {
                        printf("* ");
                    }
                    else {
                        printf("  ");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}