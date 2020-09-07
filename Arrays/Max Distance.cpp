int Solution::maximumGap(const vector<int> &A) 
{
    int n=A.size();
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++)
        v.push_back(make_pair(A[i], i));
    sort(v.begin(), v.end());
    int ans=0, maxIndex=v[n-1].second;
    for(int i=n-2;i>=0;i--)
    {
        ans=max(ans, maxIndex-v[i].second);
        maxIndex=max(maxIndex, v[i].second);
    }
    return ans;
}

