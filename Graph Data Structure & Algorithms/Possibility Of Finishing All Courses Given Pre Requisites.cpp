int find(int v[], int i)
{
    while(v[i]!=-1)
        i=v[i];
    return i;
}
int Solution::solve(int A, vector<int> &B, vector<int> &C) 
{
    if(B.size()==0 || C.size()==0)
        return 1;
    int v[A];
    for(int i=0;i<A;i++)
        v[i]=-1;
    int p,q,x,y;
    for(int i=0;i<B.size();i++)
    {
        x=B[i]; y=C[i];
        p=find(v,x-1);
        q=find(v,y-1);
        if(p==q)
            return 0;
        else 
            v[p]=q;
    }
    /*for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;*/
    return 1;
}

