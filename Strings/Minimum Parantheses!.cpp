int Solution::solve(string A) 
{
    int c=0;
    stack<char> s;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='(')
            s.push(A[i]);
        else
        {
            if(s.empty())
                c+=1;
            else s.pop();
        }
    }
    c+=s.size();
    return c;
}

