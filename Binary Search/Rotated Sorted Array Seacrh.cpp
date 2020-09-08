int find(vector<int> A,int s,int e)
{
    int mid;
    while(s<=e)
    {
        if(s==e)
            return s;
        mid=s+(e-s)/2;
        if(A[mid]>A[mid-1] && A[mid]>A[mid+1])
            return mid+1;
        if(A[mid]<A[mid-1] && A[mid]<A[mid+1])
            return mid;
        if(A[mid]<A[mid+1] && A[mid]>A[mid-1])
        {
            if(A[mid]<A[e])
                e=mid-1;
            else if(A[mid]>A[e])
                s=mid+1;
        }
    }
}
int findb(vector<int> A,int s,int e,int x)
{
    int mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(A[mid]==x)
            return mid;
        else if(A[mid]>x)
            e=mid-1;
        else s=mid+1;
    }
    return -1;
}
int Solution::search(const vector<int> &A, int B) 
{
    int n=A.size(),i;
    int j=find(A,0,n-1);
    //return j;
    if(B==A[0])
        return 0;
    if(B==A[j])
        return j;
    if(B==A[n-1])
        return n-1;
    if(B<A[j])
        return -1;
    if(j==0 && B>A[n-1])
        return -1;
    else if(j!=0 && B>A[j-1])
        return -1;
    if(B>=A[j] && B<=A[n-1])
        j=findb(A,j,n-1,B);
    else if(B>=A[0] && B<=A[j-1])
        j=findb(A,0,j-1,B);
    else return -1;
    return j;
}
