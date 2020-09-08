string Solution::longestPalindrome(string A) 
{
    int i,j,k,n=A.length();
    if(n<=1)
        return A;
    bool dp[n][n];
    int start=0, maxLen=1; 
    memset(dp, 0, sizeof(dp));
    for(i=0;i<n;i++)
        dp[i][i]=1;
    for(i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        {
            dp[i][i+1]=1;
            start=i;
            maxLen=2;
        }
    }
    for(k=3;k<=n;k++)
    {
        for(i=0;i<n-k+1;i++)
        {
            j=i+k-1;
            if(A[i]==A[j] && dp[i+1][j-1])
            {
                dp[i][j]=1;
                if(k>maxLen)
                {
                    maxLen=k;
                    start=i;
                }
            }
        }
    }
    string ans="";
    for(i=start;i<=start+maxLen-1;i++)
        ans+=A[i];
    return ans;
}

