int Solution::solve(vector<int> &A) 
{
    int mn=A[0], ma=A[0];
    for(int i=1;i<A.size();i++)
    {
        mn=min(mn,A[i]);
        ma=max(ma,A[i]);
    }
    return mn+ma;
}

