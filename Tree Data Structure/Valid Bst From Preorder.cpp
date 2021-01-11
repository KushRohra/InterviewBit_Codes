int Solution::solve(vector<int> &a) {
    stack<int> s;
    int n=a.size();
    int root=INT_MIN;
    for(int i=0;i<n;i++) {
        if(a[i]<root)
            return false;
        while(!s.empty() && a[i]>s.top()) {
            root=s.top();
            s.pop();
        }
        s.push(a[i]);
    }
    return true;
}

