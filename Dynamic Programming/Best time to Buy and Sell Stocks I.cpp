int Solution::maxProfit(const vector<int> &A) 
{
    int i,n=A.size();
    if(n==0)
        return 0;
    vector<int> v=A,sol(n,-1);
    if(n==1)
        return 0;
    if(n==2)
    {
        if(v[0]>=v[1])
            return 0;
        else return v[1]-v[0];
    }
    int max=v[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(v[i]<max)
            sol[i]=max;
        else max=v[i];
    }
    max=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(sol[i]!=-1)
        {
            int x=sol[i]-v[i];
            if(max<x)
                max=x;
        }
    }
    if(max==INT_MIN)
        return 0;
    return max;
}
