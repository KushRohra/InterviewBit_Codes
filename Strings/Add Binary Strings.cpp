int no(char x)
{
    if(x=='0')
        return 0;
    return 1;
}
char ch(int x)
{
    x=x%2;
    return char(x+48);
}
string Solution::addBinary(string A, string B) 
{
    string s1=A, s2=B, s;
    int i,j,n1=s1.length(), n2=s2.length(), c=0;
    for(i=n1-1, j=n2-1; i>=0 && j>=0; i--, j--)
    {
        int x=no(s1[i]), y=no(s2[j]);
        int r=x+y+c;
        if(r>1)
            c=1;
        else c=0;
        s+=ch(r);
    }
    while(j>=0)
    {
        int y=no(s2[j]);
        j--;
        int r=y+c;
        if(r>1)
            c=1;
        else c=0;
        s+=ch(r);
    }
    while(i>=0)
    {
        int x=no(s1[i]);
        i--;
        int r=x+c;
        if(r>1)
            c=1;
        else c=0;
        s+=ch(r);
    }
    if(c==1)
        s+=ch(c);
    reverse(s.begin(), s.end());
    return s;
}

