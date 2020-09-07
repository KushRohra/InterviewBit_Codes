int Solution::reverse(int A) 
{
    long long int f=0,a=0,x;
    while(A!=0)
    {
        x=A%10;
        A=A/10;
        a=a*10+x;
    }
    if(a>INT_MAX || a<INT_MIN)
        return 0;
    return a;
}

