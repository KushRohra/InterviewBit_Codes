int Solution::gcd(int A, int B)
{
    int t;
    while(A!=0)
    {
        t=B;
        B=A;
        A=t%A;
    }
    return B;
}

