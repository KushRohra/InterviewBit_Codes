void dfs(vector<int> &A, vector<int> adj[], int C, int &ans, int no, int src)
{
    if(A[src])
        no++;
    if(adj[src].size()==0)
    {
        if(no<=C)
            ans++;
        return ;
    }
    for(auto x:adj[src])
        dfs(A,adj,C,ans,no,x);
}
int Solution::solve(vector<int> &A, vector<vector<int> > &B, int C) 
{
    vector<int> adj[A.size()], adj1[A.size()];
    for(auto x:B)
        adj[x[0]-1].push_back(x[1]-1);
    for(auto x:B)    
        adj1[x[1]-1].push_back(x[0]-1);
    int ans=0, ans1=0;
    dfs(A,adj,C,ans,0,0);
    dfs(A,adj1,C,ans1,0,0);
    return max(ans, ans1);
}

