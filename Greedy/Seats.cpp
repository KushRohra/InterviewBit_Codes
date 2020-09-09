int Solution::seats(string A)
{
    long long int mod = 10000003;
    vector<int> v;
    for(int i=0;i<A.length();i++)
        if(A[i]=='x')
            v.push_back(i);
    int mid=v.size()/2, n=v.size(), sum=0;
    for(int i=0;i<n;i++)
    {
        int x=abs(v[i]-(v[mid]-mid+i));
        sum+=(x%mod);
        sum=sum%mod;
    }
    return sum%mod;
}

