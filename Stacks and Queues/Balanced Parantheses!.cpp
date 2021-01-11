int Solution::solve(string A)
{
    stack<char> s;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='(')
            s.push(A[i]);
        else if(A[i]==')')
        {
            if(s.empty()==false && s.top()=='(')
                s.pop();
            else return false;
        }
    }
    if(s.empty()==false)
        return false;
    return true;
}
