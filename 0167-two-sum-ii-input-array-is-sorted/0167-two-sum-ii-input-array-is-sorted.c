/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {

    int *ans;
    ans = malloc(2*sizeof(int));


    int strt, end;
    strt = 0;
    end = numbersSize-1;

    while(strt<end){
        int sum = (numbers[strt]+numbers[end]);
        if(sum==target){
           ans[0] = strt+1;
           ans[1] = end+1; 
           *returnSize = 2;
           return ans;
        }
        else if(sum<target){
            strt++;
        }
        else{
            end--;
        }
        
    }
    return NULL;
}