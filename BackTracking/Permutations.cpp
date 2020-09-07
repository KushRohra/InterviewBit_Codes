void per(vector< vector<int> > &sol, vector<int> &v, int curr, vector<int> &nums, vector<bool> &vis)
{
    if(v.size()==nums.size())
    {
        sol.push_back(v);
        return ;
    }
    if(curr>=nums.size())
        return ;
    for(int i=curr;i<nums.size();i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            v.push_back(nums[i]);
            per(sol, v, curr+1, nums, vis);
            v.pop_back();
            vis[i]=0;
        }
    }
    for(int i=0;i<curr;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            v.push_back(nums[i]);
            per(sol, v, curr+1, nums, vis);
            v.pop_back();
            vis[i]=0;
        }
    }
    return ;
}
vector<vector<int> > Solution::permute(vector<int> &A)
{
    vector< vector<int> > sol;
    if(A.size()==0)
        return sol;
    vector<int> v;
    int curr=0;
    vector<bool> vis(A.size(),0);
    per(sol,v,curr,A,vis);
    return sol;
}
