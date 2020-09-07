int Solution::isMatch(const string A, const string B)
{
    string str=A, pattern=B;
    int m=pattern.length(), n=str.length();
    if(m==0)
        return n==0;
    bool dp[n+1][m+1];
    memset(dp,false,sizeof(dp));
    dp[0][0]=true;
    int i, j;
    for(j=1;j<=m;j++)
        if(pattern[j-1]=='*')
            dp[0][j]=dp[0][j-1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(pattern[j-1]=='*')
                dp[i][j]=dp[i-1][j] || dp[i][j-1];
            else if(pattern[j-1]=='?' || pattern[j-1]==str[i-1])
                dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=false;
        }
    }
    return dp[n][m];
}
