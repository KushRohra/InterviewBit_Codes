int Solution::solve(vector<int> &A, int B) 
{
    if(A.size()==0)
        return 0;
    vector<int> prefix(A.size(), 0);
    int odd=0, count=0, i, n=A.size();
    for(i=0;i<n;i++)
    {
        prefix[odd]++;
        if(A[i] & 1)
            odd++;
        if(odd>=B)
            count+=prefix[odd-B];
    }
    return count;
}

