int missingNumber(int* nums, int numsSize) {
    int n = numsSize;

    int sum = (n*(n+1))/2;
    int act_sum = 0;
    for(int i =0; i<n; i++){
        act_sum += nums[i];
    }
    return sum-act_sum;


    
}