typedef pair<int, pair<int, int>> ppi;
vector<int> Solution::solve(vector<vector<int> > &A) 
{
    priority_queue<ppi, vector<ppi>, greater<ppi> > pq;
    for(int i=0;i<A.size();i++)
        pq.push({A[i][0], {i, 0}});
    vector<int> sol;
    while(!pq.empty())
    {
        ppi temp = pq.top();
        pq.pop();
        int val = temp.first, arrayNo = temp.second.first, arrayPos = temp.second.second;
        sol.push_back(val);
        if(arrayPos+1<A[arrayNo].size())
            pq.push({A[arrayNo][arrayPos+1], {arrayNo, arrayPos+1}});
    }
    return sol;
}

