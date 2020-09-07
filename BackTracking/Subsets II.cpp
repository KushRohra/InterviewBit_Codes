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
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) 
{
    vector< vector<int> > sol;
    vector<int> s;
    int i=0,j=0;
    sort(A.begin(), A.end());
    subset(A, s, sol, i);
    vector< vector<int> >::iterator it;
    sort(sol.begin(), sol.end());
    sol.erase(unique(sol.begin(), sol.end()), sol.end());
    return sol;
}

