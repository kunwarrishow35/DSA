/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdlib.h>
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int total = 0;
    int *res = malloc(numsSize*sizeof(int));

    *returnSize = numsSize;

    for(int i=0; i<numsSize; i++){
        total += nums[i];
        res[i]=total;
    }
    return res;
}