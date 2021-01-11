int Solution::solve(vector<int> &A, int B)
{
    int n=A.size(), sum=A[0], i=0, j=0, ans=0;
    bool f=0;
    while(j<n)
    {
        if(sum<B)
        {
            j++;
            sum+=A[j];
            ans+=max(0,j-i);
        }
        if(sum>=B)
        {
            sum-=A[i];
            i++;
        }
    }
    return ans;   
}

