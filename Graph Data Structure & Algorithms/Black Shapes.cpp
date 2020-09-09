void fill(vector<string> &A, int i, int j, int n, int m)
{
    if(i>=n || i<0)
        return ;
    if(j>=m || j<0)
        return ;
    if(A[i][j]!='X')
        return ;
    A[i][j]='0';
    fill(A,i+1,j,n,m);
    fill(A,i-1,j,n,m);
    fill(A,i,j+1,n,m);
    fill(A,i,j-1,n,m);
}
int Solution::black(vector<string> &A) 
{
    int i=0,j=0,c=0,n=A.size(),m=A[0].length();
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(A[i][j]=='X')
            {
                fill(A,i,j,n,m);
                c++;
            }
        }
    }
    return c;
}

