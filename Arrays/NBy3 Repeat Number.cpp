int Solution::repeatedNumber(const vector<int> &A)
{
    int index=0, c=1, i;
    for(i=1;i<A.size();i++)
    {
        if(A[index]==A[i]) c++;
        else c--;
        if(c==0)
        {
            c=1; 
            index=i;
        }
    }
    c=0;
    for(i=0;i<A.size();i++)
    {
        if(A[i]==A[index])
            c++;
    }
    //cout<<A[index]<<" ";
    if(c>A.size()/3)
        return A[index];
    return -1;
}
