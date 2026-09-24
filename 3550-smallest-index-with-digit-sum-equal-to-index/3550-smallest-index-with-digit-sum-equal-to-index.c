int digitsum(int x) {
    int summation = 0;

    while(x > 0) {
        int digit = x % 10;
        summation += digit;
        x = x / 10;
    }

    return summation;
}

int smallestIndex(int* nums, int numsSize) {

    for(int i = 0; i < numsSize; i++) {
        int addition = digitsum(nums[i]);

        if(addition == i) {
            return i;
        }
    }

    return -1;
}