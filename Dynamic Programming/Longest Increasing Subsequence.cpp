int Solution::lis(const vector<int> &A) 
{
    vector<int> nums=A;
    int i,j,n=nums.size();
    if(n==0)
        return 0;
    vector<int> len(n,1);
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(nums[i]>nums[j])
                len[i]=max(len[i], len[j]+1);
        }
    }
    int m=INT_MIN;
    for(i=0;i<n+1;i++)
        m=max(m, len[i]);
    return m;
}

