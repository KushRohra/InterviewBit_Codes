int Solution::isValid(string A) {
    stack<char> s;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='(' || A[i]=='{' || A[i]=='[')
            s.push(A[i]);
        else 
        {
            if(A[i]=='}')
                A[i]='{';
            else if(A[i]==')')
                A[i]='(';
            else
                A[i]='[';
            if(s.empty()==false && s.top()==A[i])
                s.pop();
            else return 0;
        }
    }
    if(s.empty()==false)
        return 0;
    else return 1;
}

