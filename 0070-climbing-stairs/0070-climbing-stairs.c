int climbStairs(int n) {
    int curr, prev;
    curr = prev = 1;
    for(int i=1; i<n; i++){
        int temp = curr;
        curr = curr+prev;
        prev = temp;
    }
    return curr;
}