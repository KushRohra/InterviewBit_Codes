bool isCycle(int src, vector<bool> &vis, vector<bool> &Stack, vector<int> adj[])
{
    if(vis[src]==false)
    {
        vis[src]=true;
        Stack[src]=true;
        for(auto it=adj[src].begin();it!=adj[src].end();it++)
        {
            if(!vis[*it] && isCycle(*it,vis,Stack,adj))
                return true;
            else if(Stack[*it])
                return true;
        }
    }
    Stack[src]=false;
    return false;
}
int Solution::solve(int A, vector<vector<int> > &B) 
{
    vector<int> adj[A+1];
    for(int i=0;i<B.size();i++)
    {
        int x=B[i][0], y=B[i][1];
        adj[x].push_back(y);
    }
    vector<bool> vis(A+1,0), Stack(A+1,0);
    for(int i=1;i<=A;i++)
    {
        if(isCycle(i,vis,Stack,adj))
            return true;
    }
    return false;
}

