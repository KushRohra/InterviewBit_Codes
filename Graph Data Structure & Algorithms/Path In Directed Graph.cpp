int Solution::solve(int A, vector<vector<int> > &B) 
{
    int i;
    vector<int> adj[A+1];
    vector<bool> vis(A+1,0);
    for(i=0;i<B.size();i++)
    {
        int x = B[i][0], y = B[i][1];
        adj[x].push_back(y);
    }
    queue<int> q;
    q.push(1);
    while(!q.empty())
    {
        int temp = q.front();
        if(temp==A)
            return 1;
        vis[temp]=1;
        q.pop();
        for(int i=0;i<adj[temp].size();i++)
        {
            int x = adj[temp][i];
            if(!vis[x])
                q.push(x);
        }
    }
    return 0;
}

