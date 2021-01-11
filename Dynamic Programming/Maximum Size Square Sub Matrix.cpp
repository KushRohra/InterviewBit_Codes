int Solution::solve(vector<vector<int> > &A) 
{
    if(A.size()==0 || A[0].size()==0)
        return 0;
    int i,j,ans=0,n=A.size(),m=A[0].size();
    for(i=1;i<n;i++)
    {
        for(j=1;j<m;j++)
        {
            if(A[i][j])
                A[i][j]=min(A[i][j-1], min(A[i-1][j], A[i-1][j-1]))+1;
        }
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            ans=max(ans,A[i][j]);
    ans*=ans;
    return ans;
}

