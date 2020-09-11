int Solution::solve(const vector<int> &A) 
{
    int i,j,n=A.size();
    if(n<=2)
        return n;
    int diff,maxLen=2;
    vector<unordered_map<int, int>> dp(n);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            diff=A[j]-A[i];
            if(dp[i].find(diff)!=dp[i].end())
                dp[j][diff]=dp[i][diff]+1;
            else dp[j][diff]=2;
            maxLen=max(maxLen, dp[j][diff]);
        }
    }
    return maxLen;
}

