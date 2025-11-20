#include <stdio.h>
#include <math.h>

int main() {
    printf("0~100000之间的水仙花数有：\n");
    for (int i = 0; i < 100000; i++) {
        int count = 0, temp = i;
        double sum = 0.0;

        // 计算位数（修正后的逻辑）
        if (i == 0) {
            count = 1;  // 0 是特殊情况，单独处理
        }
        else {
            temp = i;
            while (temp) {
                temp /= 10;
                count++;
            }
        }

        temp = i;  // 重置 temp 用于分解数字
        while (temp) {
            int digit = temp % 10;
            sum += pow(digit, count);  
            temp /= 10;
        }

        if (sum == i) {
            printf("%d 是水仙花数\n", i);
        }
    }
    return 0;
}