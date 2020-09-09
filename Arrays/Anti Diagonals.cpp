vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) 
{
    int n=A.size(),i,j,x;
    vector< vector<int> > sol;
    for(j=0;j<n;j++)
    {
        vector<int> a;
        i=j;
        int k=0;
        //cout<<j<<endl;
        while(i>=0)
        {
            //cout<<i<<" "<<k<<" "<<v[k][i]<<endl;
            a.push_back(A[k][i]);
            i--;
            k++;
        }
        sol.push_back(a);
    }
    for(i=1;i<n;i++)
    {
        vector<int> a;
        j=n-1;
        int k=i;
        while(k<n)
        {
            a.push_back(A[k][j]);
            j--;
            k++;
        }
        sol.push_back(a);
    }
    return sol;
}

