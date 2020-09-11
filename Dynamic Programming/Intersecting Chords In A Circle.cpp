int Solution::chordCnt(int A) 
{
    long long int mod = 1000000007;
    vector<long long int> v(A+1);
    v[0]=v[1]=1;
    if(A<2)
        return 1;
    for(int i=2;i<A+1;i++)
    {
        long long int ans = 0;
        for(int j=0;j<i;j++)
        {
            ans = ((ans%mod) + ((v[j]*v[i-j-1])%mod))%mod;
        } 
        v[i] = ans%mod;
    }
    return v[A];
}

