vector<int> Solution::solve(vector<int> &A, vector<int> &B) 
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    priority_queue< pair<int, pair<int, int> > > q;
    set<pair<int, int> > s;
    int i=0, j=0, n=A.size();
    q.push(make_pair(A[n-1]+B[n-1], make_pair(n-1, n-1)));
    vector<int> sol;
    s.insert(make_pair(n-1, n-1));
    //sol.push_back(A[n-1]+B[n-1]);
    for(int p=0;p<n;p++)
    {
        pair<int, pair<int, int> > w;
        w=q.top();
        q.pop();
        sol.push_back(w.first);
        i=w.second.first;
        j=w.second.second;
        int x=A[i-1]+B[j], y=A[i]+B[j-1];
        pair<int, int> temp1=make_pair(i-1, j), temp2=make_pair(i, j-1);
        if(s.find(temp1)==s.end())
        {
            s.insert(temp1);
            q.push(make_pair(x, temp1));
        }
        if(s.find(temp2)==s.end())
        {
            s.insert(temp2);
            q.push(make_pair(y, temp2));
        }
    }
    return sol;
}

