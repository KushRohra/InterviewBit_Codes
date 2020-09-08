int Solution::pow(int x, int n, int d) 
{
    long long int x1=x, n1=n, d1=d;
    x1=x1%d1;
    if(x1==0)
        return 0;
    int res=1;
    while(n1>0)
    {
        if(n1&1)
            res=(res*x1)%d1;
        n1=n1>>1;
        x1=((x1%d1)*(x1%d1))%d1;
    }
    return (res%d1+d1)%d1;
}
    

