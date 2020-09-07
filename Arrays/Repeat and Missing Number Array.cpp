vector<int> Solution::repeatedNumber(const vector<int> &A) 
{
    int i, n=A.size(), xor1=A[0], setBit;
    for(i=1;i<n;i++)
        xor1=xor1^A[i];
    for(i=1;i<=n;i++)
        xor1=xor1^i;
    setBit = xor1 & ~(xor1-1);
    int x=0, y=0;
    for(i=0;i<n;i++)
    {
        if(A[i] & setBit)
            x=x^A[i];
        else y=y^A[i];
    }
    for(i=1;i<=n;i++)
    {
        if(i & setBit)
            x=x^(i);
        else y=y^(i);
    }
    int miss, rep;
    for(i=0;i<n;i++)
    {
        if(A[i]==x)
        {
            rep=x;
            miss=y;
            break;
        }
        if(A[i]==y)
        {
            rep=y;
            miss=x;
            break;
        }
    }
    vector<int> ans;
    ans.push_back(rep);
    ans.push_back(miss);
    return ans;
}

