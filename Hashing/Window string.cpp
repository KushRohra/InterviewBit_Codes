bool check(vector<int> m1, vector<int> m2)
{
    for(int i=0;i<m2.size();i++)
    {
        if(m1[i]<m2[i])
            return false;
    }
    return true;
}
string Solution::minWindow(string A, string B) 
{
    //unordered_map<char, int> m1, m2;
    vector<int> m1(256,0), m2(256,0);
    int i=0;
    string t=B, s=A;
    for(int i=0;i<t.length();i++)
        m2[int(t[i])]++;
    int left=0, right=0, min=INT_MAX, l=0, r=0;
    while(left<s.length() && right<s.length())
    {
        m1[int(s[right])]++;
        right++;
        while(check(m1, m2))
        {
            if(right-left+1<min)
            {
                min=right-left+1;
                l=left;
                r=right;
            }
            m1[int(s[left])]--;
            left++;
        }
    }
    string s1="";
    for(int i=l;i<r;i++)
        s1+=s[i];
    return s1;    
}

