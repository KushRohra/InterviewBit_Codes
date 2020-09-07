int Solution::firstMissingPositive(vector<int> &A)
{
    if(A.size()==0)
        return 1;
    vector<int> v(A.size()+1,0);
    long long int i;
    for(i=0;i<A.size();i++)
    {
        if(A[i]>0 && A[i]<A.size()+1)
            v[A[i]-1]=1;
    }
    for(i=0;i<A.size()+1;i++) 
        if(v[i]==0)
            return i+1;
    return 1;
}

