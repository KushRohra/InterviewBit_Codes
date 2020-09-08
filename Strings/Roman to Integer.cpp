int Solution::romanToInt(string A) 
{
    string s=A;
    if(s.length()==0)
        return 0;
    int ans=0;
    unordered_map<char, int> m;
    m['I']=1;   m['V']=5;   m['X']=10;  m['L']=50;  m['C']=100;  m['D']=500;   m['M']=1000;
    ans+=m[s[s.length()-1]];
    for(int i=s.length()-2;i>=0;i--)
    {
        int x, y;
        x=m[s[i]];  y=m[s[i+1]];
        if(x<y)
            ans-=x;
        else ans+=x;
    }
    return ans;
}

