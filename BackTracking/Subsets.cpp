void subset(vector<int> &v, vector<int> &s, vector< vector<int> > &sol, int curr)
{      
    sol.push_back(s);
    for(int i=curr;i<v.size();i++)
    {
        s.push_back(v[i]);
        subset(v, s, sol, i+1);            
        s.pop_back();
    }
    return ;
}
vector<vector<int> > Solution::subsets(vector<int> &A) 
{
    int i=0;
    sort(A.begin(), A.end());
    vector< vector<int> > sol;
    vector<int> s;
    subset(A, s, sol, i);
    return sol;
}
