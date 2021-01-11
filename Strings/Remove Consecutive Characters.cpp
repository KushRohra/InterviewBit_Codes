string Solution::solve(string A, int B) 
{
    int i=1, c=1;
    char x=A[0];
    string temp="", ans="";
    temp+=x;
    while(i<A.length())
    {
        if(A[i]==x)
        {
            temp+=x;
            c++;
            i++;
        }
        else 
        {
            if(c!=B)
                ans+=temp;
            temp="";
            x=A[i];
            temp+=x;
            c=1;
            i++;
        }
    }
    if(c!=B)
        ans+=temp;
    return ans;
}

