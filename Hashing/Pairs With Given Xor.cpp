int Solution::solve(vector<int> &A, int B)
{
    unordered_set<int> s;
    int c=0;
    for(int i=0;i<A.size();i++)
    {
        if(s.find(B^A[i])!=s.end())
            c++;
        s.insert(A[i]);
    }
    return c;
}

