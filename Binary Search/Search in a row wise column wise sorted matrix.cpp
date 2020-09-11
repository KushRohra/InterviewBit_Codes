bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    int n=matrix.size();
    if(n==0)
        return 0;
    int m=matrix[0].size(), i;
    if(m==0)
        return 0;
    if(matrix[0][0]>target)
        return false;
    if(matrix[n-1][m-1]<target)
        return false;
    int f=0, index;
    for(i=0;i<n;i++)
    {
        if(matrix[i][m-1]>=target)
        {
            f=1;
            index=i;
        }
        if(f==1)
            break;
    }
    int s=0, e=m-1, mid;
    if(matrix[index][s]==target || matrix[index][e]==target)
        return true;
    while(s<=e)
    {
        mid=(e-s)/2+s;
        if(matrix[index][mid]==target)
            return true;
        else if(matrix[index][mid]>target)
            e=mid-1;
        else s=mid+1;
    }
    return false;
}
