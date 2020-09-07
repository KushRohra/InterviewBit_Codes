unordered_map<string, bool> mp;
bool solve(string a, string b)
{
    if(a.compare(b)==0)
        return true;
    int n=a.length(), m=b.length();
    if((n==0 && m!=0) || (n!=0 && m==0))
        return false;
    string temp=a+" "+b;
    if(mp.find(temp)!=mp.end())
        return mp[temp];
    bool flag=false;
    for(int i=1;i<=n-1;i++)
    {
        bool cond1=solve(a.substr(0,i), b.substr(n-i,i)) && solve(a.substr(i,n-i), b.substr(0,n-i));
        bool cond2=solve(a.substr(0,i), b.substr(0,i)) && solve(a.substr(i,n-i), b.substr(i,n-i));
        if(cond1||cond2)
        {
            flag=true;
            break;
        }
    }
    return mp[temp]=flag;
}
int Solution::isScramble(const string A, const string B)
{
    mp.clear();
    int n=A.length(), m=B.length();
    if(n==0 && m==0)
        return true;
    if(n!=m)
        return false;
    if(A==B)
        return true;
    if((n==0 && m!=0)||(n!=0 && m==0))
        return false;
    return solve(A,B);
}

