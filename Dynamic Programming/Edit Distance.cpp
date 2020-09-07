int Solution::minDistance(string A, string B) 
{
    int i, j, n=A.length(), m=B.length();
    int dp[n+1][m+1];
    dp[0][0]=0;
    for(i=0;i<n+1;i++)
        dp[i][0]=i;
    for(j=0;j<m+1;j++)
        dp[0][j]=j;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<m+1;j++)
        {
            if(A[i-1]==B[j-1])
                dp[i][j]=dp[i-1][j-1];
            else 
                dp[i][j]=1+min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));
        }
    }
    return dp[n][m];
}

