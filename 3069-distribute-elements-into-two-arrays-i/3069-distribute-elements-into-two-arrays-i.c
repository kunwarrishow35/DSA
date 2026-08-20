/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* resultArray(int* nums, int numsSize, int* returnSize) {

    int *arr1;
    int *arr2;

    arr1 = (int *)malloc(numsSize * sizeof(int));
    arr2 = (int *)malloc(numsSize * sizeof(int));

    arr1[0] = nums[0];
    arr2[0] = nums[1];

    int k = 1;
    int l = 1;

    for (int i = 2; i < numsSize; i++) {

        if (arr1[k - 1] > arr2[l - 1]) {
            arr1[k++] = nums[i];
        }
        else {
            arr2[l++] = nums[i];
        }
    }

    int *res;
    res = (int *)malloc(numsSize * sizeof(int));

    int sz = 0;

    for (int i = 0; i < k; i++) {
        res[sz++] = arr1[i];
    }
    for (int i = 0; i < l; i++) {
        res[sz++] = arr2[i];
    }

    *returnSize = numsSize;

    free(arr1);
    free(arr2);

    return res;
}