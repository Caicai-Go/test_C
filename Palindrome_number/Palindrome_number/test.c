#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdbool.h>

//回文数题:
//给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
//回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
//例如，121 是回文，而 123 不是。
//示例 1：
//输入：x = 121
//输出：true
//-231 <= x <= 231 - 1


//力扣官方给出的题解
//bool isPalindrome(int x) {
//    // 特殊情况：
//    // 如上所述，当 x < 0 时，x 不是回文数。
//    // 同样地，如果数字的最后一位是 0，为了使该数字为回文，
//    // 则其第一位数字也应该是 0
//    // 只有 0 满足这一属性
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
//    // 当数字长度为奇数时，我们可以通过 revertedNumber/10 去除处于中位的数字。
//    // 例如，当输入为 12321 时，在 while 循环的末尾我们可以得到 x = 12，revertedNumber = 123，
//    // 由于处于中位的数字不影响回文（它总是与自己相等），所以我们可以简单地将其去除。
//    return x == revertedNumber || x == revertedNumber / 10;
//};

//本人自己想的代码
bool isPalindrome(int x) {
    //判断如果是负数 或者个位为0  或者是0的数直接返回false
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int x_X = x;
    int remainder = 0;
    long long new_num = 0;
    while (x_X)
    {
        //算出数值最小的数
        remainder = x_X % 10;

        //去除数值最小数
        x_X /= 10;

        //取原数值的倒序
        new_num = new_num * 10 + remainder;
    }
    //判断正序和倒序是否一样，一样返回true，不一样返回false
    if (x == new_num)
        return true;
    else
        return false;
}


//主函数
int main()
{
    int x = 0;
    scanf("%d", &x);
    if (isPalindrome(x))
    {
        printf("%d是回文数!\n",x);
    }
    else
    {
        printf("%d不是回文数!\n",x);
    }
	return 0;
}