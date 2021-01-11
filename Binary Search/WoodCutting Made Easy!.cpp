bool getSum(vector<int> A,int val)
{
    long long int sum=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>=val)
            sum+=(A[i]-val);
    }
    return sum>=val;
}
int Solution::solve(vector<int> &A, int B)
{
    int mi=A[0], ma=A[0], i;
    for(i=1;i<A.size();i++)
    {
        mi=min(mi,A[i]);
        ma=max(ma,A[i]);    
    } 
    int low=mi, high=ma, mid, ans=INT_MIN;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(getSum(A,mid))
        {
            ans=max(ans,mid);
            low=mid+1;
        }
        else high=mid-1;
        
    }
    return ans;
}

