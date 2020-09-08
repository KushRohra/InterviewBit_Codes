int binary(vector<int> A,int x,int f)
{
    int n=A.size();
    int l=0,h=n-1,r=0,mid;
    while(l<=h)
    {
        mid=l+(l-h)/2;
        if(A[mid]==x)
        {
            r=mid;
            if(f)
                h=mid-1;
            else l=mid+1;
        }
        else if(x<A[mid]) h=mid-1;
        else l=mid+1;
    }
    return r;
}
int Solution::findCount(const vector<int> &A, int B) 
{
    cout<<binary(A,B,1)+binary(A,B,0)-1;
}

