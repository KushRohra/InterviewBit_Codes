string Solution::simplifyPath(string A) 
{
    int i=0, n=A.length();
    string ans="";
    vector<string> v;
    while(i<n)
    {
        if(A[i]=='/')
        {
            i++;
        }
        else if(A[i]=='.')
        {
            if(i+1<n && A[i+1]=='.')
                if(v.size()!=0)
                    v.pop_back();
            i++;
        }
        else 
        {
            string temp="";
            while(i<n && A[i]!='/')
            {
                temp+=A[i];
                i++;
            }
            v.push_back(temp);
        }
    }
    if(v.size()==0)
        return "/";
    for(i=0;i<v.size();i++)
        ans+="/"+v[i];
    return ans;
}

