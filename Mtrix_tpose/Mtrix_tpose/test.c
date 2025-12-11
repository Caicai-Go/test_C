#define  _CRT_SECURE_NO_WARNINGS 1
//描述
//【转置矩阵】转置矩阵是将矩阵的行列互换得到的新矩阵。
//输入描述：
//在一行中输入两个整数
//n,m
//(1≦n, m≦10)，分别表示矩阵的行数和列数。
//输出描述：
//输出
//m 行
//n 列，为矩阵的转置结果。每个元素之后使用一个空格。
//示例1
//输入：
//2 3
//1 2 3
//4 5 6
//输出：
//1 4
//2 5
//3 6
//示例2
//输入：
//1 4
//7 8 9 10
//输出：
//7
//8
//9
//10


#include <stdio.h>
#define NUM 100 //定义一个100的数组
int main() {
    int n = 0;
    int m = 0;
    int add[NUM] = { 0 };
    do {
        scanf("%d %d", &m, &n);
        if ((n < 1 || n >10) || (m < 1 || m >10))
        {
            printf("输入有误，请重新输入!\n");
        }
    } while ((n < 1 || n >10) || (m < 1 || m >10));

    //输入数据放到数组里面
    int x = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &add[x]);
            x++;
        }
    }

    //转置矩阵
    for (int i = 0; i < n; i++)
    {
        int new_n = n;
        for (int j = 0; j < m; j++)
        {
            if (j == 0)
            {
                printf("%d ", add[i]);
            }
            else if (j > 1)
            {
                printf("%d ", add[new_n]);
                new_n += n;
            }
            else {
                printf("%d ", add[new_n + i]);
                new_n += n + i;
            }
        }
        printf("\n");
    }
    return 0;
}