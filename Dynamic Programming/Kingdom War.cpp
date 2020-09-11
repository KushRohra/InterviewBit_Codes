void kadane(vector<int> v, int &ans)
{
    int i,n=v.size(),sum=0;
    for(i=0;i<n;i++)
    {
        sum+=v[i];
        ans=max(ans,sum);
        if(sum<0)
            sum=0;
    }
}
int Solution::solve(vector<vector<int> > &A)
{
    if(A.size()==0 || A[0].size()==0)
        return 0;
    int n=A.size(), m=A[0].size(), ans=INT_MIN;
    vector<vector<int> > dp(n+1, vector<int> (m+1,0));
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            dp[i][j]=A[i][j]+dp[i+1][j]-dp[i+1][j+1]+dp[i][j+1];
            ans=max(ans,dp[i][j]);
        }
    }
    return ans;
}

