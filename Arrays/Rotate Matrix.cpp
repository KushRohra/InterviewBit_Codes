void Solution::rotate(vector<vector<int> > &A) 
{
    int i,j,x,n=A.size();
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i!=j)
            {
                x=A[i][j];
                A[i][j]=A[j][i];
                A[j][i]=x;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n/2;j++)
        {
            x=A[i][j];
            A[i][j]=A[i][n-j-1];
            A[i][n-j-1]=x;
        }
    }
}
