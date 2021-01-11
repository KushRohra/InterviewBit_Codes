static bool comp(const vector<int> &a, const vector<int> &b)
{
    return a[1]<=b[1];
}
int Solution::solve(vector<vector<int> > &pairs) 
{
    //sort(pairs.begin(), pairs.end(), comp);
    vector<int> sol(pairs.size(), 1);
    for(int i=1;i<pairs.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(pairs[i][0]>pairs[j][1] && sol[i]<=sol[j])
                sol[i]=sol[j]+1;
        }
    }
    int ans=1, i;
    for(i=0;i<sol.size();i++)
        ans = max(ans, sol[i]);
    return ans;
}


