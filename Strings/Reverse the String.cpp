string Solution::solve(string A) 
{
    int l,i;
    char x;
    string a="",s;
    vector<string> v;
    l=A.length();
    for(i=l-1;i>=0;i--)
    {
        if(int(A[i])==32 || i==0)
        {
            if(i==0)
            {
                x=A[i];
                a=a+x;
            }
            reverse(a.begin(),a.end());
            if(a!="")
                v.push_back(a);
            a="";
        }
        else
        {
            x=A[i];
            a=a+x;
        }
    }
    string b=" ";
    if(v.size()==1)
    {
        s=s+v[0];
        return s;
    }
    for(i=0;i<v.size();i++)
    {
        s=s+v[i];
        if(i!=v.size()-1)
            s=s+b;
    }
    return s;
}

