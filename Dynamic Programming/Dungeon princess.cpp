int Solution::calculateMinimumHP(vector<vector<int> > &A) 
{
    vector<vector<int> > dungeon=A;
    int n=dungeon.size();
    if(n==0)
        return 0;
    int m=dungeon[0].size();
    int j, i;
    vector<vector<int>> dp(n+1, vector<int> (m+1, INT_MAX));
    dp[n-1][m]=1;
    dp[n][m-1]=1;
    for(i=n-1;i>=0;i--)
    {
        for(j=m-1;j>=0;j--)
        {
            int val=min(dp[i+1][j], dp[i][j+1])-dungeon[i][j];
            dp[i][j]=max(1,val);
        }
    }/*
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }*/
    return dp[0][0];
 
}
