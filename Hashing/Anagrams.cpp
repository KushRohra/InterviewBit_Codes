vector<vector<int> > Solution::anagrams(const vector<string> &A) 
{
    int i,n=A.size();
    vector< vector<int> > sol;
    map<string, vector<int> > m;
    string t;
    for(i=0;i<n;i++)
    {
        t=A[i];
        sort(t.begin(),t.end());
        m[t].push_back(i+1);
    }
    auto it=m.begin();
    while(it!=m.end())
    {
        sol.push_back(it->second);
        it++;
    }
    return sol;
}

