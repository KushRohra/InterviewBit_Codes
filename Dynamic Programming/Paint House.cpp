int Solution::solve(vector<vector<int> > &costs) 
{
    int i, n=costs.size();
    if(n==0)
        return 0;
    vector<vector<int>> dp(n, vector<int> (3,0));
    dp[0] = costs[0];
    for(i=1;i<n;i++)
    {
        costs[i][0]+=min(costs[i-1][1], costs[i-1][2]);
        costs[i][1]+=min(costs[i-1][0], costs[i-1][2]);
        costs[i][2]+=min(costs[i-1][0], costs[i-1][1]);
    }
    return min(costs[n-1][0], min(costs[n-1][1], costs[n-1][2]));
}

