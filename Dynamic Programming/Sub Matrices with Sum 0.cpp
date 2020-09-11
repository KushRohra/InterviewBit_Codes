void findZero(vector<int> v, int &ans)
{
    int sum=0;
    unordered_map<int, int> m;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        //cout<<v[i]<<" "<<sum<<endl;
        if(sum==0)
            ans++;
        if(m.find(sum)!=m.end())
            ans+=m[sum];
        m[sum]++;
    }
}
int Solution::solve(vector<vector<int> > &A) 
{
    if(A.size()==0 || A[0].size()==0)
        return 0;
    int n=A.size(), m=A[0].size(), i, ans=0;
    for(int left=0;left<m;left++)
    {
        vector<int> temp(n,0);
        for(int right=left;right<m;right++)
        {
            for(i=0;i<n;i++)
                temp[i]+=A[i][right];
            findZero(temp,ans);    
            //cout<<ans<<endl;    
        }
    }
    return ans;
}

