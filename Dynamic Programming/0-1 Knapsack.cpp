int Solution::solve(vector<int> &A, vector<int> &B, int C) 
{
    int i, n=A.size(), weight=C, j;
    int dp[n+1][weight+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=weight;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(B[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else 
                dp[i][j]=max(dp[i-1][j-B[i-1]]+A[i-1], dp[i-1][j]);
        }
    }
    return dp[n][weight];
}

