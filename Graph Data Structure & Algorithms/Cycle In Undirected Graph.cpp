int find(vector<int> parent, int x)
{
    while(parent[x]==x)
        return x;
    return find(parent, parent[x]);
}
int Solution::solve(int A, vector<vector<int> > &B) 
{
    vector<int> parent(A+1);
    for(int i=0;i<A+1;i++)
        parent[i]=i;
    for(int i=0;i<B.size();i++)
    {
        int x = find(parent, B[i][0]);
        int y = find(parent, B[i][1]);
        if(x==y)
            return 1;
        parent[x] = y;
    }
    return 0;
}

