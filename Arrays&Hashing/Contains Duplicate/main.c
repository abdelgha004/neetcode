bool containsDuplicate(int* nums, int numsSize) {
    int i = 0;
    int j;
    while( i < numsSize)
    {
        j = i + 1;
        while(j < numsSize)
        {
            if(nums[i] == nums[j])
                return true;
            j++;
        }
        i++;
    }
    return false;
}