int Solution::removeDuplicates(vector<int> &A)
{
    int i,a=A[0],n=A.size(),j=1;
    for(i=1;i<n;)
    {
        if(A[i]==a)
            i++;
        else
        {
            A[j]=A[i];
            a=A[i];
            i++;
            j++;    
        }    
    }
    return j;
}
