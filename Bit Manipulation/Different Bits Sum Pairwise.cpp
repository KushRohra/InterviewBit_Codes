int Solution::cntBits(vector<int> &A) 
{
    long long int mod=1000000007;
    unsigned long long int ans=0;
    for(int i=0;i<32;i++)
    {
        unsigned long long int zero=0, one=0;
        for(int j=0;j<A.size();j++)
        {
            if(A[j] & (1<<i)) one++;
            else zero++;
        }
        ans=(ans%mod+(2*one*zero)%mod)%mod;
    }
    return (int)ans%mod;
}

