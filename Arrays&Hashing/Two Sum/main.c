/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int diff;
    int *test;
    test = malloc(sizeof(int) * 2);
    *returnSize = 2;
    for(int i = 0; i < numsSize - 1; i++)
    {
        diff = target - nums[i];
        for(int j = i + 1; j < numsSize; j++){
            if(nums[j] == diff)
            {
                test[0] = i;
                test[1] = j;
                return test;  
            }

        }
    }
    return test;
}