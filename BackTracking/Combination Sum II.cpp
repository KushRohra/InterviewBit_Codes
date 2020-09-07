void subsets(vector<int> v, vector< vector<int> > &sol, vector<int> &s, int target, int &sum, int curr)
{
    if(sum==target)
    {
        auto it = find(sol.begin(), sol.end(), s);
        if(it==sol.end())
           sol.push_back(s);
    }   
    if(sum>target)
        return ;
    for(int i=curr; i<v.size(); i++)
    {
        s.push_back(v[i]);
        sum+=v[i];
        subsets(v, sol, s, target, sum, i+1);
        s.pop_back();
        sum-=v[i];
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B)
{
    vector< vector<int> > sol;
    sort(A.begin(), A.end());
    vector<int> s;
    int i=0, sum=0;
    subsets(A, sol, s, B, sum, i);
    return sol;
}
