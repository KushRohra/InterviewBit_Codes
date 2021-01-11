int getIndex(vector<int> A)
{
    int n=A.size();
    int s=0, e=n-1, mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(A[mid]>A[mid+1] && A[mid]>A[mid-1])
            return mid;
        else if(A[mid]<A[mid+1])
            s=mid+1;
        else e=mid-1;
    }
    return -1;
}
int BS1(vector<int> A, int s, int e, int B)
{
    int mid;
    while(s<=e)
    {
        mid = s + (e-s)/2;
        if(A[mid]==B)
            return mid;
        else if(A[mid]>B)
            e=mid-1;
        else s=mid+1;
    }
    return -1;
}
int BS2(vector<int> A, int s, int e, int B)
{
    int mid;
    while(s<=e)
    {
        mid = s + (e-s)/2;
        if(A[mid]==B)
            return mid;
        else if(A[mid]<B)
            e=mid-1;
        else s=mid+1;
    }
    return -1;
}
int Solution::solve(vector<int> &A, int B) 
{
    int n=A.size();
    if(A[0]==B)
        return 0;
    if(A[n-1]==B)
        return n-1;
    int middle = getIndex(A);
    if(A[middle]==B)
        return 1;
    int f1 = BS1(A,0,middle-1,B);
    if(f1!=-1)
        return f1;
    int f2 = BS2(A,middle+1,n-1,B);
    return f2;
}

