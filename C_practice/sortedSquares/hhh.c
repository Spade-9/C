// 传入一个升序的数组 把里面每个元素平方后再升序排列 排列结果存到动态内存里

int *sortedSquares(int *nums, int numsSize, int *returnSize)
{
    int *result = (int *)malloc(numsSize * sizeof(int));
    *returnSize = numsSize; // 干嘛用的？？？
    int i, j;
    int k = numsSize - 1;
    for (i = 0, j = numsSize - 1; i <= j;)
    {
        if (nums[i] * nums[i] > nums[j] * nums[j])
        {
            result[k] = nums[i] * nums[i];
            k--;
            i++;
        }
        else
        {
            result[k] = nums[j] * nums[j];
            k--;
            j--;
        }
    }
    return result;
}