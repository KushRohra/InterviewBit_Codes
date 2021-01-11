int Solution::solve(vector<int> &A, int B) 
{
    int s=0, e=A.size()-1, mid;
    while(s<=e)
    {
        mid = s+(e-s)/2;
        if(A[mid]>B)
            e=mid-1;
        else s=mid+1;
    }
    return s;
}

