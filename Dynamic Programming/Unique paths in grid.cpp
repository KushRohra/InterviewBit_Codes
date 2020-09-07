int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) 
{
    vector<vector<int>> grid = A;
        int i=0, j=0, n=obstacleGrid.size(), m=obstacleGrid[0].size(), c=0;
        int dp[n][m];
        int f=0;
        for(i=0;i<n;i++)
        {
            if(grid[i][0]==1)
                f=1;
            if(f==1)
                dp[i][0]=0;
            else dp[i][0]=1;
        }
        f=0;
        for(i=0;i<m;i++)
        {
            if(grid[0][i]==1)
                f=1;
            if(f==1)
                dp[0][i]=0;
            else dp[0][i]=1;
        }
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                if(grid[i][j]==1)
                    dp[i][j]=0;
                else dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[n-1][m-1];
}

