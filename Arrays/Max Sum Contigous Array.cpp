int Solution::maxSubArray(const vector<int> &A)
{
    int i,max=INT_MIN,m,n=A.size();
    if(n==1)
        return A[0];
    for(i=0;i<n;i++)
    {
        m=m+A[i];
        if(i==0)
            max=m;
        else 
        {
            if(max<m)
                max=m;
            //cout<<m<<" "<<max<<endl;
        }
        if(m<0)
            m=0;
    }
    //cout<<"max="<<max;
    return max;
}

