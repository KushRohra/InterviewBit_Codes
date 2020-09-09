int Solution::braces(string A) 
{
    stack<char> s;
    for(int i=0;i<A.length();i++)
    {
        //cout<<A[i];
        char c = A[i];
        if(A[i]==')')
        {
            //cout<<s.top()<" ";
            if(s.top()=='(')
                return 1;
            while(!s.empty() && s.top()!='(')
                s.pop();
            s.pop();
        }
        else if(c == '(' || c == '+' || c == '*' || c == '-' || c == '/')
            s.push(A[i]);
    }
    return 0;
}

