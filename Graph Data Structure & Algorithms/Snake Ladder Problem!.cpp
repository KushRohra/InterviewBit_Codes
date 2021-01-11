int Solution::snakeLadder(vector<vector<int> > &A, vector<vector<int> > &B) 
{
    int i, j, pos, n=10;
    unordered_map<int, int> snake, ladder;
    int ans=INT_MAX;
    for(i=0;i<A.size();i++)
        ladder[A[i][0]]=A[i][1];
    for(i=0;i<B.size();i++)
        snake[B[i][0]]=B[i][1];
    queue<pair<int, int>> q;
    q.push({1,0});
    vector<int> vis(n*n+1,0);
    while(!q.empty())
    {
        int newPos, pos = q.front().first, dist = q.front().second;
        q.pop();
        if(vis[pos]==1)
            continue;
        vis[pos]=1;
        //cout<<pos<<" "<<dist<<" ";
        if(pos==n*n)
            if(dist<ans)
                ans=dist;
        for(i=1;i<7;i++)
        {
            newPos = pos + i;
            if(newPos>n*n)
                continue;
            //cout<<newPos<<" ";
            if(snake.find(newPos)!=snake.end())
                newPos = snake[newPos];
            if(ladder.find(newPos)!=ladder.end())
                newPos = ladder[newPos];
            if(vis[newPos]==0)
                q.push({newPos, dist+1});
        }
    }
    if(ans==INT_MAX)
        return -1;
    return ans;
}

