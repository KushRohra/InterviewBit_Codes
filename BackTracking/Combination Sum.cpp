void combi(vector< vector<int> > &sol, vector<int> &v, int &sum, int k, int curr, vector<int> candidates)
{
    if(sum>k || curr>=candidates.size())
        return ;
    if(sum==k)
    {
        sol.push_back(v);
        return ;
    }
    /*for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;*/
    sum+=candidates[curr];
    v.push_back(candidates[curr]);
    combi(sol, v, sum, k, curr, candidates);
    v.pop_back();
    sum-=candidates[curr];
    for(int i=curr+1;i<candidates.size();i++)
    {
        sum+=candidates[i];
        v.push_back(candidates[i]);
        combi(sol, v, sum, k, i, candidates);
        v.pop_back();
        sum-=candidates[i]; 
    }
    return ;
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) 
{
    vector< vector<int> > sol;
    int i,sum=0;
    vector<int>v;
    sort(A.begin(), A.end());
    combi(sol,v,sum,B,0,A);
    sol.erase(unique(sol.begin(), sol.end()), sol.end());
    sort(sol.begin, sol.end());
    return sol;    
}
