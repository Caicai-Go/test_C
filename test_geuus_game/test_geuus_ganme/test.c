#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>

//打印简易菜单
void meun()
{
	printf("***********************\n");
	printf("*****    1.play    ****\n");
	printf("*****    0.end     ****\n");
	printf("***********************\n");
}


//实现猜数字游戏
void game()
{
	int guees = 0;
	//随机数字
	int ret = rand() % 100 + 1;
	//猜数字
	int count = 7;
	while (count)
	{
		printf("您还有%d次机会\n", count);
		printf("请输入数字:>\n");
		scanf("%d", &guees);
		if (guees > ret)
		{
			printf("猜大了\n");
		}
		else if (guees < ret)
		{
			printf("猜小了\n");
		}
		else {
			printf("恭喜您猜对了，随机数是:%d\n", ret);
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("很遗憾，机会用尽，你输了，随机数是:%d\n", ret);
	}
}



int main() {

	int impute = 0;
	do {
		meun();
		printf("请选择：>");
		scanf("%d", &impute);
		switch (impute)
		{
		case 1:
			//printf("猜游戏\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入有误请重新输入\n");
			break;
		}


	} while (impute);
	return 0;
}