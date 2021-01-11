int Solution::solve(vector<int> &A, int B) 
{
    int i=0, j=1;
    sort(A.begin(), A.end());
    while(i<A.size() && j<A.size())
    {
        if(i!=j && A[j]-A[i]==B)
            return 1;
        else if(A[j]-A[i]<B)
            j++;
        else 
            i++;
    }
    return 0;
}

