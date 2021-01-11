vector<int> Solution::solve(vector<int> &A, vector<int> &B, int k) 
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    priority_queue<int, pair<int, int>> pq;
    unordered_set<pair<int, int>> s; 
    pq.push(make_pair(A[n-1]+B[n-1], make_pair(n-1, n-1)));
    s.insert(male_pair(n-1, n-1));
    vector<int> sol;
    for(int count=0;count<k;count++)
    {
        pair<int, pair<int, int>> temp=pq.top();
        pq.pop();
        sol.push_back(temp.first);
        int i=temp.second.first, j=temp.second.second;
        if(s.find(make_pair(i-1,j))==s.end())
        {
            s.insert(make_pair(i-1, j));
            pq.push(make_pair(A[i-1]+B[j], make_pair(i-1, j)));
        }
        if(s.find(make_pair(i,j-1))==s.end())
        {
            s.insert(make_pair(i, j-1));
            pq.push(make_pair(A[i]+B[j-1], make_pair(i, j-1)));
        }
    }
    return sol;
}

