int Solution::solve(vector<int> &A) 
{
    unordered_map<int, int> m;
    int ans = INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        if(m.find(A[i])!=m.end())
            ans = min(ans, m[A[i]]);    
        else
            m[A[i]] = i;
    }
    if(ans == INT_MAX)
        return -1;
    return A[ans];
 
}
