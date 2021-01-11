int LCS(string a, string b)
{
    int i, j, n=a.length();
    int dp[n+1][n+1];
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(a[i-1]==b[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][n];
}
int Solution::solve(string A) 
{
    string S=A;
    reverse(S.begin(), S.end());
    return LCS(A,S);
}
