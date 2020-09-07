int Solution::maxProfit(const vector<int> &A)
{
    vector<int> prices=A;
    if(prices.size()==0)
        return 0;
    int k=2, n=prices.size(), i;
    int dp[k+1][n];
    memset(dp,0,sizeof(dp));
    int maxFar;
    for(i=1;i<k+1;i++)
    {
        maxFar=INT_MIN;
        for(int j=1;j<prices.size();j++)
        {
            maxFar=max(maxFar, dp[i-1][j-1]-prices[j-1]);
            dp[i][j]=max(dp[i][j-1], maxFar+prices[j]);
        }
    }
    return dp[k][prices.size()-1];
}

