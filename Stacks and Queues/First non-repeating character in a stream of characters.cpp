string Solution::solve(string A) 
{
    if(A.length()<=1)
        return A;
    string s="";
    queue<char> q;
    vector<int> vis(26,0);
    for(int i=0;i<A.length();i++)
    {
        vis[int(A[i])-int('a')]++;
        q.push(A[i]);
        if(vis[int(q.front())-int('a')]==1)
        {
            s+=q.front();
        }
        else
        {
            while(q.empty()==false && vis[int(q.front())-int('a')]>1)
                q.pop();
            if(q.empty())
                s+="#";
            else
            {
                s+=q.front();
            }
        }
    }
    return s;
}

