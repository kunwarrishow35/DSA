//boyer moore algorithm

int majorityElement(int* nums, int numsSize) {
    int candidate = 0;
    int vote = 0;
    for(int i=0; i<numsSize; i++){
        if(vote==0){
            candidate=nums[i];
        }
        if(nums[i]==candidate){
            vote++;
        }
        else{
            vote--;
        }
    }
    return candidate;
}