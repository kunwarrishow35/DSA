/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {

    int *left = malloc(numsSize * sizeof(int));
    int *right = malloc(numsSize * sizeof(int));
    int *res = malloc(numsSize * sizeof(int));

    *returnSize = numsSize;

    // Nothing is present to the left of index 0
    left[0] = 1;

    // Build left products
    for(int i = 1; i < numsSize; i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }

    // Nothing is present to the right of last index
    right[numsSize - 1] = 1;

    // Build right products
    for(int i = numsSize - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }

    // Combine left and right products
    for(int i = 0; i < numsSize; i++) {
        res[i] = left[i] * right[i];
    }

    free(left);
    free(right);

    return res;
}