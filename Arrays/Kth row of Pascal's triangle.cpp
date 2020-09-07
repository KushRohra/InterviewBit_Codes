vector<int> Solution::getRow(int A) 
{
    int n=A,i,j;
    vector< vector<int> >v;
    vector<int> a,v1;
    if(n==0)
        return v1;
    a.push_back(1);
    v.push_back(a);
    if(n==1)
    {    a.push_back(1);
        return a;
    }
    for(i=1;i<=n;i++)
    {
        vector<int> a1;
        a1.push_back(1);
        for(j=1;j<i;j++)
            a1.push_back(0);
        a1.push_back(1);
        v.push_back(a1);
        if(i==n)
        {
            v1.push_back(1);
            for(j=1;j<i;j++)
                v1.push_back(0);
            for(j=1;j<i;j++)
                v1[j]=v[i-1][j]+v[i-1][j-1];
            v1.push_back(1);
        }
        for(j=1;j<i;j++)
        {
            v[i][j]=v[i-1][j]+v[i-1][j-1];
        }
    }
    return v1;
}

