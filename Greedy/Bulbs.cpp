int Solution::bulbs(vector<int> &A) 
{
    int i, zero=0, c=0;
    vector<int> z;
    for(i=0;i<A.size();i++)
    {
        if(A[i]==0)
        {
            z.push_back(i);
            if(i==0)
                zero++;
            if(A[i-1]!=0)
                zero++;
        }
    }    
    z.push_back(A.size());
    c+=zero;
    for(i=1;i<z.size();i++)
    {
        if(z[i]-z[i-1]>1)
            c++;
    }
    return c;
}
