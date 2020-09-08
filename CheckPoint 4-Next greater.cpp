vector<int> Solution::nextGreater(vector<int> &A) 
{
    stack<int> s;
    int i=A.size()-1;
    s.push(A[i]);
    A[i]=-1;
    i--;
    while(i>=0)
    {
        int x=A[i];
        if(A[i]<s.top())
            A[i]=s.top();
        else
        {
            while(s.empty()==false && s.top()<=A[i])
                s.pop();
            if(s.empty())
                A[i]=-1;
            else A[i]=s.top();
        }
        s.push(x);
        i--;
    }
    return A;
}

