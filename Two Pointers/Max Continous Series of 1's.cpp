vector<int> Solution::maxone(vector<int> &A, int B)
{
    int start=0, end=0, i=INT_MAX, j=INT_MAX, max=end-start;
    while(end<A.size())
    {
        if(A[end]==0)
            B--;
        if(B<0)
        {
            if(A[start]==0)
                B++;
            start++;
        }
        end++;
        if(end-start==max && start<i)
        {
            i=start;
        }
        if(end-start>max)
        {
            i=start;
            j=end;
            max=end-start;
        }
    //cout<<i<<" "<<j<<" ";
    }
    vector<int> v;
    for(int p=i;p<j;p++)
        v.push_back(p);
    return v;
}
