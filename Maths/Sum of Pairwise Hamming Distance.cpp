int Solution::hammingDistance(const vector<int> &A) 
{
    long long int mod=1000000007, one, zero, ans=0;
    for(int i=0;i<32;i++)
    {
        one=0; zero=0;
        for(int j=0;j<A.size();j++)
        {
            if(A[j] & (1<<i))
                one++;
            else zero++;
        }
        //cout<<one<<" "<<zero<<" ";
        ans+=(2*zero*one)%mod;
    }
    return ans%mod;
}

