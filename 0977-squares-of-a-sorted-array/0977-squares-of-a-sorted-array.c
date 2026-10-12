/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* res = malloc(numsSize * sizeof(int));

    int i = 0, j = numsSize - 1, k = numsSize - 1;

    while (i <= j) {
        int left = nums[i] * nums[i];
        int right = nums[j] * nums[j];

        if (left > right) {
            res[k] = left;
            i++;
        } else {
            res[k] = right;
            j--;
        }

        k--;
    }

    *returnSize = numsSize;
    return res;
}
