int pos(vector<int> A,int x)
{
    int s=0,e=A.size()-1,mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(A[mid]==x)
            return mid;
        else if(A[mid]<x)
            s=mid+1;
        else e=mid-1;
    }
    return s;
}
int Solution::searchInsert(vector<int> &A, int B) {
    return pos(A,B);
}
