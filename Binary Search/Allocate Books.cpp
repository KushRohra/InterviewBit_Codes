bool isValid(int mid, int k, int n, vector<int> v)
{
    int sum=0, c=1;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum>mid)
        {
            c++;
            sum=v[i];
        }
        if(c>k)
        {
            //cout<<c<<endl;
            return false;
        }
    }
    return true;
}
int Solution::books(vector<int> &A, int B) 
{
    int s=INT_MIN, e=0, mid , i, res=-1;
    if(B>A.size())
        return -1;
    for(i=0;i<A.size();i++)
    {
        e+=A[i];
        s=max(s,A[i]);
    }
    while(s<=e)
    {
        mid=(e-s)/2+s;
        ///cout<<s<<" "<<e<<" "<<mid<<" "<<isValid(mid,k,n,v)<<endl;
        if(isValid(mid,B,A.size(),A)==true)
        {
            res=mid;
            e=mid-1;
        }
        else s=mid+1;
    }
    return res;
}

