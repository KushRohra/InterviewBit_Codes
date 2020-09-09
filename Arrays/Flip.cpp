vector<int> Solution::flip(string A)
{
    int left=0, right=0, n=A.size();
    vector<int> v;
    int curr=0, max=0;
    for(right=0;right<n;right++)
    {
        if(A[right]=='0')
            curr++;
        else curr--;
        if(curr<0)
        {
            curr=0;
            left=right+1;
        }
        if(curr>max)
        {
            max=curr;
            v.clear();
            v.push_back(left+1);
            v.push_back(right+1);
        }
    }
    return v;
}

