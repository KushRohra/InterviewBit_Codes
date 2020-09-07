int Solution::minimumTotal(vector<vector<int> > &A) 
{
    int i,j,n=A.size();
    vector<int> v;
    for(i=0;i<A[n-1].size();i++)
        v.push_back(A[n-1][i]);
    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<A[i].size();j++)
        {
            v[j]=min(v[j], v[j+1])+A[i][j];
        }
    }
    return v[0];
}
