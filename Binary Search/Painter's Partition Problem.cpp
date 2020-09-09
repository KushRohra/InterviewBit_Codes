int getpainter(vector<int> v,int n, int mid)
{
    long long int t=0,painter=1;
    for(int i=0;i<n;i++)
    {
        t+=v[i];
        if(t>mid)
        {
            t=v[i];
            painter++;
        }
    }
    return painter;
}
int Solution::paint(int A, int B, vector<int> &C) {
    long long int max=-1,sum=0,i,n=C.size();
    for(i=0;i<n;i++)
    {
        if(C[i]>max)
            max=C[i];
        sum+=C[i];
    }
    long long int min=INT_MAX;
    long long int s=max,e=sum,mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        sum=getpainter(C,n,mid);
        if(sum<=A)
        {
            //cout<<sum<<" "<<A<<" ";
            if(mid<min)
                min=mid;
            e=mid-1;
        }
        else s=mid+1;
    }
    return ((min%10000003)*(B%10000003))%10000003;
}

