void combi(int n, int k, vector< vector<int> > &sol, vector<int> &s, int curr)
{
    if(s.size()==k)
    {
        sol.push_back(s);
        return ;    
    }
    for(int j=curr+1;j<=n;j++)
    {/*
        vector<int>::iterator it;
        it=s.end();
        it--;
        if(j>n || j<=*it)
            return;*/
        s.push_back(j);
        combi(n, k, sol, s, j);
        s.pop_back();
    }
    return ;
} 
vector<vector<int> > Solution::combine(int A, int B) 
{
    vector< vector<int> > sol;
    vector<int> s;
    if(A==1 && B==1)
    {
        s.push_back(1);
        sol.push_back(s);
        return sol;
    }
    int curr=1;
    for(int i=curr;i<=A-B+1;i++)
    {
        s.push_back(i);
        combi(A, B, sol, s, i);
        s.clear();
    }
}
