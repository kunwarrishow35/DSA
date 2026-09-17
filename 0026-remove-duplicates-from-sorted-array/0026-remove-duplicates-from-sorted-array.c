int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    int j = 1;
    int count = 1;


    while(j<numsSize){
        if(nums[j] == nums[i]){
            j+=1;
        }
        else{
            nums[i+1]=nums[j];
            i+=1;
            j+=1;
            count += 1;
            
        }

    }
    return count;
}