int Solution::solve(vector<int> &A) 
{
    unordered_map<int, int> m;
    int i, maxLen=0, sum=0, n=A.size();
    for(i=0;i<n;i++)
    {
        sum+=A[i]==0 ? -1 : 1;
        if(sum==1)
            maxLen=i+1;
        else if(m.find(sum)==m.end())
            m[sum]=i;
        if(m.find(sum-1)!=m.end())
            if(maxLen < (i-m[sum-1]))
                maxLen = i-m[sum-1];
    }
    return maxLen;
}

