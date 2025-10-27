#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdbool.h>

//��������:
//����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��
//��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������
//���磬121 �ǻ��ģ��� 123 ���ǡ�
//ʾ�� 1��
//���룺x = 121
//�����true
//-231 <= x <= 231 - 1


//���۹ٷ����������
//bool isPalindrome(int x) {
//    // ���������
//    // ������������ x < 0 ʱ��x ���ǻ�������
//    // ͬ���أ�������ֵ����һλ�� 0��Ϊ��ʹ������Ϊ���ģ�
//    // �����һλ����ҲӦ���� 0
//    // ֻ�� 0 ������һ����
//    if (x < 0 || (x % 10 == 0 && x != 0)) {
//        return false;
//    }
//
//    int revertedNumber = 0;
//    while (x > revertedNumber) {
//        revertedNumber = revertedNumber * 10 + x % 10;
//        x /= 10;
//    }
//
//    // �����ֳ���Ϊ����ʱ�����ǿ���ͨ�� revertedNumber/10 ȥ��������λ�����֡�
//    // ���磬������Ϊ 12321 ʱ���� while ѭ����ĩβ���ǿ��Եõ� x = 12��revertedNumber = 123��
//    // ���ڴ�����λ�����ֲ�Ӱ����ģ����������Լ���ȣ����������ǿ��Լ򵥵ؽ���ȥ����
//    return x == revertedNumber || x == revertedNumber / 10;
//};

//�����Լ���Ĵ���
bool isPalindrome(int x) {
    //�ж�����Ǹ��� ���߸�λΪ0  ������0����ֱ�ӷ���false
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int x_X = x;
    int remainder = 0;
    long long new_num = 0;
    while (x_X)
    {
        //�����ֵ��С����
        remainder = x_X % 10;

        //ȥ����ֵ��С��
        x_X /= 10;

        //ȡԭ��ֵ�ĵ���
        new_num = new_num * 10 + remainder;
    }
    //�ж�����͵����Ƿ�һ����һ������true����һ������false
    if (x == new_num)
        return true;
    else
        return false;
}


//������
int main()
{
    int x = 0;
    scanf("%d", &x);
    if (isPalindrome(x))
    {
        printf("%d�ǻ�����!\n",x);
    }
    else
    {
        printf("%d���ǻ�����!\n",x);
    }
	return 0;
}