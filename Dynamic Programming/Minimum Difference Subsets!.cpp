int Solution::solve(vector<int> &A)
{
    int sum = 0, i, n = A.size(), j;
    for(i=0;i<n;i++)
        sum+=A[i];
    bool dp[n+1][sum+1];
    memset(dp,false,sizeof(dp));
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=sum;j++)
        {
            if(j==0)
                dp[i][j] = true;
            else if(i==0)
                dp[i][j] = false;
            else if(A[i-1]>j)
                dp[i][j] = false;
            else 
                dp[i][j] = dp[i-1][j-A[i-1]] || dp[i-1][j];
        }
    }
    int diff;
    for(j=sum/2;j>=0;j--)
        if(dp[n][j]==true)
        {
            diff = sum - 2*j;
            break;
        }
    return diff;
}
