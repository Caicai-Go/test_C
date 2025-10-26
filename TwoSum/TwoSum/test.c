#include <stdio.h>
#include <malloc.h>
//ʵ������֮��
//����һ�����飨nums)�������м���Ԫ�أ��ٸ���һ������target���������ҳ�������������Ԫ����ӵ���num,Ȼ�󷵻�������Ԫ�ص�С�ꡣ
//���ö�̬�ڴ濪��ռ�����

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    //Ϊ��������ڴ�ռ�
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
                *returnSize = 2;//���ߵ��õ��ˣ��������Ĵ�С��2
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
    int numsSize = sizeof(nums) / sizeof(nums[1]);//���������С
    int returnSize = 0;//��ŷ��ؽ������Ĵ�С

    int* result = twoSum(nums, numsSize, target, &returnSize);
    if (returnSize > 0)
    {
        printf("�ҵ��ˣ��±��ǣ�%d��%d\n", result[0], result[1]);
        free(result);//�ͷ��ڴ�
    }
    else {
        printf("û�ҵ�!\n");
    }

	return 0;
}