set<vector<int> > s1;
void helper(vector<int> v, vector<vector<int> > &sol, int s, vector<int> &temp, vector<bool> &vis)
{
    if(temp.size()==v.size())
        if(s1.find(temp)==s1.end())
        {
            sol.push_back(temp);
            s1.insert(temp);
        }
    if(s>=v.size())
        return ;
    for(int i=s;i<v.size();i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            temp.push_back(v[i]);
            helper(v,sol,s+1,temp,vis);
            temp.pop_back();
            vis[i]=0;
        }
    }
    for(int i=0;i<s;i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            temp.push_back(v[i]);
            helper(v,sol,s+1,temp,vis);
            temp.pop_back();
            vis[i]=0;
        }
    }
}
vector<vector<int> > Solution::permute(vector<int> &v) 
{
    s1.clear();
    vector<vector<int> > sol;
    vector<int> temp;
    vector<bool> vis(v.size(),0);
    helper(v,sol,0,temp,vis);
    return sol;
}
