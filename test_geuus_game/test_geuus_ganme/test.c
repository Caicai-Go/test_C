#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>

//��ӡ���ײ˵�
void meun()
{
	printf("***********************\n");
	printf("*****    1.play    ****\n");
	printf("*****    0.end     ****\n");
	printf("***********************\n");
}


//ʵ�ֲ�������Ϸ
void game()
{
	int guees = 0;
	//�������
	int ret = rand() % 100 + 1;
	//������
	int count = 7;
	while (count)
	{
		printf("������%d�λ���\n", count);
		printf("����������:>\n");
		scanf("%d", &guees);
		if (guees > ret)
		{
			printf("�´���\n");
		}
		else if (guees < ret)
		{
			printf("��С��\n");
		}
		else {
			printf("��ϲ���¶��ˣ��������:%d\n", ret);
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("���ź��������þ��������ˣ��������:%d\n", ret);
	}
}



int main() {

	int impute = 0;
	do {
		meun();
		printf("��ѡ��>");
		scanf("%d", &impute);
		switch (impute)
		{
		case 1:
			//printf("����Ϸ\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("������������������\n");
			break;
		}


	} while (impute);
	return 0;
}