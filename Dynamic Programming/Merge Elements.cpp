int helper(vector<int> &A, int start, int end, vector<vector<int> > &dp, vector<vector<bool> > &vis)
{
    if(start>end)
        return 0;
    if(start==end)
        return 0;
    if(vis[start][end])
        return dp[start][end];
    vis[start][end]=1;
    int total=0;
    for(int i=start;i<=end;i++)
        total+=A[i];
    for(int i=start+1;i<=end;i++)
    {
        dp[start][end] = min(dp[start][end], total+helper(A,start,i-1,dp,vis)+helper(A,i,end,dp,vis));
    }
    return dp[start][end];
}
int Solution::solve(vector<int> &A)
{
    if(A.size()==0)
        return 0;
    int n=A.size();
    vector<vector<int> > dp(n,vector<int>(n,INT_MAX));
    vector<vector<bool> > vis(n, vector<bool>(n,0));
    return helper(A, 0, A.size()-1, dp, vis);
}

