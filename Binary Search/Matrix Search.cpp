int find(vector<vector<int> > &A, int B,int n,int m)
{
    for(int i=0;i<n;i++)
        if(B<=A[i][m-1])
            return i;
    return -1;
}
int Solution::searchMatrix(vector<vector<int> > &A, int B) 
{
    int i,j,n,m;
    n=A.size();
    m=A[0].size();
    if(B<A[0][0] || B>A[n-1][m-1])
        return 0;
    if(B==A[0][0] || B==A[n-1][m-1])
        return 1;
    j=find(A,B,n,m);
    //return j;
    if(j==-1)
        return 0;
    int s=0,e=m-1,mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(A[j][mid]==B)
            return 1;
        else if(A[j][mid]>B)
            e=mid-1;
        else s=mid+1;
    }
    return 0;
}

