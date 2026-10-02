/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
#include <stdbool.h>
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool *res;
    res = malloc(candiesSize*sizeof(bool));
    int k=0;

    int maximum = candies[0];
    for(int i =0; i<candiesSize; i++){
        if(candies[i] >= maximum){
            maximum = candies[i];
        }
    }
    for(int i =0; i<candiesSize; i++){
        if(candies[i]+extraCandies >= maximum){
            res[k]=true;
            k++;
        }
        else{
            res[k]=false;
            k++;
        }
    }
    *returnSize = k;
    return res;
}