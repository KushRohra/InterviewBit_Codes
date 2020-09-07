void Solution::setZeroes(vector<vector<int> > &A) 
{
    if(A.size()==0 || A[0].size()==0)
        return ;    
    vector<bool> row(A.size(),1);
    vector<bool> col(A[0].size(),1); 
    int i, j;
    for(i=0;i<A.size();i++)
    {
        for(j=0;j<A[0].size();j++)
        {
            if(A[i][j]==0)
            {
                row[i]=0;
                col[j]=0;
            }
        }
    }
    for(i=0;i<A.size();i++)
    {
        for(j=0;j<A[0].size();j++)
        {
            if(row[i]==0 || col[j]==0)
                A[i][j]=0;
        }
    }
}

