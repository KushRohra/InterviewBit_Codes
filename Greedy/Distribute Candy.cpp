int Solution::candy(vector<int> &A)
{
    int i;
    if(A.size()<=1)
        return A.size();
    vector<int> left(A.size(),1), right(A.size(),1);
    for(i=1;i<A.size();i++)
        if(A[i]>A[i-1])
            left[i]=left[i-1]+1;
    for(i=A.size()-2;i>=0;i--)
        if(A[i]>A[i+1])
            right[i]=right[i+1]+1;
    int ans=0;
    for(i=0;i<A.size();i++)
        ans+=max(left[i], right[i]);
    return ans;
}

