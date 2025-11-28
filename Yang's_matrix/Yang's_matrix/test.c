#define  _CRT_SECURE_NO_WARNINGS 1
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);


#include <stdio.h>
#define X 5
#define Y 5

//创建一个X*Y的杨氏矩阵
void YangS_matrix(int a[X][Y])
{
	for (int i = 0; i < X; i++)
	{
		for (int j = 0; j < Y; j++)
		{
			a[i][j] = j+i + 1;
			//1 2 3 4 5 
			//2 3 4 5 6
			//3 4 5 6 7
			//4 5 6 7 8 
			//5 6 7 8 9
		}
	}
}

//在创建的杨氏矩阵中找n
int find_n(int a[X][Y], int n)
{
	//从右上角开始找
	int i = 0;
	int j = Y - 1;
	while (i<X && j>=0)
	{
		if (a[i][j] == n)
		{
			return 1;
		}
		else if (a[i][j] > n)
		{
			j--;
		}
		else {
			i++;
		}
	}
	return 0;
}

//打印杨氏矩阵
void print(int a[X][Y])
{
	for (int i = 0; i < X; i++)
	{
		for (int j = 0; j < Y; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int arr[X][Y] = { 0 };
	int n = 0;
	scanf("%d", &n);

	YangS_matrix(arr);

	if (find_n(arr, n))
	{
		printf("%d 这个数在这个杨氏矩阵中存在!\n", n);
	} else{
		printf("%d 这个数在这个杨氏矩阵中不存在!\n", n);
	}

	print(arr);
	return 0;
}