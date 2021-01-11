bool canPall(string A, int i, int j, bool &f)
{
    if(i==j)
        return true;
    if(i+1==j)
        if(A[i]==A[j])
            return true;
        else return false;
    bool res=true;
    if(A[i]==A[j])
        res = res && canPall(A,i+1,j-1,f);
    else
    {
        if(f==0)
        {
            f=1;
            res = res && (canPall(A,i+1,j,f) || canPall(A,i,j-1,f));
        }
        else return false;
    }
    return res;
}
int Solution::solve(string A)
{
    bool f=0;
    int i=0, j=A.length()-1;
    return canPall(A, i, j, f);
}

