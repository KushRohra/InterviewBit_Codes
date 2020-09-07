int Solution::trailingZeroes(int A) 
{
    int n=A,c=0;
    for(int i=5;n/i>=1;i*=5)
    {
        c+=n/i;
    }
    return c;
}
