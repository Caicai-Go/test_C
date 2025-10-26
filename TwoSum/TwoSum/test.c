#include <stdio.h>
#include <malloc.h>
//实现两数之和
//给出一个数组（nums)，数组有几个元素，再给出一个数（target），让你找出该数组中两个元素想加等于num,然后返回这两个元素的小标。
//采用动态内存开配空间做法

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    //为结果分配内存空间
    int* result = (int*)malloc(2 * sizeof(int));
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        int j = 0;
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;//告诉调用的人，结果数组的大小是2
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}


int main() {
	int nums[] = { 2,7,11,15 };
	int target = 9 ;
    int numsSize = sizeof(nums) / sizeof(nums[1]);//计算数组大小
    int returnSize = 0;//存放返回结果数组的大小

    int* result = twoSum(nums, numsSize, target, &returnSize);
    if (returnSize > 0)
    {
        printf("找到了！下标是：%d和%d\n", result[0], result[1]);
        free(result);//释放内存
    }
    else {
        printf("没找到!\n");
    }

	return 0;
}