bool checkDivisibility(int n) {
    int sum = 0;
    int product = 1;
    int digit;
    int num = n;

    while(num!=0){
        digit = num%10;
        sum += digit;
        product *= digit;
        num/=10;
    }

    int res = product+sum;
    return n%res == 0;
    
}