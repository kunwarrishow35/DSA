int smallestNumber(int n, int t)
{
    while(true)
    {
        int num = n;
        int product = 1;

        if(num == 0)
        {
            product = 0;
        }
        else
        {
            while(num > 0)
            {
                int digit = num % 10;
                product *= digit;
                num /= 10;
            }
        }

        if(product % t == 0)
        {
            return n;
        }

        n++;
    }
}