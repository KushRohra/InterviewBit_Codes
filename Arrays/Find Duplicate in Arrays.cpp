int Solution::repeatedNumber(const vector<int> &A)
{
    int n=A.size(),i,s,x;
    x=(n/2)+1;
    vector<int> v(x,0);
    for(i=0;i<n;i++)
    {
        if(A[i]%2==0)
        {
            if(v[(A[i]/2)-1]==0)
                v[(A[i]/2)-1]++;
            else return A[i];
        }
    }
    fill(v.begin(),v.end(),0);
    for(i=0;i<n;i++)
    {
        if(A[i]%2!=0)
        {
            if((v[(A[i]/2)])==0)
                v[(A[i]/2)]++;
            else return A[i];
        }
    }
    return -1;
}

