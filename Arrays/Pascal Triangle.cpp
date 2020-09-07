vector<vector<int> > Solution::solve(int A) 
{
    vector< vector<int> >v;
    vector<int> a;
    if(A==0)
        return v;
    a.push_back(1);
    v.push_back(a);
    if(A==1)
        return v;
    int i,j,n=A;
    for(i=1;i<n;i++)
    {
        vector<int> a1;
        a1.push_back(1);
        for(j=1;j<i;j++)
            a1.push_back(0);
        a1.push_back(1);
        v.push_back(a1);
        for(j=1;j<i;j++)
        {
            v[i][j]=v[i-1][j]+v[i-1][j-1];
        }
    }
    return v;
}

