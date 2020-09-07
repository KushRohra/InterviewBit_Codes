int Solution::numTrees(int A) 
{
    int n=2*A, k=A;
    unsigned long long int res=1;
    for(int i=0;i<k;i++)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res/(A+1);
}

