int Solution::solve(vector<int> &A, int sum)
{
    int n = A.size(), i, j;
    bool dp[n+1][sum+1];
    memset(dp, false, sizeof(dp));
    for(int i=0;i<n+1;i++)
    {
        for(j=0;j<sum+1;j++)
        {
            if(j==0)
                dp[i][j] = true;
            else if(i==0)
                dp[i][j] = false;
            else if(A[i-1]>j)
                dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j-A[i-1]] || dp[i-1][j];
        }
    }
    return dp[n][sum];
}

