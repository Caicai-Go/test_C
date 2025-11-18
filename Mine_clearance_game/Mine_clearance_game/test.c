#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//菜单
void menu()
{
	printf("****************************\n");
	printf("***-------扫雷游戏-------***\n");
	printf("*******   1.play     *******\n");
	printf("*******   0.end      *******\n");
	printf("****************************\n");
}


//实现排雷游戏函数
void Game_mMine()
{
	//存放雷的数组
	char mine[ROWS][COLS] = { '0' };

	//排查雷的数组
	char show[ROWS][COLS] = { '*' };

	//初始化数组
	InZation(mine,ROWS,COLS,'0');
	InZation(show,ROWS,COLS,'*');

	//布置雷
	SetMine(mine, ROW, COL);

	system("cls");

	//打印棋盘函数
	//print(mine,ROW,COL);
	print(show,ROW,COL);

	//排查雷
	GetMine(mine, show, ROW, COL);

}



int main() {
	int input = 1;
	while (input)
	{
		while (1)
		{
			//打印菜单函数
			menu();
			printf("请选择:>");
			if ((scanf("%d", &input)) == 1)
			{
				break;
			}
			else {
				while (getchar() != '\n');
				printf("输入有误请重新输入:>\n");
			}
		}
		switch (input)
		{
		case 1:
			//玩游戏
			Game_mMine();
			break;
		case 0:
			//游戏结束
			printf("退出游戏!\n");
			break;
		default:
			printf("输入有误请重新输入:>\n");
			break;
		}
	}
	return 0;
}