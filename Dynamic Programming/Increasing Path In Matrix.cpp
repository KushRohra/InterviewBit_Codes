int Solution::solve(vector<vector<int> > &A) {
    if(A.size()==0 || A[0].size()==0)
        return 0;
    int n=A.size(), m=A[0].size(), i, j;
    int dp[n][m];
    memset(dp, -1, sizeof(dp));
    dp[0][0]=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0 && j==0)
                continue;
            if(i==0)
            {
                if(A[i][j]>A[i][j-1])
                    if(dp[i][j-1]!=-1)
                        dp[i][j]=1+dp[i][j-1];    
            }
            else if(j==0)
            {
                if(A[i][j]>A[i-1][j])
                    if(dp[i-1][j]!=-1)
                        dp[i][j]=1+dp[i-1][j];
            }
            else
            {
                int x = A[i][j]>A[i-1][j] ? dp[i-1][j]==-1 ? -1 : dp[i-1][j]+1 : -1;
                int y = A[i][j]>A[i][j-1] ? dp[i][j-1]==-1 ? -1 : dp[i][j-1]+1 : -1;
                if(x==-1 && y==-1)
                    continue;
                dp[i][j] = max(x,y);
            }
        }
    }
    return dp[n-1][m-1];
}

