vector<int> Solution::solve(vector<int> &A) 
{
    int i, n=A.size();
    unordered_map<int, priority_queue<int, vector<int>, greater<int> > > m; 
    auto it=m.begin();
    for(i=0;i<n;i++)
    {
        it = m.find(A[i]);
        if(it!=m.end())
        {
            priority_queue<int, vector<int>, greater<int> > pq = it->second;
            if(pq.size()!=0)
            {
                int pos=pq.top();
                m[A[pos]].pop();
                A[pos]++;
                m[A[pos]].push(pos);
            }    
        }
        m[A[i]].push(i);
    }
    return A;
}


