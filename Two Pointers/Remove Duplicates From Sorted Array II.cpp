int Solution::removeDuplicates(vector<int> &A) 
{
    if(A.size()<3)
        return A.size();
    int i=0,j=0, k=-1, f=0;
    while(j<A.size())
    {
        int c=0;
        j=i;
        while(A[j]==A[i])
        {
            c++;
            if(c>2)
            {
                A[j]=INT_MAX;
                if(f==0)
                {
                    k=j;
                    f=1;
                }
            }
            j++;
        }
        i=j;
        c=0;
    }/
    j=k+1;
    while(j<A.size())
    {
        if(A[j]==INT_MAX)
            j++;
        else 
        {
            A[k]=A[j];
            j++;
            k++;
        }
    }
    return k;
}

