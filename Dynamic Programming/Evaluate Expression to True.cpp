unordered_map<string, int> mp;
int solve(string s, int i, int j, bool isTrue)
{
    if(i>j)
        return 0;
    if(i==j)
    {
        if(isTrue==true)
            return s[i]=='T';
        else return s[i]=='F';
    }
    string temp=to_string(i)+" "+to_string(j)+" "+to_string(isTrue);
    if(mp.find(temp)!=mp.end())
        return mp[temp];
    int ans=0;
    for(int k=i+1;k<=j-1;k=k+2)
    {
        int lt=solve(s,i,k-1,true);
        int lf=solve(s,i,k-1,false);
        int rt=solve(s,k+1,j,true);
        int rf=solve(s,k+1,j,false);
        if(s[k]=='&')
        {
            if(isTrue==true)
                ans+=lt*rt;
            else ans+=lt*rf+lf*rt+lf*rf;
        }
        else if(s[k]=='|')
        {
            if(isTrue==true)
                ans+=lt*rt+lf*rt+lt*rf;
            else ans+=lf*rf;
        }
        else if(s[k]=='^')
        {
            if(isTrue==true)
                ans+=rt*lf+rf*lt;
            else ans+=lt*rt+lf*rf;
        }
    }
    ans=ans%1003;
    return mp[temp]=ans;
}
int Solution::cnttrue(string A) 
{
    mp.clear();
    bool isTrue=true;
    int i=0, j=A.length()-1;
    return solve(A,i,j,isTrue);
}

