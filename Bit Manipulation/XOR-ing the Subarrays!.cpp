int Solution::solve(vector<int> &A)
{
    int i, res=0, n=A.size();
    if(n%2==0)
        return 0;
    for(i=0;i<n;i++)
        if(i%2==0)
            res^=A[i];
    return res;
}
