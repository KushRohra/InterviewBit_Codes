int Solution::findMin(const vector<int> &A) 
{
    if(A.size()==1)
        return A[0];
    int s=0, e=A.size()-1, mid;
    while(s<=e)
    {
        mid=(e-s)/2+s;
        if(mid==0 || mid==A.size()-1)
        {
            if(mid==0)
                if(A[mid]<A[mid+1])
                    return A[mid];
            else if(mid==A.size()-1)
                if(A[mid]<A[mid-1])
                    return A[mid];    
        }
        else 
        {
            if(A[mid]<A[mid-1] && A[mid]<A[mid+1])
                return A[mid];
        }
        if(A[mid]>A[A.size()-1])
                s=mid+1;
        else e=mid-1;
    }
    return 0;
}
