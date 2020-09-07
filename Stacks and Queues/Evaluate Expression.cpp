int number(string s)
{
    int c=0,f=0,p=int('0');
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='-')
        {
            f=1;
        }
        else
        {
            int x=int(s[i])-p;
            c=c*10+x;
        }
    }
    if(f==1)
        c=-c;
    return c;
}
bool isnumber(string s)
{
    if(s=="+" || s=="-" || s=="*" || s=="/")
        return false;
    else return true;
}
int postfix(vector<string>  A)
{
    int i,x,y,n=A.size(),p=int('0');
    stack<int> s,s1;
    string p1;
    for(i=0;i<n;i++)
    {
        p1=A[i];
        if(isnumber(p1)==true)
            s.push(number(A[i]));
        else
        {
            x=s.top();
            s.pop();
            y=s.top();
            s.pop();
            if(A[i]=="+")
                x=x+y;
            else if(A[i]=="-")
                x=y-x;
            else if(A[i]=="*")
                x=x*y;
            else x=y/x;
            s.push(x);
        }
    }
    return s.top();
}
int Solution::evalRPN(vector<string> &A) 
{
    return postfix(A);
}

