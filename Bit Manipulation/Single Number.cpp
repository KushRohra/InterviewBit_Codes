int Solution::singleNumber(const vector<int> &A) 
{
    int n=A.size(),i,x=0;
    for(i=0;i<n;i++)
    {
        x=x xor A[i];
    }
    return x;
}
