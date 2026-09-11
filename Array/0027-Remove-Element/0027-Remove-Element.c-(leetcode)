int removeElement(int* nums, int numsSize, int val) {
    int *res = malloc(numsSize*sizeof(int));
    int k=0;

    for(int i=0; i<numsSize; i++){
        if(nums[i] != val){
            res[k++] = nums[i];
        }
    }
    for(int i = 0; i<k; i++){
        nums[i]=res[i];
    }
    free(res);
    return k;

}