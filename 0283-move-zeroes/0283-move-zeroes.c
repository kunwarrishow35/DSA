void moveZeroes(int* nums, int numsSize) {
    if(nums==NULL)
        return;
    else{
        int temp, l, r;
        l = r = 0;
        while(r<numsSize){
            if(nums[r]==0){
                r++;
            }
            else{
                temp = nums[r];
                nums[r]=nums[l];
                nums[l]=temp;
                r++;
                l++;
            }
        }

    }
    return;
}