vector<int> Solution::solve(vector<int> &A, int B) 
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<A.size();i++)
    {
        if(pq.size()<B)
            pq.push(A[i]);
        else
        {
            if(pq.top()<A[i])
            {
                pq.pop();
                pq.push(A[i]);
            }
        }
    }
    vector<int> ans;
    while(!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
