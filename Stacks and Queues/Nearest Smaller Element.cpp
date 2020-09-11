vector<int> Solution::prevSmaller(vector<int> &A) 
{
    vector<int> sol;
    stack<int> s;
    int n=A.size(),i;
    sol.push_back(-1);
    if(n==1)
    {
        return sol;
    }
    s.push(A[i]);
    for(i=1;i<n;i++)
    {
        if(s.empty()==true)
        {
            sol.push_back(-1);
            s.push(A[i]);
        }
        else
        {
            while(s.empty()==false && s.top()>=A[i])
                s.pop();
            if(s.empty()==true)
                sol.push_back(-1);
            else sol.push_back(s.top());
            s.push(A[i]);
        }
    }
    return sol;   
}
