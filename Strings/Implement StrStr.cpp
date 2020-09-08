int Solution::strStr(const string A, const string B) {
    string needle=B, haystack=A;
    int i,n=needle.length();
    if(n==0 || haystack.length()==0)
        return -1;
    string s1;
    for(int i=0;i<n;i++)
        s1+=haystack[i];
    if(s1==needle)
        return 0;
    int x;
    for(int i=n;i<haystack.length();i++)
    {
        s1.erase(0,1);
        s1+=haystack[i];
        //cout<<s1<<"=s1 "<<needle<<"=needle"<<endl;
        if(s1==needle)
            return i-n+1;
    }
    return -1;
}
