/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int *ans;
    ans = malloc(2*sizeof(int));

    int left = 0;
    int right = numbersSize-1;
    int sum;

    while(left<right){
        sum = numbers[left] + numbers[right];
        if(sum == target){
            ans[0] = left+1;
            ans[1] = right+1;
            *returnSize = 2;
            return ans;
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return ans;   
    
}