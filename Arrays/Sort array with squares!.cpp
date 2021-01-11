vector<int> Solution::solve(vector<int> &A)
{
    vector<int> ans(A.size(),0);
    int i=0, j=A.size()-1, k=A.size()-1;
    while(k>=0)
    {
        int x=A[i]*A[i], y=A[j]*A[j];
        if(x>y)
        {
            ans[k]=x;
            k--;
            i++;
        }
        else
        {
            ans[k]=y;
            k--;
            j--;
        }
    }
    return ans;
}

