int Solution::solve(vector<vector<int> > &A) 
{
    int c=1;
    if(A.size()==1)
        return A[0][0];
    if(A.size()==2)
        return A[0][0]+max(A[1][0], A[1][1]);
    for(int i=A.size()-2;i>=0;i--)
    {
        for(int j=0;j<A[i].size()-c;j++)
        {
            A[i][j]+=max(A[i+1][j], A[i+1][j+1]);
        }
        c++;
    }
    return A[0][0];
}

