vector<vector<int> > Solution::generateMatrix(int A)
{
    vector< vector<int> > v;
    int k=0,i,j,n,x;
    n=A;
    for(i=0;i<n;i++)
    {
        vector<int> g;
        for(j=0;j<n;j++)
        {
            g.push_back(0);
        }
        v.push_back(g);
    }
    int a=1;
    int l=0,t=0,r=n-1,b=n-1;
    while(t<=b && l<=r)
    {
        if(k==0)
        {
            for(j=l;j<=r;j++)
                v[t][j]=a++;
            t++;
            k=1;
        }
        else if(k==1)
        {
            for(j=t;j<=b;j++)
                v[j][r]=a++;
            r--;
            k=2;
        }
        else if(k==2)
        {
            for(j=r;j>=l;j--)
                v[b][j]=a++;
            b--;
            k=3;
        }
        else
        {
            for(j=b;j>=t;j--)
                v[j][l]=a++;
            l++;
            k=0;
            
        }
    }
    return v;
}

