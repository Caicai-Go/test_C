#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化数组函数
void InZation(char boardgame[ROWS][COLS], int row, int col, char get)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			boardgame[i][j] = get;
		}
	}
}

//打印棋盘函数
void print(char arr[ROWS][COLS], int row, int col)
{
	printf("-----扫雷游戏-----\n");

	//打印序列
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}


//布置雷函数
void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	//存放雷的数为conut，当count等于0时循环结束布置完成
	while (count)
	{
		//下面两个代码的意思是生成随机数，随机数的范围在row +1  col +1的范围
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		//在布置雷棋盘中随机判断该位置是不是'0'
		if (arr[x][y] == '0')
		{
			//存放一颗雷，然后count--
			arr[x][y] = '1';
			count--;
		}
	}
}

//排查周围有几颗雷
static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int count = 0;//记录雷的个数
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			//这里得到得是字符，所先拿取得的值减去字符'0'这样这就能得到该值得整数，比如'1'-'0'=1  '0' -'0' =0,这里是采用了asccll码值表进行运算得出
			count += (mine[i][j] - '0');
		}
	}
	return count;
}



//排查雷
void GetMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - COUNT)
	{
		printf("请输入你要排查雷的坐标:\n");
		scanf("%d %d", &x, &y);
		//清除地图
		system("cls");
		print(show, row, col);

		//判断该坐标是否有雷
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断该坐标是否已经排查过
			if (show[x][y] == '*')
			{
				//判断该坐标是否是雷
				if (mine[x][y] == '1')
				{
					printf("很遗憾你被炸死了!\n");
					//打印布置雷的棋盘
					print(mine, row, col);
					break;
				}
				else {
					//该坐标不是雷返回该坐标周围有几颗雷
					int count = GetMineCount(mine, x, y);
					show[x][y] = count + '0';//这里在加上字符0，count就以字符存到排查棋盘中
					print(show, row, col);
					win++;//记录排查成功的个数
				}
			}
			else {
				printf("该坐标已被排查过，请重新输入坐标\n");
			}
		}
		else {
			printf("输入的坐标有误请重新输入\n");
		}
	}
	if (win == row * col - COUNT)
	{
		printf("恭喜您，排雷成功!\n");
		print(mine, row, col);
	}
}