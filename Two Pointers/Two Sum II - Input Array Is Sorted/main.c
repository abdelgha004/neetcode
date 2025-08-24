/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int sum;
    int *arr;

    *returnSize = 2;
    int start = 0;
    int end = numbersSize - 1;
    arr = malloc(sizeof(int) * 2);
    while(start < end){
        sum = numbers[start] + numbers[end];
        if(sum == target){
            arr[0] = start + 1;
            arr[1] = end + 1;
            return arr;
        }else if (sum < target){
            start++;
        }else if(sum > target){
            end--;
        }
    }
    return arr;
}