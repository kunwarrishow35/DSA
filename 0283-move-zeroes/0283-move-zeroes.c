void moveZeroes(int* nums, int numsSize) {
    int ans[numsSize];

    if(nums == 0)
        return;
    int k = 0;
    for(int i=0; i<numsSize; i++){
        if(nums[i] != 0){
            ans[k] = nums[i];
            k++;
        }
    }
    
    while(k<numsSize){
        ans[k] =0;
        k++;
    }
    for(int i = 0; i < numsSize; i++)
    {
        nums[i] = ans[i];
    }

}