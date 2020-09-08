int Solution::diffPossible(vector<int> &A, int B) 
{
    int j=1,k=B,i=0;
    while(j<A.size() && i<A.size())
    {
        int x=A[j]-A[i];
        if(i!=j && x==k)
            return 1;
        if(x<k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
